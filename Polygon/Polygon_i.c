

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Jan 22 01:20:08 2018
 */
/* Compiler settings for Polygon.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
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

MIDL_DEFINE_GUID(IID, IID_IPolyCtl,0x5F97EF39,0x6B5A,0x4FA2,0x91,0x71,0x74,0xFD,0xEF,0x30,0x23,0x91);


MIDL_DEFINE_GUID(IID, LIBID_PolygonLib,0x86E6C877,0xB5D8,0x4F9E,0x86,0xF0,0x4B,0xD2,0xDA,0x36,0x96,0xF2);


MIDL_DEFINE_GUID(IID, DIID__IPolyCtlEvents,0x89319F1C,0x8EFF,0x4BED,0xAD,0x99,0xBB,0xA3,0x31,0x7F,0xA2,0x90);


MIDL_DEFINE_GUID(CLSID, CLSID_PolyCtl,0x0A6BA877,0xE9D4,0x465B,0xB2,0xE5,0xEE,0x80,0x5D,0xC9,0xFF,0x56);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



