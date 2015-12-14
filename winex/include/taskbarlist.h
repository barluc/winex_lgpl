/*** Autogenerated by WIDL 20020228 from taskbarlist.idl - Do not edit ***/

#include <rpc.h>
#include <rpcndr.h>

#ifndef __WIDL_TASKBARLIST_H
#define __WIDL_TASKBARLIST_H

#ifdef __cplusplus
extern "C" {
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oleidl.h>
#include <oaidl.h>
#include <docobj.h>
#include <servprov.h>

/* Forward declarations */

#ifndef __ITaskbarList_FWD_DEFINED__
#define __ITaskbarList_FWD_DEFINED__
typedef interface ITaskbarList ITaskbarList;
#endif


/*****************************************************************************
 * ITaskbarList interface
 */
#ifndef __ITaskbarList_INTERFACE_DEFINED__
#define __ITaskbarList_INTERFACE_DEFINED__

typedef ITaskbarList *LPTASKBARLIST;
DEFINE_GUID(IID_ITaskbarList, 0x56fdf342, 0xfd6d, 0x11d0, 0x95,0x8a, 0x00,0x60,0x97,0xc9,0xa0,0x90);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface ITaskbarList : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE HrInit(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddTab(
        HWND hwnd) = 0;

    virtual HRESULT STDMETHODCALLTYPE DeleteTab(
        HWND hwnd) = 0;

    virtual HRESULT STDMETHODCALLTYPE ActivateTab(
        HWND hwnd) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetActiveAlt(
        HWND hwnd) = 0;

};
#else
typedef struct ITaskbarListVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITaskbarList* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITaskbarList* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITaskbarList* This);

    /*** ITaskbarList methods ***/
    HRESULT (STDMETHODCALLTYPE *HrInit)(
        ITaskbarList* This);

    HRESULT (STDMETHODCALLTYPE *AddTab)(
        ITaskbarList* This,
        HWND hwnd);

    HRESULT (STDMETHODCALLTYPE *DeleteTab)(
        ITaskbarList* This,
        HWND hwnd);

    HRESULT (STDMETHODCALLTYPE *ActivateTab)(
        ITaskbarList* This,
        HWND hwnd);

    HRESULT (STDMETHODCALLTYPE *SetActiveAlt)(
        ITaskbarList* This,
        HWND hwnd);

    END_INTERFACE
} ITaskbarListVtbl;
interface ITaskbarList {
    CONST_VTBL ITaskbarListVtbl* lpVtbl;
};

#define ITaskbarList_IMETHODS \
    IUnknown_IMETHODS \
    ICOM_METHOD  (HRESULT,HrInit) \
    ICOM_METHOD1 (HRESULT,AddTab,HWND,hwnd) \
    ICOM_METHOD1 (HRESULT,DeleteTab,HWND,hwnd) \
    ICOM_METHOD1 (HRESULT,ActivateTab,HWND,hwnd) \
    ICOM_METHOD1 (HRESULT,SetActiveAlt,HWND,hwnd)

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ITaskbarList_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITaskbarList_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITaskbarList_Release(This) (This)->lpVtbl->Release(This)
/*** ITaskbarList methods ***/
#define ITaskbarList_HrInit(This) (This)->lpVtbl->HrInit(This)
#define ITaskbarList_AddTab(This,hwnd) (This)->lpVtbl->AddTab(This,hwnd)
#define ITaskbarList_DeleteTab(This,hwnd) (This)->lpVtbl->DeleteTab(This,hwnd)
#define ITaskbarList_ActivateTab(This,hwnd) (This)->lpVtbl->ActivateTab(This,hwnd)
#define ITaskbarList_SetActiveAlt(This,hwnd) (This)->lpVtbl->SetActiveAlt(This,hwnd)
#endif

#endif

HRESULT STDMETHODCALLTYPE ITaskbarList_HrInit_Proxy(
    ITaskbarList* This);
void __RPC_STUB ITaskbarList_HrInit_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITaskbarList_AddTab_Proxy(
    ITaskbarList* This,
    HWND hwnd);
void __RPC_STUB ITaskbarList_AddTab_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITaskbarList_DeleteTab_Proxy(
    ITaskbarList* This,
    HWND hwnd);
void __RPC_STUB ITaskbarList_DeleteTab_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITaskbarList_ActivateTab_Proxy(
    ITaskbarList* This,
    HWND hwnd);
void __RPC_STUB ITaskbarList_ActivateTab_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITaskbarList_SetActiveAlt_Proxy(
    ITaskbarList* This,
    HWND hwnd);
void __RPC_STUB ITaskbarList_SetActiveAlt_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ITaskbarList_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HWND_UserSize     (ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal  (ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void            __RPC_USER HWND_UserFree     (ULONG *, HWND *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __WIDL_TASKBARLIST_H */