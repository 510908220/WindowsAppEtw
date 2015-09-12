

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __windowsperformancerecordercontrol_h__
#define __windowsperformancerecordercontrol_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IParsingErrorInfo_FWD_DEFINED__
#define __IParsingErrorInfo_FWD_DEFINED__
typedef interface IParsingErrorInfo IParsingErrorInfo;

#endif 	/* __IParsingErrorInfo_FWD_DEFINED__ */


#ifndef __IControlErrorInfo_FWD_DEFINED__
#define __IControlErrorInfo_FWD_DEFINED__
typedef interface IControlErrorInfo IControlErrorInfo;

#endif 	/* __IControlErrorInfo_FWD_DEFINED__ */


#ifndef __IEnumControlWarningInfo_FWD_DEFINED__
#define __IEnumControlWarningInfo_FWD_DEFINED__
typedef interface IEnumControlWarningInfo IEnumControlWarningInfo;

#endif 	/* __IEnumControlWarningInfo_FWD_DEFINED__ */


#ifndef __IProfile_FWD_DEFINED__
#define __IProfile_FWD_DEFINED__
typedef interface IProfile IProfile;

#endif 	/* __IProfile_FWD_DEFINED__ */


#ifndef __IEnumProfile_FWD_DEFINED__
#define __IEnumProfile_FWD_DEFINED__
typedef interface IEnumProfile IEnumProfile;

#endif 	/* __IEnumProfile_FWD_DEFINED__ */


#ifndef __IProfileCollection_FWD_DEFINED__
#define __IProfileCollection_FWD_DEFINED__
typedef interface IProfileCollection IProfileCollection;

#endif 	/* __IProfileCollection_FWD_DEFINED__ */


#ifndef __IControlProgressHandler_FWD_DEFINED__
#define __IControlProgressHandler_FWD_DEFINED__
typedef interface IControlProgressHandler IControlProgressHandler;

#endif 	/* __IControlProgressHandler_FWD_DEFINED__ */


#ifndef __ITraceMergeTextHandler_FWD_DEFINED__
#define __ITraceMergeTextHandler_FWD_DEFINED__
typedef interface ITraceMergeTextHandler ITraceMergeTextHandler;

#endif 	/* __ITraceMergeTextHandler_FWD_DEFINED__ */


#ifndef __ITraceMergeProperties_FWD_DEFINED__
#define __ITraceMergeProperties_FWD_DEFINED__
typedef interface ITraceMergeProperties ITraceMergeProperties;

#endif 	/* __ITraceMergeProperties_FWD_DEFINED__ */


#ifndef __IControlManager_FWD_DEFINED__
#define __IControlManager_FWD_DEFINED__
typedef interface IControlManager IControlManager;

#endif 	/* __IControlManager_FWD_DEFINED__ */


#ifndef __IOnOffTransitionManager_FWD_DEFINED__
#define __IOnOffTransitionManager_FWD_DEFINED__
typedef interface IOnOffTransitionManager IOnOffTransitionManager;

#endif 	/* __IOnOffTransitionManager_FWD_DEFINED__ */


#ifndef __CProfile_FWD_DEFINED__
#define __CProfile_FWD_DEFINED__

#ifdef __cplusplus
typedef class CProfile CProfile;
#else
typedef struct CProfile CProfile;
#endif /* __cplusplus */

#endif 	/* __CProfile_FWD_DEFINED__ */


#ifndef __CProfileCollection_FWD_DEFINED__
#define __CProfileCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class CProfileCollection CProfileCollection;
#else
typedef struct CProfileCollection CProfileCollection;
#endif /* __cplusplus */

#endif 	/* __CProfileCollection_FWD_DEFINED__ */


#ifndef __CTraceMergeProperties_FWD_DEFINED__
#define __CTraceMergeProperties_FWD_DEFINED__

#ifdef __cplusplus
typedef class CTraceMergeProperties CTraceMergeProperties;
#else
typedef struct CTraceMergeProperties CTraceMergeProperties;
#endif /* __cplusplus */

#endif 	/* __CTraceMergeProperties_FWD_DEFINED__ */


#ifndef __CControlManager_FWD_DEFINED__
#define __CControlManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class CControlManager CControlManager;
#else
typedef struct CControlManager CControlManager;
#endif /* __cplusplus */

#endif 	/* __CControlManager_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windowsperformancerecordercontrol_0000_0000 */
/* [local] */ 

//+-------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (c) 2012 Microsoft Corporation. All rights reserved.
//
//--------------------------------------------------------------------------


extern RPC_IF_HANDLE __MIDL_itf_windowsperformancerecordercontrol_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowsperformancerecordercontrol_0000_0000_v0_0_s_ifspec;

#ifndef __IParsingErrorInfo_INTERFACE_DEFINED__
#define __IParsingErrorInfo_INTERFACE_DEFINED__

/* interface IParsingErrorInfo */
/* [local][unique][helpstring][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IParsingErrorInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B96AA961-1FC7-4FD2-9F6B-513FF7BBE38D")
    IParsingErrorInfo : public IErrorInfo
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetColumnNumber( 
            /* [retval][out] */ ULONG *pColumnNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLineNumber( 
            /* [retval][out] */ ULONG *pLineNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetElementType( 
            /* [retval][out] */ BSTR *pbstrElementType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetElementId( 
            /* [retval][out] */ BSTR *pbstrElementId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IParsingErrorInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IParsingErrorInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IParsingErrorInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IParsingErrorInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetGUID )( 
            IParsingErrorInfo * This,
            /* [out] */ GUID *pGUID);
        
        HRESULT ( STDMETHODCALLTYPE *GetSource )( 
            IParsingErrorInfo * This,
            /* [out] */ BSTR *pBstrSource);
        
        HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            IParsingErrorInfo * This,
            /* [out] */ BSTR *pBstrDescription);
        
        HRESULT ( STDMETHODCALLTYPE *GetHelpFile )( 
            IParsingErrorInfo * This,
            /* [out] */ BSTR *pBstrHelpFile);
        
        HRESULT ( STDMETHODCALLTYPE *GetHelpContext )( 
            IParsingErrorInfo * This,
            /* [out] */ DWORD *pdwHelpContext);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetColumnNumber )( 
            IParsingErrorInfo * This,
            /* [retval][out] */ ULONG *pColumnNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLineNumber )( 
            IParsingErrorInfo * This,
            /* [retval][out] */ ULONG *pLineNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetElementType )( 
            IParsingErrorInfo * This,
            /* [retval][out] */ BSTR *pbstrElementType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetElementId )( 
            IParsingErrorInfo * This,
            /* [retval][out] */ BSTR *pbstrElementId);
        
        END_INTERFACE
    } IParsingErrorInfoVtbl;

    interface IParsingErrorInfo
    {
        CONST_VTBL struct IParsingErrorInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IParsingErrorInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IParsingErrorInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IParsingErrorInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IParsingErrorInfo_GetGUID(This,pGUID)	\
    ( (This)->lpVtbl -> GetGUID(This,pGUID) ) 

#define IParsingErrorInfo_GetSource(This,pBstrSource)	\
    ( (This)->lpVtbl -> GetSource(This,pBstrSource) ) 

#define IParsingErrorInfo_GetDescription(This,pBstrDescription)	\
    ( (This)->lpVtbl -> GetDescription(This,pBstrDescription) ) 

#define IParsingErrorInfo_GetHelpFile(This,pBstrHelpFile)	\
    ( (This)->lpVtbl -> GetHelpFile(This,pBstrHelpFile) ) 

#define IParsingErrorInfo_GetHelpContext(This,pdwHelpContext)	\
    ( (This)->lpVtbl -> GetHelpContext(This,pdwHelpContext) ) 


#define IParsingErrorInfo_GetColumnNumber(This,pColumnNumber)	\
    ( (This)->lpVtbl -> GetColumnNumber(This,pColumnNumber) ) 

#define IParsingErrorInfo_GetLineNumber(This,pLineNumber)	\
    ( (This)->lpVtbl -> GetLineNumber(This,pLineNumber) ) 

#define IParsingErrorInfo_GetElementType(This,pbstrElementType)	\
    ( (This)->lpVtbl -> GetElementType(This,pbstrElementType) ) 

#define IParsingErrorInfo_GetElementId(This,pbstrElementId)	\
    ( (This)->lpVtbl -> GetElementId(This,pbstrElementId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IParsingErrorInfo_INTERFACE_DEFINED__ */


#ifndef __IControlErrorInfo_INTERFACE_DEFINED__
#define __IControlErrorInfo_INTERFACE_DEFINED__

/* interface IControlErrorInfo */
/* [local][unique][helpstring][oleautomation][dual][uuid][object] */ 

typedef /* [public][public] */ 
enum __MIDL_IControlErrorInfo_0001
    {
        ObjectType_Unknown	= 0,
        ObjectType_Profile	= ( ObjectType_Unknown + 1 ) ,
        ObjectType_Collector	= ( ObjectType_Profile + 1 ) ,
        ObjectType_Provider	= ( ObjectType_Collector + 1 ) 
    } 	CObjectType;


EXTERN_C const IID IID_IControlErrorInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EC497FC5-E1DD-4F26-9A0A-85116DE069BD")
    IControlErrorInfo : public IErrorInfo
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetObjectType( 
            /* [retval][out] */ CObjectType *pObjectType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetHResult( 
            /* [retval][out] */ HRESULT *pHResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInnerErrorInfo( 
            /* [retval][out] */ IUnknown **ppVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IControlErrorInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IControlErrorInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IControlErrorInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IControlErrorInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetGUID )( 
            IControlErrorInfo * This,
            /* [out] */ GUID *pGUID);
        
        HRESULT ( STDMETHODCALLTYPE *GetSource )( 
            IControlErrorInfo * This,
            /* [out] */ BSTR *pBstrSource);
        
        HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            IControlErrorInfo * This,
            /* [out] */ BSTR *pBstrDescription);
        
        HRESULT ( STDMETHODCALLTYPE *GetHelpFile )( 
            IControlErrorInfo * This,
            /* [out] */ BSTR *pBstrHelpFile);
        
        HRESULT ( STDMETHODCALLTYPE *GetHelpContext )( 
            IControlErrorInfo * This,
            /* [out] */ DWORD *pdwHelpContext);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectType )( 
            IControlErrorInfo * This,
            /* [retval][out] */ CObjectType *pObjectType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHResult )( 
            IControlErrorInfo * This,
            /* [retval][out] */ HRESULT *pHResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInnerErrorInfo )( 
            IControlErrorInfo * This,
            /* [retval][out] */ IUnknown **ppVal);
        
        END_INTERFACE
    } IControlErrorInfoVtbl;

    interface IControlErrorInfo
    {
        CONST_VTBL struct IControlErrorInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IControlErrorInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IControlErrorInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IControlErrorInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IControlErrorInfo_GetGUID(This,pGUID)	\
    ( (This)->lpVtbl -> GetGUID(This,pGUID) ) 

#define IControlErrorInfo_GetSource(This,pBstrSource)	\
    ( (This)->lpVtbl -> GetSource(This,pBstrSource) ) 

#define IControlErrorInfo_GetDescription(This,pBstrDescription)	\
    ( (This)->lpVtbl -> GetDescription(This,pBstrDescription) ) 

#define IControlErrorInfo_GetHelpFile(This,pBstrHelpFile)	\
    ( (This)->lpVtbl -> GetHelpFile(This,pBstrHelpFile) ) 

#define IControlErrorInfo_GetHelpContext(This,pdwHelpContext)	\
    ( (This)->lpVtbl -> GetHelpContext(This,pdwHelpContext) ) 


#define IControlErrorInfo_GetObjectType(This,pObjectType)	\
    ( (This)->lpVtbl -> GetObjectType(This,pObjectType) ) 

#define IControlErrorInfo_GetHResult(This,pHResult)	\
    ( (This)->lpVtbl -> GetHResult(This,pHResult) ) 

#define IControlErrorInfo_GetInnerErrorInfo(This,ppVal)	\
    ( (This)->lpVtbl -> GetInnerErrorInfo(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IControlErrorInfo_INTERFACE_DEFINED__ */


#ifndef __IEnumControlWarningInfo_INTERFACE_DEFINED__
#define __IEnumControlWarningInfo_INTERFACE_DEFINED__

/* interface IEnumControlWarningInfo */
/* [local][unique][helpstring][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IEnumControlWarningInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4D3894EE-53E0-4F0D-A928-49AC33B3CB80")
    IEnumControlWarningInfo : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IControlErrorInfo **prgVar,
            /* [out] */ ULONG *pCeltFetched) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumControlWarningInfo **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumControlWarningInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumControlWarningInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumControlWarningInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumControlWarningInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEnumControlWarningInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEnumControlWarningInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEnumControlWarningInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEnumControlWarningInfo * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumControlWarningInfo * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IControlErrorInfo **prgVar,
            /* [out] */ ULONG *pCeltFetched);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumControlWarningInfo * This,
            /* [in] */ ULONG celt);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumControlWarningInfo * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumControlWarningInfo * This,
            /* [out] */ IEnumControlWarningInfo **ppEnum);
        
        END_INTERFACE
    } IEnumControlWarningInfoVtbl;

    interface IEnumControlWarningInfo
    {
        CONST_VTBL struct IEnumControlWarningInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumControlWarningInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumControlWarningInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumControlWarningInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumControlWarningInfo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEnumControlWarningInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEnumControlWarningInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEnumControlWarningInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEnumControlWarningInfo_Next(This,celt,prgVar,pCeltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,prgVar,pCeltFetched) ) 

#define IEnumControlWarningInfo_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumControlWarningInfo_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumControlWarningInfo_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumControlWarningInfo_INTERFACE_DEFINED__ */


#ifndef __IProfile_INTERFACE_DEFINED__
#define __IProfile_INTERFACE_DEFINED__

/* interface IProfile */
/* [local][unique][helpstring][oleautomation][dual][uuid][object] */ 

typedef /* [public][public] */ 
enum __MIDL_IProfile_0001
    {
        LoggingMode_Unknown	= 0,
        LoggingMode_Memory	= ( LoggingMode_Unknown + 1 ) ,
        LoggingMode_File	= ( LoggingMode_Memory + 1 ) 
    } 	CLoggingMode;

typedef /* [public][public] */ 
enum __MIDL_IProfile_0002
    {
        DetailLevel_Unknown	= 0,
        DetailLevel_Light	= ( DetailLevel_Unknown + 1 ) ,
        DetailLevel_Verbose	= ( DetailLevel_Light + 1 ) 
    } 	CDetailLevel;


EXTERN_C const IID IID_IProfile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("71E0563A-BCBC-4784-933A-735A2EF4FB8A")
    IProfile : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsMutable( 
            /* [retval][out] */ VARIANT_BOOL *pfMutable) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsMutable( 
            /* [in] */ VARIANT_BOOL fMutable) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ float *pVersion) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Author( 
            /* [retval][out] */ BSTR *pbstrAuthor) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Team( 
            /* [retval][out] */ BSTR *pbstrTeam) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Comments( 
            /* [retval][out] */ BSTR *pbstrComments) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Company( 
            /* [retval][out] */ BSTR *pbstrCompany) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Copyright( 
            /* [retval][out] */ BSTR *pbstrCopyright) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Tag( 
            /* [retval][out] */ BSTR *pbstrTag) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ BSTR *pbstrId) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pbstrDescription) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LoggingMode( 
            /* [retval][out] */ CLoggingMode *pLoggingMode) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LoggingModeString( 
            /* [retval][out] */ BSTR *pbstrLoggingMode) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DetailLevel( 
            /* [retval][out] */ CDetailLevel *pDetailLevel) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DetailLevelString( 
            /* [retval][out] */ BSTR *pbstrDetailLevel) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsDefault( 
            /* [retval][out] */ VARIANT_BOOL *pfDefault) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProblemCategories( 
            /* [retval][out] */ BSTR *pbstrProblemCategories) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadFromFile( 
            /* [in] */ BSTR bstrProfileName,
            /* [in] */ BSTR bstrFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadFromString( 
            /* [in] */ BSTR bstrProfile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsEqual( 
            /* [in] */ IProfile *pProfile) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IProfileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IProfile * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IProfile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IProfile * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IProfile * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IProfile * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IProfile * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IProfile * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsMutable )( 
            IProfile * This,
            /* [retval][out] */ VARIANT_BOOL *pfMutable);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsMutable )( 
            IProfile * This,
            /* [in] */ VARIANT_BOOL fMutable);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IProfile * This,
            /* [retval][out] */ float *pVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Author )( 
            IProfile * This,
            /* [retval][out] */ BSTR *pbstrAuthor);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Team )( 
            IProfile * This,
            /* [retval][out] */ BSTR *pbstrTeam);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Comments )( 
            IProfile * This,
            /* [retval][out] */ BSTR *pbstrComments);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Company )( 
            IProfile * This,
            /* [retval][out] */ BSTR *pbstrCompany);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Copyright )( 
            IProfile * This,
            /* [retval][out] */ BSTR *pbstrCopyright);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tag )( 
            IProfile * This,
            /* [retval][out] */ BSTR *pbstrTag);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IProfile * This,
            /* [retval][out] */ BSTR *pbstrId);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IProfile * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IProfile * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoggingMode )( 
            IProfile * This,
            /* [retval][out] */ CLoggingMode *pLoggingMode);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoggingModeString )( 
            IProfile * This,
            /* [retval][out] */ BSTR *pbstrLoggingMode);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DetailLevel )( 
            IProfile * This,
            /* [retval][out] */ CDetailLevel *pDetailLevel);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DetailLevelString )( 
            IProfile * This,
            /* [retval][out] */ BSTR *pbstrDetailLevel);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDefault )( 
            IProfile * This,
            /* [retval][out] */ VARIANT_BOOL *pfDefault);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProblemCategories )( 
            IProfile * This,
            /* [retval][out] */ BSTR *pbstrProblemCategories);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadFromFile )( 
            IProfile * This,
            /* [in] */ BSTR bstrProfileName,
            /* [in] */ BSTR bstrFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadFromString )( 
            IProfile * This,
            /* [in] */ BSTR bstrProfile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsEqual )( 
            IProfile * This,
            /* [in] */ IProfile *pProfile);
        
        END_INTERFACE
    } IProfileVtbl;

    interface IProfile
    {
        CONST_VTBL struct IProfileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IProfile_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IProfile_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IProfile_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IProfile_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IProfile_get_IsMutable(This,pfMutable)	\
    ( (This)->lpVtbl -> get_IsMutable(This,pfMutable) ) 

#define IProfile_put_IsMutable(This,fMutable)	\
    ( (This)->lpVtbl -> put_IsMutable(This,fMutable) ) 

#define IProfile_get_Version(This,pVersion)	\
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IProfile_get_Author(This,pbstrAuthor)	\
    ( (This)->lpVtbl -> get_Author(This,pbstrAuthor) ) 

#define IProfile_get_Team(This,pbstrTeam)	\
    ( (This)->lpVtbl -> get_Team(This,pbstrTeam) ) 

#define IProfile_get_Comments(This,pbstrComments)	\
    ( (This)->lpVtbl -> get_Comments(This,pbstrComments) ) 

#define IProfile_get_Company(This,pbstrCompany)	\
    ( (This)->lpVtbl -> get_Company(This,pbstrCompany) ) 

#define IProfile_get_Copyright(This,pbstrCopyright)	\
    ( (This)->lpVtbl -> get_Copyright(This,pbstrCopyright) ) 

#define IProfile_get_Tag(This,pbstrTag)	\
    ( (This)->lpVtbl -> get_Tag(This,pbstrTag) ) 

#define IProfile_get_Id(This,pbstrId)	\
    ( (This)->lpVtbl -> get_Id(This,pbstrId) ) 

#define IProfile_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IProfile_get_Description(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) ) 

#define IProfile_get_LoggingMode(This,pLoggingMode)	\
    ( (This)->lpVtbl -> get_LoggingMode(This,pLoggingMode) ) 

#define IProfile_get_LoggingModeString(This,pbstrLoggingMode)	\
    ( (This)->lpVtbl -> get_LoggingModeString(This,pbstrLoggingMode) ) 

#define IProfile_get_DetailLevel(This,pDetailLevel)	\
    ( (This)->lpVtbl -> get_DetailLevel(This,pDetailLevel) ) 

#define IProfile_get_DetailLevelString(This,pbstrDetailLevel)	\
    ( (This)->lpVtbl -> get_DetailLevelString(This,pbstrDetailLevel) ) 

#define IProfile_get_IsDefault(This,pfDefault)	\
    ( (This)->lpVtbl -> get_IsDefault(This,pfDefault) ) 

#define IProfile_get_ProblemCategories(This,pbstrProblemCategories)	\
    ( (This)->lpVtbl -> get_ProblemCategories(This,pbstrProblemCategories) ) 

#define IProfile_LoadFromFile(This,bstrProfileName,bstrFileName)	\
    ( (This)->lpVtbl -> LoadFromFile(This,bstrProfileName,bstrFileName) ) 

#define IProfile_LoadFromString(This,bstrProfile)	\
    ( (This)->lpVtbl -> LoadFromString(This,bstrProfile) ) 

#define IProfile_IsEqual(This,pProfile)	\
    ( (This)->lpVtbl -> IsEqual(This,pProfile) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IProfile_INTERFACE_DEFINED__ */


#ifndef __IEnumProfile_INTERFACE_DEFINED__
#define __IEnumProfile_INTERFACE_DEFINED__

/* interface IEnumProfile */
/* [local][unique][helpstring][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IEnumProfile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DBF29874-763E-492F-8D36-9AE8DBD89A1C")
    IEnumProfile : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IProfile **prgVar,
            /* [out] */ ULONG *pCeltFetched) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumProfile **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumProfileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumProfile * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumProfile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumProfile * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEnumProfile * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEnumProfile * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEnumProfile * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEnumProfile * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumProfile * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IProfile **prgVar,
            /* [out] */ ULONG *pCeltFetched);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumProfile * This,
            /* [in] */ ULONG celt);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumProfile * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumProfile * This,
            /* [out] */ IEnumProfile **ppEnum);
        
        END_INTERFACE
    } IEnumProfileVtbl;

    interface IEnumProfile
    {
        CONST_VTBL struct IEnumProfileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumProfile_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEnumProfile_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEnumProfile_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEnumProfile_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEnumProfile_Next(This,celt,prgVar,pCeltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,prgVar,pCeltFetched) ) 

#define IEnumProfile_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumProfile_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumProfile_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumProfile_INTERFACE_DEFINED__ */


#ifndef __IProfileCollection_INTERFACE_DEFINED__
#define __IProfileCollection_INTERFACE_DEFINED__

/* interface IProfileCollection */
/* [local][unique][helpstring][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IProfileCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BB5ED25C-A7A8-4CEF-BFFD-2D9C64CB457A")
    IProfileCollection : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IProfile *pProfile,
            /* [in] */ VARIANT_BOOL fMerge) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IProfile *pProfile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsEqual( 
            /* [in] */ IProfileCollection *pProfileCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadIntoXML( 
            /* [out] */ BSTR *pbstrResults) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IProfileCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IProfileCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IProfileCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IProfileCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IProfileCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IProfileCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IProfileCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IProfileCollection * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IProfileCollection * This,
            /* [in] */ IProfile *pProfile,
            /* [in] */ VARIANT_BOOL fMerge);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IProfileCollection * This,
            /* [in] */ IProfile *pProfile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IProfileCollection * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsEqual )( 
            IProfileCollection * This,
            /* [in] */ IProfileCollection *pProfileCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadIntoXML )( 
            IProfileCollection * This,
            /* [out] */ BSTR *pbstrResults);
        
        END_INTERFACE
    } IProfileCollectionVtbl;

    interface IProfileCollection
    {
        CONST_VTBL struct IProfileCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProfileCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IProfileCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IProfileCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IProfileCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IProfileCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IProfileCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IProfileCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IProfileCollection_Add(This,pProfile,fMerge)	\
    ( (This)->lpVtbl -> Add(This,pProfile,fMerge) ) 

#define IProfileCollection_Remove(This,pProfile)	\
    ( (This)->lpVtbl -> Remove(This,pProfile) ) 

#define IProfileCollection_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IProfileCollection_IsEqual(This,pProfileCollection)	\
    ( (This)->lpVtbl -> IsEqual(This,pProfileCollection) ) 

#define IProfileCollection_LoadIntoXML(This,pbstrResults)	\
    ( (This)->lpVtbl -> LoadIntoXML(This,pbstrResults) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IProfileCollection_INTERFACE_DEFINED__ */


#ifndef __IControlProgressHandler_INTERFACE_DEFINED__
#define __IControlProgressHandler_INTERFACE_DEFINED__

/* interface IControlProgressHandler */
/* [local][unique][helpstring][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IControlProgressHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3BFF3423-C44D-480E-9A91-60941D5D6E59")
    IControlProgressHandler : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnBegin( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUpdate( 
            /* [in] */ ULONG CurrentValuePercent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnEnd( 
            /* [in] */ HRESULT hrResult,
            /* [in] */ ULONG EventsLost) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IControlProgressHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IControlProgressHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IControlProgressHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IControlProgressHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IControlProgressHandler * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IControlProgressHandler * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IControlProgressHandler * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IControlProgressHandler * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnBegin )( 
            IControlProgressHandler * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUpdate )( 
            IControlProgressHandler * This,
            /* [in] */ ULONG CurrentValuePercent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnEnd )( 
            IControlProgressHandler * This,
            /* [in] */ HRESULT hrResult,
            /* [in] */ ULONG EventsLost);
        
        END_INTERFACE
    } IControlProgressHandlerVtbl;

    interface IControlProgressHandler
    {
        CONST_VTBL struct IControlProgressHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IControlProgressHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IControlProgressHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IControlProgressHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IControlProgressHandler_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IControlProgressHandler_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IControlProgressHandler_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IControlProgressHandler_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IControlProgressHandler_OnBegin(This)	\
    ( (This)->lpVtbl -> OnBegin(This) ) 

#define IControlProgressHandler_OnUpdate(This,CurrentValuePercent)	\
    ( (This)->lpVtbl -> OnUpdate(This,CurrentValuePercent) ) 

#define IControlProgressHandler_OnEnd(This,hrResult,EventsLost)	\
    ( (This)->lpVtbl -> OnEnd(This,hrResult,EventsLost) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IControlProgressHandler_INTERFACE_DEFINED__ */


#ifndef __ITraceMergeTextHandler_INTERFACE_DEFINED__
#define __ITraceMergeTextHandler_INTERFACE_DEFINED__

/* interface ITraceMergeTextHandler */
/* [local][unique][helpstring][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_ITraceMergeTextHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9F8FB077-7E67-4454-8A9E-31D43A0CDD4E")
    ITraceMergeTextHandler : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ ULONG *cText) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetText( 
            /* [in] */ ULONG iText,
            /* [out] */ BSTR *pbstrText) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WaitForText( 
            /* [in] */ ULONG Milliseconds) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFileName( 
            /* [out] */ BSTR *pbstrFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNGenPdbsPath( 
            /* [out] */ VARIANT_BOOL *pfEnable,
            /* [out] */ BSTR *pbstrNGenPdbsCachePath,
            /* [out] */ BSTR *pbstrNGenPdbsTargetPath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITraceMergeTextHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITraceMergeTextHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITraceMergeTextHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITraceMergeTextHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITraceMergeTextHandler * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITraceMergeTextHandler * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITraceMergeTextHandler * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITraceMergeTextHandler * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ITraceMergeTextHandler * This,
            /* [retval][out] */ ULONG *cText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetText )( 
            ITraceMergeTextHandler * This,
            /* [in] */ ULONG iText,
            /* [out] */ BSTR *pbstrText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WaitForText )( 
            ITraceMergeTextHandler * This,
            /* [in] */ ULONG Milliseconds);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            ITraceMergeTextHandler * This,
            /* [out] */ BSTR *pbstrFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNGenPdbsPath )( 
            ITraceMergeTextHandler * This,
            /* [out] */ VARIANT_BOOL *pfEnable,
            /* [out] */ BSTR *pbstrNGenPdbsCachePath,
            /* [out] */ BSTR *pbstrNGenPdbsTargetPath);
        
        END_INTERFACE
    } ITraceMergeTextHandlerVtbl;

    interface ITraceMergeTextHandler
    {
        CONST_VTBL struct ITraceMergeTextHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITraceMergeTextHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITraceMergeTextHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITraceMergeTextHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITraceMergeTextHandler_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITraceMergeTextHandler_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITraceMergeTextHandler_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITraceMergeTextHandler_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITraceMergeTextHandler_get_Count(This,cText)	\
    ( (This)->lpVtbl -> get_Count(This,cText) ) 

#define ITraceMergeTextHandler_GetText(This,iText,pbstrText)	\
    ( (This)->lpVtbl -> GetText(This,iText,pbstrText) ) 

#define ITraceMergeTextHandler_WaitForText(This,Milliseconds)	\
    ( (This)->lpVtbl -> WaitForText(This,Milliseconds) ) 

#define ITraceMergeTextHandler_GetFileName(This,pbstrFileName)	\
    ( (This)->lpVtbl -> GetFileName(This,pbstrFileName) ) 

#define ITraceMergeTextHandler_GetNGenPdbsPath(This,pfEnable,pbstrNGenPdbsCachePath,pbstrNGenPdbsTargetPath)	\
    ( (This)->lpVtbl -> GetNGenPdbsPath(This,pfEnable,pbstrNGenPdbsCachePath,pbstrNGenPdbsTargetPath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITraceMergeTextHandler_INTERFACE_DEFINED__ */


#ifndef __ITraceMergeProperties_INTERFACE_DEFINED__
#define __ITraceMergeProperties_INTERFACE_DEFINED__

/* interface ITraceMergeProperties */
/* [local][unique][helpstring][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_ITraceMergeProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("629E2BBB-9629-45D8-8314-5D72324AE33F")
    ITraceMergeProperties : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadFromFile( 
            /* [in] */ BSTR bstrTraceMergeName,
            /* [in] */ BSTR bstrFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadFromString( 
            /* [in] */ BSTR bstrTraceMerge) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsEqual( 
            /* [in] */ ITraceMergeProperties *pTraceMergeProperties) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITraceMergePropertiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITraceMergeProperties * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITraceMergeProperties * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITraceMergeProperties * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITraceMergeProperties * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITraceMergeProperties * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITraceMergeProperties * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITraceMergeProperties * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadFromFile )( 
            ITraceMergeProperties * This,
            /* [in] */ BSTR bstrTraceMergeName,
            /* [in] */ BSTR bstrFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadFromString )( 
            ITraceMergeProperties * This,
            /* [in] */ BSTR bstrTraceMerge);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsEqual )( 
            ITraceMergeProperties * This,
            /* [in] */ ITraceMergeProperties *pTraceMergeProperties);
        
        END_INTERFACE
    } ITraceMergePropertiesVtbl;

    interface ITraceMergeProperties
    {
        CONST_VTBL struct ITraceMergePropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITraceMergeProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITraceMergeProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITraceMergeProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITraceMergeProperties_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITraceMergeProperties_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITraceMergeProperties_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITraceMergeProperties_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITraceMergeProperties_LoadFromFile(This,bstrTraceMergeName,bstrFileName)	\
    ( (This)->lpVtbl -> LoadFromFile(This,bstrTraceMergeName,bstrFileName) ) 

#define ITraceMergeProperties_LoadFromString(This,bstrTraceMerge)	\
    ( (This)->lpVtbl -> LoadFromString(This,bstrTraceMerge) ) 

#define ITraceMergeProperties_IsEqual(This,pTraceMergeProperties)	\
    ( (This)->lpVtbl -> IsEqual(This,pTraceMergeProperties) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITraceMergeProperties_INTERFACE_DEFINED__ */


#ifndef __IControlManager_INTERFACE_DEFINED__
#define __IControlManager_INTERFACE_DEFINED__

/* interface IControlManager */
/* [local][unique][helpstring][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IControlManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C66BC1C2-D913-4BF0-9E08-014523E4A205")
    IControlManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ControlProgressHandler( 
            /* [retval][out] */ IControlProgressHandler **ppControlProgressHandler) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ControlProgressHandler( 
            /* [in] */ IControlProgressHandler *pControlProgressHandler) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Start( 
            /* [in] */ IProfileCollection *pProfileCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Update( 
            /* [in] */ IProfileCollection *pProfileCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cancel( 
            /* [in] */ IProfileCollection *pProfileCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ BSTR bstrFileName,
            /* [in] */ IProfileCollection *pProfileCollection,
            /* [in] */ ITraceMergeProperties *pTraceMergeProperties) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Stop( 
            /* [in] */ BSTR bstrFileName,
            /* [in] */ IProfileCollection *pProfileCollection,
            /* [in] */ ITraceMergeProperties *pTraceMergeProperties) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE QueryXML( 
            /* [out] */ BSTR *pbstrResults,
            /* [in] */ VARIANT_BOOL fValidateRuntimeState) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Query( 
            /* [out] */ IProfileCollection **ppProfileCollection,
            /* [in] */ VARIANT_BOOL fValidateRuntimeState) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TraceMergeTextHandler( 
            /* [retval][out] */ ITraceMergeTextHandler **ppTraceMergeTextHandler) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TraceMergeTextHandler( 
            /* [in] */ ITraceMergeTextHandler *pTraceMergeTextHandler) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TemporaryTraceDirectory( 
            /* [retval][out] */ BSTR *pbstrTemporaryTraceDirectory) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TemporaryTraceDirectory( 
            /* [in] */ BSTR bstrTemporaryTraceDirectory) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProviderNameFromGuid( 
            /* [out] */ BSTR *bstrProviderIdStr,
            /* [in] */ REFGUID ProviderId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProviderGuidFromName( 
            /* [out] */ GUID *ProviderId,
            /* [in] */ BSTR bstrProViderName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CaptureStateOnDemand( 
            /* [in] */ IProfileCollection *pProfileCollection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IControlManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IControlManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IControlManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IControlManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IControlManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IControlManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IControlManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IControlManager * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlProgressHandler )( 
            IControlManager * This,
            /* [retval][out] */ IControlProgressHandler **ppControlProgressHandler);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ControlProgressHandler )( 
            IControlManager * This,
            /* [in] */ IControlProgressHandler *pControlProgressHandler);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Start )( 
            IControlManager * This,
            /* [in] */ IProfileCollection *pProfileCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IControlManager * This,
            /* [in] */ IProfileCollection *pProfileCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IControlManager * This,
            /* [in] */ IProfileCollection *pProfileCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IControlManager * This,
            /* [in] */ BSTR bstrFileName,
            /* [in] */ IProfileCollection *pProfileCollection,
            /* [in] */ ITraceMergeProperties *pTraceMergeProperties);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IControlManager * This,
            /* [in] */ BSTR bstrFileName,
            /* [in] */ IProfileCollection *pProfileCollection,
            /* [in] */ ITraceMergeProperties *pTraceMergeProperties);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *QueryXML )( 
            IControlManager * This,
            /* [out] */ BSTR *pbstrResults,
            /* [in] */ VARIANT_BOOL fValidateRuntimeState);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Query )( 
            IControlManager * This,
            /* [out] */ IProfileCollection **ppProfileCollection,
            /* [in] */ VARIANT_BOOL fValidateRuntimeState);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TraceMergeTextHandler )( 
            IControlManager * This,
            /* [retval][out] */ ITraceMergeTextHandler **ppTraceMergeTextHandler);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TraceMergeTextHandler )( 
            IControlManager * This,
            /* [in] */ ITraceMergeTextHandler *pTraceMergeTextHandler);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TemporaryTraceDirectory )( 
            IControlManager * This,
            /* [retval][out] */ BSTR *pbstrTemporaryTraceDirectory);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TemporaryTraceDirectory )( 
            IControlManager * This,
            /* [in] */ BSTR bstrTemporaryTraceDirectory);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProviderNameFromGuid )( 
            IControlManager * This,
            /* [out] */ BSTR *bstrProviderIdStr,
            /* [in] */ REFGUID ProviderId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProviderGuidFromName )( 
            IControlManager * This,
            /* [out] */ GUID *ProviderId,
            /* [in] */ BSTR bstrProViderName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CaptureStateOnDemand )( 
            IControlManager * This,
            /* [in] */ IProfileCollection *pProfileCollection);
        
        END_INTERFACE
    } IControlManagerVtbl;

    interface IControlManager
    {
        CONST_VTBL struct IControlManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IControlManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IControlManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IControlManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IControlManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IControlManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IControlManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IControlManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IControlManager_get_ControlProgressHandler(This,ppControlProgressHandler)	\
    ( (This)->lpVtbl -> get_ControlProgressHandler(This,ppControlProgressHandler) ) 

#define IControlManager_put_ControlProgressHandler(This,pControlProgressHandler)	\
    ( (This)->lpVtbl -> put_ControlProgressHandler(This,pControlProgressHandler) ) 

#define IControlManager_Start(This,pProfileCollection)	\
    ( (This)->lpVtbl -> Start(This,pProfileCollection) ) 

#define IControlManager_Update(This,pProfileCollection)	\
    ( (This)->lpVtbl -> Update(This,pProfileCollection) ) 

#define IControlManager_Cancel(This,pProfileCollection)	\
    ( (This)->lpVtbl -> Cancel(This,pProfileCollection) ) 

#define IControlManager_Save(This,bstrFileName,pProfileCollection,pTraceMergeProperties)	\
    ( (This)->lpVtbl -> Save(This,bstrFileName,pProfileCollection,pTraceMergeProperties) ) 

#define IControlManager_Stop(This,bstrFileName,pProfileCollection,pTraceMergeProperties)	\
    ( (This)->lpVtbl -> Stop(This,bstrFileName,pProfileCollection,pTraceMergeProperties) ) 

#define IControlManager_QueryXML(This,pbstrResults,fValidateRuntimeState)	\
    ( (This)->lpVtbl -> QueryXML(This,pbstrResults,fValidateRuntimeState) ) 

#define IControlManager_Query(This,ppProfileCollection,fValidateRuntimeState)	\
    ( (This)->lpVtbl -> Query(This,ppProfileCollection,fValidateRuntimeState) ) 

#define IControlManager_get_TraceMergeTextHandler(This,ppTraceMergeTextHandler)	\
    ( (This)->lpVtbl -> get_TraceMergeTextHandler(This,ppTraceMergeTextHandler) ) 

#define IControlManager_put_TraceMergeTextHandler(This,pTraceMergeTextHandler)	\
    ( (This)->lpVtbl -> put_TraceMergeTextHandler(This,pTraceMergeTextHandler) ) 

#define IControlManager_get_TemporaryTraceDirectory(This,pbstrTemporaryTraceDirectory)	\
    ( (This)->lpVtbl -> get_TemporaryTraceDirectory(This,pbstrTemporaryTraceDirectory) ) 

#define IControlManager_put_TemporaryTraceDirectory(This,bstrTemporaryTraceDirectory)	\
    ( (This)->lpVtbl -> put_TemporaryTraceDirectory(This,bstrTemporaryTraceDirectory) ) 

#define IControlManager_GetProviderNameFromGuid(This,bstrProviderIdStr,ProviderId)	\
    ( (This)->lpVtbl -> GetProviderNameFromGuid(This,bstrProviderIdStr,ProviderId) ) 

#define IControlManager_GetProviderGuidFromName(This,ProviderId,bstrProViderName)	\
    ( (This)->lpVtbl -> GetProviderGuidFromName(This,ProviderId,bstrProViderName) ) 

#define IControlManager_CaptureStateOnDemand(This,pProfileCollection)	\
    ( (This)->lpVtbl -> CaptureStateOnDemand(This,pProfileCollection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IControlManager_INTERFACE_DEFINED__ */


#ifndef __IOnOffTransitionManager_INTERFACE_DEFINED__
#define __IOnOffTransitionManager_INTERFACE_DEFINED__

/* interface IOnOffTransitionManager */
/* [local][unique][helpstring][oleautomation][dual][uuid][object] */ 


EXTERN_C const IID IID_IOnOffTransitionManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0B626B7D-C028-411A-84B2-1FE7EE6EF9A0")
    IOnOffTransitionManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnableBootRecording( 
            /* [in] */ IProfileCollection *pProfileCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DisableBootRecording( 
            /* [in] */ IProfileCollection *pProfileCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartShutdownRecording( 
            /* [in] */ IProfileCollection *pProfileCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UpdateShutdownRecording( 
            /* [in] */ IProfileCollection *pProfileCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MergeShutdownRecording( 
            /* [in] */ BSTR bstrFileName,
            /* [in] */ IProfileCollection *pProfileCollection,
            /* [in] */ ITraceMergeProperties *pTraceMergeProperties) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IOnOffTransitionManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOnOffTransitionManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOnOffTransitionManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOnOffTransitionManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOnOffTransitionManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOnOffTransitionManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOnOffTransitionManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOnOffTransitionManager * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableBootRecording )( 
            IOnOffTransitionManager * This,
            /* [in] */ IProfileCollection *pProfileCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DisableBootRecording )( 
            IOnOffTransitionManager * This,
            /* [in] */ IProfileCollection *pProfileCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartShutdownRecording )( 
            IOnOffTransitionManager * This,
            /* [in] */ IProfileCollection *pProfileCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UpdateShutdownRecording )( 
            IOnOffTransitionManager * This,
            /* [in] */ IProfileCollection *pProfileCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MergeShutdownRecording )( 
            IOnOffTransitionManager * This,
            /* [in] */ BSTR bstrFileName,
            /* [in] */ IProfileCollection *pProfileCollection,
            /* [in] */ ITraceMergeProperties *pTraceMergeProperties);
        
        END_INTERFACE
    } IOnOffTransitionManagerVtbl;

    interface IOnOffTransitionManager
    {
        CONST_VTBL struct IOnOffTransitionManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOnOffTransitionManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOnOffTransitionManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOnOffTransitionManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOnOffTransitionManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOnOffTransitionManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOnOffTransitionManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOnOffTransitionManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IOnOffTransitionManager_EnableBootRecording(This,pProfileCollection)	\
    ( (This)->lpVtbl -> EnableBootRecording(This,pProfileCollection) ) 

#define IOnOffTransitionManager_DisableBootRecording(This,pProfileCollection)	\
    ( (This)->lpVtbl -> DisableBootRecording(This,pProfileCollection) ) 

#define IOnOffTransitionManager_StartShutdownRecording(This,pProfileCollection)	\
    ( (This)->lpVtbl -> StartShutdownRecording(This,pProfileCollection) ) 

#define IOnOffTransitionManager_UpdateShutdownRecording(This,pProfileCollection)	\
    ( (This)->lpVtbl -> UpdateShutdownRecording(This,pProfileCollection) ) 

#define IOnOffTransitionManager_MergeShutdownRecording(This,bstrFileName,pProfileCollection,pTraceMergeProperties)	\
    ( (This)->lpVtbl -> MergeShutdownRecording(This,bstrFileName,pProfileCollection,pTraceMergeProperties) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOnOffTransitionManager_INTERFACE_DEFINED__ */



#ifndef __WindowsPerformanceRecorderControlLibrary_LIBRARY_DEFINED__
#define __WindowsPerformanceRecorderControlLibrary_LIBRARY_DEFINED__

/* library WindowsPerformanceRecorderControlLibrary */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_WindowsPerformanceRecorderControlLibrary;

EXTERN_C const CLSID CLSID_CProfile;

#ifdef __cplusplus

class DECLSPEC_UUID("D66D26BF-6098-4B78-9D94-7BC219612AE4")
CProfile;
#endif

EXTERN_C const CLSID CLSID_CProfileCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("B98B53F3-83BA-4837-8946-E886BE8D4003")
CProfileCollection;
#endif

EXTERN_C const CLSID CLSID_CTraceMergeProperties;

#ifdef __cplusplus

class DECLSPEC_UUID("CAB2BDD5-5B3B-40AC-985F-2EA49E430FE4")
CTraceMergeProperties;
#endif

EXTERN_C const CLSID CLSID_CControlManager;

#ifdef __cplusplus

class DECLSPEC_UUID("971A7808-88BE-4AAD-9E1E-7C7E258512E3")
CControlManager;
#endif
#endif /* __WindowsPerformanceRecorderControlLibrary_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_windowsperformancerecordercontrol_0000_0012 */
/* [local] */ 

namespace WindowsPerformanceRecorder
{
//
// WPRControl Helper Functions
//

__control_entrypoint(DLL) HRESULT WPRCCreateInstance(_In_  REFCLSID rclsid, _In_opt_ LPUNKNOWN pUnkOuter, _In_  DWORD dwClsContext, _In_  REFIID riid, _Outptr_  LPVOID *ppv);
__control_entrypoint(DLL) HRESULT WPRCCreateInstanceUnderInstanceName(_In_opt_ BSTR bstrInstanceName, _In_  REFCLSID rclsid, _In_opt_ LPUNKNOWN pUnkOuter, _In_  DWORD dwClsContext, _In_  REFIID riid, _Outptr_  LPVOID *ppv);
__control_entrypoint(DLL) HRESULT WPRCQueryBuiltInProfiles(_In_  HMODULE hModule, _Out_  BSTR* pbstrProfiles);
__control_entrypoint(DLL) HRESULT WPRCFormatError(_In_ HRESULT Hresult, _In_opt_ LPUNKNOWN pUnknown, _Out_ BSTR* pbstrMessage, _Out_opt_ BSTR* pbstrDescription, _Out_opt_ BSTR* pbstrDetailedDescription);
__control_entrypoint(DLL) HRESULT WPRCControlLogging(_In_ BOOL fEnabled);
__control_entrypoint(DLL) HRESULT WPRCRemoveLogging();

}    // namespace WindowsPerformanceRecorder



extern RPC_IF_HANDLE __MIDL_itf_windowsperformancerecordercontrol_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowsperformancerecordercontrol_0000_0012_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


