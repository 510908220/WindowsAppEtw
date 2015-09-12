/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    KernelTraceControl.h

Abstract:

    Public headers for event tracing control applications,
    consumers and providers

--*/

#ifndef _KERNELTRACECONTROL_H_
#define _KERNELTRACECONTROL_H_

#include <evntrace.h>
#include <tdh.h>

#ifdef __cplusplus
extern "C" {
#endif

//
// Used only for NT Kernel Logger sessions. Tells the kernel logger which
// events to trace. Combine with the flags in 
// EVENT_TRACE_PROPERTIES.EnableFlags field.
//
#ifndef EVENT_TRACE_FLAG_DISPATCHER
#define EVENT_TRACE_FLAG_DISPATCHER         0x00000800
#endif

#ifndef EVENT_TRACE_FLAG_VIRTUAL_ALLOC
#define EVENT_TRACE_FLAG_VIRTUAL_ALLOC      0x00004000
#endif

//
// Used only for NT Kernel Logger trace files. Use the following event types
// to identify the actual event when consuming the events from trace file.
//
#ifndef EVENT_TRACE_TYPE_READYTHREAD
#define EVENT_TRACE_TYPE_READYTHREAD        0x32
#endif

#ifndef EVENT_TRACE_TYPE_VIRTUAL_ALLOC
#define EVENT_TRACE_TYPE_VIRTUAL_ALLOC      0x62
#endif

#ifndef EVENT_TRACE_TYPE_VIRTUAL_FREE
#define EVENT_TRACE_TYPE_VIRTUAL_FREE       0x63
#endif

//
// Flags to save extended information to the ETW trace file
//
#define EVENT_TRACE_MERGE_EXTENDED_DATA_NONE                0x00000000
#define EVENT_TRACE_MERGE_EXTENDED_DATA_IMAGEID             0x00000001
#define EVENT_TRACE_MERGE_EXTENDED_DATA_BUILDINFO           0x00000002
#define EVENT_TRACE_MERGE_EXTENDED_DATA_VOLUME_MAPPING      0x00000004
#define EVENT_TRACE_MERGE_EXTENDED_DATA_WINSAT              0x00000008
#define EVENT_TRACE_MERGE_EXTENDED_DATA_EVENT_METADATA      0x00000010

#if defined(_WIN32_WINNT_WIN7) && (WINVER >= _WIN32_WINNT_WIN7)
#define EVENT_TRACE_MERGE_EXTENDED_DATA_PERFTRACK_METADATA  0x00000020
#endif

#define EVENT_TRACE_MERGE_EXTENDED_DATA_DEFAULT             0x000FFFFF
#define EVENT_TRACE_MERGE_EXTENDED_DATA_ALL                 0xFFFFFFFF

//
// Event GUID to identify events logged via EVENT_TRACE_MERGE_EXTENDED_DATA_EVENT_METADATA
//
DEFINE_GUID( // {BBCCF6C1-6CD1-48c4-80FF-839482E37671}
    EventMetadataGuid, 
    0xbbccf6c1, 
    0x6cd1, 
    0x48c4, 
    0x80, 0xff, 0x83, 0x94, 0x82, 0xe3, 0x76, 0x71
    );

//
// Event types to identify the events logged via EVENT_TRACE_MERGE_EXTENDED_DATA_EVENT_METADATA
//
#ifndef EVENT_METADATA_LOG_TYPE_TRACE_EVENT_INFO
#define EVENT_METADATA_LOG_TYPE_TRACE_EVENT_INFO    0x20
#endif

#ifndef EVENT_METADATA_LOG_TYPE_EVENT_MAP_INFO
#define EVENT_METADATA_LOG_TYPE_EVENT_MAP_INFO      0x21
#endif

//
// Payload of the EVENT_METADATA_LOG_TYPE_TRACE_EVENT_INFO is EVENT_MAP_INFO
// defined in TDH.h header file.
//

//
// Payload of the event EVENT_METADATA_LOG_TYPE_EVENT_MAP_INFO
//
typedef struct _EVENT_METADATA_EVENT_MAP_INFO {
    GUID            ProviderId;
    EVENT_MAP_INFO  EventMapInfo;
} EVENT_METADATA_EVENT_MAP_INFO, *PEVENT_METADATA_EVENT_MAP_INFO;

//
// Stores the event GUID and event trace type whose stack tracing has to be enabled.
//
typedef struct _STACK_TRACING_EVENT_ID {
    GUID  EventGuid;
    UCHAR Type;
    UCHAR Reserved[7];
} STACK_TRACING_EVENT_ID, *PSTACK_TRACING_EVENT_ID;


//
// API to start ETW Kernel tracing
//
__control_entrypoint(DllExport)
ULONG
WINAPI
StartKernelTrace(
    _Out_ PTRACEHANDLE TraceHandle,
    _Inout_ PEVENT_TRACE_PROPERTIES Properties,
    _In_reads_opt_(cStackTracingEventIds) const STACK_TRACING_EVENT_ID StackTracingEventIds[],
    _In_  ULONG cStackTracingEventIds
    );

//
// API to merge multiple ETW trace files into a single output file
//
__control_entrypoint(DllExport)
ULONG
WINAPI
CreateMergedTraceFile(
    _In_  LPCWSTR wszMergedFileName,
    _In_reads_(cTraceFileNames) LPCWSTR wszTraceFileNames[],
    _In_  ULONG cTraceFileNames,
    _In_  DWORD dwExtendedDataFlags
    );

#ifdef __cplusplus
}       // extern "C"
#endif

#endif  // _KERNELTRACECONTROL_H_
