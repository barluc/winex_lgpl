
#include <rpc.h>
#include <rpcndr.h>

#ifndef __WIDL_TOM_H
#define __WIDL_TOM_H
#ifdef __cplusplus
extern "C" {
#endif
#include <oaidl.h>
typedef enum tagTomConstants {
    tomFalse = 0,
    tomTrue = -1,
    tomUndefined = -9999999,
    tomToggle = -9999998,
    tomAutoColor = -9999997,
    tomDefault = -9999996,
    tomSuspend = -9999995,
    tomResume = -9999994,
    tomApplyNow = 0,
    tomApplyLater = 1,
    tomTrackParms = 2,
    tomCacheParms = 3,
    tomBackward = 0xffffffff,
    tomForward = 0xffffffff,
    tomMove = 0,
    tomExtend = 1,
    tomNoSelection = 0,
    tomSelectionIP = 1,
    tomSelectionNormal = 2,
    tomSelectionFrame = 3,
    tomSelectionColumn = 4,
    tomSelectionRow = 5,
    tomSelectionBlock = 6,
    tomSelectionInlineShape = 7,
    tomSelectionShape = 8,
    tomSelStartActive = 1,
    tomSelAtEOL = 2,
    tomSelOvertype = 4,
    tomSelActive = 8,
    tomSelReplace = 16,
    tomEnd = 0,
    tomStart = 32,
    tomCollapseEnd = 0,
    tomCollapseStart = 1,
    tomClientCoord = 256,
    tomNone = 0,
    tomSingle = 1,
    tomWords = 2,
    tomDouble = 3,
    tomDotted = 4,
    tomDash = 5,
    tomDashDot = 6,
    tomDashDotDot = 7,
    tomWave = 8,
    tomThick = 9,
    tomHair = 10,
    tomLineSpaceSingle = 0,
    tomLineSpace1pt5 = 1,
    tomLineSpaceDouble = 2,
    tomLineSpaceAtLeast = 3,
    tomLineSpaceExactly = 4,
    tomLineSpaceMultiple = 5,
    tomAlignLeft = 0,
    tomAlignCenter = 1,
    tomAlignRight = 2,
    tomAlignJustify = 3,
    tomAlignDecimal = 3,
    tomAlignBar = 4,
    tomAlignInterWord = 3,
    tomAlignInterLetter = 4,
    tomAlignScaled = 5,
    tomAlignGlyphs = 6,
    tomAlignSnapGrid = 7,
    tomSpaces = 0,
    tomDots = 1,
    tomDashes = 2,
    tomLines = 3,
    tomThickLines = 4,
    tomEquals = 5,
    tomTabBack = -3,
    tomTabNext = -2,
    tomTabHere = -1,
    tomListBullet = 1,
    tomListNumberAsArabic = 2,
    tomListNumberAsLCLetter = 3,
    tomListNumberAsUCLetter = 4,
    tomListNumberAsLCRoman = 5,
    tomListNumberAsUCRoman = 6,
    tomListNumberAsSequence = 7,
    tomListParentheses = 0x10000,
    tomListPeriod = 0x20000,
    tomListPlain = 0x30000,
    tomCharacter = 1,
    tomWord = 2,
    tomSentence = 3,
    tomParagraph = 4,
    tomLine = 5,
    tomStory = 6,
    tomScreen = 7,
    tomSection = 8,
    tomColumn = 9,
    tomRow = 10,
    tomWindow = 11,
    tomCell = 12,
    tomCharFormat = 13,
    tomParaFormat = 14,
    tomTable = 15,
    tomObject = 16,
    tomMatchWord = 2,
    tomMatchCase = 4,
    tomMatchPattern = 8,
    tomUnknownStory = 0,
    tomMainTextStory = 1,
    tomFootnotesStory = 2,
    tomEndnotesStory = 3,
    tomCommentsStory = 4,
    tomTextFrameStory = 5,
    tomEvenPagesHeaderStory = 6,
    tomPrimaryHeaderStory = 7,
    tomEvenPagesFooterStory = 8,
    tomPrimaryFooterStory = 9,
    tomFirstPageHeaderStory = 10,
    tomFirstPageFooterStory = 11,
    tomNoAnimation = 0,
    tomLasVegasLights = 1,
    tomBlinkingBackground = 2,
    tomSparkleText = 3,
    tomMarchingBlackAnts = 4,
    tomMarchingRedAnts = 5,
    tomShimmer = 6,
    tomWipeDown = 7,
    tomWipeRight = 8,
    tomAnimationMax = 8,
    tomLowerCase = 0,
    tomUpperCase = 1,
    tomTitleCase = 2,
    tomSentenceCase = 4,
    tomToggleCase = 5,
    tomReadOnly = 0x100,
    tomShareDenyRead = 0x200,
    tomShareDenyWrite = 0x400,
    tomPasteFile = 0x1000,
    tomCreateNew = 0x10,
    tomCreateAlways = 0x20,
    tomOpenExisting = 0x30,
    tomOpenAlways = 0x40,
    tomTruncateExisting = 0x50,
    tomRTF = 0x1,
    tomText = 0x2,
    tomHTML = 0x3,
    tomWordDocument = 0x4,
    tomBold = 0xffffffff,
    tomItalic = 0xffffffff,
    tomUnderline = 0xffffffff,
    tomStrikeout = 0xffffffff,
    tomProtected = 0xffffffff,
    tomLink = 0xffffffff,
    tomSmallCaps = 0xffffffff,
    tomAllCaps = 0xffffffff,
    tomHidden = 0xffffffff,
    tomOutline = 0xffffffff,
    tomShadow = 0xffffffff,
    tomEmboss = 0xffffffff,
    tomImprint = 0xffffffff,
    tomDisabled = 0xffffffff,
    tomRevised = 0xffffffff,
    tomNormalCaret = 0,
    tomKoreanBlockCaret = 0x1,
    tomIncludeInset = 0x1,
    tomIgnoreCurrentFont = 0,
    tomMatchFontCharset = 0x1,
    tomMatchFontSignature = 0x2,
    tomCharset = 0x80000000,
    tomRE10Mode = 0x1,
    tomNoIME = 0x80000,
    tomSelfIME = 0x40000
} tomConstants;
#ifndef __ITextRange_FWD_DEFINED__
#define __ITextRange_FWD_DEFINED__
typedef interface ITextRange ITextRange;
#endif

#ifndef __ITextSelection_FWD_DEFINED__
#define __ITextSelection_FWD_DEFINED__
typedef interface ITextSelection ITextSelection;
#endif

#ifndef __ITextStoryRanges_FWD_DEFINED__
#define __ITextStoryRanges_FWD_DEFINED__
typedef interface ITextStoryRanges ITextStoryRanges;
#endif

#ifndef __ITextDocument_FWD_DEFINED__
#define __ITextDocument_FWD_DEFINED__
typedef interface ITextDocument ITextDocument;
#endif


#ifndef __ITextDocument_INTERFACE_DEFINED__
#define __ITextDocument_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITextDocument, 0x8cc497c0, 0xa1df, 0x11ce, 0x80,0x98, 0x00,0xaa,0x00,0x47,0xbe,0x5d);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface ITextDocument : public IDispatch
{
    virtual HRESULT STDMETHODCALLTYPE GetName(
        BSTR* pName) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSelection(
        ITextSelection** ppSel) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStoryCount(
        long* pCount) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStoryRanges(
        ITextStoryRanges** ppStories) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSaved(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetSaved(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDefaultTabStop(
        float* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetDefaultTabStop(
        float Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE New(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Open(
        VARIANT* pVar,
        long Flags,
        long CodePage) = 0;

    virtual HRESULT STDMETHODCALLTYPE Save(
        VARIANT* pVar,
        long Flags,
        long CodePage) = 0;

    virtual HRESULT STDMETHODCALLTYPE Freeze(
        long* pCount) = 0;

    virtual HRESULT STDMETHODCALLTYPE Unfreeze(
        long* pCount) = 0;

    virtual HRESULT STDMETHODCALLTYPE BeginEditCollection(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE EndEditCollection(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Undo(
        long Count,
        long* prop) = 0;

    virtual HRESULT STDMETHODCALLTYPE Redo(
        long Count,
        long* prop) = 0;

    virtual HRESULT STDMETHODCALLTYPE Range(
        long cp1,
        long cp2,
        ITextRange** ppRange) = 0;

    virtual HRESULT STDMETHODCALLTYPE RangeFromPoint(
        long x,
        long y,
        ITextRange** ppRange) = 0;

};
#else
typedef struct ITextDocumentVtbl {
    BEGIN_INTERFACE

    
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITextDocument* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITextDocument* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITextDocument* This);

    
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        ITextDocument* This,
        UINT* pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        ITextDocument* This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo** ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        ITextDocument* This,
        REFIID riid,
        LPOLESTR* rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID* rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        ITextDocument* This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS* pDispParams,
        VARIANT* pVarResult,
        EXCEPINFO* pExcepInfo,
        UINT* puArgErr);

    
    HRESULT (STDMETHODCALLTYPE *GetName)(
        ITextDocument* This,
        BSTR* pName);

    HRESULT (STDMETHODCALLTYPE *GetSelection)(
        ITextDocument* This,
        ITextSelection** ppSel);

    HRESULT (STDMETHODCALLTYPE *GetStoryCount)(
        ITextDocument* This,
        long* pCount);

    HRESULT (STDMETHODCALLTYPE *GetStoryRanges)(
        ITextDocument* This,
        ITextStoryRanges** ppStories);

    HRESULT (STDMETHODCALLTYPE *GetSaved)(
        ITextDocument* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetSaved)(
        ITextDocument* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetDefaultTabStop)(
        ITextDocument* This,
        float* pValue);

    HRESULT (STDMETHODCALLTYPE *SetDefaultTabStop)(
        ITextDocument* This,
        float Value);

    HRESULT (STDMETHODCALLTYPE *New)(
        ITextDocument* This);

    HRESULT (STDMETHODCALLTYPE *Open)(
        ITextDocument* This,
        VARIANT* pVar,
        long Flags,
        long CodePage);

    HRESULT (STDMETHODCALLTYPE *Save)(
        ITextDocument* This,
        VARIANT* pVar,
        long Flags,
        long CodePage);

    HRESULT (STDMETHODCALLTYPE *Freeze)(
        ITextDocument* This,
        long* pCount);

    HRESULT (STDMETHODCALLTYPE *Unfreeze)(
        ITextDocument* This,
        long* pCount);

    HRESULT (STDMETHODCALLTYPE *BeginEditCollection)(
        ITextDocument* This);

    HRESULT (STDMETHODCALLTYPE *EndEditCollection)(
        ITextDocument* This);

    HRESULT (STDMETHODCALLTYPE *Undo)(
        ITextDocument* This,
        long Count,
        long* prop);

    HRESULT (STDMETHODCALLTYPE *Redo)(
        ITextDocument* This,
        long Count,
        long* prop);

    HRESULT (STDMETHODCALLTYPE *Range)(
        ITextDocument* This,
        long cp1,
        long cp2,
        ITextRange** ppRange);

    HRESULT (STDMETHODCALLTYPE *RangeFromPoint)(
        ITextDocument* This,
        long x,
        long y,
        ITextRange** ppRange);

    END_INTERFACE
} ITextDocumentVtbl;
interface ITextDocument {
    CONST_VTBL ITextDocumentVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define ITextDocument_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define ITextDocument_AddRef(p) (p)->lpVtbl->AddRef(p)
#define ITextDocument_Release(p) (p)->lpVtbl->Release(p)

#define ITextDocument_GetTypeInfoCount(p,a) (p)->lpVtbl->GetTypeInfoCount(p,a)
#define ITextDocument_GetTypeInfo(p,a,b,c) (p)->lpVtbl->GetTypeInfo(p,a,b,c)
#define ITextDocument_GetIDsOfNames(p,a,b,c,d,e) (p)->lpVtbl->GetIDsOfNames(p,a,b,c,d,e)
#define ITextDocument_Invoke(p,a,b,c,d,e,f,g,h) (p)->lpVtbl->Invoke(p,a,b,c,d,e,f,g,h)

#define ITextDocument_GetName(p,a) (p)->lpVtbl->GetName(p,a)
#define ITextDocument_GetSelection(p,a) (p)->lpVtbl->GetSelection(p,a)
#define ITextDocument_GetStoryCount(p,a) (p)->lpVtbl->GetStoryCount(p,a)
#define ITextDocument_GetStoryRanges(p,a) (p)->lpVtbl->GetStoryRanges(p,a)
#define ITextDocument_GetSaved(p,a) (p)->lpVtbl->GetSaved(p,a)
#define ITextDocument_SetSaved(p,a) (p)->lpVtbl->SetSaved(p,a)
#define ITextDocument_GetDefaultTabStop(p,a) (p)->lpVtbl->GetDefaultTabStop(p,a)
#define ITextDocument_SetDefaultTabStop(p,a) (p)->lpVtbl->SetDefaultTabStop(p,a)
#define ITextDocument_New(p) (p)->lpVtbl->New(p)
#define ITextDocument_Open(p,a,b,c) (p)->lpVtbl->Open(p,a,b,c)
#define ITextDocument_Save(p,a,b,c) (p)->lpVtbl->Save(p,a,b,c)
#define ITextDocument_Freeze(p,a) (p)->lpVtbl->Freeze(p,a)
#define ITextDocument_Unfreeze(p,a) (p)->lpVtbl->Unfreeze(p,a)
#define ITextDocument_BeginEditCollection(p) (p)->lpVtbl->BeginEditCollection(p)
#define ITextDocument_EndEditCollection(p) (p)->lpVtbl->EndEditCollection(p)
#define ITextDocument_Undo(p,a,b) (p)->lpVtbl->Undo(p,a,b)
#define ITextDocument_Redo(p,a,b) (p)->lpVtbl->Redo(p,a,b)
#define ITextDocument_Range(p,a,b,c) (p)->lpVtbl->Range(p,a,b,c)
#define ITextDocument_RangeFromPoint(p,a,b,c) (p)->lpVtbl->RangeFromPoint(p,a,b,c)
#endif

#endif

HRESULT CALLBACK ITextDocument_GetName_Proxy(
    ITextDocument* This,
    BSTR* pName);
void __RPC_STUB ITextDocument_GetName_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_GetSelection_Proxy(
    ITextDocument* This,
    ITextSelection** ppSel);
void __RPC_STUB ITextDocument_GetSelection_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_GetStoryCount_Proxy(
    ITextDocument* This,
    long* pCount);
void __RPC_STUB ITextDocument_GetStoryCount_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_GetStoryRanges_Proxy(
    ITextDocument* This,
    ITextStoryRanges** ppStories);
void __RPC_STUB ITextDocument_GetStoryRanges_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_GetSaved_Proxy(
    ITextDocument* This,
    long* pValue);
void __RPC_STUB ITextDocument_GetSaved_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_SetSaved_Proxy(
    ITextDocument* This,
    long Value);
void __RPC_STUB ITextDocument_SetSaved_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_GetDefaultTabStop_Proxy(
    ITextDocument* This,
    float* pValue);
void __RPC_STUB ITextDocument_GetDefaultTabStop_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_SetDefaultTabStop_Proxy(
    ITextDocument* This,
    float Value);
void __RPC_STUB ITextDocument_SetDefaultTabStop_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_New_Proxy(
    ITextDocument* This);
void __RPC_STUB ITextDocument_New_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_Open_Proxy(
    ITextDocument* This,
    VARIANT* pVar,
    long Flags,
    long CodePage);
void __RPC_STUB ITextDocument_Open_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_Save_Proxy(
    ITextDocument* This,
    VARIANT* pVar,
    long Flags,
    long CodePage);
void __RPC_STUB ITextDocument_Save_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_Freeze_Proxy(
    ITextDocument* This,
    long* pCount);
void __RPC_STUB ITextDocument_Freeze_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_Unfreeze_Proxy(
    ITextDocument* This,
    long* pCount);
void __RPC_STUB ITextDocument_Unfreeze_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_BeginEditCollection_Proxy(
    ITextDocument* This);
void __RPC_STUB ITextDocument_BeginEditCollection_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_EndEditCollection_Proxy(
    ITextDocument* This);
void __RPC_STUB ITextDocument_EndEditCollection_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_Undo_Proxy(
    ITextDocument* This,
    long Count,
    long* prop);
void __RPC_STUB ITextDocument_Undo_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_Redo_Proxy(
    ITextDocument* This,
    long Count,
    long* prop);
void __RPC_STUB ITextDocument_Redo_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_Range_Proxy(
    ITextDocument* This,
    long cp1,
    long cp2,
    ITextRange** ppRange);
void __RPC_STUB ITextDocument_Range_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextDocument_RangeFromPoint_Proxy(
    ITextDocument* This,
    long x,
    long y,
    ITextRange** ppRange);
void __RPC_STUB ITextDocument_RangeFromPoint_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  

#ifndef __ITextFont_FWD_DEFINED__
#define __ITextFont_FWD_DEFINED__
typedef interface ITextFont ITextFont;
#endif

#ifndef __ITextPara_FWD_DEFINED__
#define __ITextPara_FWD_DEFINED__
typedef interface ITextPara ITextPara;
#endif


#ifndef __ITextRange_INTERFACE_DEFINED__
#define __ITextRange_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITextRange, 0x8cc497c2, 0xa1df, 0x11ce, 0x80,0x98, 0x00,0xaa,0x00,0x47,0xbe,0x5d);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface ITextRange : public IDispatch
{
    virtual HRESULT STDMETHODCALLTYPE GetText(
        BSTR* pbstr) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetText(
        BSTR bstr) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetChar(
        long* pch) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetChar(
        long ch) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDuplicate(
        ITextRange** ppRange) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetFormattedText(
        ITextRange** ppRange) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetFormattedText(
        ITextRange* pRange) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStart(
        long* pcpFirst) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetStart(
        long cpFirst) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetEnd(
        long* pcpLim) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetEnd(
        long cpLim) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetFont(
        ITextFont** pFont) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetFont(
        ITextFont* pFont) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPara(
        ITextPara** ppPara) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetPara(
        ITextPara* pPara) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStoryLength(
        long* pcch) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStoryType(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE Collapse(
        long bStart) = 0;

    virtual HRESULT STDMETHODCALLTYPE Expand(
        long Unit,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetIndex(
        long Unit,
        long* pIndex) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetIndex(
        long Unit,
        long Index,
        long Extend) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetRange(
        long cpActive,
        long cpOther) = 0;

    virtual HRESULT STDMETHODCALLTYPE InRange(
        ITextRange* pRange,
        long* pb) = 0;

    virtual HRESULT STDMETHODCALLTYPE InStory(
        ITextRange* pRange,
        long* pb) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsEqual(
        ITextRange* pRange,
        long* pb) = 0;

    virtual HRESULT STDMETHODCALLTYPE Select(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE StartOf(
        long Unit,
        long Extend,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE EndOf(
        long Unit,
        long Extend,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE Move(
        long Unit,
        long Count,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE MoveStart(
        long Unit,
        long Count,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE MoveEnd(
        long Unit,
        long Count,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE MoveWhile(
        VARIANT* Cset,
        long Count,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE MoveStartWhile(
        VARIANT* Cset,
        long Count,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE MoveEndWhile(
        VARIANT* Cset,
        long Count,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE MoveUntil(
        VARIANT* Cset,
        long Count,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE MoveStartUntil(
        VARIANT* Cset,
        long Count,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE MoveEndUntil(
        VARIANT* Cset,
        long Count,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE FindText(
        BSTR bstr,
        long cch,
        long Flags,
        long* pLength) = 0;

    virtual HRESULT STDMETHODCALLTYPE FindTextStart(
        BSTR bstr,
        long cch,
        long Flags,
        long* pLength) = 0;

    virtual HRESULT STDMETHODCALLTYPE FindTextEnd(
        BSTR bstr,
        long cch,
        long Flags,
        long* pLength) = 0;

    virtual HRESULT STDMETHODCALLTYPE Delete(
        long Unit,
        long Count,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE Cut(
        VARIANT* pVar) = 0;

    virtual HRESULT STDMETHODCALLTYPE Copy(
        VARIANT* pVar) = 0;

    virtual HRESULT STDMETHODCALLTYPE Paste(
        VARIANT* pVar,
        long Format) = 0;

    virtual HRESULT STDMETHODCALLTYPE CanPaste(
        VARIANT* pVar,
        long Format,
        long* pb) = 0;

    virtual HRESULT STDMETHODCALLTYPE CanEdit(
        long* pb) = 0;

    virtual HRESULT STDMETHODCALLTYPE ChangeCase(
        long Type) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPoint(
        long Type,
        long* cx,
        long* cy) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetPoint(
        long x,
        long y,
        long Type,
        long Extend) = 0;

    virtual HRESULT STDMETHODCALLTYPE ScrollIntoView(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetEmbeddedObject(
        IUnknown** ppv) = 0;

};
#else
typedef struct ITextRangeVtbl {
    BEGIN_INTERFACE

    
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITextRange* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITextRange* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITextRange* This);

    
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        ITextRange* This,
        UINT* pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        ITextRange* This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo** ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        ITextRange* This,
        REFIID riid,
        LPOLESTR* rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID* rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        ITextRange* This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS* pDispParams,
        VARIANT* pVarResult,
        EXCEPINFO* pExcepInfo,
        UINT* puArgErr);

    
    HRESULT (STDMETHODCALLTYPE *GetText)(
        ITextRange* This,
        BSTR* pbstr);

    HRESULT (STDMETHODCALLTYPE *SetText)(
        ITextRange* This,
        BSTR bstr);

    HRESULT (STDMETHODCALLTYPE *GetChar)(
        ITextRange* This,
        long* pch);

    HRESULT (STDMETHODCALLTYPE *SetChar)(
        ITextRange* This,
        long ch);

    HRESULT (STDMETHODCALLTYPE *GetDuplicate)(
        ITextRange* This,
        ITextRange** ppRange);

    HRESULT (STDMETHODCALLTYPE *GetFormattedText)(
        ITextRange* This,
        ITextRange** ppRange);

    HRESULT (STDMETHODCALLTYPE *SetFormattedText)(
        ITextRange* This,
        ITextRange* pRange);

    HRESULT (STDMETHODCALLTYPE *GetStart)(
        ITextRange* This,
        long* pcpFirst);

    HRESULT (STDMETHODCALLTYPE *SetStart)(
        ITextRange* This,
        long cpFirst);

    HRESULT (STDMETHODCALLTYPE *GetEnd)(
        ITextRange* This,
        long* pcpLim);

    HRESULT (STDMETHODCALLTYPE *SetEnd)(
        ITextRange* This,
        long cpLim);

    HRESULT (STDMETHODCALLTYPE *GetFont)(
        ITextRange* This,
        ITextFont** pFont);

    HRESULT (STDMETHODCALLTYPE *SetFont)(
        ITextRange* This,
        ITextFont* pFont);

    HRESULT (STDMETHODCALLTYPE *GetPara)(
        ITextRange* This,
        ITextPara** ppPara);

    HRESULT (STDMETHODCALLTYPE *SetPara)(
        ITextRange* This,
        ITextPara* pPara);

    HRESULT (STDMETHODCALLTYPE *GetStoryLength)(
        ITextRange* This,
        long* pcch);

    HRESULT (STDMETHODCALLTYPE *GetStoryType)(
        ITextRange* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *Collapse)(
        ITextRange* This,
        long bStart);

    HRESULT (STDMETHODCALLTYPE *Expand)(
        ITextRange* This,
        long Unit,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *GetIndex)(
        ITextRange* This,
        long Unit,
        long* pIndex);

    HRESULT (STDMETHODCALLTYPE *SetIndex)(
        ITextRange* This,
        long Unit,
        long Index,
        long Extend);

    HRESULT (STDMETHODCALLTYPE *SetRange)(
        ITextRange* This,
        long cpActive,
        long cpOther);

    HRESULT (STDMETHODCALLTYPE *InRange)(
        ITextRange* This,
        ITextRange* pRange,
        long* pb);

    HRESULT (STDMETHODCALLTYPE *InStory)(
        ITextRange* This,
        ITextRange* pRange,
        long* pb);

    HRESULT (STDMETHODCALLTYPE *IsEqual)(
        ITextRange* This,
        ITextRange* pRange,
        long* pb);

    HRESULT (STDMETHODCALLTYPE *Select)(
        ITextRange* This);

    HRESULT (STDMETHODCALLTYPE *StartOf)(
        ITextRange* This,
        long Unit,
        long Extend,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *EndOf)(
        ITextRange* This,
        long Unit,
        long Extend,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *Move)(
        ITextRange* This,
        long Unit,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveStart)(
        ITextRange* This,
        long Unit,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveEnd)(
        ITextRange* This,
        long Unit,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveWhile)(
        ITextRange* This,
        VARIANT* Cset,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveStartWhile)(
        ITextRange* This,
        VARIANT* Cset,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveEndWhile)(
        ITextRange* This,
        VARIANT* Cset,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveUntil)(
        ITextRange* This,
        VARIANT* Cset,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveStartUntil)(
        ITextRange* This,
        VARIANT* Cset,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveEndUntil)(
        ITextRange* This,
        VARIANT* Cset,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *FindText)(
        ITextRange* This,
        BSTR bstr,
        long cch,
        long Flags,
        long* pLength);

    HRESULT (STDMETHODCALLTYPE *FindTextStart)(
        ITextRange* This,
        BSTR bstr,
        long cch,
        long Flags,
        long* pLength);

    HRESULT (STDMETHODCALLTYPE *FindTextEnd)(
        ITextRange* This,
        BSTR bstr,
        long cch,
        long Flags,
        long* pLength);

    HRESULT (STDMETHODCALLTYPE *Delete)(
        ITextRange* This,
        long Unit,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *Cut)(
        ITextRange* This,
        VARIANT* pVar);

    HRESULT (STDMETHODCALLTYPE *Copy)(
        ITextRange* This,
        VARIANT* pVar);

    HRESULT (STDMETHODCALLTYPE *Paste)(
        ITextRange* This,
        VARIANT* pVar,
        long Format);

    HRESULT (STDMETHODCALLTYPE *CanPaste)(
        ITextRange* This,
        VARIANT* pVar,
        long Format,
        long* pb);

    HRESULT (STDMETHODCALLTYPE *CanEdit)(
        ITextRange* This,
        long* pb);

    HRESULT (STDMETHODCALLTYPE *ChangeCase)(
        ITextRange* This,
        long Type);

    HRESULT (STDMETHODCALLTYPE *GetPoint)(
        ITextRange* This,
        long Type,
        long* cx,
        long* cy);

    HRESULT (STDMETHODCALLTYPE *SetPoint)(
        ITextRange* This,
        long x,
        long y,
        long Type,
        long Extend);

    HRESULT (STDMETHODCALLTYPE *ScrollIntoView)(
        ITextRange* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetEmbeddedObject)(
        ITextRange* This,
        IUnknown** ppv);

    END_INTERFACE
} ITextRangeVtbl;
interface ITextRange {
    CONST_VTBL ITextRangeVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define ITextRange_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define ITextRange_AddRef(p) (p)->lpVtbl->AddRef(p)
#define ITextRange_Release(p) (p)->lpVtbl->Release(p)

#define ITextRange_GetTypeInfoCount(p,a) (p)->lpVtbl->GetTypeInfoCount(p,a)
#define ITextRange_GetTypeInfo(p,a,b,c) (p)->lpVtbl->GetTypeInfo(p,a,b,c)
#define ITextRange_GetIDsOfNames(p,a,b,c,d,e) (p)->lpVtbl->GetIDsOfNames(p,a,b,c,d,e)
#define ITextRange_Invoke(p,a,b,c,d,e,f,g,h) (p)->lpVtbl->Invoke(p,a,b,c,d,e,f,g,h)

#define ITextRange_GetText(p,a) (p)->lpVtbl->GetText(p,a)
#define ITextRange_SetText(p,a) (p)->lpVtbl->SetText(p,a)
#define ITextRange_GetChar(p,a) (p)->lpVtbl->GetChar(p,a)
#define ITextRange_SetChar(p,a) (p)->lpVtbl->SetChar(p,a)
#define ITextRange_GetDuplicate(p,a) (p)->lpVtbl->GetDuplicate(p,a)
#define ITextRange_GetFormattedText(p,a) (p)->lpVtbl->GetFormattedText(p,a)
#define ITextRange_SetFormattedText(p,a) (p)->lpVtbl->SetFormattedText(p,a)
#define ITextRange_GetStart(p,a) (p)->lpVtbl->GetStart(p,a)
#define ITextRange_SetStart(p,a) (p)->lpVtbl->SetStart(p,a)
#define ITextRange_GetEnd(p,a) (p)->lpVtbl->GetEnd(p,a)
#define ITextRange_SetEnd(p,a) (p)->lpVtbl->SetEnd(p,a)
#define ITextRange_GetFont(p,a) (p)->lpVtbl->GetFont(p,a)
#define ITextRange_SetFont(p,a) (p)->lpVtbl->SetFont(p,a)
#define ITextRange_GetPara(p,a) (p)->lpVtbl->GetPara(p,a)
#define ITextRange_SetPara(p,a) (p)->lpVtbl->SetPara(p,a)
#define ITextRange_GetStoryLength(p,a) (p)->lpVtbl->GetStoryLength(p,a)
#define ITextRange_GetStoryType(p,a) (p)->lpVtbl->GetStoryType(p,a)
#define ITextRange_Collapse(p,a) (p)->lpVtbl->Collapse(p,a)
#define ITextRange_Expand(p,a,b) (p)->lpVtbl->Expand(p,a,b)
#define ITextRange_GetIndex(p,a,b) (p)->lpVtbl->GetIndex(p,a,b)
#define ITextRange_SetIndex(p,a,b,c) (p)->lpVtbl->SetIndex(p,a,b,c)
#define ITextRange_SetRange(p,a,b) (p)->lpVtbl->SetRange(p,a,b)
#define ITextRange_InRange(p,a,b) (p)->lpVtbl->InRange(p,a,b)
#define ITextRange_InStory(p,a,b) (p)->lpVtbl->InStory(p,a,b)
#define ITextRange_IsEqual(p,a,b) (p)->lpVtbl->IsEqual(p,a,b)
#define ITextRange_Select(p) (p)->lpVtbl->Select(p)
#define ITextRange_StartOf(p,a,b,c) (p)->lpVtbl->StartOf(p,a,b,c)
#define ITextRange_EndOf(p,a,b,c) (p)->lpVtbl->EndOf(p,a,b,c)
#define ITextRange_Move(p,a,b,c) (p)->lpVtbl->Move(p,a,b,c)
#define ITextRange_MoveStart(p,a,b,c) (p)->lpVtbl->MoveStart(p,a,b,c)
#define ITextRange_MoveEnd(p,a,b,c) (p)->lpVtbl->MoveEnd(p,a,b,c)
#define ITextRange_MoveWhile(p,a,b,c) (p)->lpVtbl->MoveWhile(p,a,b,c)
#define ITextRange_MoveStartWhile(p,a,b,c) (p)->lpVtbl->MoveStartWhile(p,a,b,c)
#define ITextRange_MoveEndWhile(p,a,b,c) (p)->lpVtbl->MoveEndWhile(p,a,b,c)
#define ITextRange_MoveUntil(p,a,b,c) (p)->lpVtbl->MoveUntil(p,a,b,c)
#define ITextRange_MoveStartUntil(p,a,b,c) (p)->lpVtbl->MoveStartUntil(p,a,b,c)
#define ITextRange_MoveEndUntil(p,a,b,c) (p)->lpVtbl->MoveEndUntil(p,a,b,c)
#define ITextRange_FindText(p,a,b,c,d) (p)->lpVtbl->FindText(p,a,b,c,d)
#define ITextRange_FindTextStart(p,a,b,c,d) (p)->lpVtbl->FindTextStart(p,a,b,c,d)
#define ITextRange_FindTextEnd(p,a,b,c,d) (p)->lpVtbl->FindTextEnd(p,a,b,c,d)
#define ITextRange_Delete(p,a,b,c) (p)->lpVtbl->Delete(p,a,b,c)
#define ITextRange_Cut(p,a) (p)->lpVtbl->Cut(p,a)
#define ITextRange_Copy(p,a) (p)->lpVtbl->Copy(p,a)
#define ITextRange_Paste(p,a,b) (p)->lpVtbl->Paste(p,a,b)
#define ITextRange_CanPaste(p,a,b,c) (p)->lpVtbl->CanPaste(p,a,b,c)
#define ITextRange_CanEdit(p,a) (p)->lpVtbl->CanEdit(p,a)
#define ITextRange_ChangeCase(p,a) (p)->lpVtbl->ChangeCase(p,a)
#define ITextRange_GetPoint(p,a,b,c) (p)->lpVtbl->GetPoint(p,a,b,c)
#define ITextRange_SetPoint(p,a,b,c,d) (p)->lpVtbl->SetPoint(p,a,b,c,d)
#define ITextRange_ScrollIntoView(p,a) (p)->lpVtbl->ScrollIntoView(p,a)
#define ITextRange_GetEmbeddedObject(p,a) (p)->lpVtbl->GetEmbeddedObject(p,a)
#endif

#endif

HRESULT CALLBACK ITextRange_GetText_Proxy(
    ITextRange* This,
    BSTR* pbstr);
void __RPC_STUB ITextRange_GetText_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_SetText_Proxy(
    ITextRange* This,
    BSTR bstr);
void __RPC_STUB ITextRange_SetText_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_GetChar_Proxy(
    ITextRange* This,
    long* pch);
void __RPC_STUB ITextRange_GetChar_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_SetChar_Proxy(
    ITextRange* This,
    long ch);
void __RPC_STUB ITextRange_SetChar_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_GetDuplicate_Proxy(
    ITextRange* This,
    ITextRange** ppRange);
void __RPC_STUB ITextRange_GetDuplicate_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_GetFormattedText_Proxy(
    ITextRange* This,
    ITextRange** ppRange);
void __RPC_STUB ITextRange_GetFormattedText_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_SetFormattedText_Proxy(
    ITextRange* This,
    ITextRange* pRange);
void __RPC_STUB ITextRange_SetFormattedText_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_GetStart_Proxy(
    ITextRange* This,
    long* pcpFirst);
void __RPC_STUB ITextRange_GetStart_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_SetStart_Proxy(
    ITextRange* This,
    long cpFirst);
void __RPC_STUB ITextRange_SetStart_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_GetEnd_Proxy(
    ITextRange* This,
    long* pcpLim);
void __RPC_STUB ITextRange_GetEnd_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_SetEnd_Proxy(
    ITextRange* This,
    long cpLim);
void __RPC_STUB ITextRange_SetEnd_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_GetFont_Proxy(
    ITextRange* This,
    ITextFont** pFont);
void __RPC_STUB ITextRange_GetFont_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_SetFont_Proxy(
    ITextRange* This,
    ITextFont* pFont);
void __RPC_STUB ITextRange_SetFont_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_GetPara_Proxy(
    ITextRange* This,
    ITextPara** ppPara);
void __RPC_STUB ITextRange_GetPara_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_SetPara_Proxy(
    ITextRange* This,
    ITextPara* pPara);
void __RPC_STUB ITextRange_SetPara_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_GetStoryLength_Proxy(
    ITextRange* This,
    long* pcch);
void __RPC_STUB ITextRange_GetStoryLength_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_GetStoryType_Proxy(
    ITextRange* This,
    long* pValue);
void __RPC_STUB ITextRange_GetStoryType_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_Collapse_Proxy(
    ITextRange* This,
    long bStart);
void __RPC_STUB ITextRange_Collapse_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_Expand_Proxy(
    ITextRange* This,
    long Unit,
    long* pDelta);
void __RPC_STUB ITextRange_Expand_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_GetIndex_Proxy(
    ITextRange* This,
    long Unit,
    long* pIndex);
void __RPC_STUB ITextRange_GetIndex_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_SetIndex_Proxy(
    ITextRange* This,
    long Unit,
    long Index,
    long Extend);
void __RPC_STUB ITextRange_SetIndex_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_SetRange_Proxy(
    ITextRange* This,
    long cpActive,
    long cpOther);
void __RPC_STUB ITextRange_SetRange_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_InRange_Proxy(
    ITextRange* This,
    ITextRange* pRange,
    long* pb);
void __RPC_STUB ITextRange_InRange_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_InStory_Proxy(
    ITextRange* This,
    ITextRange* pRange,
    long* pb);
void __RPC_STUB ITextRange_InStory_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_IsEqual_Proxy(
    ITextRange* This,
    ITextRange* pRange,
    long* pb);
void __RPC_STUB ITextRange_IsEqual_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_Select_Proxy(
    ITextRange* This);
void __RPC_STUB ITextRange_Select_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_StartOf_Proxy(
    ITextRange* This,
    long Unit,
    long Extend,
    long* pDelta);
void __RPC_STUB ITextRange_StartOf_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_EndOf_Proxy(
    ITextRange* This,
    long Unit,
    long Extend,
    long* pDelta);
void __RPC_STUB ITextRange_EndOf_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_Move_Proxy(
    ITextRange* This,
    long Unit,
    long Count,
    long* pDelta);
void __RPC_STUB ITextRange_Move_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_MoveStart_Proxy(
    ITextRange* This,
    long Unit,
    long Count,
    long* pDelta);
void __RPC_STUB ITextRange_MoveStart_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_MoveEnd_Proxy(
    ITextRange* This,
    long Unit,
    long Count,
    long* pDelta);
void __RPC_STUB ITextRange_MoveEnd_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_MoveWhile_Proxy(
    ITextRange* This,
    VARIANT* Cset,
    long Count,
    long* pDelta);
void __RPC_STUB ITextRange_MoveWhile_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_MoveStartWhile_Proxy(
    ITextRange* This,
    VARIANT* Cset,
    long Count,
    long* pDelta);
void __RPC_STUB ITextRange_MoveStartWhile_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_MoveEndWhile_Proxy(
    ITextRange* This,
    VARIANT* Cset,
    long Count,
    long* pDelta);
void __RPC_STUB ITextRange_MoveEndWhile_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_MoveUntil_Proxy(
    ITextRange* This,
    VARIANT* Cset,
    long Count,
    long* pDelta);
void __RPC_STUB ITextRange_MoveUntil_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_MoveStartUntil_Proxy(
    ITextRange* This,
    VARIANT* Cset,
    long Count,
    long* pDelta);
void __RPC_STUB ITextRange_MoveStartUntil_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_MoveEndUntil_Proxy(
    ITextRange* This,
    VARIANT* Cset,
    long Count,
    long* pDelta);
void __RPC_STUB ITextRange_MoveEndUntil_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_FindText_Proxy(
    ITextRange* This,
    BSTR bstr,
    long cch,
    long Flags,
    long* pLength);
void __RPC_STUB ITextRange_FindText_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_FindTextStart_Proxy(
    ITextRange* This,
    BSTR bstr,
    long cch,
    long Flags,
    long* pLength);
void __RPC_STUB ITextRange_FindTextStart_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_FindTextEnd_Proxy(
    ITextRange* This,
    BSTR bstr,
    long cch,
    long Flags,
    long* pLength);
void __RPC_STUB ITextRange_FindTextEnd_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_Delete_Proxy(
    ITextRange* This,
    long Unit,
    long Count,
    long* pDelta);
void __RPC_STUB ITextRange_Delete_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_Cut_Proxy(
    ITextRange* This,
    VARIANT* pVar);
void __RPC_STUB ITextRange_Cut_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_Copy_Proxy(
    ITextRange* This,
    VARIANT* pVar);
void __RPC_STUB ITextRange_Copy_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_Paste_Proxy(
    ITextRange* This,
    VARIANT* pVar,
    long Format);
void __RPC_STUB ITextRange_Paste_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_CanPaste_Proxy(
    ITextRange* This,
    VARIANT* pVar,
    long Format,
    long* pb);
void __RPC_STUB ITextRange_CanPaste_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_CanEdit_Proxy(
    ITextRange* This,
    long* pb);
void __RPC_STUB ITextRange_CanEdit_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_ChangeCase_Proxy(
    ITextRange* This,
    long Type);
void __RPC_STUB ITextRange_ChangeCase_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_GetPoint_Proxy(
    ITextRange* This,
    long Type,
    long* cx,
    long* cy);
void __RPC_STUB ITextRange_GetPoint_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_SetPoint_Proxy(
    ITextRange* This,
    long x,
    long y,
    long Type,
    long Extend);
void __RPC_STUB ITextRange_SetPoint_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_ScrollIntoView_Proxy(
    ITextRange* This,
    long Value);
void __RPC_STUB ITextRange_ScrollIntoView_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextRange_GetEmbeddedObject_Proxy(
    ITextRange* This,
    IUnknown** ppv);
void __RPC_STUB ITextRange_GetEmbeddedObject_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  


#ifndef __ITextSelection_INTERFACE_DEFINED__
#define __ITextSelection_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITextSelection, 0x8cc497c1, 0xa1df, 0x11ce, 0x80,0x98, 0x00,0xaa,0x00,0x47,0xbe,0x5d);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface ITextSelection : public ITextRange
{
    virtual HRESULT STDMETHODCALLTYPE GetFlags(
        long* pFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetFlags(
        long Flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetType(
        long* pType) = 0;

    virtual HRESULT STDMETHODCALLTYPE MoveLeft(
        long Unit,
        long Count,
        long Extend,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE MoveRight(
        long Unit,
        long Count,
        long Extend,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE MoveUp(
        long Unit,
        long Count,
        long Extend,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE MoveDown(
        long Unit,
        long Count,
        long Extend,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE HomeKey(
        long Unit,
        long Extend,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE EndKey(
        long Unit,
        long Extend,
        long* pDelta) = 0;

    virtual HRESULT STDMETHODCALLTYPE TypeText(
        BSTR bstr) = 0;

};
#else
typedef struct ITextSelectionVtbl {
    BEGIN_INTERFACE

    
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITextSelection* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITextSelection* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITextSelection* This);

    
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        ITextSelection* This,
        UINT* pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        ITextSelection* This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo** ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        ITextSelection* This,
        REFIID riid,
        LPOLESTR* rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID* rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        ITextSelection* This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS* pDispParams,
        VARIANT* pVarResult,
        EXCEPINFO* pExcepInfo,
        UINT* puArgErr);

    
    HRESULT (STDMETHODCALLTYPE *GetText)(
        ITextSelection* This,
        BSTR* pbstr);

    HRESULT (STDMETHODCALLTYPE *SetText)(
        ITextSelection* This,
        BSTR bstr);

    HRESULT (STDMETHODCALLTYPE *GetChar)(
        ITextSelection* This,
        long* pch);

    HRESULT (STDMETHODCALLTYPE *SetChar)(
        ITextSelection* This,
        long ch);

    HRESULT (STDMETHODCALLTYPE *GetDuplicate)(
        ITextSelection* This,
        ITextRange** ppRange);

    HRESULT (STDMETHODCALLTYPE *GetFormattedText)(
        ITextSelection* This,
        ITextRange** ppRange);

    HRESULT (STDMETHODCALLTYPE *SetFormattedText)(
        ITextSelection* This,
        ITextRange* pRange);

    HRESULT (STDMETHODCALLTYPE *GetStart)(
        ITextSelection* This,
        long* pcpFirst);

    HRESULT (STDMETHODCALLTYPE *SetStart)(
        ITextSelection* This,
        long cpFirst);

    HRESULT (STDMETHODCALLTYPE *GetEnd)(
        ITextSelection* This,
        long* pcpLim);

    HRESULT (STDMETHODCALLTYPE *SetEnd)(
        ITextSelection* This,
        long cpLim);

    HRESULT (STDMETHODCALLTYPE *GetFont)(
        ITextSelection* This,
        ITextFont** pFont);

    HRESULT (STDMETHODCALLTYPE *SetFont)(
        ITextSelection* This,
        ITextFont* pFont);

    HRESULT (STDMETHODCALLTYPE *GetPara)(
        ITextSelection* This,
        ITextPara** ppPara);

    HRESULT (STDMETHODCALLTYPE *SetPara)(
        ITextSelection* This,
        ITextPara* pPara);

    HRESULT (STDMETHODCALLTYPE *GetStoryLength)(
        ITextSelection* This,
        long* pcch);

    HRESULT (STDMETHODCALLTYPE *GetStoryType)(
        ITextSelection* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *Collapse)(
        ITextSelection* This,
        long bStart);

    HRESULT (STDMETHODCALLTYPE *Expand)(
        ITextSelection* This,
        long Unit,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *GetIndex)(
        ITextSelection* This,
        long Unit,
        long* pIndex);

    HRESULT (STDMETHODCALLTYPE *SetIndex)(
        ITextSelection* This,
        long Unit,
        long Index,
        long Extend);

    HRESULT (STDMETHODCALLTYPE *SetRange)(
        ITextSelection* This,
        long cpActive,
        long cpOther);

    HRESULT (STDMETHODCALLTYPE *InRange)(
        ITextSelection* This,
        ITextRange* pRange,
        long* pb);

    HRESULT (STDMETHODCALLTYPE *InStory)(
        ITextSelection* This,
        ITextRange* pRange,
        long* pb);

    HRESULT (STDMETHODCALLTYPE *IsEqual)(
        ITextSelection* This,
        ITextRange* pRange,
        long* pb);

    HRESULT (STDMETHODCALLTYPE *Select)(
        ITextSelection* This);

    HRESULT (STDMETHODCALLTYPE *StartOf)(
        ITextSelection* This,
        long Unit,
        long Extend,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *EndOf)(
        ITextSelection* This,
        long Unit,
        long Extend,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *Move)(
        ITextSelection* This,
        long Unit,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveStart)(
        ITextSelection* This,
        long Unit,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveEnd)(
        ITextSelection* This,
        long Unit,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveWhile)(
        ITextSelection* This,
        VARIANT* Cset,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveStartWhile)(
        ITextSelection* This,
        VARIANT* Cset,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveEndWhile)(
        ITextSelection* This,
        VARIANT* Cset,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveUntil)(
        ITextSelection* This,
        VARIANT* Cset,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveStartUntil)(
        ITextSelection* This,
        VARIANT* Cset,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveEndUntil)(
        ITextSelection* This,
        VARIANT* Cset,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *FindText)(
        ITextSelection* This,
        BSTR bstr,
        long cch,
        long Flags,
        long* pLength);

    HRESULT (STDMETHODCALLTYPE *FindTextStart)(
        ITextSelection* This,
        BSTR bstr,
        long cch,
        long Flags,
        long* pLength);

    HRESULT (STDMETHODCALLTYPE *FindTextEnd)(
        ITextSelection* This,
        BSTR bstr,
        long cch,
        long Flags,
        long* pLength);

    HRESULT (STDMETHODCALLTYPE *Delete)(
        ITextSelection* This,
        long Unit,
        long Count,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *Cut)(
        ITextSelection* This,
        VARIANT* pVar);

    HRESULT (STDMETHODCALLTYPE *Copy)(
        ITextSelection* This,
        VARIANT* pVar);

    HRESULT (STDMETHODCALLTYPE *Paste)(
        ITextSelection* This,
        VARIANT* pVar,
        long Format);

    HRESULT (STDMETHODCALLTYPE *CanPaste)(
        ITextSelection* This,
        VARIANT* pVar,
        long Format,
        long* pb);

    HRESULT (STDMETHODCALLTYPE *CanEdit)(
        ITextSelection* This,
        long* pb);

    HRESULT (STDMETHODCALLTYPE *ChangeCase)(
        ITextSelection* This,
        long Type);

    HRESULT (STDMETHODCALLTYPE *GetPoint)(
        ITextSelection* This,
        long Type,
        long* cx,
        long* cy);

    HRESULT (STDMETHODCALLTYPE *SetPoint)(
        ITextSelection* This,
        long x,
        long y,
        long Type,
        long Extend);

    HRESULT (STDMETHODCALLTYPE *ScrollIntoView)(
        ITextSelection* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetEmbeddedObject)(
        ITextSelection* This,
        IUnknown** ppv);

    
    HRESULT (STDMETHODCALLTYPE *GetFlags)(
        ITextSelection* This,
        long* pFlags);

    HRESULT (STDMETHODCALLTYPE *SetFlags)(
        ITextSelection* This,
        long Flags);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        ITextSelection* This,
        long* pType);

    HRESULT (STDMETHODCALLTYPE *MoveLeft)(
        ITextSelection* This,
        long Unit,
        long Count,
        long Extend,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveRight)(
        ITextSelection* This,
        long Unit,
        long Count,
        long Extend,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveUp)(
        ITextSelection* This,
        long Unit,
        long Count,
        long Extend,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *MoveDown)(
        ITextSelection* This,
        long Unit,
        long Count,
        long Extend,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *HomeKey)(
        ITextSelection* This,
        long Unit,
        long Extend,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *EndKey)(
        ITextSelection* This,
        long Unit,
        long Extend,
        long* pDelta);

    HRESULT (STDMETHODCALLTYPE *TypeText)(
        ITextSelection* This,
        BSTR bstr);

    END_INTERFACE
} ITextSelectionVtbl;
interface ITextSelection {
    CONST_VTBL ITextSelectionVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define ITextSelection_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define ITextSelection_AddRef(p) (p)->lpVtbl->AddRef(p)
#define ITextSelection_Release(p) (p)->lpVtbl->Release(p)

#define ITextSelection_GetTypeInfoCount(p,a) (p)->lpVtbl->GetTypeInfoCount(p,a)
#define ITextSelection_GetTypeInfo(p,a,b,c) (p)->lpVtbl->GetTypeInfo(p,a,b,c)
#define ITextSelection_GetIDsOfNames(p,a,b,c,d,e) (p)->lpVtbl->GetIDsOfNames(p,a,b,c,d,e)
#define ITextSelection_Invoke(p,a,b,c,d,e,f,g,h) (p)->lpVtbl->Invoke(p,a,b,c,d,e,f,g,h)

#define ITextSelection_GetText(p,a) (p)->lpVtbl->GetText(p,a)
#define ITextSelection_SetText(p,a) (p)->lpVtbl->SetText(p,a)
#define ITextSelection_GetChar(p,a) (p)->lpVtbl->GetChar(p,a)
#define ITextSelection_SetChar(p,a) (p)->lpVtbl->SetChar(p,a)
#define ITextSelection_GetDuplicate(p,a) (p)->lpVtbl->GetDuplicate(p,a)
#define ITextSelection_GetFormattedText(p,a) (p)->lpVtbl->GetFormattedText(p,a)
#define ITextSelection_SetFormattedText(p,a) (p)->lpVtbl->SetFormattedText(p,a)
#define ITextSelection_GetStart(p,a) (p)->lpVtbl->GetStart(p,a)
#define ITextSelection_SetStart(p,a) (p)->lpVtbl->SetStart(p,a)
#define ITextSelection_GetEnd(p,a) (p)->lpVtbl->GetEnd(p,a)
#define ITextSelection_SetEnd(p,a) (p)->lpVtbl->SetEnd(p,a)
#define ITextSelection_GetFont(p,a) (p)->lpVtbl->GetFont(p,a)
#define ITextSelection_SetFont(p,a) (p)->lpVtbl->SetFont(p,a)
#define ITextSelection_GetPara(p,a) (p)->lpVtbl->GetPara(p,a)
#define ITextSelection_SetPara(p,a) (p)->lpVtbl->SetPara(p,a)
#define ITextSelection_GetStoryLength(p,a) (p)->lpVtbl->GetStoryLength(p,a)
#define ITextSelection_GetStoryType(p,a) (p)->lpVtbl->GetStoryType(p,a)
#define ITextSelection_Collapse(p,a) (p)->lpVtbl->Collapse(p,a)
#define ITextSelection_Expand(p,a,b) (p)->lpVtbl->Expand(p,a,b)
#define ITextSelection_GetIndex(p,a,b) (p)->lpVtbl->GetIndex(p,a,b)
#define ITextSelection_SetIndex(p,a,b,c) (p)->lpVtbl->SetIndex(p,a,b,c)
#define ITextSelection_SetRange(p,a,b) (p)->lpVtbl->SetRange(p,a,b)
#define ITextSelection_InRange(p,a,b) (p)->lpVtbl->InRange(p,a,b)
#define ITextSelection_InStory(p,a,b) (p)->lpVtbl->InStory(p,a,b)
#define ITextSelection_IsEqual(p,a,b) (p)->lpVtbl->IsEqual(p,a,b)
#define ITextSelection_Select(p) (p)->lpVtbl->Select(p)
#define ITextSelection_StartOf(p,a,b,c) (p)->lpVtbl->StartOf(p,a,b,c)
#define ITextSelection_EndOf(p,a,b,c) (p)->lpVtbl->EndOf(p,a,b,c)
#define ITextSelection_Move(p,a,b,c) (p)->lpVtbl->Move(p,a,b,c)
#define ITextSelection_MoveStart(p,a,b,c) (p)->lpVtbl->MoveStart(p,a,b,c)
#define ITextSelection_MoveEnd(p,a,b,c) (p)->lpVtbl->MoveEnd(p,a,b,c)
#define ITextSelection_MoveWhile(p,a,b,c) (p)->lpVtbl->MoveWhile(p,a,b,c)
#define ITextSelection_MoveStartWhile(p,a,b,c) (p)->lpVtbl->MoveStartWhile(p,a,b,c)
#define ITextSelection_MoveEndWhile(p,a,b,c) (p)->lpVtbl->MoveEndWhile(p,a,b,c)
#define ITextSelection_MoveUntil(p,a,b,c) (p)->lpVtbl->MoveUntil(p,a,b,c)
#define ITextSelection_MoveStartUntil(p,a,b,c) (p)->lpVtbl->MoveStartUntil(p,a,b,c)
#define ITextSelection_MoveEndUntil(p,a,b,c) (p)->lpVtbl->MoveEndUntil(p,a,b,c)
#define ITextSelection_FindText(p,a,b,c,d) (p)->lpVtbl->FindText(p,a,b,c,d)
#define ITextSelection_FindTextStart(p,a,b,c,d) (p)->lpVtbl->FindTextStart(p,a,b,c,d)
#define ITextSelection_FindTextEnd(p,a,b,c,d) (p)->lpVtbl->FindTextEnd(p,a,b,c,d)
#define ITextSelection_Delete(p,a,b,c) (p)->lpVtbl->Delete(p,a,b,c)
#define ITextSelection_Cut(p,a) (p)->lpVtbl->Cut(p,a)
#define ITextSelection_Copy(p,a) (p)->lpVtbl->Copy(p,a)
#define ITextSelection_Paste(p,a,b) (p)->lpVtbl->Paste(p,a,b)
#define ITextSelection_CanPaste(p,a,b,c) (p)->lpVtbl->CanPaste(p,a,b,c)
#define ITextSelection_CanEdit(p,a) (p)->lpVtbl->CanEdit(p,a)
#define ITextSelection_ChangeCase(p,a) (p)->lpVtbl->ChangeCase(p,a)
#define ITextSelection_GetPoint(p,a,b,c) (p)->lpVtbl->GetPoint(p,a,b,c)
#define ITextSelection_SetPoint(p,a,b,c,d) (p)->lpVtbl->SetPoint(p,a,b,c,d)
#define ITextSelection_ScrollIntoView(p,a) (p)->lpVtbl->ScrollIntoView(p,a)
#define ITextSelection_GetEmbeddedObject(p,a) (p)->lpVtbl->GetEmbeddedObject(p,a)

#define ITextSelection_GetFlags(p,a) (p)->lpVtbl->GetFlags(p,a)
#define ITextSelection_SetFlags(p,a) (p)->lpVtbl->SetFlags(p,a)
#define ITextSelection_GetType(p,a) (p)->lpVtbl->GetType(p,a)
#define ITextSelection_MoveLeft(p,a,b,c,d) (p)->lpVtbl->MoveLeft(p,a,b,c,d)
#define ITextSelection_MoveRight(p,a,b,c,d) (p)->lpVtbl->MoveRight(p,a,b,c,d)
#define ITextSelection_MoveUp(p,a,b,c,d) (p)->lpVtbl->MoveUp(p,a,b,c,d)
#define ITextSelection_MoveDown(p,a,b,c,d) (p)->lpVtbl->MoveDown(p,a,b,c,d)
#define ITextSelection_HomeKey(p,a,b,c) (p)->lpVtbl->HomeKey(p,a,b,c)
#define ITextSelection_EndKey(p,a,b,c) (p)->lpVtbl->EndKey(p,a,b,c)
#define ITextSelection_TypeText(p,a) (p)->lpVtbl->TypeText(p,a)
#endif

#endif

HRESULT CALLBACK ITextSelection_GetFlags_Proxy(
    ITextSelection* This,
    long* pFlags);
void __RPC_STUB ITextSelection_GetFlags_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextSelection_SetFlags_Proxy(
    ITextSelection* This,
    long Flags);
void __RPC_STUB ITextSelection_SetFlags_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextSelection_GetType_Proxy(
    ITextSelection* This,
    long* pType);
void __RPC_STUB ITextSelection_GetType_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextSelection_MoveLeft_Proxy(
    ITextSelection* This,
    long Unit,
    long Count,
    long Extend,
    long* pDelta);
void __RPC_STUB ITextSelection_MoveLeft_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextSelection_MoveRight_Proxy(
    ITextSelection* This,
    long Unit,
    long Count,
    long Extend,
    long* pDelta);
void __RPC_STUB ITextSelection_MoveRight_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextSelection_MoveUp_Proxy(
    ITextSelection* This,
    long Unit,
    long Count,
    long Extend,
    long* pDelta);
void __RPC_STUB ITextSelection_MoveUp_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextSelection_MoveDown_Proxy(
    ITextSelection* This,
    long Unit,
    long Count,
    long Extend,
    long* pDelta);
void __RPC_STUB ITextSelection_MoveDown_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextSelection_HomeKey_Proxy(
    ITextSelection* This,
    long Unit,
    long Extend,
    long* pDelta);
void __RPC_STUB ITextSelection_HomeKey_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextSelection_EndKey_Proxy(
    ITextSelection* This,
    long Unit,
    long Extend,
    long* pDelta);
void __RPC_STUB ITextSelection_EndKey_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextSelection_TypeText_Proxy(
    ITextSelection* This,
    BSTR bstr);
void __RPC_STUB ITextSelection_TypeText_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  


#ifndef __ITextFont_INTERFACE_DEFINED__
#define __ITextFont_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITextFont, 0x8cc497c3, 0xa1df, 0x11ce, 0x80,0x98, 0x00,0xaa,0x00,0x47,0xbe,0x5d);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface ITextFont : public IDispatch
{
    virtual HRESULT STDMETHODCALLTYPE GetDuplicate(
        ITextFont** ppFont) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetDuplicate(
        ITextFont* pFont) = 0;

    virtual HRESULT STDMETHODCALLTYPE CanChange(
        long* pB) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsEqual(
        ITextFont* pFont,
        long* pB) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reset(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStyle(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetStyle(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetAllCaps(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAllCaps(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetAnimation(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAnimation(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetBackColor(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetBackColor(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetBold(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetBold(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetEmboss(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetEmboss(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetForeColor(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetForeColor(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetHidden(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetHidden(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetEngrave(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetEngrave(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetItalic(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetItalic(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetKerning(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetKerning(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetLanguageID(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetLanguageID(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetName(
        BSTR* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetName(
        BSTR Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOutline(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetOutline(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPosition(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetPosition(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetProtected(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetProtected(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetShadow(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetShadow(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSize(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetSize(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSmallCaps(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetSmallCaps(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSpacing(
        float* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetSpacing(
        float Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStrikeThrough(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetStrikeThrough(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSubscript(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetSubscript(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSuperscript(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetSuperscript(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetUnderline(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetUnderline(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetWeight(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetWeight(
        long Value) = 0;

};
#else
typedef struct ITextFontVtbl {
    BEGIN_INTERFACE

    
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITextFont* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITextFont* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITextFont* This);

    
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        ITextFont* This,
        UINT* pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        ITextFont* This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo** ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        ITextFont* This,
        REFIID riid,
        LPOLESTR* rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID* rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        ITextFont* This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS* pDispParams,
        VARIANT* pVarResult,
        EXCEPINFO* pExcepInfo,
        UINT* puArgErr);

    
    HRESULT (STDMETHODCALLTYPE *GetDuplicate)(
        ITextFont* This,
        ITextFont** ppFont);

    HRESULT (STDMETHODCALLTYPE *SetDuplicate)(
        ITextFont* This,
        ITextFont* pFont);

    HRESULT (STDMETHODCALLTYPE *CanChange)(
        ITextFont* This,
        long* pB);

    HRESULT (STDMETHODCALLTYPE *IsEqual)(
        ITextFont* This,
        ITextFont* pFont,
        long* pB);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetStyle)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetStyle)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetAllCaps)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetAllCaps)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetAnimation)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetAnimation)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetBackColor)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetBackColor)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetBold)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetBold)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetEmboss)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetEmboss)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetForeColor)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetForeColor)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetHidden)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetHidden)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetEngrave)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetEngrave)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetItalic)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetItalic)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetKerning)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetKerning)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetLanguageID)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetLanguageID)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetName)(
        ITextFont* This,
        BSTR* pValue);

    HRESULT (STDMETHODCALLTYPE *SetName)(
        ITextFont* This,
        BSTR Value);

    HRESULT (STDMETHODCALLTYPE *GetOutline)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetOutline)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetPosition)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetPosition)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetProtected)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetProtected)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetShadow)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetShadow)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetSize)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetSize)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetSmallCaps)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetSmallCaps)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetSpacing)(
        ITextFont* This,
        float* pValue);

    HRESULT (STDMETHODCALLTYPE *SetSpacing)(
        ITextFont* This,
        float Value);

    HRESULT (STDMETHODCALLTYPE *GetStrikeThrough)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetStrikeThrough)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetSubscript)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetSubscript)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetSuperscript)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetSuperscript)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetUnderline)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetUnderline)(
        ITextFont* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetWeight)(
        ITextFont* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetWeight)(
        ITextFont* This,
        long Value);

    END_INTERFACE
} ITextFontVtbl;
interface ITextFont {
    CONST_VTBL ITextFontVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define ITextFont_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define ITextFont_AddRef(p) (p)->lpVtbl->AddRef(p)
#define ITextFont_Release(p) (p)->lpVtbl->Release(p)

#define ITextFont_GetTypeInfoCount(p,a) (p)->lpVtbl->GetTypeInfoCount(p,a)
#define ITextFont_GetTypeInfo(p,a,b,c) (p)->lpVtbl->GetTypeInfo(p,a,b,c)
#define ITextFont_GetIDsOfNames(p,a,b,c,d,e) (p)->lpVtbl->GetIDsOfNames(p,a,b,c,d,e)
#define ITextFont_Invoke(p,a,b,c,d,e,f,g,h) (p)->lpVtbl->Invoke(p,a,b,c,d,e,f,g,h)

#define ITextFont_GetDuplicate(p,a) (p)->lpVtbl->GetDuplicate(p,a)
#define ITextFont_SetDuplicate(p,a) (p)->lpVtbl->SetDuplicate(p,a)
#define ITextFont_CanChange(p,a) (p)->lpVtbl->CanChange(p,a)
#define ITextFont_IsEqual(p,a,b) (p)->lpVtbl->IsEqual(p,a,b)
#define ITextFont_Reset(p,a) (p)->lpVtbl->Reset(p,a)
#define ITextFont_GetStyle(p,a) (p)->lpVtbl->GetStyle(p,a)
#define ITextFont_SetStyle(p,a) (p)->lpVtbl->SetStyle(p,a)
#define ITextFont_GetAllCaps(p,a) (p)->lpVtbl->GetAllCaps(p,a)
#define ITextFont_SetAllCaps(p,a) (p)->lpVtbl->SetAllCaps(p,a)
#define ITextFont_GetAnimation(p,a) (p)->lpVtbl->GetAnimation(p,a)
#define ITextFont_SetAnimation(p,a) (p)->lpVtbl->SetAnimation(p,a)
#define ITextFont_GetBackColor(p,a) (p)->lpVtbl->GetBackColor(p,a)
#define ITextFont_SetBackColor(p,a) (p)->lpVtbl->SetBackColor(p,a)
#define ITextFont_GetBold(p,a) (p)->lpVtbl->GetBold(p,a)
#define ITextFont_SetBold(p,a) (p)->lpVtbl->SetBold(p,a)
#define ITextFont_GetEmboss(p,a) (p)->lpVtbl->GetEmboss(p,a)
#define ITextFont_SetEmboss(p,a) (p)->lpVtbl->SetEmboss(p,a)
#define ITextFont_GetForeColor(p,a) (p)->lpVtbl->GetForeColor(p,a)
#define ITextFont_SetForeColor(p,a) (p)->lpVtbl->SetForeColor(p,a)
#define ITextFont_GetHidden(p,a) (p)->lpVtbl->GetHidden(p,a)
#define ITextFont_SetHidden(p,a) (p)->lpVtbl->SetHidden(p,a)
#define ITextFont_GetEngrave(p,a) (p)->lpVtbl->GetEngrave(p,a)
#define ITextFont_SetEngrave(p,a) (p)->lpVtbl->SetEngrave(p,a)
#define ITextFont_GetItalic(p,a) (p)->lpVtbl->GetItalic(p,a)
#define ITextFont_SetItalic(p,a) (p)->lpVtbl->SetItalic(p,a)
#define ITextFont_GetKerning(p,a) (p)->lpVtbl->GetKerning(p,a)
#define ITextFont_SetKerning(p,a) (p)->lpVtbl->SetKerning(p,a)
#define ITextFont_GetLanguageID(p,a) (p)->lpVtbl->GetLanguageID(p,a)
#define ITextFont_SetLanguageID(p,a) (p)->lpVtbl->SetLanguageID(p,a)
#define ITextFont_GetName(p,a) (p)->lpVtbl->GetName(p,a)
#define ITextFont_SetName(p,a) (p)->lpVtbl->SetName(p,a)
#define ITextFont_GetOutline(p,a) (p)->lpVtbl->GetOutline(p,a)
#define ITextFont_SetOutline(p,a) (p)->lpVtbl->SetOutline(p,a)
#define ITextFont_GetPosition(p,a) (p)->lpVtbl->GetPosition(p,a)
#define ITextFont_SetPosition(p,a) (p)->lpVtbl->SetPosition(p,a)
#define ITextFont_GetProtected(p,a) (p)->lpVtbl->GetProtected(p,a)
#define ITextFont_SetProtected(p,a) (p)->lpVtbl->SetProtected(p,a)
#define ITextFont_GetShadow(p,a) (p)->lpVtbl->GetShadow(p,a)
#define ITextFont_SetShadow(p,a) (p)->lpVtbl->SetShadow(p,a)
#define ITextFont_GetSize(p,a) (p)->lpVtbl->GetSize(p,a)
#define ITextFont_SetSize(p,a) (p)->lpVtbl->SetSize(p,a)
#define ITextFont_GetSmallCaps(p,a) (p)->lpVtbl->GetSmallCaps(p,a)
#define ITextFont_SetSmallCaps(p,a) (p)->lpVtbl->SetSmallCaps(p,a)
#define ITextFont_GetSpacing(p,a) (p)->lpVtbl->GetSpacing(p,a)
#define ITextFont_SetSpacing(p,a) (p)->lpVtbl->SetSpacing(p,a)
#define ITextFont_GetStrikeThrough(p,a) (p)->lpVtbl->GetStrikeThrough(p,a)
#define ITextFont_SetStrikeThrough(p,a) (p)->lpVtbl->SetStrikeThrough(p,a)
#define ITextFont_GetSubscript(p,a) (p)->lpVtbl->GetSubscript(p,a)
#define ITextFont_SetSubscript(p,a) (p)->lpVtbl->SetSubscript(p,a)
#define ITextFont_GetSuperscript(p,a) (p)->lpVtbl->GetSuperscript(p,a)
#define ITextFont_SetSuperscript(p,a) (p)->lpVtbl->SetSuperscript(p,a)
#define ITextFont_GetUnderline(p,a) (p)->lpVtbl->GetUnderline(p,a)
#define ITextFont_SetUnderline(p,a) (p)->lpVtbl->SetUnderline(p,a)
#define ITextFont_GetWeight(p,a) (p)->lpVtbl->GetWeight(p,a)
#define ITextFont_SetWeight(p,a) (p)->lpVtbl->SetWeight(p,a)
#endif

#endif

HRESULT CALLBACK ITextFont_GetDuplicate_Proxy(
    ITextFont* This,
    ITextFont** ppFont);
void __RPC_STUB ITextFont_GetDuplicate_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetDuplicate_Proxy(
    ITextFont* This,
    ITextFont* pFont);
void __RPC_STUB ITextFont_SetDuplicate_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_CanChange_Proxy(
    ITextFont* This,
    long* pB);
void __RPC_STUB ITextFont_CanChange_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_IsEqual_Proxy(
    ITextFont* This,
    ITextFont* pFont,
    long* pB);
void __RPC_STUB ITextFont_IsEqual_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_Reset_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_Reset_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetStyle_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetStyle_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetStyle_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetStyle_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetAllCaps_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetAllCaps_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetAllCaps_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetAllCaps_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetAnimation_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetAnimation_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetAnimation_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetAnimation_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetBackColor_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetBackColor_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetBackColor_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetBackColor_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetBold_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetBold_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetBold_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetBold_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetEmboss_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetEmboss_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetEmboss_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetEmboss_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetForeColor_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetForeColor_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetForeColor_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetForeColor_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetHidden_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetHidden_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetHidden_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetHidden_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetEngrave_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetEngrave_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetEngrave_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetEngrave_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetItalic_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetItalic_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetItalic_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetItalic_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetKerning_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetKerning_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetKerning_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetKerning_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetLanguageID_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetLanguageID_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetLanguageID_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetLanguageID_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetName_Proxy(
    ITextFont* This,
    BSTR* pValue);
void __RPC_STUB ITextFont_GetName_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetName_Proxy(
    ITextFont* This,
    BSTR Value);
void __RPC_STUB ITextFont_SetName_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetOutline_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetOutline_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetOutline_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetOutline_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetPosition_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetPosition_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetPosition_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetPosition_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetProtected_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetProtected_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetProtected_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetProtected_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetShadow_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetShadow_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetShadow_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetShadow_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetSize_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetSize_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetSize_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetSize_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetSmallCaps_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetSmallCaps_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetSmallCaps_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetSmallCaps_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetSpacing_Proxy(
    ITextFont* This,
    float* pValue);
void __RPC_STUB ITextFont_GetSpacing_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetSpacing_Proxy(
    ITextFont* This,
    float Value);
void __RPC_STUB ITextFont_SetSpacing_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetStrikeThrough_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetStrikeThrough_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetStrikeThrough_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetStrikeThrough_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetSubscript_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetSubscript_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetSubscript_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetSubscript_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetSuperscript_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetSuperscript_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetSuperscript_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetSuperscript_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetUnderline_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetUnderline_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetUnderline_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetUnderline_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_GetWeight_Proxy(
    ITextFont* This,
    long* pValue);
void __RPC_STUB ITextFont_GetWeight_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextFont_SetWeight_Proxy(
    ITextFont* This,
    long Value);
void __RPC_STUB ITextFont_SetWeight_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  


#ifndef __ITextPara_INTERFACE_DEFINED__
#define __ITextPara_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITextPara, 0x8cc497c4, 0xa1df, 0x11ce, 0x80,0x98, 0x00,0xaa,0x00,0x47,0xbe,0x5d);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface ITextPara : public IDispatch
{
    virtual HRESULT STDMETHODCALLTYPE GetDuplicate(
        ITextPara* ppPara) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetDuplicate(
        ITextPara* pPara) = 0;

    virtual HRESULT STDMETHODCALLTYPE CanChange(
        long* pB) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsEqual(
        ITextPara* pPara,
        long* pB) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reset(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStyle(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetStyle(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetAlignment(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAlignment(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetHyphenation(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetHyphenation(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetFirstLineIndent(
        float* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetKeepTogether(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetKeepTogether(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetKeepWithNext(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetKeepWithNext(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetLeftIndent(
        float* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetLineSpacing(
        float* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetLineSpacingRule(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetListAlignment(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetListAlignment(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetListLevelIndex(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetListLevelIndex(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetListStart(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetListStart(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetListTab(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetListTab(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetListType(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetListType(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetNoLineNumber(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetNoLineNumber(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPageBreakBefore(
        long* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetPageBreakBefore(
        long Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRightIndent(
        float* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetRightIndent(
        float Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetIndents(
        float StartIndent,
        float LeftIndent,
        float RightIndent) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetLineSpacing(
        long LineSpacingRule,
        float LineSpacing) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSpaceAfter(
        float* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetSpaceAfter(
        float Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSpaceBefore(
        float* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetSpaceBefore(
        float Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetWindowControl(
        float* pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetWindowControl(
        float Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetTabCount(
        long* pCount) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddTab(
        float tbPos,
        long tbAlign,
        long tbLeader) = 0;

    virtual HRESULT STDMETHODCALLTYPE ClearAllTabs(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE DeleteTab(
        float tbPos) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetTab(
        long iTab,
        float* ptbPos,
        long* ptbAlign,
        long* ptbLeader) = 0;

};
#else
typedef struct ITextParaVtbl {
    BEGIN_INTERFACE

    
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITextPara* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITextPara* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITextPara* This);

    
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        ITextPara* This,
        UINT* pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        ITextPara* This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo** ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        ITextPara* This,
        REFIID riid,
        LPOLESTR* rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID* rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        ITextPara* This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS* pDispParams,
        VARIANT* pVarResult,
        EXCEPINFO* pExcepInfo,
        UINT* puArgErr);

    
    HRESULT (STDMETHODCALLTYPE *GetDuplicate)(
        ITextPara* This,
        ITextPara* ppPara);

    HRESULT (STDMETHODCALLTYPE *SetDuplicate)(
        ITextPara* This,
        ITextPara* pPara);

    HRESULT (STDMETHODCALLTYPE *CanChange)(
        ITextPara* This,
        long* pB);

    HRESULT (STDMETHODCALLTYPE *IsEqual)(
        ITextPara* This,
        ITextPara* pPara,
        long* pB);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        ITextPara* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetStyle)(
        ITextPara* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetStyle)(
        ITextPara* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetAlignment)(
        ITextPara* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetAlignment)(
        ITextPara* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetHyphenation)(
        ITextPara* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetHyphenation)(
        ITextPara* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetFirstLineIndent)(
        ITextPara* This,
        float* pValue);

    HRESULT (STDMETHODCALLTYPE *GetKeepTogether)(
        ITextPara* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetKeepTogether)(
        ITextPara* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetKeepWithNext)(
        ITextPara* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetKeepWithNext)(
        ITextPara* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetLeftIndent)(
        ITextPara* This,
        float* pValue);

    HRESULT (STDMETHODCALLTYPE *GetLineSpacing)(
        ITextPara* This,
        float* pValue);

    HRESULT (STDMETHODCALLTYPE *GetLineSpacingRule)(
        ITextPara* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *GetListAlignment)(
        ITextPara* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetListAlignment)(
        ITextPara* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetListLevelIndex)(
        ITextPara* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetListLevelIndex)(
        ITextPara* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetListStart)(
        ITextPara* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetListStart)(
        ITextPara* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetListTab)(
        ITextPara* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetListTab)(
        ITextPara* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetListType)(
        ITextPara* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetListType)(
        ITextPara* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetNoLineNumber)(
        ITextPara* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetNoLineNumber)(
        ITextPara* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetPageBreakBefore)(
        ITextPara* This,
        long* pValue);

    HRESULT (STDMETHODCALLTYPE *SetPageBreakBefore)(
        ITextPara* This,
        long Value);

    HRESULT (STDMETHODCALLTYPE *GetRightIndent)(
        ITextPara* This,
        float* pValue);

    HRESULT (STDMETHODCALLTYPE *SetRightIndent)(
        ITextPara* This,
        float Value);

    HRESULT (STDMETHODCALLTYPE *SetIndents)(
        ITextPara* This,
        float StartIndent,
        float LeftIndent,
        float RightIndent);

    HRESULT (STDMETHODCALLTYPE *SetLineSpacing)(
        ITextPara* This,
        long LineSpacingRule,
        float LineSpacing);

    HRESULT (STDMETHODCALLTYPE *GetSpaceAfter)(
        ITextPara* This,
        float* pValue);

    HRESULT (STDMETHODCALLTYPE *SetSpaceAfter)(
        ITextPara* This,
        float Value);

    HRESULT (STDMETHODCALLTYPE *GetSpaceBefore)(
        ITextPara* This,
        float* pValue);

    HRESULT (STDMETHODCALLTYPE *SetSpaceBefore)(
        ITextPara* This,
        float Value);

    HRESULT (STDMETHODCALLTYPE *GetWindowControl)(
        ITextPara* This,
        float* pValue);

    HRESULT (STDMETHODCALLTYPE *SetWindowControl)(
        ITextPara* This,
        float Value);

    HRESULT (STDMETHODCALLTYPE *GetTabCount)(
        ITextPara* This,
        long* pCount);

    HRESULT (STDMETHODCALLTYPE *AddTab)(
        ITextPara* This,
        float tbPos,
        long tbAlign,
        long tbLeader);

    HRESULT (STDMETHODCALLTYPE *ClearAllTabs)(
        ITextPara* This);

    HRESULT (STDMETHODCALLTYPE *DeleteTab)(
        ITextPara* This,
        float tbPos);

    HRESULT (STDMETHODCALLTYPE *GetTab)(
        ITextPara* This,
        long iTab,
        float* ptbPos,
        long* ptbAlign,
        long* ptbLeader);

    END_INTERFACE
} ITextParaVtbl;
interface ITextPara {
    CONST_VTBL ITextParaVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define ITextPara_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define ITextPara_AddRef(p) (p)->lpVtbl->AddRef(p)
#define ITextPara_Release(p) (p)->lpVtbl->Release(p)

#define ITextPara_GetTypeInfoCount(p,a) (p)->lpVtbl->GetTypeInfoCount(p,a)
#define ITextPara_GetTypeInfo(p,a,b,c) (p)->lpVtbl->GetTypeInfo(p,a,b,c)
#define ITextPara_GetIDsOfNames(p,a,b,c,d,e) (p)->lpVtbl->GetIDsOfNames(p,a,b,c,d,e)
#define ITextPara_Invoke(p,a,b,c,d,e,f,g,h) (p)->lpVtbl->Invoke(p,a,b,c,d,e,f,g,h)

#define ITextPara_GetDuplicate(p,a) (p)->lpVtbl->GetDuplicate(p,a)
#define ITextPara_SetDuplicate(p,a) (p)->lpVtbl->SetDuplicate(p,a)
#define ITextPara_CanChange(p,a) (p)->lpVtbl->CanChange(p,a)
#define ITextPara_IsEqual(p,a,b) (p)->lpVtbl->IsEqual(p,a,b)
#define ITextPara_Reset(p,a) (p)->lpVtbl->Reset(p,a)
#define ITextPara_GetStyle(p,a) (p)->lpVtbl->GetStyle(p,a)
#define ITextPara_SetStyle(p,a) (p)->lpVtbl->SetStyle(p,a)
#define ITextPara_GetAlignment(p,a) (p)->lpVtbl->GetAlignment(p,a)
#define ITextPara_SetAlignment(p,a) (p)->lpVtbl->SetAlignment(p,a)
#define ITextPara_GetHyphenation(p,a) (p)->lpVtbl->GetHyphenation(p,a)
#define ITextPara_SetHyphenation(p,a) (p)->lpVtbl->SetHyphenation(p,a)
#define ITextPara_GetFirstLineIndent(p,a) (p)->lpVtbl->GetFirstLineIndent(p,a)
#define ITextPara_GetKeepTogether(p,a) (p)->lpVtbl->GetKeepTogether(p,a)
#define ITextPara_SetKeepTogether(p,a) (p)->lpVtbl->SetKeepTogether(p,a)
#define ITextPara_GetKeepWithNext(p,a) (p)->lpVtbl->GetKeepWithNext(p,a)
#define ITextPara_SetKeepWithNext(p,a) (p)->lpVtbl->SetKeepWithNext(p,a)
#define ITextPara_GetLeftIndent(p,a) (p)->lpVtbl->GetLeftIndent(p,a)
#define ITextPara_GetLineSpacing(p,a) (p)->lpVtbl->GetLineSpacing(p,a)
#define ITextPara_GetLineSpacingRule(p,a) (p)->lpVtbl->GetLineSpacingRule(p,a)
#define ITextPara_GetListAlignment(p,a) (p)->lpVtbl->GetListAlignment(p,a)
#define ITextPara_SetListAlignment(p,a) (p)->lpVtbl->SetListAlignment(p,a)
#define ITextPara_GetListLevelIndex(p,a) (p)->lpVtbl->GetListLevelIndex(p,a)
#define ITextPara_SetListLevelIndex(p,a) (p)->lpVtbl->SetListLevelIndex(p,a)
#define ITextPara_GetListStart(p,a) (p)->lpVtbl->GetListStart(p,a)
#define ITextPara_SetListStart(p,a) (p)->lpVtbl->SetListStart(p,a)
#define ITextPara_GetListTab(p,a) (p)->lpVtbl->GetListTab(p,a)
#define ITextPara_SetListTab(p,a) (p)->lpVtbl->SetListTab(p,a)
#define ITextPara_GetListType(p,a) (p)->lpVtbl->GetListType(p,a)
#define ITextPara_SetListType(p,a) (p)->lpVtbl->SetListType(p,a)
#define ITextPara_GetNoLineNumber(p,a) (p)->lpVtbl->GetNoLineNumber(p,a)
#define ITextPara_SetNoLineNumber(p,a) (p)->lpVtbl->SetNoLineNumber(p,a)
#define ITextPara_GetPageBreakBefore(p,a) (p)->lpVtbl->GetPageBreakBefore(p,a)
#define ITextPara_SetPageBreakBefore(p,a) (p)->lpVtbl->SetPageBreakBefore(p,a)
#define ITextPara_GetRightIndent(p,a) (p)->lpVtbl->GetRightIndent(p,a)
#define ITextPara_SetRightIndent(p,a) (p)->lpVtbl->SetRightIndent(p,a)
#define ITextPara_SetIndents(p,a,b,c) (p)->lpVtbl->SetIndents(p,a,b,c)
#define ITextPara_SetLineSpacing(p,a,b) (p)->lpVtbl->SetLineSpacing(p,a,b)
#define ITextPara_GetSpaceAfter(p,a) (p)->lpVtbl->GetSpaceAfter(p,a)
#define ITextPara_SetSpaceAfter(p,a) (p)->lpVtbl->SetSpaceAfter(p,a)
#define ITextPara_GetSpaceBefore(p,a) (p)->lpVtbl->GetSpaceBefore(p,a)
#define ITextPara_SetSpaceBefore(p,a) (p)->lpVtbl->SetSpaceBefore(p,a)
#define ITextPara_GetWindowControl(p,a) (p)->lpVtbl->GetWindowControl(p,a)
#define ITextPara_SetWindowControl(p,a) (p)->lpVtbl->SetWindowControl(p,a)
#define ITextPara_GetTabCount(p,a) (p)->lpVtbl->GetTabCount(p,a)
#define ITextPara_AddTab(p,a,b,c) (p)->lpVtbl->AddTab(p,a,b,c)
#define ITextPara_ClearAllTabs(p) (p)->lpVtbl->ClearAllTabs(p)
#define ITextPara_DeleteTab(p,a) (p)->lpVtbl->DeleteTab(p,a)
#define ITextPara_GetTab(p,a,b,c,d) (p)->lpVtbl->GetTab(p,a,b,c,d)
#endif

#endif

HRESULT CALLBACK ITextPara_GetDuplicate_Proxy(
    ITextPara* This,
    ITextPara* ppPara);
void __RPC_STUB ITextPara_GetDuplicate_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetDuplicate_Proxy(
    ITextPara* This,
    ITextPara* pPara);
void __RPC_STUB ITextPara_SetDuplicate_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_CanChange_Proxy(
    ITextPara* This,
    long* pB);
void __RPC_STUB ITextPara_CanChange_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_IsEqual_Proxy(
    ITextPara* This,
    ITextPara* pPara,
    long* pB);
void __RPC_STUB ITextPara_IsEqual_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_Reset_Proxy(
    ITextPara* This,
    long Value);
void __RPC_STUB ITextPara_Reset_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetStyle_Proxy(
    ITextPara* This,
    long* pValue);
void __RPC_STUB ITextPara_GetStyle_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetStyle_Proxy(
    ITextPara* This,
    long Value);
void __RPC_STUB ITextPara_SetStyle_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetAlignment_Proxy(
    ITextPara* This,
    long* pValue);
void __RPC_STUB ITextPara_GetAlignment_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetAlignment_Proxy(
    ITextPara* This,
    long Value);
void __RPC_STUB ITextPara_SetAlignment_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetHyphenation_Proxy(
    ITextPara* This,
    long* pValue);
void __RPC_STUB ITextPara_GetHyphenation_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetHyphenation_Proxy(
    ITextPara* This,
    long Value);
void __RPC_STUB ITextPara_SetHyphenation_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetFirstLineIndent_Proxy(
    ITextPara* This,
    float* pValue);
void __RPC_STUB ITextPara_GetFirstLineIndent_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetKeepTogether_Proxy(
    ITextPara* This,
    long* pValue);
void __RPC_STUB ITextPara_GetKeepTogether_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetKeepTogether_Proxy(
    ITextPara* This,
    long Value);
void __RPC_STUB ITextPara_SetKeepTogether_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetKeepWithNext_Proxy(
    ITextPara* This,
    long* pValue);
void __RPC_STUB ITextPara_GetKeepWithNext_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetKeepWithNext_Proxy(
    ITextPara* This,
    long Value);
void __RPC_STUB ITextPara_SetKeepWithNext_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetLeftIndent_Proxy(
    ITextPara* This,
    float* pValue);
void __RPC_STUB ITextPara_GetLeftIndent_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetLineSpacing_Proxy(
    ITextPara* This,
    float* pValue);
void __RPC_STUB ITextPara_GetLineSpacing_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetLineSpacingRule_Proxy(
    ITextPara* This,
    long* pValue);
void __RPC_STUB ITextPara_GetLineSpacingRule_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetListAlignment_Proxy(
    ITextPara* This,
    long* pValue);
void __RPC_STUB ITextPara_GetListAlignment_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetListAlignment_Proxy(
    ITextPara* This,
    long Value);
void __RPC_STUB ITextPara_SetListAlignment_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetListLevelIndex_Proxy(
    ITextPara* This,
    long* pValue);
void __RPC_STUB ITextPara_GetListLevelIndex_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetListLevelIndex_Proxy(
    ITextPara* This,
    long Value);
void __RPC_STUB ITextPara_SetListLevelIndex_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetListStart_Proxy(
    ITextPara* This,
    long* pValue);
void __RPC_STUB ITextPara_GetListStart_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetListStart_Proxy(
    ITextPara* This,
    long Value);
void __RPC_STUB ITextPara_SetListStart_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetListTab_Proxy(
    ITextPara* This,
    long* pValue);
void __RPC_STUB ITextPara_GetListTab_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetListTab_Proxy(
    ITextPara* This,
    long Value);
void __RPC_STUB ITextPara_SetListTab_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetListType_Proxy(
    ITextPara* This,
    long* pValue);
void __RPC_STUB ITextPara_GetListType_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetListType_Proxy(
    ITextPara* This,
    long Value);
void __RPC_STUB ITextPara_SetListType_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetNoLineNumber_Proxy(
    ITextPara* This,
    long* pValue);
void __RPC_STUB ITextPara_GetNoLineNumber_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetNoLineNumber_Proxy(
    ITextPara* This,
    long Value);
void __RPC_STUB ITextPara_SetNoLineNumber_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetPageBreakBefore_Proxy(
    ITextPara* This,
    long* pValue);
void __RPC_STUB ITextPara_GetPageBreakBefore_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetPageBreakBefore_Proxy(
    ITextPara* This,
    long Value);
void __RPC_STUB ITextPara_SetPageBreakBefore_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetRightIndent_Proxy(
    ITextPara* This,
    float* pValue);
void __RPC_STUB ITextPara_GetRightIndent_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetRightIndent_Proxy(
    ITextPara* This,
    float Value);
void __RPC_STUB ITextPara_SetRightIndent_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetIndents_Proxy(
    ITextPara* This,
    float StartIndent,
    float LeftIndent,
    float RightIndent);
void __RPC_STUB ITextPara_SetIndents_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetLineSpacing_Proxy(
    ITextPara* This,
    long LineSpacingRule,
    float LineSpacing);
void __RPC_STUB ITextPara_SetLineSpacing_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetSpaceAfter_Proxy(
    ITextPara* This,
    float* pValue);
void __RPC_STUB ITextPara_GetSpaceAfter_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetSpaceAfter_Proxy(
    ITextPara* This,
    float Value);
void __RPC_STUB ITextPara_SetSpaceAfter_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetSpaceBefore_Proxy(
    ITextPara* This,
    float* pValue);
void __RPC_STUB ITextPara_GetSpaceBefore_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetSpaceBefore_Proxy(
    ITextPara* This,
    float Value);
void __RPC_STUB ITextPara_SetSpaceBefore_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetWindowControl_Proxy(
    ITextPara* This,
    float* pValue);
void __RPC_STUB ITextPara_GetWindowControl_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_SetWindowControl_Proxy(
    ITextPara* This,
    float Value);
void __RPC_STUB ITextPara_SetWindowControl_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetTabCount_Proxy(
    ITextPara* This,
    long* pCount);
void __RPC_STUB ITextPara_GetTabCount_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_AddTab_Proxy(
    ITextPara* This,
    float tbPos,
    long tbAlign,
    long tbLeader);
void __RPC_STUB ITextPara_AddTab_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_ClearAllTabs_Proxy(
    ITextPara* This);
void __RPC_STUB ITextPara_ClearAllTabs_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_DeleteTab_Proxy(
    ITextPara* This,
    float tbPos);
void __RPC_STUB ITextPara_DeleteTab_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextPara_GetTab_Proxy(
    ITextPara* This,
    long iTab,
    float* ptbPos,
    long* ptbAlign,
    long* ptbLeader);
void __RPC_STUB ITextPara_GetTab_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  


#ifndef __ITextStoryRanges_INTERFACE_DEFINED__
#define __ITextStoryRanges_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITextStoryRanges, 0x8cc497c5, 0xa1df, 0x11ce, 0x80,0x98, 0x00,0xaa,0x00,0x47,0xbe,0x5d);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface ITextStoryRanges : public IDispatch
{
    virtual HRESULT STDMETHODCALLTYPE _NewEnum(
        IUnknown** ppUnkEnum) = 0;

    virtual HRESULT STDMETHODCALLTYPE Item(
        long Index,
        ITextRange** ppRange) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetCount(
        long* pCount) = 0;

};
#else
typedef struct ITextStoryRangesVtbl {
    BEGIN_INTERFACE

    
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITextStoryRanges* This,
        REFIID riid,
        void** ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITextStoryRanges* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITextStoryRanges* This);

    
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        ITextStoryRanges* This,
        UINT* pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        ITextStoryRanges* This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo** ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        ITextStoryRanges* This,
        REFIID riid,
        LPOLESTR* rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID* rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        ITextStoryRanges* This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS* pDispParams,
        VARIANT* pVarResult,
        EXCEPINFO* pExcepInfo,
        UINT* puArgErr);

    
    HRESULT (STDMETHODCALLTYPE *_NewEnum)(
        ITextStoryRanges* This,
        IUnknown** ppUnkEnum);

    HRESULT (STDMETHODCALLTYPE *Item)(
        ITextStoryRanges* This,
        long Index,
        ITextRange** ppRange);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        ITextStoryRanges* This,
        long* pCount);

    END_INTERFACE
} ITextStoryRangesVtbl;
interface ITextStoryRanges {
    CONST_VTBL ITextStoryRangesVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define ITextStoryRanges_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define ITextStoryRanges_AddRef(p) (p)->lpVtbl->AddRef(p)
#define ITextStoryRanges_Release(p) (p)->lpVtbl->Release(p)

#define ITextStoryRanges_GetTypeInfoCount(p,a) (p)->lpVtbl->GetTypeInfoCount(p,a)
#define ITextStoryRanges_GetTypeInfo(p,a,b,c) (p)->lpVtbl->GetTypeInfo(p,a,b,c)
#define ITextStoryRanges_GetIDsOfNames(p,a,b,c,d,e) (p)->lpVtbl->GetIDsOfNames(p,a,b,c,d,e)
#define ITextStoryRanges_Invoke(p,a,b,c,d,e,f,g,h) (p)->lpVtbl->Invoke(p,a,b,c,d,e,f,g,h)

#define ITextStoryRanges__NewEnum(p,a) (p)->lpVtbl->_NewEnum(p,a)
#define ITextStoryRanges_Item(p,a,b) (p)->lpVtbl->Item(p,a,b)
#define ITextStoryRanges_GetCount(p,a) (p)->lpVtbl->GetCount(p,a)
#endif

#endif

HRESULT CALLBACK ITextStoryRanges__NewEnum_Proxy(
    ITextStoryRanges* This,
    IUnknown** ppUnkEnum);
void __RPC_STUB ITextStoryRanges__NewEnum_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextStoryRanges_Item_Proxy(
    ITextStoryRanges* This,
    long Index,
    ITextRange** ppRange);
void __RPC_STUB ITextStoryRanges_Item_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK ITextStoryRanges_GetCount_Proxy(
    ITextStoryRanges* This,
    long* pCount);
void __RPC_STUB ITextStoryRanges_GetCount_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  



ULONG           __RPC_USER VARIANT_UserSize     (ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal  (ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void            __RPC_USER VARIANT_UserFree     (ULONG *, VARIANT *);
ULONG           __RPC_USER BSTR_UserSize     (ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal  (ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void            __RPC_USER BSTR_UserFree     (ULONG *, BSTR *);



#ifdef __cplusplus
}
#endif
#endif 
