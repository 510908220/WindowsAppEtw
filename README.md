# WindowsAppEtw
windows下采用etw方式记录程序运行关键点，然后根据生成的etl日志进行分析.这里主要是记录etw的使用，当然可以方便的扩展带其他pc上客户端程序的使用。


#概述
Event Tracing for Windows (ETW) provides application programmers the ability to start and stop event tracing sessions, instrument an application to provide trace events, and consume trace events. Trace events contain an event header and provider-defined data that describes the current state of an application or operation. You can use the events to debug an application and perform capacity and performance analysis.
简单地说就是提供了一种机制，将用户定义的事件记录下来并保存到文件(etl日志)，这些事件可以包含cpu、磁盘io、页错误等信息，然后在使用xperf工具对日志进行分析.具体了解可以到[https://msdn.microsoft.com/en-us/library/windows/desktop/aa363668(v=vs.85).aspx]()看看。

##使用步骤
- 创建Provider，这里使用Manifest-based Events方式，就是编写一个.man文件
	- 打开ecmangen.exe，在Events Section右键-->New-->Provider,然后给这个Provider起一个名字，我这里是YYBrowser
	- 如图![](http://7xk7ho.com1.z0.glb.clouddn.com/etw4.png),这是新建后的界面.这里注意要设置Resources和Messages为程序的路径.否则可能会出现使用xperf打开时，事件名为Unknown.
	- 创建Tasks,我这里已经常见好了,如图:![](http://7xk7ho.com1.z0.glb.clouddn.com/etw3.png),这里创建的Task主要是给创建Event时用的.
	- 创建Events,如图:![](http://7xk7ho.com1.z0.glb.clouddn.com/etw2.png),对于StartUpBegin这个Event,它的Task为StartUp，Opcode为win:Start表示事件的开始.
-  编译上面的.man文件：mc -um -mof yybrowser_events_administrator.man，会生成六个文件:
	- MSG00001.bin
	- yybrowser_events_administrator.h
	- yybrowser_events_administrator.man
	- yybrowser_events_administrator.mof
	- yybrowser_events_administrator.rc
	- yybrowser_events_administratorTEMP.BIN
- 把上一步的yybrowser_events_administrator.h和yybrowser_events_administrator.rc加入到工程里.
- 在代码中需要记录事件的地方添加如下代码,比如我这里记录的是StartUpBegin这个事件:
```
  EventRegisterYYBrowser();
  EventWriteStartUpBeginEnd();
  EventUnregisterYYBrowser();
```
注意EventRegisterYYBrowser，因为我的provider起名为YYBrowser,你自己编写的是相应的名称.

- 接下来就该采集程序输出的日志了
	- 注册provider:
	```wevtutil um yybrowser_events_administrator.man```
	```wevtutil im yybrowser_events_administrator.man```
	- 开启事件追踪:```xperf -on FileIO -buffersize 128 -minbuffers 1024 -start YYTrace-UserSession -on YYBrowser -buffersize 128 -minbuffers 1024```其中YYTrace-UserSession为会话名称，YYBrowser为Provider名称,FileIO说明只会采集文件io相关信息
	- 启动程序，程序会触发我们设置的事件
	- 关闭事件追踪:```xperf-stop YYTrace-UserSession -stop -d out.etl```,停止YYTrace-UserSession并将日志保存到out.etl内.
- 分析etl日志
	- 使用xperfview打开etl日志:
	![](http://7xk7ho.com1.z0.glb.clouddn.com/etw5.png)
其中Generic Events中一个个小点就是我们的程序中写入的事件.在这个界面上右键点击Summary Table，可以看到如图:![](http://7xk7ho.com1.z0.glb.clouddn.com/etw6.png),这些就是程序里事件触发点.
	- 分析:
可以看到每个事件触发时是有一个时间点，我们可以根据YYBrowser/StartUp/win:Start和YYBrowser/StartUp/win:Stop我们可以得到两个时间点,可以得到如下信息:
		- 启动时间
		- 结合Hard Faults视图，可以得到启动过程中的页错误.
		- 我这里这采集了FileIO，我过设置了stackwalk等，还可以看到这个区间线程堆栈等。

- 应用
	- 计算程序启动时间
	- 根据启动过程页错误信息，将启动过程对dll的访问记录下来，生成预加载文件，在程序启动过程预读取这些内容，提高程序启动速度.
	- 其他，比如可以分析程序启动耗时的原因等等