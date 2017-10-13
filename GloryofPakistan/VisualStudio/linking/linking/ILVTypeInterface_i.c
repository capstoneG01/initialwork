

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ILVTypeDescriptor,0x09a66b9c,0x3683,0x4f5c,0xb4,0xce,0xb7,0xe4,0x28,0xfc,0x39,0x14);


MIDL_DEFINE_GUID(IID, IID_ILVBooleanTypeDescriptor,0x234324FE,0x6E30,0x4cca,0x98,0xF0,0x15,0x57,0x93,0xF2,0xC6,0x82);


MIDL_DEFINE_GUID(IID, IID_ILVNumericTypeDescriptor,0xda09ad59,0xf1b8,0x46b3,0xab,0xa0,0x4b,0x48,0xc9,0x8a,0x8a,0xfb);


MIDL_DEFINE_GUID(IID, IID_ILVArrayTypeDescriptor,0xc2d6f738,0xf5b3,0x4db1,0xa1,0xfa,0x56,0x72,0xfd,0xea,0xf6,0x0f);


MIDL_DEFINE_GUID(IID, IID_ILVStringTypeDescriptor,0x7b4ef86e,0xe843,0x41f4,0xa4,0xd8,0x88,0xa2,0xf2,0x37,0x23,0x65);


MIDL_DEFINE_GUID(IID, IID_ILVClusterTypeDescriptor,0xfc873d27,0xad8e,0x45da,0xbd,0x26,0xe3,0xf4,0x2c,0x3d,0x81,0x57);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



