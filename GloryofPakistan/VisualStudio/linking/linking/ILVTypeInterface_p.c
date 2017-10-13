

/* this ALWAYS GENERATED file contains the proxy stub code */


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


#include "ILVTypeInterface_h.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   1                                 
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ILVTypeInterface_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ILVTypeInterface_MIDL_TYPE_FORMAT_STRING;

typedef struct _ILVTypeInterface_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ILVTypeInterface_MIDL_PROC_FORMAT_STRING;

typedef struct _ILVTypeInterface_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ILVTypeInterface_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const ILVTypeInterface_MIDL_TYPE_FORMAT_STRING ILVTypeInterface__MIDL_TypeFormatString;
extern const ILVTypeInterface_MIDL_PROC_FORMAT_STRING ILVTypeInterface__MIDL_ProcFormatString;
extern const ILVTypeInterface_MIDL_EXPR_FORMAT_STRING ILVTypeInterface__MIDL_ExprFormatString;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ILVTypeInterface_MIDL_PROC_FORMAT_STRING ILVTypeInterface__MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const ILVTypeInterface_MIDL_TYPE_FORMAT_STRING ILVTypeInterface__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Standard interface: __MIDL_itf_ILVTypeInterface_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ILVTypeDescriptor, ver. 0.0,
   GUID={0x09a66b9c,0x3683,0x4f5c,{0xb4,0xce,0xb7,0xe4,0x28,0xfc,0x39,0x14}} */


/* Object interface: ILVBooleanTypeDescriptor, ver. 0.0,
   GUID={0x234324FE,0x6E30,0x4cca,{0x98,0xF0,0x15,0x57,0x93,0xF2,0xC6,0x82}} */


/* Object interface: ILVNumericTypeDescriptor, ver. 0.0,
   GUID={0xda09ad59,0xf1b8,0x46b3,{0xab,0xa0,0x4b,0x48,0xc9,0x8a,0x8a,0xfb}} */


/* Object interface: ILVArrayTypeDescriptor, ver. 0.0,
   GUID={0xc2d6f738,0xf5b3,0x4db1,{0xa1,0xfa,0x56,0x72,0xfd,0xea,0xf6,0x0f}} */


/* Object interface: ILVStringTypeDescriptor, ver. 0.0,
   GUID={0x7b4ef86e,0xe843,0x41f4,{0xa4,0xd8,0x88,0xa2,0xf2,0x37,0x23,0x65}} */


/* Object interface: ILVClusterTypeDescriptor, ver. 0.0,
   GUID={0xfc873d27,0xad8e,0x45da,{0xbd,0x26,0xe3,0xf4,0x2c,0x3d,0x81,0x57}} */

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
    ILVTypeInterface__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _ILVTypeInterface_ProxyVtblList[] = 
{
    0
};

const CInterfaceStubVtbl * const _ILVTypeInterface_StubVtblList[] = 
{
    0
};

PCInterfaceName const _ILVTypeInterface_InterfaceNamesList[] = 
{
    0
};


#define _ILVTypeInterface_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ILVTypeInterface, pIID, n)

int __stdcall _ILVTypeInterface_IID_Lookup( const IID * pIID, int * pIndex )
{
    UNREFERENCED_PARAMETER(pIID);
    UNREFERENCED_PARAMETER(pIndex);
    return 0;
}

const ExtendedProxyFileInfo ILVTypeInterface_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ILVTypeInterface_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ILVTypeInterface_StubVtblList,
    (const PCInterfaceName * ) & _ILVTypeInterface_InterfaceNamesList,
    0, /* no delegation */
    & _ILVTypeInterface_IID_Lookup, 
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

