

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "ILVDataInterface_h.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   1                                 
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ILVDataInterface_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ILVDataInterface_MIDL_TYPE_FORMAT_STRING;

typedef struct _ILVDataInterface_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ILVDataInterface_MIDL_PROC_FORMAT_STRING;

typedef struct _ILVDataInterface_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ILVDataInterface_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const ILVDataInterface_MIDL_TYPE_FORMAT_STRING ILVDataInterface__MIDL_TypeFormatString;
extern const ILVDataInterface_MIDL_PROC_FORMAT_STRING ILVDataInterface__MIDL_ProcFormatString;
extern const ILVDataInterface_MIDL_EXPR_FORMAT_STRING ILVDataInterface__MIDL_ExprFormatString;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ILVDataInterface_MIDL_PROC_FORMAT_STRING ILVDataInterface__MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const ILVDataInterface_MIDL_TYPE_FORMAT_STRING ILVDataInterface__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Standard interface: __MIDL_itf_ILVDataInterface_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ILVData, ver. 0.0,
   GUID={0x4a4264a2,0xd5d8,0x468d,{0x96,0x75,0x6f,0x1d,0xf7,0x77,0xb2,0x95}} */


/* Object interface: ILVBoolean, ver. 0.0,
   GUID={0x7AB091D1,0x4154,0x48e2,{0xBF,0x98,0x55,0xCC,0x20,0x33,0x51,0x84}} */


/* Object interface: ILVInt8, ver. 0.0,
   GUID={0xf3ee3676,0x1e8e,0x42c2,{0x83,0x55,0xe4,0xc0,0x7d,0x4e,0xb7,0x69}} */


/* Object interface: ILVInt16, ver. 0.0,
   GUID={0x8567dfb4,0x0d6d,0x46d0,{0xb8,0x7f,0xa5,0xb6,0x80,0xd3,0xcd,0x82}} */


/* Object interface: ILVInt32, ver. 0.0,
   GUID={0x878fcd1e,0xc70f,0x4940,{0x8e,0x54,0x46,0x1a,0x4d,0x1b,0xb5,0xb3}} */


/* Object interface: ILVInt64, ver. 0.0,
   GUID={0x0344d202,0x0f76,0x4efb,{0xad,0x02,0xde,0xec,0x0b,0x48,0x0e,0x47}} */


/* Object interface: ILVuInt8, ver. 0.0,
   GUID={0x35ce47f1,0x7a7a,0x43c2,{0xa6,0x63,0xa6,0x34,0x0c,0xd7,0x2e,0xbb}} */


/* Object interface: ILVuInt16, ver. 0.0,
   GUID={0xf1d1b174,0xce67,0x4c6e,{0xad,0xa6,0x06,0x4f,0x3f,0x49,0xba,0x42}} */


/* Object interface: ILVuInt32, ver. 0.0,
   GUID={0xedfcfa65,0x5fe2,0x45b9,{0xa3,0x72,0x46,0x79,0x46,0x43,0x3e,0x84}} */


/* Object interface: ILVuInt64, ver. 0.0,
   GUID={0xb173fe84,0x2ce5,0x4d23,{0xb1,0xb2,0xda,0x1f,0x46,0x9e,0x2c,0x31}} */


/* Object interface: ILVFloat32, ver. 0.0,
   GUID={0x947ab4f3,0x5a0c,0x491a,{0x9f,0x3e,0x1f,0xfa,0x6c,0xa9,0xb3,0xaf}} */


/* Object interface: ILVFloat64, ver. 0.0,
   GUID={0x6ba720b2,0x7641,0x4657,{0x9a,0x88,0xe4,0x80,0x5c,0x07,0xd9,0x53}} */


/* Object interface: ILVFloatExt, ver. 0.0,
   GUID={0x35b495a1,0xef73,0x4602,{0xa9,0x1e,0x53,0x07,0xea,0x36,0x48,0x70}} */


/* Object interface: ILVComplex64, ver. 0.0,
   GUID={0xb34b09a6,0xe681,0x4B7B,{0xb8,0x1f,0x27,0x71,0x8a,0x7a,0xc2,0x2d}} */


/* Object interface: ILVComplex128, ver. 0.0,
   GUID={0x29cf50ff,0x334a,0x416b,{0x8e,0x62,0x43,0x05,0xd7,0x24,0xea,0x74}} */


/* Object interface: ILVComplexExt, ver. 0.0,
   GUID={0x09b41f06,0x659b,0x4FB8,{0x8c,0x8c,0x66,0x41,0xfd,0xe8,0x33,0x03}} */


/* Object interface: ILVArray, ver. 0.0,
   GUID={0x5b5e5197,0x5580,0x431a,{0xad,0x73,0x9a,0xb7,0x26,0x1d,0x39,0x4d}} */


/* Standard interface: __MIDL_itf_ILVDataInterface_0000_0017, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ILVString, ver. 0.0,
   GUID={0xc021ae89,0x68d7,0x47e9,{0x9e,0xd7,0x69,0xd9,0x50,0x1c,0x4f,0x24}} */


/* Object interface: ILVCluster, ver. 0.0,
   GUID={0x5377527d,0xa5aa,0x4819,{0x89,0x33,0xad,0xbf,0x44,0x4e,0x9f,0xf4}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    ILVDataInterface__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x8000253, /* MIDL Version 8.0.595 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _ILVDataInterface_ProxyVtblList[] = 
{
    0
};

const CInterfaceStubVtbl * const _ILVDataInterface_StubVtblList[] = 
{
    0
};

PCInterfaceName const _ILVDataInterface_InterfaceNamesList[] = 
{
    0
};


#define _ILVDataInterface_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ILVDataInterface, pIID, n)

int __stdcall _ILVDataInterface_IID_Lookup( const IID * pIID, int * pIndex )
{
    UNREFERENCED_PARAMETER(pIID);
    UNREFERENCED_PARAMETER(pIndex);
    return 0;
}

const ExtendedProxyFileInfo ILVDataInterface_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ILVDataInterface_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ILVDataInterface_StubVtblList,
    (const PCInterfaceName * ) & _ILVDataInterface_InterfaceNamesList,
    0, /* no delegation */
    & _ILVDataInterface_IID_Lookup, 
    0,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

