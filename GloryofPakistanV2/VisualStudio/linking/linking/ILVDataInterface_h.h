

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Mon Sep 11 18:26:00 2017
 */
/* Compiler settings for ILVDataInterface.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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

#ifndef __ILVDataInterface_h_h__
#define __ILVDataInterface_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ILVData_FWD_DEFINED__
#define __ILVData_FWD_DEFINED__
typedef interface ILVData ILVData;

#endif 	/* __ILVData_FWD_DEFINED__ */


#ifndef __ILVBoolean_FWD_DEFINED__
#define __ILVBoolean_FWD_DEFINED__
typedef interface ILVBoolean ILVBoolean;

#endif 	/* __ILVBoolean_FWD_DEFINED__ */


#ifndef __ILVInt8_FWD_DEFINED__
#define __ILVInt8_FWD_DEFINED__
typedef interface ILVInt8 ILVInt8;

#endif 	/* __ILVInt8_FWD_DEFINED__ */


#ifndef __ILVInt16_FWD_DEFINED__
#define __ILVInt16_FWD_DEFINED__
typedef interface ILVInt16 ILVInt16;

#endif 	/* __ILVInt16_FWD_DEFINED__ */


#ifndef __ILVInt32_FWD_DEFINED__
#define __ILVInt32_FWD_DEFINED__
typedef interface ILVInt32 ILVInt32;

#endif 	/* __ILVInt32_FWD_DEFINED__ */


#ifndef __ILVInt64_FWD_DEFINED__
#define __ILVInt64_FWD_DEFINED__
typedef interface ILVInt64 ILVInt64;

#endif 	/* __ILVInt64_FWD_DEFINED__ */


#ifndef __ILVuInt8_FWD_DEFINED__
#define __ILVuInt8_FWD_DEFINED__
typedef interface ILVuInt8 ILVuInt8;

#endif 	/* __ILVuInt8_FWD_DEFINED__ */


#ifndef __ILVuInt16_FWD_DEFINED__
#define __ILVuInt16_FWD_DEFINED__
typedef interface ILVuInt16 ILVuInt16;

#endif 	/* __ILVuInt16_FWD_DEFINED__ */


#ifndef __ILVuInt32_FWD_DEFINED__
#define __ILVuInt32_FWD_DEFINED__
typedef interface ILVuInt32 ILVuInt32;

#endif 	/* __ILVuInt32_FWD_DEFINED__ */


#ifndef __ILVuInt64_FWD_DEFINED__
#define __ILVuInt64_FWD_DEFINED__
typedef interface ILVuInt64 ILVuInt64;

#endif 	/* __ILVuInt64_FWD_DEFINED__ */


#ifndef __ILVFloat32_FWD_DEFINED__
#define __ILVFloat32_FWD_DEFINED__
typedef interface ILVFloat32 ILVFloat32;

#endif 	/* __ILVFloat32_FWD_DEFINED__ */


#ifndef __ILVFloat64_FWD_DEFINED__
#define __ILVFloat64_FWD_DEFINED__
typedef interface ILVFloat64 ILVFloat64;

#endif 	/* __ILVFloat64_FWD_DEFINED__ */


#ifndef __ILVFloatExt_FWD_DEFINED__
#define __ILVFloatExt_FWD_DEFINED__
typedef interface ILVFloatExt ILVFloatExt;

#endif 	/* __ILVFloatExt_FWD_DEFINED__ */


#ifndef __ILVComplex64_FWD_DEFINED__
#define __ILVComplex64_FWD_DEFINED__
typedef interface ILVComplex64 ILVComplex64;

#endif 	/* __ILVComplex64_FWD_DEFINED__ */


#ifndef __ILVComplex128_FWD_DEFINED__
#define __ILVComplex128_FWD_DEFINED__
typedef interface ILVComplex128 ILVComplex128;

#endif 	/* __ILVComplex128_FWD_DEFINED__ */


#ifndef __ILVComplexExt_FWD_DEFINED__
#define __ILVComplexExt_FWD_DEFINED__
typedef interface ILVComplexExt ILVComplexExt;

#endif 	/* __ILVComplexExt_FWD_DEFINED__ */


#ifndef __ILVArray_FWD_DEFINED__
#define __ILVArray_FWD_DEFINED__
typedef interface ILVArray ILVArray;

#endif 	/* __ILVArray_FWD_DEFINED__ */


#ifndef __ILVString_FWD_DEFINED__
#define __ILVString_FWD_DEFINED__
typedef interface ILVString ILVString;

#endif 	/* __ILVString_FWD_DEFINED__ */


#ifndef __ILVCluster_FWD_DEFINED__
#define __ILVCluster_FWD_DEFINED__
typedef interface ILVCluster ILVCluster;

#endif 	/* __ILVCluster_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_ILVDataInterface_0000_0000 */
/* [local] */ 

// ==================================================================
// NI CONFIDENTIAL													
// © Copyright 2006-2008 by National Instruments Corp.				
// All rights reserved.												
//																	
// @file		ILVDataInterface.idl									
// @brief	Interface definitions for LabVIEW data.					
//			The files ILVDataInterface_i.c and ILVDataInterface.h	
//			are generated using ILVDataInterface.idl.				
// ==================================================================

#include "extcode.h"
#include "ILVTypeInterface.h"
#ifndef _fundtypes_H
typedef unsigned char int8_t;

typedef unsigned char uint8_t;

typedef short int16_t;

typedef unsigned short uint16_t;

typedef int int32_t;

typedef unsigned int uint32_t;


#pragma pack(push, 1)
#pragma warning (disable : 4103) 
typedef unsigned char int8;

typedef unsigned char uInt8;

typedef uInt8 uChar;

typedef short int16;

typedef unsigned short uInt16;

typedef long int32;

typedef unsigned long uInt32;

typedef float float32;

typedef double float64;

typedef __int64 int64;

typedef unsigned __int64 uInt64;

typedef /* [public][public][public][public][public][public][public][public][public] */ struct __MIDL___MIDL_itf_ILVDataInterface_0000_0000_0001
    {
    int32 mlo;
    int32 mhi;
    int16 e;
    } 	floatExt;

typedef /* [public][public][public] */ struct __MIDL___MIDL_itf_ILVDataInterface_0000_0000_0002
    {
    float32 re;
    float32 im;
    } 	cmplx64;

typedef /* [public][public][public] */ struct __MIDL___MIDL_itf_ILVDataInterface_0000_0000_0003
    {
    float64 re;
    float64 im;
    } 	cmplx128;

typedef /* [public][public][public] */ struct __MIDL___MIDL_itf_ILVDataInterface_0000_0000_0004
    {
    floatExt re;
    floatExt im;
    } 	cmplxExt;


#pragma pack(pop)
typedef int32 Bool32;

typedef __int64 int64_t;

typedef unsigned __int64 uint64_t;

typedef long HRESULT;

typedef long SCODE;

#pragma once
#pragma once
#pragma region Input Buffer SAL 1 compatibility macros
#pragma endregion Input Buffer SAL 1 compatibility macros
#pragma once

#pragma pack(push, 8)
#pragma once

#pragma pack(push, 8)
typedef unsigned int uintptr_t;

typedef unsigned char *va_list;


#pragma pack(pop)
typedef unsigned int size_t;

typedef size_t rsize_t;

typedef int intptr_t;

typedef int ptrdiff_t;

typedef unsigned short wint_t;

typedef unsigned short wctype_t;

typedef int errno_t;

typedef long __time32_t;

typedef __int64 __time64_t;

typedef __time64_t time_t;

void __cdecl _invalid_parameter_noinfo( void);

void __cdecl _invalid_parameter_noinfo_noreturn( void);

void __cdecl _invoke_watson( 
    const wchar_t *__MIDL____MIDL_itf_ILVDataInterface_0000_00000000,
    const wchar_t *__MIDL____MIDL_itf_ILVDataInterface_0000_00000001,
    const wchar_t *__MIDL____MIDL_itf_ILVDataInterface_0000_00000002,
    unsigned int __MIDL____MIDL_itf_ILVDataInterface_0000_00000003,
    uintptr_t __MIDL____MIDL_itf_ILVDataInterface_0000_00000004);



typedef struct threadlocaleinfostruct *pthreadlocinfo;

typedef struct threadmbcinfostruct *pthreadmbcinfo;


typedef struct localeinfo_struct
    {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
    } 	_locale_tstruct;

typedef struct localeinfo_struct *_locale_t;

typedef struct localerefcount
    {
    unsigned char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
    } 	locrefcount;

typedef struct threadlocaleinfostruct
    {
    int refcount;
    unsigned int lc_codepage;
    unsigned int lc_collate_cp;
    unsigned int lc_time_cp;
    locrefcount lc_category[ 6 ];
    int lc_clike;
    int mb_cur_max;
    int *lconv_intl_refcount;
    int *lconv_num_refcount;
    int *lconv_mon_refcount;
    struct lconv *lconv;
    int *ctype1_refcount;
    unsigned short *ctype1;
    const unsigned short *pctype;
    const unsigned char *pclmap;
    const unsigned char *pcumap;
    struct __lc_time_data *lc_time_curr;
    wchar_t *locale_name[ 6 ];
    } 	threadlocinfo;


#pragma pack(pop)
int *__cdecl _errno( void);

errno_t __cdecl _set_errno( 
    int _Value);

errno_t __cdecl _get_errno( 
    int *_Value);

unsigned long __cdecl __threadid( void);

uintptr_t __cdecl __threadhandle( void);

typedef int32 MgErr;

typedef uInt8 LVBoolean;

#endif // ifndef _fundtypes


extern RPC_IF_HANDLE __MIDL_itf_ILVDataInterface_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ILVDataInterface_0000_0000_v0_0_s_ifspec;

#ifndef __ILVData_INTERFACE_DEFINED__
#define __ILVData_INTERFACE_DEFINED__

/* interface ILVData */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4a4264a2-d5d8-468d-9675-6f1df777b295")
    ILVData : public IUnknown
    {
    public:
        virtual MgErr STDMETHODCALLTYPE GetType( 
            /* [out] */ ILVTypeDescriptor **typeDescriptor) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Equals( 
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Copy( 
            /* [out] */ ILVData **dataOut) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVData * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVData * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVData * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVData * This,
            /* [out] */ ILVData **dataOut);
        
        END_INTERFACE
    } ILVDataVtbl;

    interface ILVData
    {
        CONST_VTBL struct ILVDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVData_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVData_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVData_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVData_INTERFACE_DEFINED__ */


#ifndef __ILVBoolean_INTERFACE_DEFINED__
#define __ILVBoolean_INTERFACE_DEFINED__

/* interface ILVBoolean */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVBoolean;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AB091D1-4154-48e2-BF98-55CC20335184")
    ILVBoolean : public ILVData
    {
    public:
        virtual LVBoolean STDMETHODCALLTYPE Get( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Set( 
            /* [in] */ LVBoolean value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVBooleanVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVBoolean * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVBoolean * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVBoolean * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVBoolean * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVBoolean * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVBoolean * This,
            /* [out] */ ILVData **dataOut);
        
        LVBoolean ( STDMETHODCALLTYPE *Get )( 
            ILVBoolean * This);
        
        MgErr ( STDMETHODCALLTYPE *Set )( 
            ILVBoolean * This,
            /* [in] */ LVBoolean value);
        
        END_INTERFACE
    } ILVBooleanVtbl;

    interface ILVBoolean
    {
        CONST_VTBL struct ILVBooleanVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVBoolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVBoolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVBoolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVBoolean_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVBoolean_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVBoolean_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVBoolean_Get(This)	\
    ( (This)->lpVtbl -> Get(This) ) 

#define ILVBoolean_Set(This,value)	\
    ( (This)->lpVtbl -> Set(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVBoolean_INTERFACE_DEFINED__ */


#ifndef __ILVInt8_INTERFACE_DEFINED__
#define __ILVInt8_INTERFACE_DEFINED__

/* interface ILVInt8 */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVInt8;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f3ee3676-1e8e-42c2-8355-e4c07d4eb769")
    ILVInt8 : public ILVData
    {
    public:
        virtual int8 STDMETHODCALLTYPE Get( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Set( 
            /* [in] */ int8 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVInt8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVInt8 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVInt8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVInt8 * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVInt8 * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVInt8 * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVInt8 * This,
            /* [out] */ ILVData **dataOut);
        
        int8 ( STDMETHODCALLTYPE *Get )( 
            ILVInt8 * This);
        
        MgErr ( STDMETHODCALLTYPE *Set )( 
            ILVInt8 * This,
            /* [in] */ int8 value);
        
        END_INTERFACE
    } ILVInt8Vtbl;

    interface ILVInt8
    {
        CONST_VTBL struct ILVInt8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVInt8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVInt8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVInt8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVInt8_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVInt8_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVInt8_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVInt8_Get(This)	\
    ( (This)->lpVtbl -> Get(This) ) 

#define ILVInt8_Set(This,value)	\
    ( (This)->lpVtbl -> Set(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVInt8_INTERFACE_DEFINED__ */


#ifndef __ILVInt16_INTERFACE_DEFINED__
#define __ILVInt16_INTERFACE_DEFINED__

/* interface ILVInt16 */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVInt16;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8567dfb4-0d6d-46d0-b87f-a5b680d3cd82")
    ILVInt16 : public ILVData
    {
    public:
        virtual int16 STDMETHODCALLTYPE Get( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Set( 
            /* [in] */ int16 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVInt16Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVInt16 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVInt16 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVInt16 * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVInt16 * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVInt16 * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVInt16 * This,
            /* [out] */ ILVData **dataOut);
        
        int16 ( STDMETHODCALLTYPE *Get )( 
            ILVInt16 * This);
        
        MgErr ( STDMETHODCALLTYPE *Set )( 
            ILVInt16 * This,
            /* [in] */ int16 value);
        
        END_INTERFACE
    } ILVInt16Vtbl;

    interface ILVInt16
    {
        CONST_VTBL struct ILVInt16Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVInt16_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVInt16_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVInt16_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVInt16_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVInt16_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVInt16_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVInt16_Get(This)	\
    ( (This)->lpVtbl -> Get(This) ) 

#define ILVInt16_Set(This,value)	\
    ( (This)->lpVtbl -> Set(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVInt16_INTERFACE_DEFINED__ */


#ifndef __ILVInt32_INTERFACE_DEFINED__
#define __ILVInt32_INTERFACE_DEFINED__

/* interface ILVInt32 */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVInt32;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("878fcd1e-c70f-4940-8e54-461a4d1bb5b3")
    ILVInt32 : public ILVData
    {
    public:
        virtual int32 STDMETHODCALLTYPE Get( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Set( 
            /* [in] */ int32 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVInt32Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVInt32 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVInt32 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVInt32 * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVInt32 * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVInt32 * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVInt32 * This,
            /* [out] */ ILVData **dataOut);
        
        int32 ( STDMETHODCALLTYPE *Get )( 
            ILVInt32 * This);
        
        MgErr ( STDMETHODCALLTYPE *Set )( 
            ILVInt32 * This,
            /* [in] */ int32 value);
        
        END_INTERFACE
    } ILVInt32Vtbl;

    interface ILVInt32
    {
        CONST_VTBL struct ILVInt32Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVInt32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVInt32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVInt32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVInt32_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVInt32_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVInt32_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVInt32_Get(This)	\
    ( (This)->lpVtbl -> Get(This) ) 

#define ILVInt32_Set(This,value)	\
    ( (This)->lpVtbl -> Set(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVInt32_INTERFACE_DEFINED__ */


#ifndef __ILVInt64_INTERFACE_DEFINED__
#define __ILVInt64_INTERFACE_DEFINED__

/* interface ILVInt64 */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVInt64;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0344d202-0f76-4efb-ad02-deec0b480e47")
    ILVInt64 : public ILVData
    {
    public:
        virtual int64 STDMETHODCALLTYPE Get( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Set( 
            /* [in] */ int64 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVInt64Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVInt64 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVInt64 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVInt64 * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVInt64 * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVInt64 * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVInt64 * This,
            /* [out] */ ILVData **dataOut);
        
        int64 ( STDMETHODCALLTYPE *Get )( 
            ILVInt64 * This);
        
        MgErr ( STDMETHODCALLTYPE *Set )( 
            ILVInt64 * This,
            /* [in] */ int64 value);
        
        END_INTERFACE
    } ILVInt64Vtbl;

    interface ILVInt64
    {
        CONST_VTBL struct ILVInt64Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVInt64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVInt64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVInt64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVInt64_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVInt64_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVInt64_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVInt64_Get(This)	\
    ( (This)->lpVtbl -> Get(This) ) 

#define ILVInt64_Set(This,value)	\
    ( (This)->lpVtbl -> Set(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVInt64_INTERFACE_DEFINED__ */


#ifndef __ILVuInt8_INTERFACE_DEFINED__
#define __ILVuInt8_INTERFACE_DEFINED__

/* interface ILVuInt8 */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVuInt8;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("35ce47f1-7a7a-43c2-a663-a6340cd72ebb")
    ILVuInt8 : public ILVData
    {
    public:
        virtual uInt8 STDMETHODCALLTYPE Get( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Set( 
            /* [in] */ uInt8 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVuInt8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVuInt8 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVuInt8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVuInt8 * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVuInt8 * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVuInt8 * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVuInt8 * This,
            /* [out] */ ILVData **dataOut);
        
        uInt8 ( STDMETHODCALLTYPE *Get )( 
            ILVuInt8 * This);
        
        MgErr ( STDMETHODCALLTYPE *Set )( 
            ILVuInt8 * This,
            /* [in] */ uInt8 value);
        
        END_INTERFACE
    } ILVuInt8Vtbl;

    interface ILVuInt8
    {
        CONST_VTBL struct ILVuInt8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVuInt8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVuInt8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVuInt8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVuInt8_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVuInt8_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVuInt8_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVuInt8_Get(This)	\
    ( (This)->lpVtbl -> Get(This) ) 

#define ILVuInt8_Set(This,value)	\
    ( (This)->lpVtbl -> Set(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVuInt8_INTERFACE_DEFINED__ */


#ifndef __ILVuInt16_INTERFACE_DEFINED__
#define __ILVuInt16_INTERFACE_DEFINED__

/* interface ILVuInt16 */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVuInt16;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f1d1b174-ce67-4c6e-ada6-064f3f49ba42")
    ILVuInt16 : public ILVData
    {
    public:
        virtual uInt16 STDMETHODCALLTYPE Get( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Set( 
            /* [in] */ uInt16 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVuInt16Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVuInt16 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVuInt16 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVuInt16 * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVuInt16 * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVuInt16 * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVuInt16 * This,
            /* [out] */ ILVData **dataOut);
        
        uInt16 ( STDMETHODCALLTYPE *Get )( 
            ILVuInt16 * This);
        
        MgErr ( STDMETHODCALLTYPE *Set )( 
            ILVuInt16 * This,
            /* [in] */ uInt16 value);
        
        END_INTERFACE
    } ILVuInt16Vtbl;

    interface ILVuInt16
    {
        CONST_VTBL struct ILVuInt16Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVuInt16_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVuInt16_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVuInt16_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVuInt16_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVuInt16_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVuInt16_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVuInt16_Get(This)	\
    ( (This)->lpVtbl -> Get(This) ) 

#define ILVuInt16_Set(This,value)	\
    ( (This)->lpVtbl -> Set(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVuInt16_INTERFACE_DEFINED__ */


#ifndef __ILVuInt32_INTERFACE_DEFINED__
#define __ILVuInt32_INTERFACE_DEFINED__

/* interface ILVuInt32 */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVuInt32;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("edfcfa65-5fe2-45b9-a372-467946433e84")
    ILVuInt32 : public ILVData
    {
    public:
        virtual uInt32 STDMETHODCALLTYPE Get( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Set( 
            /* [in] */ uInt32 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVuInt32Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVuInt32 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVuInt32 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVuInt32 * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVuInt32 * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVuInt32 * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVuInt32 * This,
            /* [out] */ ILVData **dataOut);
        
        uInt32 ( STDMETHODCALLTYPE *Get )( 
            ILVuInt32 * This);
        
        MgErr ( STDMETHODCALLTYPE *Set )( 
            ILVuInt32 * This,
            /* [in] */ uInt32 value);
        
        END_INTERFACE
    } ILVuInt32Vtbl;

    interface ILVuInt32
    {
        CONST_VTBL struct ILVuInt32Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVuInt32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVuInt32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVuInt32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVuInt32_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVuInt32_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVuInt32_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVuInt32_Get(This)	\
    ( (This)->lpVtbl -> Get(This) ) 

#define ILVuInt32_Set(This,value)	\
    ( (This)->lpVtbl -> Set(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVuInt32_INTERFACE_DEFINED__ */


#ifndef __ILVuInt64_INTERFACE_DEFINED__
#define __ILVuInt64_INTERFACE_DEFINED__

/* interface ILVuInt64 */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVuInt64;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b173fe84-2ce5-4d23-b1b2-da1f469e2c31")
    ILVuInt64 : public ILVData
    {
    public:
        virtual uInt64 STDMETHODCALLTYPE Get( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Set( 
            /* [in] */ uInt64 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVuInt64Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVuInt64 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVuInt64 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVuInt64 * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVuInt64 * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVuInt64 * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVuInt64 * This,
            /* [out] */ ILVData **dataOut);
        
        uInt64 ( STDMETHODCALLTYPE *Get )( 
            ILVuInt64 * This);
        
        MgErr ( STDMETHODCALLTYPE *Set )( 
            ILVuInt64 * This,
            /* [in] */ uInt64 value);
        
        END_INTERFACE
    } ILVuInt64Vtbl;

    interface ILVuInt64
    {
        CONST_VTBL struct ILVuInt64Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVuInt64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVuInt64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVuInt64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVuInt64_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVuInt64_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVuInt64_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVuInt64_Get(This)	\
    ( (This)->lpVtbl -> Get(This) ) 

#define ILVuInt64_Set(This,value)	\
    ( (This)->lpVtbl -> Set(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVuInt64_INTERFACE_DEFINED__ */


#ifndef __ILVFloat32_INTERFACE_DEFINED__
#define __ILVFloat32_INTERFACE_DEFINED__

/* interface ILVFloat32 */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVFloat32;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("947ab4f3-5a0c-491a-9f3e-1ffa6ca9b3af")
    ILVFloat32 : public ILVData
    {
    public:
        virtual float32 STDMETHODCALLTYPE Get( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Set( 
            /* [in] */ float32 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVFloat32Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVFloat32 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVFloat32 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVFloat32 * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVFloat32 * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVFloat32 * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVFloat32 * This,
            /* [out] */ ILVData **dataOut);
        
        float32 ( STDMETHODCALLTYPE *Get )( 
            ILVFloat32 * This);
        
        MgErr ( STDMETHODCALLTYPE *Set )( 
            ILVFloat32 * This,
            /* [in] */ float32 value);
        
        END_INTERFACE
    } ILVFloat32Vtbl;

    interface ILVFloat32
    {
        CONST_VTBL struct ILVFloat32Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVFloat32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVFloat32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVFloat32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVFloat32_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVFloat32_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVFloat32_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVFloat32_Get(This)	\
    ( (This)->lpVtbl -> Get(This) ) 

#define ILVFloat32_Set(This,value)	\
    ( (This)->lpVtbl -> Set(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVFloat32_INTERFACE_DEFINED__ */


#ifndef __ILVFloat64_INTERFACE_DEFINED__
#define __ILVFloat64_INTERFACE_DEFINED__

/* interface ILVFloat64 */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVFloat64;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6ba720b2-7641-4657-9a88-e4805c07d953")
    ILVFloat64 : public ILVData
    {
    public:
        virtual float64 STDMETHODCALLTYPE Get( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Set( 
            /* [in] */ float64 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVFloat64Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVFloat64 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVFloat64 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVFloat64 * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVFloat64 * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVFloat64 * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVFloat64 * This,
            /* [out] */ ILVData **dataOut);
        
        float64 ( STDMETHODCALLTYPE *Get )( 
            ILVFloat64 * This);
        
        MgErr ( STDMETHODCALLTYPE *Set )( 
            ILVFloat64 * This,
            /* [in] */ float64 value);
        
        END_INTERFACE
    } ILVFloat64Vtbl;

    interface ILVFloat64
    {
        CONST_VTBL struct ILVFloat64Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVFloat64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVFloat64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVFloat64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVFloat64_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVFloat64_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVFloat64_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVFloat64_Get(This)	\
    ( (This)->lpVtbl -> Get(This) ) 

#define ILVFloat64_Set(This,value)	\
    ( (This)->lpVtbl -> Set(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVFloat64_INTERFACE_DEFINED__ */


#ifndef __ILVFloatExt_INTERFACE_DEFINED__
#define __ILVFloatExt_INTERFACE_DEFINED__

/* interface ILVFloatExt */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVFloatExt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("35b495a1-ef73-4602-a91e-5307ea364870")
    ILVFloatExt : public ILVData
    {
    public:
        virtual floatExt STDMETHODCALLTYPE Get( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Set( 
            /* [in] */ floatExt value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVFloatExtVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVFloatExt * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVFloatExt * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVFloatExt * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVFloatExt * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVFloatExt * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVFloatExt * This,
            /* [out] */ ILVData **dataOut);
        
        floatExt ( STDMETHODCALLTYPE *Get )( 
            ILVFloatExt * This);
        
        MgErr ( STDMETHODCALLTYPE *Set )( 
            ILVFloatExt * This,
            /* [in] */ floatExt value);
        
        END_INTERFACE
    } ILVFloatExtVtbl;

    interface ILVFloatExt
    {
        CONST_VTBL struct ILVFloatExtVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVFloatExt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVFloatExt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVFloatExt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVFloatExt_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVFloatExt_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVFloatExt_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVFloatExt_Get(This)	\
    ( (This)->lpVtbl -> Get(This) ) 

#define ILVFloatExt_Set(This,value)	\
    ( (This)->lpVtbl -> Set(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



floatExt STDMETHODCALLTYPE ILVFloatExt_Get_Proxy( 
    ILVFloatExt * This);


void __RPC_STUB ILVFloatExt_Get_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ILVFloatExt_INTERFACE_DEFINED__ */


#ifndef __ILVComplex64_INTERFACE_DEFINED__
#define __ILVComplex64_INTERFACE_DEFINED__

/* interface ILVComplex64 */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVComplex64;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b34b09a6-e681-4B7B-b81f-27718a7ac22d")
    ILVComplex64 : public ILVData
    {
    public:
        virtual cmplx64 STDMETHODCALLTYPE Get( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Set( 
            /* [in] */ cmplx64 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVComplex64Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVComplex64 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVComplex64 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVComplex64 * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVComplex64 * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVComplex64 * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVComplex64 * This,
            /* [out] */ ILVData **dataOut);
        
        cmplx64 ( STDMETHODCALLTYPE *Get )( 
            ILVComplex64 * This);
        
        MgErr ( STDMETHODCALLTYPE *Set )( 
            ILVComplex64 * This,
            /* [in] */ cmplx64 value);
        
        END_INTERFACE
    } ILVComplex64Vtbl;

    interface ILVComplex64
    {
        CONST_VTBL struct ILVComplex64Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVComplex64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVComplex64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVComplex64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVComplex64_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVComplex64_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVComplex64_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVComplex64_Get(This)	\
    ( (This)->lpVtbl -> Get(This) ) 

#define ILVComplex64_Set(This,value)	\
    ( (This)->lpVtbl -> Set(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



cmplx64 STDMETHODCALLTYPE ILVComplex64_Get_Proxy( 
    ILVComplex64 * This);


void __RPC_STUB ILVComplex64_Get_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ILVComplex64_INTERFACE_DEFINED__ */


#ifndef __ILVComplex128_INTERFACE_DEFINED__
#define __ILVComplex128_INTERFACE_DEFINED__

/* interface ILVComplex128 */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVComplex128;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("29cf50ff-334a-416b-8e62-4305d724ea74")
    ILVComplex128 : public ILVData
    {
    public:
        virtual cmplx128 STDMETHODCALLTYPE Get( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Set( 
            /* [in] */ cmplx128 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVComplex128Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVComplex128 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVComplex128 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVComplex128 * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVComplex128 * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVComplex128 * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVComplex128 * This,
            /* [out] */ ILVData **dataOut);
        
        cmplx128 ( STDMETHODCALLTYPE *Get )( 
            ILVComplex128 * This);
        
        MgErr ( STDMETHODCALLTYPE *Set )( 
            ILVComplex128 * This,
            /* [in] */ cmplx128 value);
        
        END_INTERFACE
    } ILVComplex128Vtbl;

    interface ILVComplex128
    {
        CONST_VTBL struct ILVComplex128Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVComplex128_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVComplex128_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVComplex128_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVComplex128_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVComplex128_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVComplex128_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVComplex128_Get(This)	\
    ( (This)->lpVtbl -> Get(This) ) 

#define ILVComplex128_Set(This,value)	\
    ( (This)->lpVtbl -> Set(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



cmplx128 STDMETHODCALLTYPE ILVComplex128_Get_Proxy( 
    ILVComplex128 * This);


void __RPC_STUB ILVComplex128_Get_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ILVComplex128_INTERFACE_DEFINED__ */


#ifndef __ILVComplexExt_INTERFACE_DEFINED__
#define __ILVComplexExt_INTERFACE_DEFINED__

/* interface ILVComplexExt */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVComplexExt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("09b41f06-659b-4FB8-8c8c-6641fde83303")
    ILVComplexExt : public ILVData
    {
    public:
        virtual cmplxExt STDMETHODCALLTYPE Get( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Set( 
            /* [in] */ cmplxExt value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVComplexExtVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVComplexExt * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVComplexExt * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVComplexExt * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVComplexExt * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVComplexExt * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVComplexExt * This,
            /* [out] */ ILVData **dataOut);
        
        cmplxExt ( STDMETHODCALLTYPE *Get )( 
            ILVComplexExt * This);
        
        MgErr ( STDMETHODCALLTYPE *Set )( 
            ILVComplexExt * This,
            /* [in] */ cmplxExt value);
        
        END_INTERFACE
    } ILVComplexExtVtbl;

    interface ILVComplexExt
    {
        CONST_VTBL struct ILVComplexExtVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVComplexExt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVComplexExt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVComplexExt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVComplexExt_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVComplexExt_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVComplexExt_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVComplexExt_Get(This)	\
    ( (This)->lpVtbl -> Get(This) ) 

#define ILVComplexExt_Set(This,value)	\
    ( (This)->lpVtbl -> Set(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



cmplxExt STDMETHODCALLTYPE ILVComplexExt_Get_Proxy( 
    ILVComplexExt * This);


void __RPC_STUB ILVComplexExt_Get_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ILVComplexExt_INTERFACE_DEFINED__ */


#ifndef __ILVArray_INTERFACE_DEFINED__
#define __ILVArray_INTERFACE_DEFINED__

/* interface ILVArray */
/* [unique][helpstring][uuid][local][object] */ 

typedef struct ArrayDimensionSpecifier
    {
    size_t dimensionSize;
    ptrdiff_t stride;
    } 	ArrayDimensionSpecifier;

typedef struct ArraySpecifier
    {
    void *dataPtr;
    ArrayDimensionSpecifier dimensionSpecifier[ 1 ];
    } 	ArraySpecifier;


EXTERN_C const IID IID_ILVArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5b5e5197-5580-431a-ad73-9ab7261d394d")
    ILVArray : public ILVData
    {
    public:
        virtual MgErr STDMETHODCALLTYPE GetNumDimensions( 
            /* [out] */ uInt32 *numDimensions) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetDimensions( 
            /* [out][in] */ size_t dimensionsBuffer[  ]) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetNumElements( 
            /* [out] */ size_t *numElements) = 0;
        
        virtual Bool32 STDMETHODCALLTYPE IsEmpty( void) = 0;
        
        virtual void STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetArraySpecifier( 
            /* [out][in] */ ArraySpecifier *arraySpecifier) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetElement( 
            /* [in] */ size_t indices[  ],
            /* [in] */ Bool32 makeCopy,
            /* [out] */ ILVData **element) = 0;
        
        virtual MgErr STDMETHODCALLTYPE SetElement( 
            /* [in] */ size_t indices[  ],
            /* [in] */ ILVData *element) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Resize( 
            /* [in] */ size_t dimensions[  ]) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Reshape( 
            /* [in] */ size_t dimensions[  ]) = 0;
        
        virtual MgErr STDMETHODCALLTYPE IndexArray( 
            /* [in] */ size_t indices[  ],
            /* [out] */ ILVArray **array) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVArray * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVArray * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVArray * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVArray * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVArray * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVArray * This,
            /* [out] */ ILVData **dataOut);
        
        MgErr ( STDMETHODCALLTYPE *GetNumDimensions )( 
            ILVArray * This,
            /* [out] */ uInt32 *numDimensions);
        
        MgErr ( STDMETHODCALLTYPE *GetDimensions )( 
            ILVArray * This,
            /* [out][in] */ size_t dimensionsBuffer[  ]);
        
        MgErr ( STDMETHODCALLTYPE *GetNumElements )( 
            ILVArray * This,
            /* [out] */ size_t *numElements);
        
        Bool32 ( STDMETHODCALLTYPE *IsEmpty )( 
            ILVArray * This);
        
        void ( STDMETHODCALLTYPE *Clear )( 
            ILVArray * This);
        
        MgErr ( STDMETHODCALLTYPE *GetArraySpecifier )( 
            ILVArray * This,
            /* [out][in] */ ArraySpecifier *arraySpecifier);
        
        MgErr ( STDMETHODCALLTYPE *GetElement )( 
            ILVArray * This,
            /* [in] */ size_t indices[  ],
            /* [in] */ Bool32 makeCopy,
            /* [out] */ ILVData **element);
        
        MgErr ( STDMETHODCALLTYPE *SetElement )( 
            ILVArray * This,
            /* [in] */ size_t indices[  ],
            /* [in] */ ILVData *element);
        
        MgErr ( STDMETHODCALLTYPE *Resize )( 
            ILVArray * This,
            /* [in] */ size_t dimensions[  ]);
        
        MgErr ( STDMETHODCALLTYPE *Reshape )( 
            ILVArray * This,
            /* [in] */ size_t dimensions[  ]);
        
        MgErr ( STDMETHODCALLTYPE *IndexArray )( 
            ILVArray * This,
            /* [in] */ size_t indices[  ],
            /* [out] */ ILVArray **array);
        
        END_INTERFACE
    } ILVArrayVtbl;

    interface ILVArray
    {
        CONST_VTBL struct ILVArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVArray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVArray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVArray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVArray_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVArray_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVArray_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVArray_GetNumDimensions(This,numDimensions)	\
    ( (This)->lpVtbl -> GetNumDimensions(This,numDimensions) ) 

#define ILVArray_GetDimensions(This,dimensionsBuffer)	\
    ( (This)->lpVtbl -> GetDimensions(This,dimensionsBuffer) ) 

#define ILVArray_GetNumElements(This,numElements)	\
    ( (This)->lpVtbl -> GetNumElements(This,numElements) ) 

#define ILVArray_IsEmpty(This)	\
    ( (This)->lpVtbl -> IsEmpty(This) ) 

#define ILVArray_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ILVArray_GetArraySpecifier(This,arraySpecifier)	\
    ( (This)->lpVtbl -> GetArraySpecifier(This,arraySpecifier) ) 

#define ILVArray_GetElement(This,indices,makeCopy,element)	\
    ( (This)->lpVtbl -> GetElement(This,indices,makeCopy,element) ) 

#define ILVArray_SetElement(This,indices,element)	\
    ( (This)->lpVtbl -> SetElement(This,indices,element) ) 

#define ILVArray_Resize(This,dimensions)	\
    ( (This)->lpVtbl -> Resize(This,dimensions) ) 

#define ILVArray_Reshape(This,dimensions)	\
    ( (This)->lpVtbl -> Reshape(This,dimensions) ) 

#define ILVArray_IndexArray(This,indices,array)	\
    ( (This)->lpVtbl -> IndexArray(This,indices,array) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVArray_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ILVDataInterface_0000_0017 */
/* [local] */ 

// Template version of ArraySpecifier for use with multiple dimensions
// Use this to declare a multi-dimensional ArraySpecifier on the stack (avoiding the heap allocator)
// Usage:
//	ArraySpecifierT<3> arraySpec; // 3-dimensional array specifier
//	err = pIface->GetArraySpecifier((ArraySpecifier*)&arraySpec); // Cast necessary to convert to C-style ArraySpecifier
#if defined(__cplusplus)
template<int nDims> struct ArraySpecifierT
{
	void* dataPtr;
	ArrayDimensionSpecifier dimensionSpecifier[nDims];
};
#endif // defined(__cplusplus)


extern RPC_IF_HANDLE __MIDL_itf_ILVDataInterface_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ILVDataInterface_0000_0017_v0_0_s_ifspec;

#ifndef __ILVString_INTERFACE_DEFINED__
#define __ILVString_INTERFACE_DEFINED__

/* interface ILVString */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVString;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c021ae89-68d7-47e9-9ed7-69d9501c4f24")
    ILVString : public ILVData
    {
    public:
        virtual MgErr STDMETHODCALLTYPE Get( 
            /* [out] */ const uChar **stringBuffer,
            /* [out] */ size_t *bufferLength) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetCStr( 
            const uChar **buffer) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Set( 
            /* [in] */ const uChar *stringBuffer,
            /* [in] */ size_t bufferLength) = 0;
        
        virtual MgErr STDMETHODCALLTYPE SetILVString( 
            /* [in] */ const ILVString *str) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Append( 
            /* [in] */ const uChar *stringBuffer,
            /* [in] */ size_t bufferLength) = 0;
        
        virtual MgErr STDMETHODCALLTYPE AppendILVString( 
            /* [in] */ const ILVString *str) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Insert( 
            /* [in] */ size_t position,
            /* [in] */ const uChar *stringBuffer,
            /* [in] */ size_t bufferLength) = 0;
        
        virtual MgErr STDMETHODCALLTYPE InsertILVString( 
            /* [in] */ size_t position,
            /* [in] */ const ILVString *str) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Replace( 
            /* [in] */ size_t position,
            /* [in] */ const uChar *stringBuffer,
            /* [in] */ size_t numElements) = 0;
        
        virtual MgErr STDMETHODCALLTYPE ReplaceILVString( 
            /* [in] */ size_t position,
            /* [in] */ const ILVString *str) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Erase( 
            /* [in] */ size_t position,
            /* [in] */ size_t numElements) = 0;
        
        virtual MgErr STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetCapacity( 
            /* [out] */ size_t *capacity) = 0;
        
        virtual MgErr STDMETHODCALLTYPE SetCapacity( 
            /* [in] */ size_t capacity) = 0;
        
        virtual Bool32 STDMETHODCALLTYPE IsEmpty( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE SubString( 
            /* [in] */ size_t position,
            /* [in] */ size_t length,
            /* [out] */ ILVString **subString) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetLength( 
            /* [out] */ size_t *length) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetElement( 
            /* [in] */ size_t position,
            /* [out] */ uChar *element) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVStringVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVString * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVString * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVString * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVString * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVString * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVString * This,
            /* [out] */ ILVData **dataOut);
        
        MgErr ( STDMETHODCALLTYPE *Get )( 
            ILVString * This,
            /* [out] */ const uChar **stringBuffer,
            /* [out] */ size_t *bufferLength);
        
        MgErr ( STDMETHODCALLTYPE *GetCStr )( 
            ILVString * This,
            const uChar **buffer);
        
        MgErr ( STDMETHODCALLTYPE *Set )( 
            ILVString * This,
            /* [in] */ const uChar *stringBuffer,
            /* [in] */ size_t bufferLength);
        
        MgErr ( STDMETHODCALLTYPE *SetILVString )( 
            ILVString * This,
            /* [in] */ const ILVString *str);
        
        MgErr ( STDMETHODCALLTYPE *Append )( 
            ILVString * This,
            /* [in] */ const uChar *stringBuffer,
            /* [in] */ size_t bufferLength);
        
        MgErr ( STDMETHODCALLTYPE *AppendILVString )( 
            ILVString * This,
            /* [in] */ const ILVString *str);
        
        MgErr ( STDMETHODCALLTYPE *Insert )( 
            ILVString * This,
            /* [in] */ size_t position,
            /* [in] */ const uChar *stringBuffer,
            /* [in] */ size_t bufferLength);
        
        MgErr ( STDMETHODCALLTYPE *InsertILVString )( 
            ILVString * This,
            /* [in] */ size_t position,
            /* [in] */ const ILVString *str);
        
        MgErr ( STDMETHODCALLTYPE *Replace )( 
            ILVString * This,
            /* [in] */ size_t position,
            /* [in] */ const uChar *stringBuffer,
            /* [in] */ size_t numElements);
        
        MgErr ( STDMETHODCALLTYPE *ReplaceILVString )( 
            ILVString * This,
            /* [in] */ size_t position,
            /* [in] */ const ILVString *str);
        
        MgErr ( STDMETHODCALLTYPE *Erase )( 
            ILVString * This,
            /* [in] */ size_t position,
            /* [in] */ size_t numElements);
        
        MgErr ( STDMETHODCALLTYPE *Clear )( 
            ILVString * This);
        
        MgErr ( STDMETHODCALLTYPE *GetCapacity )( 
            ILVString * This,
            /* [out] */ size_t *capacity);
        
        MgErr ( STDMETHODCALLTYPE *SetCapacity )( 
            ILVString * This,
            /* [in] */ size_t capacity);
        
        Bool32 ( STDMETHODCALLTYPE *IsEmpty )( 
            ILVString * This);
        
        MgErr ( STDMETHODCALLTYPE *SubString )( 
            ILVString * This,
            /* [in] */ size_t position,
            /* [in] */ size_t length,
            /* [out] */ ILVString **subString);
        
        MgErr ( STDMETHODCALLTYPE *GetLength )( 
            ILVString * This,
            /* [out] */ size_t *length);
        
        MgErr ( STDMETHODCALLTYPE *GetElement )( 
            ILVString * This,
            /* [in] */ size_t position,
            /* [out] */ uChar *element);
        
        END_INTERFACE
    } ILVStringVtbl;

    interface ILVString
    {
        CONST_VTBL struct ILVStringVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVString_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVString_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVString_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVString_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVString_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVString_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVString_Get(This,stringBuffer,bufferLength)	\
    ( (This)->lpVtbl -> Get(This,stringBuffer,bufferLength) ) 

#define ILVString_GetCStr(This,buffer)	\
    ( (This)->lpVtbl -> GetCStr(This,buffer) ) 

#define ILVString_Set(This,stringBuffer,bufferLength)	\
    ( (This)->lpVtbl -> Set(This,stringBuffer,bufferLength) ) 

#define ILVString_SetILVString(This,str)	\
    ( (This)->lpVtbl -> SetILVString(This,str) ) 

#define ILVString_Append(This,stringBuffer,bufferLength)	\
    ( (This)->lpVtbl -> Append(This,stringBuffer,bufferLength) ) 

#define ILVString_AppendILVString(This,str)	\
    ( (This)->lpVtbl -> AppendILVString(This,str) ) 

#define ILVString_Insert(This,position,stringBuffer,bufferLength)	\
    ( (This)->lpVtbl -> Insert(This,position,stringBuffer,bufferLength) ) 

#define ILVString_InsertILVString(This,position,str)	\
    ( (This)->lpVtbl -> InsertILVString(This,position,str) ) 

#define ILVString_Replace(This,position,stringBuffer,numElements)	\
    ( (This)->lpVtbl -> Replace(This,position,stringBuffer,numElements) ) 

#define ILVString_ReplaceILVString(This,position,str)	\
    ( (This)->lpVtbl -> ReplaceILVString(This,position,str) ) 

#define ILVString_Erase(This,position,numElements)	\
    ( (This)->lpVtbl -> Erase(This,position,numElements) ) 

#define ILVString_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ILVString_GetCapacity(This,capacity)	\
    ( (This)->lpVtbl -> GetCapacity(This,capacity) ) 

#define ILVString_SetCapacity(This,capacity)	\
    ( (This)->lpVtbl -> SetCapacity(This,capacity) ) 

#define ILVString_IsEmpty(This)	\
    ( (This)->lpVtbl -> IsEmpty(This) ) 

#define ILVString_SubString(This,position,length,subString)	\
    ( (This)->lpVtbl -> SubString(This,position,length,subString) ) 

#define ILVString_GetLength(This,length)	\
    ( (This)->lpVtbl -> GetLength(This,length) ) 

#define ILVString_GetElement(This,position,element)	\
    ( (This)->lpVtbl -> GetElement(This,position,element) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVString_INTERFACE_DEFINED__ */


#ifndef __ILVCluster_INTERFACE_DEFINED__
#define __ILVCluster_INTERFACE_DEFINED__

/* interface ILVCluster */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVCluster;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5377527d-a5aa-4819-8933-adbf444e9ff4")
    ILVCluster : public ILVData
    {
    public:
        virtual MgErr STDMETHODCALLTYPE GetElement( 
            /* [in] */ uInt32 position,
            /* [in] */ Bool32 makeCopy,
            /* [out] */ ILVData **element) = 0;
        
        virtual MgErr STDMETHODCALLTYPE SetElement( 
            /* [in] */ uInt32 position,
            /* [in] */ ILVData *element) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetScalarElement( 
            /* [in] */ uInt32 position,
            /* [in] */ uInt32 elementSize,
            /* [out] */ void *element) = 0;
        
        virtual MgErr STDMETHODCALLTYPE SetScalarElement( 
            /* [in] */ uInt32 position,
            /* [in] */ uInt32 elementSize,
            /* [out] */ void *element) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVClusterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVCluster * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVCluster * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVCluster * This);
        
        MgErr ( STDMETHODCALLTYPE *GetType )( 
            ILVCluster * This,
            /* [out] */ ILVTypeDescriptor **typeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *Equals )( 
            ILVCluster * This,
            /* [in] */ ILVData *data,
            /* [out] */ Bool32 *isEqual);
        
        MgErr ( STDMETHODCALLTYPE *Copy )( 
            ILVCluster * This,
            /* [out] */ ILVData **dataOut);
        
        MgErr ( STDMETHODCALLTYPE *GetElement )( 
            ILVCluster * This,
            /* [in] */ uInt32 position,
            /* [in] */ Bool32 makeCopy,
            /* [out] */ ILVData **element);
        
        MgErr ( STDMETHODCALLTYPE *SetElement )( 
            ILVCluster * This,
            /* [in] */ uInt32 position,
            /* [in] */ ILVData *element);
        
        MgErr ( STDMETHODCALLTYPE *GetScalarElement )( 
            ILVCluster * This,
            /* [in] */ uInt32 position,
            /* [in] */ uInt32 elementSize,
            /* [out] */ void *element);
        
        MgErr ( STDMETHODCALLTYPE *SetScalarElement )( 
            ILVCluster * This,
            /* [in] */ uInt32 position,
            /* [in] */ uInt32 elementSize,
            /* [out] */ void *element);
        
        END_INTERFACE
    } ILVClusterVtbl;

    interface ILVCluster
    {
        CONST_VTBL struct ILVClusterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVCluster_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVCluster_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVCluster_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVCluster_GetType(This,typeDescriptor)	\
    ( (This)->lpVtbl -> GetType(This,typeDescriptor) ) 

#define ILVCluster_Equals(This,data,isEqual)	\
    ( (This)->lpVtbl -> Equals(This,data,isEqual) ) 

#define ILVCluster_Copy(This,dataOut)	\
    ( (This)->lpVtbl -> Copy(This,dataOut) ) 


#define ILVCluster_GetElement(This,position,makeCopy,element)	\
    ( (This)->lpVtbl -> GetElement(This,position,makeCopy,element) ) 

#define ILVCluster_SetElement(This,position,element)	\
    ( (This)->lpVtbl -> SetElement(This,position,element) ) 

#define ILVCluster_GetScalarElement(This,position,elementSize,element)	\
    ( (This)->lpVtbl -> GetScalarElement(This,position,elementSize,element) ) 

#define ILVCluster_SetScalarElement(This,position,elementSize,element)	\
    ( (This)->lpVtbl -> SetScalarElement(This,position,elementSize,element) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVCluster_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


