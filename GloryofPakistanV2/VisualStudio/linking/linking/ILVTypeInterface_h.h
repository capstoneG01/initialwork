

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Mon Sep 11 18:26:03 2017
 */
/* Compiler settings for ILVTypeInterface.idl:
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

#ifndef __ILVTypeInterface_h_h__
#define __ILVTypeInterface_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ILVTypeDescriptor_FWD_DEFINED__
#define __ILVTypeDescriptor_FWD_DEFINED__
typedef interface ILVTypeDescriptor ILVTypeDescriptor;

#endif 	/* __ILVTypeDescriptor_FWD_DEFINED__ */


#ifndef __ILVBooleanTypeDescriptor_FWD_DEFINED__
#define __ILVBooleanTypeDescriptor_FWD_DEFINED__
typedef interface ILVBooleanTypeDescriptor ILVBooleanTypeDescriptor;

#endif 	/* __ILVBooleanTypeDescriptor_FWD_DEFINED__ */


#ifndef __ILVNumericTypeDescriptor_FWD_DEFINED__
#define __ILVNumericTypeDescriptor_FWD_DEFINED__
typedef interface ILVNumericTypeDescriptor ILVNumericTypeDescriptor;

#endif 	/* __ILVNumericTypeDescriptor_FWD_DEFINED__ */


#ifndef __ILVArrayTypeDescriptor_FWD_DEFINED__
#define __ILVArrayTypeDescriptor_FWD_DEFINED__
typedef interface ILVArrayTypeDescriptor ILVArrayTypeDescriptor;

#endif 	/* __ILVArrayTypeDescriptor_FWD_DEFINED__ */


#ifndef __ILVStringTypeDescriptor_FWD_DEFINED__
#define __ILVStringTypeDescriptor_FWD_DEFINED__
typedef interface ILVStringTypeDescriptor ILVStringTypeDescriptor;

#endif 	/* __ILVStringTypeDescriptor_FWD_DEFINED__ */


#ifndef __ILVClusterTypeDescriptor_FWD_DEFINED__
#define __ILVClusterTypeDescriptor_FWD_DEFINED__
typedef interface ILVClusterTypeDescriptor ILVClusterTypeDescriptor;

#endif 	/* __ILVClusterTypeDescriptor_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_ILVTypeInterface_0000_0000 */
/* [local] */ 

// ==================================================================
// NI CONFIDENTIAL													
// © Copyright 2006-2008 by National Instruments Corp.				
// All rights reserved.												
//																	
// @file		ILVTypeInterface.idl									
// @brief	Interface definitions for LabVIEW types.				
//			The files ILVTypeInterface_i.c and ILVTypeInterface.h	
//			are generated using this ILVTypeInterface.idl.			
// ==================================================================


#include "extcode.h"
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

typedef /* [public][public][public] */ struct __MIDL___MIDL_itf_ILVTypeInterface_0000_0000_0001
    {
    int32 mlo;
    int32 mhi;
    int16 e;
    } 	floatExt;

typedef /* [public] */ struct __MIDL___MIDL_itf_ILVTypeInterface_0000_0000_0002
    {
    float32 re;
    float32 im;
    } 	cmplx64;

typedef /* [public] */ struct __MIDL___MIDL_itf_ILVTypeInterface_0000_0000_0003
    {
    float64 re;
    float64 im;
    } 	cmplx128;

typedef /* [public] */ struct __MIDL___MIDL_itf_ILVTypeInterface_0000_0000_0004
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
    const wchar_t *__MIDL____MIDL_itf_ILVTypeInterface_0000_00000000,
    const wchar_t *__MIDL____MIDL_itf_ILVTypeInterface_0000_00000001,
    const wchar_t *__MIDL____MIDL_itf_ILVTypeInterface_0000_00000002,
    unsigned int __MIDL____MIDL_itf_ILVTypeInterface_0000_00000003,
    uintptr_t __MIDL____MIDL_itf_ILVTypeInterface_0000_00000004);



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

#endif // ifndef _fundtypes


extern RPC_IF_HANDLE __MIDL_itf_ILVTypeInterface_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ILVTypeInterface_0000_0000_v0_0_s_ifspec;

#ifndef __ILVTypeDescriptor_INTERFACE_DEFINED__
#define __ILVTypeDescriptor_INTERFACE_DEFINED__

/* interface ILVTypeDescriptor */
/* [unique][helpstring][uuid][local][object] */ 

typedef /* [public] */ 
enum __MIDL_ILVTypeDescriptor_0005
    {
        kCompareDefaultCheck	= 0,
        kCompareAllNameCheck	= 0x1,
        kCompareSubNameCheck	= 0x2,
        kCompareNoTypeDefCheck	= 0x8
    } 	CompareWithOptionMasks;


EXTERN_C const IID IID_ILVTypeDescriptor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("09a66b9c-3683-4f5c-b4ce-b7e428fc3914")
    ILVTypeDescriptor : public IUnknown
    {
    public:
        virtual MgErr STDMETHODCALLTYPE Compare( 
            /* [in] */ ILVTypeDescriptor *type,
            /* [out] */ int32 *retVal) = 0;
        
        virtual MgErr STDMETHODCALLTYPE CompareWithOptions( 
            /* [in] */ ILVTypeDescriptor *type,
            /* [in] */ int32 compareOptions,
            /* [out] */ int32 *retVal) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetTypeCode( 
            /* [out] */ int16 *typeCode) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetInternalLVTypeDescriptor( 
            /* [out] */ void **ppInternalTypeDesc) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVTypeDescriptorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVTypeDescriptor * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVTypeDescriptor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVTypeDescriptor * This);
        
        MgErr ( STDMETHODCALLTYPE *Compare )( 
            ILVTypeDescriptor * This,
            /* [in] */ ILVTypeDescriptor *type,
            /* [out] */ int32 *retVal);
        
        MgErr ( STDMETHODCALLTYPE *CompareWithOptions )( 
            ILVTypeDescriptor * This,
            /* [in] */ ILVTypeDescriptor *type,
            /* [in] */ int32 compareOptions,
            /* [out] */ int32 *retVal);
        
        MgErr ( STDMETHODCALLTYPE *GetTypeCode )( 
            ILVTypeDescriptor * This,
            /* [out] */ int16 *typeCode);
        
        MgErr ( STDMETHODCALLTYPE *GetInternalLVTypeDescriptor )( 
            ILVTypeDescriptor * This,
            /* [out] */ void **ppInternalTypeDesc);
        
        END_INTERFACE
    } ILVTypeDescriptorVtbl;

    interface ILVTypeDescriptor
    {
        CONST_VTBL struct ILVTypeDescriptorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVTypeDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVTypeDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVTypeDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVTypeDescriptor_Compare(This,type,retVal)	\
    ( (This)->lpVtbl -> Compare(This,type,retVal) ) 

#define ILVTypeDescriptor_CompareWithOptions(This,type,compareOptions,retVal)	\
    ( (This)->lpVtbl -> CompareWithOptions(This,type,compareOptions,retVal) ) 

#define ILVTypeDescriptor_GetTypeCode(This,typeCode)	\
    ( (This)->lpVtbl -> GetTypeCode(This,typeCode) ) 

#define ILVTypeDescriptor_GetInternalLVTypeDescriptor(This,ppInternalTypeDesc)	\
    ( (This)->lpVtbl -> GetInternalLVTypeDescriptor(This,ppInternalTypeDesc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVTypeDescriptor_INTERFACE_DEFINED__ */


#ifndef __ILVBooleanTypeDescriptor_INTERFACE_DEFINED__
#define __ILVBooleanTypeDescriptor_INTERFACE_DEFINED__

/* interface ILVBooleanTypeDescriptor */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVBooleanTypeDescriptor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("234324FE-6E30-4cca-98F0-155793F2C682")
    ILVBooleanTypeDescriptor : public ILVTypeDescriptor
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct ILVBooleanTypeDescriptorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVBooleanTypeDescriptor * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVBooleanTypeDescriptor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVBooleanTypeDescriptor * This);
        
        MgErr ( STDMETHODCALLTYPE *Compare )( 
            ILVBooleanTypeDescriptor * This,
            /* [in] */ ILVTypeDescriptor *type,
            /* [out] */ int32 *retVal);
        
        MgErr ( STDMETHODCALLTYPE *CompareWithOptions )( 
            ILVBooleanTypeDescriptor * This,
            /* [in] */ ILVTypeDescriptor *type,
            /* [in] */ int32 compareOptions,
            /* [out] */ int32 *retVal);
        
        MgErr ( STDMETHODCALLTYPE *GetTypeCode )( 
            ILVBooleanTypeDescriptor * This,
            /* [out] */ int16 *typeCode);
        
        MgErr ( STDMETHODCALLTYPE *GetInternalLVTypeDescriptor )( 
            ILVBooleanTypeDescriptor * This,
            /* [out] */ void **ppInternalTypeDesc);
        
        END_INTERFACE
    } ILVBooleanTypeDescriptorVtbl;

    interface ILVBooleanTypeDescriptor
    {
        CONST_VTBL struct ILVBooleanTypeDescriptorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVBooleanTypeDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVBooleanTypeDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVBooleanTypeDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVBooleanTypeDescriptor_Compare(This,type,retVal)	\
    ( (This)->lpVtbl -> Compare(This,type,retVal) ) 

#define ILVBooleanTypeDescriptor_CompareWithOptions(This,type,compareOptions,retVal)	\
    ( (This)->lpVtbl -> CompareWithOptions(This,type,compareOptions,retVal) ) 

#define ILVBooleanTypeDescriptor_GetTypeCode(This,typeCode)	\
    ( (This)->lpVtbl -> GetTypeCode(This,typeCode) ) 

#define ILVBooleanTypeDescriptor_GetInternalLVTypeDescriptor(This,ppInternalTypeDesc)	\
    ( (This)->lpVtbl -> GetInternalLVTypeDescriptor(This,ppInternalTypeDesc) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVBooleanTypeDescriptor_INTERFACE_DEFINED__ */


#ifndef __ILVNumericTypeDescriptor_INTERFACE_DEFINED__
#define __ILVNumericTypeDescriptor_INTERFACE_DEFINED__

/* interface ILVNumericTypeDescriptor */
/* [unique][helpstring][uuid][local][object] */ 

typedef /* [public][public] */ 
enum __MIDL_ILVNumericTypeDescriptor_0001
    {
        kNonNumericInterfaceCode	= 0,
        kInt8InterfaceCode	= ( kNonNumericInterfaceCode + 1 ) ,
        kInt16InterfaceCode	= ( kInt8InterfaceCode + 1 ) ,
        kInt32InterfaceCode	= ( kInt16InterfaceCode + 1 ) ,
        kInt64InterfaceCode	= ( kInt32InterfaceCode + 1 ) ,
        kUInt8InterfaceCode	= ( kInt64InterfaceCode + 1 ) ,
        kUInt16InterfaceCode	= ( kUInt8InterfaceCode + 1 ) ,
        kUInt32InterfaceCode	= ( kUInt16InterfaceCode + 1 ) ,
        kUInt64InterfaceCode	= ( kUInt32InterfaceCode + 1 ) ,
        kFloat32InterfaceCode	= ( kUInt64InterfaceCode + 1 ) ,
        kFloat64InterfaceCode	= ( kFloat32InterfaceCode + 1 ) ,
        kFloatExtInterfaceCode	= ( kFloat64InterfaceCode + 1 ) ,
        kComplex64InterfaceCode	= ( kFloatExtInterfaceCode + 1 ) ,
        kComplex128InterfaceCode	= ( kComplex64InterfaceCode + 1 ) ,
        kComplexExtInterfaceCode	= ( kComplex128InterfaceCode + 1 ) 
    } 	NumericInterfaceCode;


EXTERN_C const IID IID_ILVNumericTypeDescriptor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("da09ad59-f1b8-46b3-aba0-4b48c98a8afb")
    ILVNumericTypeDescriptor : public ILVTypeDescriptor
    {
    public:
        virtual MgErr STDMETHODCALLTYPE GetNumericCode( 
            /* [out] */ NumericInterfaceCode *numericCode) = 0;
        
        virtual Bool32 STDMETHODCALLTYPE IsEnum( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetEnumNumElements( 
            /* [out] */ uInt32 *numElements) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetEnumElementName( 
            /* [in] */ uInt32 position,
            /* [out] */ const uChar **elementName,
            /* [out] */ size_t *elementNameLength) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetEnumElementNameILVString( 
            /* [in] */ uInt32 position,
            /* [out] */ ILVString **elementName) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetEnumElementNumber( 
            /* [in] */ const uChar *elementName,
            /* [in] */ size_t elementNameLength,
            /* [out] */ uInt32 *position) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetEnumElementNumberILVString( 
            /* [in] */ ILVString *elementName,
            /* [out] */ uInt32 *position) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVNumericTypeDescriptorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVNumericTypeDescriptor * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVNumericTypeDescriptor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVNumericTypeDescriptor * This);
        
        MgErr ( STDMETHODCALLTYPE *Compare )( 
            ILVNumericTypeDescriptor * This,
            /* [in] */ ILVTypeDescriptor *type,
            /* [out] */ int32 *retVal);
        
        MgErr ( STDMETHODCALLTYPE *CompareWithOptions )( 
            ILVNumericTypeDescriptor * This,
            /* [in] */ ILVTypeDescriptor *type,
            /* [in] */ int32 compareOptions,
            /* [out] */ int32 *retVal);
        
        MgErr ( STDMETHODCALLTYPE *GetTypeCode )( 
            ILVNumericTypeDescriptor * This,
            /* [out] */ int16 *typeCode);
        
        MgErr ( STDMETHODCALLTYPE *GetInternalLVTypeDescriptor )( 
            ILVNumericTypeDescriptor * This,
            /* [out] */ void **ppInternalTypeDesc);
        
        MgErr ( STDMETHODCALLTYPE *GetNumericCode )( 
            ILVNumericTypeDescriptor * This,
            /* [out] */ NumericInterfaceCode *numericCode);
        
        Bool32 ( STDMETHODCALLTYPE *IsEnum )( 
            ILVNumericTypeDescriptor * This);
        
        MgErr ( STDMETHODCALLTYPE *GetEnumNumElements )( 
            ILVNumericTypeDescriptor * This,
            /* [out] */ uInt32 *numElements);
        
        MgErr ( STDMETHODCALLTYPE *GetEnumElementName )( 
            ILVNumericTypeDescriptor * This,
            /* [in] */ uInt32 position,
            /* [out] */ const uChar **elementName,
            /* [out] */ size_t *elementNameLength);
        
        MgErr ( STDMETHODCALLTYPE *GetEnumElementNameILVString )( 
            ILVNumericTypeDescriptor * This,
            /* [in] */ uInt32 position,
            /* [out] */ ILVString **elementName);
        
        MgErr ( STDMETHODCALLTYPE *GetEnumElementNumber )( 
            ILVNumericTypeDescriptor * This,
            /* [in] */ const uChar *elementName,
            /* [in] */ size_t elementNameLength,
            /* [out] */ uInt32 *position);
        
        MgErr ( STDMETHODCALLTYPE *GetEnumElementNumberILVString )( 
            ILVNumericTypeDescriptor * This,
            /* [in] */ ILVString *elementName,
            /* [out] */ uInt32 *position);
        
        END_INTERFACE
    } ILVNumericTypeDescriptorVtbl;

    interface ILVNumericTypeDescriptor
    {
        CONST_VTBL struct ILVNumericTypeDescriptorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVNumericTypeDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVNumericTypeDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVNumericTypeDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVNumericTypeDescriptor_Compare(This,type,retVal)	\
    ( (This)->lpVtbl -> Compare(This,type,retVal) ) 

#define ILVNumericTypeDescriptor_CompareWithOptions(This,type,compareOptions,retVal)	\
    ( (This)->lpVtbl -> CompareWithOptions(This,type,compareOptions,retVal) ) 

#define ILVNumericTypeDescriptor_GetTypeCode(This,typeCode)	\
    ( (This)->lpVtbl -> GetTypeCode(This,typeCode) ) 

#define ILVNumericTypeDescriptor_GetInternalLVTypeDescriptor(This,ppInternalTypeDesc)	\
    ( (This)->lpVtbl -> GetInternalLVTypeDescriptor(This,ppInternalTypeDesc) ) 


#define ILVNumericTypeDescriptor_GetNumericCode(This,numericCode)	\
    ( (This)->lpVtbl -> GetNumericCode(This,numericCode) ) 

#define ILVNumericTypeDescriptor_IsEnum(This)	\
    ( (This)->lpVtbl -> IsEnum(This) ) 

#define ILVNumericTypeDescriptor_GetEnumNumElements(This,numElements)	\
    ( (This)->lpVtbl -> GetEnumNumElements(This,numElements) ) 

#define ILVNumericTypeDescriptor_GetEnumElementName(This,position,elementName,elementNameLength)	\
    ( (This)->lpVtbl -> GetEnumElementName(This,position,elementName,elementNameLength) ) 

#define ILVNumericTypeDescriptor_GetEnumElementNameILVString(This,position,elementName)	\
    ( (This)->lpVtbl -> GetEnumElementNameILVString(This,position,elementName) ) 

#define ILVNumericTypeDescriptor_GetEnumElementNumber(This,elementName,elementNameLength,position)	\
    ( (This)->lpVtbl -> GetEnumElementNumber(This,elementName,elementNameLength,position) ) 

#define ILVNumericTypeDescriptor_GetEnumElementNumberILVString(This,elementName,position)	\
    ( (This)->lpVtbl -> GetEnumElementNumberILVString(This,elementName,position) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVNumericTypeDescriptor_INTERFACE_DEFINED__ */


#ifndef __ILVArrayTypeDescriptor_INTERFACE_DEFINED__
#define __ILVArrayTypeDescriptor_INTERFACE_DEFINED__

/* interface ILVArrayTypeDescriptor */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVArrayTypeDescriptor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c2d6f738-f5b3-4db1-a1fa-5672fdeaf60f")
    ILVArrayTypeDescriptor : public ILVTypeDescriptor
    {
    public:
        virtual MgErr STDMETHODCALLTYPE GetElementTypeDescriptor( 
            /* [out] */ ILVTypeDescriptor **elementTypeDescriptor) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetNumDimensions( 
            /* [out] */ uInt32 *numDimensions) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVArrayTypeDescriptorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVArrayTypeDescriptor * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVArrayTypeDescriptor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVArrayTypeDescriptor * This);
        
        MgErr ( STDMETHODCALLTYPE *Compare )( 
            ILVArrayTypeDescriptor * This,
            /* [in] */ ILVTypeDescriptor *type,
            /* [out] */ int32 *retVal);
        
        MgErr ( STDMETHODCALLTYPE *CompareWithOptions )( 
            ILVArrayTypeDescriptor * This,
            /* [in] */ ILVTypeDescriptor *type,
            /* [in] */ int32 compareOptions,
            /* [out] */ int32 *retVal);
        
        MgErr ( STDMETHODCALLTYPE *GetTypeCode )( 
            ILVArrayTypeDescriptor * This,
            /* [out] */ int16 *typeCode);
        
        MgErr ( STDMETHODCALLTYPE *GetInternalLVTypeDescriptor )( 
            ILVArrayTypeDescriptor * This,
            /* [out] */ void **ppInternalTypeDesc);
        
        MgErr ( STDMETHODCALLTYPE *GetElementTypeDescriptor )( 
            ILVArrayTypeDescriptor * This,
            /* [out] */ ILVTypeDescriptor **elementTypeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *GetNumDimensions )( 
            ILVArrayTypeDescriptor * This,
            /* [out] */ uInt32 *numDimensions);
        
        END_INTERFACE
    } ILVArrayTypeDescriptorVtbl;

    interface ILVArrayTypeDescriptor
    {
        CONST_VTBL struct ILVArrayTypeDescriptorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVArrayTypeDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVArrayTypeDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVArrayTypeDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVArrayTypeDescriptor_Compare(This,type,retVal)	\
    ( (This)->lpVtbl -> Compare(This,type,retVal) ) 

#define ILVArrayTypeDescriptor_CompareWithOptions(This,type,compareOptions,retVal)	\
    ( (This)->lpVtbl -> CompareWithOptions(This,type,compareOptions,retVal) ) 

#define ILVArrayTypeDescriptor_GetTypeCode(This,typeCode)	\
    ( (This)->lpVtbl -> GetTypeCode(This,typeCode) ) 

#define ILVArrayTypeDescriptor_GetInternalLVTypeDescriptor(This,ppInternalTypeDesc)	\
    ( (This)->lpVtbl -> GetInternalLVTypeDescriptor(This,ppInternalTypeDesc) ) 


#define ILVArrayTypeDescriptor_GetElementTypeDescriptor(This,elementTypeDescriptor)	\
    ( (This)->lpVtbl -> GetElementTypeDescriptor(This,elementTypeDescriptor) ) 

#define ILVArrayTypeDescriptor_GetNumDimensions(This,numDimensions)	\
    ( (This)->lpVtbl -> GetNumDimensions(This,numDimensions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVArrayTypeDescriptor_INTERFACE_DEFINED__ */


#ifndef __ILVStringTypeDescriptor_INTERFACE_DEFINED__
#define __ILVStringTypeDescriptor_INTERFACE_DEFINED__

/* interface ILVStringTypeDescriptor */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVStringTypeDescriptor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7b4ef86e-e843-41f4-a4d8-88a2f2372365")
    ILVStringTypeDescriptor : public ILVTypeDescriptor
    {
    public:
        virtual Bool32 STDMETHODCALLTYPE IsVariableSize( void) = 0;
        
        virtual Bool32 STDMETHODCALLTYPE IsBoundedSize( void) = 0;
        
        virtual Bool32 STDMETHODCALLTYPE IsFixedSize( void) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetCapacity( 
            /* [out] */ size_t *size) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVStringTypeDescriptorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVStringTypeDescriptor * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVStringTypeDescriptor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVStringTypeDescriptor * This);
        
        MgErr ( STDMETHODCALLTYPE *Compare )( 
            ILVStringTypeDescriptor * This,
            /* [in] */ ILVTypeDescriptor *type,
            /* [out] */ int32 *retVal);
        
        MgErr ( STDMETHODCALLTYPE *CompareWithOptions )( 
            ILVStringTypeDescriptor * This,
            /* [in] */ ILVTypeDescriptor *type,
            /* [in] */ int32 compareOptions,
            /* [out] */ int32 *retVal);
        
        MgErr ( STDMETHODCALLTYPE *GetTypeCode )( 
            ILVStringTypeDescriptor * This,
            /* [out] */ int16 *typeCode);
        
        MgErr ( STDMETHODCALLTYPE *GetInternalLVTypeDescriptor )( 
            ILVStringTypeDescriptor * This,
            /* [out] */ void **ppInternalTypeDesc);
        
        Bool32 ( STDMETHODCALLTYPE *IsVariableSize )( 
            ILVStringTypeDescriptor * This);
        
        Bool32 ( STDMETHODCALLTYPE *IsBoundedSize )( 
            ILVStringTypeDescriptor * This);
        
        Bool32 ( STDMETHODCALLTYPE *IsFixedSize )( 
            ILVStringTypeDescriptor * This);
        
        MgErr ( STDMETHODCALLTYPE *GetCapacity )( 
            ILVStringTypeDescriptor * This,
            /* [out] */ size_t *size);
        
        END_INTERFACE
    } ILVStringTypeDescriptorVtbl;

    interface ILVStringTypeDescriptor
    {
        CONST_VTBL struct ILVStringTypeDescriptorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVStringTypeDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVStringTypeDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVStringTypeDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVStringTypeDescriptor_Compare(This,type,retVal)	\
    ( (This)->lpVtbl -> Compare(This,type,retVal) ) 

#define ILVStringTypeDescriptor_CompareWithOptions(This,type,compareOptions,retVal)	\
    ( (This)->lpVtbl -> CompareWithOptions(This,type,compareOptions,retVal) ) 

#define ILVStringTypeDescriptor_GetTypeCode(This,typeCode)	\
    ( (This)->lpVtbl -> GetTypeCode(This,typeCode) ) 

#define ILVStringTypeDescriptor_GetInternalLVTypeDescriptor(This,ppInternalTypeDesc)	\
    ( (This)->lpVtbl -> GetInternalLVTypeDescriptor(This,ppInternalTypeDesc) ) 


#define ILVStringTypeDescriptor_IsVariableSize(This)	\
    ( (This)->lpVtbl -> IsVariableSize(This) ) 

#define ILVStringTypeDescriptor_IsBoundedSize(This)	\
    ( (This)->lpVtbl -> IsBoundedSize(This) ) 

#define ILVStringTypeDescriptor_IsFixedSize(This)	\
    ( (This)->lpVtbl -> IsFixedSize(This) ) 

#define ILVStringTypeDescriptor_GetCapacity(This,size)	\
    ( (This)->lpVtbl -> GetCapacity(This,size) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVStringTypeDescriptor_INTERFACE_DEFINED__ */


#ifndef __ILVClusterTypeDescriptor_INTERFACE_DEFINED__
#define __ILVClusterTypeDescriptor_INTERFACE_DEFINED__

/* interface ILVClusterTypeDescriptor */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_ILVClusterTypeDescriptor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fc873d27-ad8e-45da-bd26-e3f42c3d8157")
    ILVClusterTypeDescriptor : public ILVTypeDescriptor
    {
    public:
        virtual MgErr STDMETHODCALLTYPE GetNumElements( 
            /* [out] */ uInt32 *numElements) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetNumElementsRecursive( 
            /* [out] */ uInt32 *numElements) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetElementTypeDescriptor( 
            /* [in] */ uInt32 position,
            /* [out] */ ILVTypeDescriptor **elementTypeDescriptor) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetElementName( 
            /* [in] */ uInt32 position,
            /* [out] */ ILVString **name) = 0;
        
        virtual MgErr STDMETHODCALLTYPE GetElementIndex( 
            /* [in] */ ILVString *name,
            /* [out] */ int32 *index) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILVClusterTypeDescriptorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILVClusterTypeDescriptor * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILVClusterTypeDescriptor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILVClusterTypeDescriptor * This);
        
        MgErr ( STDMETHODCALLTYPE *Compare )( 
            ILVClusterTypeDescriptor * This,
            /* [in] */ ILVTypeDescriptor *type,
            /* [out] */ int32 *retVal);
        
        MgErr ( STDMETHODCALLTYPE *CompareWithOptions )( 
            ILVClusterTypeDescriptor * This,
            /* [in] */ ILVTypeDescriptor *type,
            /* [in] */ int32 compareOptions,
            /* [out] */ int32 *retVal);
        
        MgErr ( STDMETHODCALLTYPE *GetTypeCode )( 
            ILVClusterTypeDescriptor * This,
            /* [out] */ int16 *typeCode);
        
        MgErr ( STDMETHODCALLTYPE *GetInternalLVTypeDescriptor )( 
            ILVClusterTypeDescriptor * This,
            /* [out] */ void **ppInternalTypeDesc);
        
        MgErr ( STDMETHODCALLTYPE *GetNumElements )( 
            ILVClusterTypeDescriptor * This,
            /* [out] */ uInt32 *numElements);
        
        MgErr ( STDMETHODCALLTYPE *GetNumElementsRecursive )( 
            ILVClusterTypeDescriptor * This,
            /* [out] */ uInt32 *numElements);
        
        MgErr ( STDMETHODCALLTYPE *GetElementTypeDescriptor )( 
            ILVClusterTypeDescriptor * This,
            /* [in] */ uInt32 position,
            /* [out] */ ILVTypeDescriptor **elementTypeDescriptor);
        
        MgErr ( STDMETHODCALLTYPE *GetElementName )( 
            ILVClusterTypeDescriptor * This,
            /* [in] */ uInt32 position,
            /* [out] */ ILVString **name);
        
        MgErr ( STDMETHODCALLTYPE *GetElementIndex )( 
            ILVClusterTypeDescriptor * This,
            /* [in] */ ILVString *name,
            /* [out] */ int32 *index);
        
        END_INTERFACE
    } ILVClusterTypeDescriptorVtbl;

    interface ILVClusterTypeDescriptor
    {
        CONST_VTBL struct ILVClusterTypeDescriptorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILVClusterTypeDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILVClusterTypeDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILVClusterTypeDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILVClusterTypeDescriptor_Compare(This,type,retVal)	\
    ( (This)->lpVtbl -> Compare(This,type,retVal) ) 

#define ILVClusterTypeDescriptor_CompareWithOptions(This,type,compareOptions,retVal)	\
    ( (This)->lpVtbl -> CompareWithOptions(This,type,compareOptions,retVal) ) 

#define ILVClusterTypeDescriptor_GetTypeCode(This,typeCode)	\
    ( (This)->lpVtbl -> GetTypeCode(This,typeCode) ) 

#define ILVClusterTypeDescriptor_GetInternalLVTypeDescriptor(This,ppInternalTypeDesc)	\
    ( (This)->lpVtbl -> GetInternalLVTypeDescriptor(This,ppInternalTypeDesc) ) 


#define ILVClusterTypeDescriptor_GetNumElements(This,numElements)	\
    ( (This)->lpVtbl -> GetNumElements(This,numElements) ) 

#define ILVClusterTypeDescriptor_GetNumElementsRecursive(This,numElements)	\
    ( (This)->lpVtbl -> GetNumElementsRecursive(This,numElements) ) 

#define ILVClusterTypeDescriptor_GetElementTypeDescriptor(This,position,elementTypeDescriptor)	\
    ( (This)->lpVtbl -> GetElementTypeDescriptor(This,position,elementTypeDescriptor) ) 

#define ILVClusterTypeDescriptor_GetElementName(This,position,name)	\
    ( (This)->lpVtbl -> GetElementName(This,position,name) ) 

#define ILVClusterTypeDescriptor_GetElementIndex(This,name,index)	\
    ( (This)->lpVtbl -> GetElementIndex(This,name,index) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILVClusterTypeDescriptor_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


