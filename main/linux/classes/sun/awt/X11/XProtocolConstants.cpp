#include <sun/awt/X11/XProtocolConstants.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XProtocolConstants_FieldInfo_[] = {
	{"X_Reply", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_Reply)},
	{"X_Error", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_Error)},
	{"X_CreateWindow", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_CreateWindow)},
	{"X_ChangeWindowAttributes", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ChangeWindowAttributes)},
	{"X_GetWindowAttributes", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GetWindowAttributes)},
	{"X_DestroyWindow", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_DestroyWindow)},
	{"X_DestroySubwindows", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_DestroySubwindows)},
	{"X_ChangeSaveSet", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ChangeSaveSet)},
	{"X_ReparentWindow", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ReparentWindow)},
	{"X_MapWindow", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_MapWindow)},
	{"X_MapSubwindows", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_MapSubwindows)},
	{"X_UnmapWindow", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_UnmapWindow)},
	{"X_UnmapSubwindows", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_UnmapSubwindows)},
	{"X_ConfigureWindow", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ConfigureWindow)},
	{"X_CirculateWindow", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_CirculateWindow)},
	{"X_GetGeometry", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GetGeometry)},
	{"X_QueryTree", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_QueryTree)},
	{"X_InternAtom", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_InternAtom)},
	{"X_GetAtomName", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GetAtomName)},
	{"X_ChangeProperty", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ChangeProperty)},
	{"X_DeleteProperty", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_DeleteProperty)},
	{"X_GetProperty", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GetProperty)},
	{"X_ListProperties", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ListProperties)},
	{"X_SetSelectionOwner", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_SetSelectionOwner)},
	{"X_GetSelectionOwner", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GetSelectionOwner)},
	{"X_ConvertSelection", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ConvertSelection)},
	{"X_SendEvent", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_SendEvent)},
	{"X_GrabPointer", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GrabPointer)},
	{"X_UngrabPointer", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_UngrabPointer)},
	{"X_GrabButton", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GrabButton)},
	{"X_UngrabButton", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_UngrabButton)},
	{"X_ChangeActivePointerGrab", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ChangeActivePointerGrab)},
	{"X_GrabKeyboard", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GrabKeyboard)},
	{"X_UngrabKeyboard", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_UngrabKeyboard)},
	{"X_GrabKey", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GrabKey)},
	{"X_UngrabKey", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_UngrabKey)},
	{"X_AllowEvents", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_AllowEvents)},
	{"X_GrabServer", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GrabServer)},
	{"X_UngrabServer", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_UngrabServer)},
	{"X_QueryPointer", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_QueryPointer)},
	{"X_GetMotionEvents", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GetMotionEvents)},
	{"X_TranslateCoords", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_TranslateCoords)},
	{"X_WarpPointer", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_WarpPointer)},
	{"X_SetInputFocus", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_SetInputFocus)},
	{"X_GetInputFocus", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GetInputFocus)},
	{"X_QueryKeymap", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_QueryKeymap)},
	{"X_OpenFont", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_OpenFont)},
	{"X_CloseFont", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_CloseFont)},
	{"X_QueryFont", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_QueryFont)},
	{"X_QueryTextExtents", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_QueryTextExtents)},
	{"X_ListFonts", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ListFonts)},
	{"X_ListFontsWithInfo", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ListFontsWithInfo)},
	{"X_SetFontPath", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_SetFontPath)},
	{"X_GetFontPath", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GetFontPath)},
	{"X_CreatePixmap", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_CreatePixmap)},
	{"X_FreePixmap", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_FreePixmap)},
	{"X_CreateGC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_CreateGC)},
	{"X_ChangeGC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ChangeGC)},
	{"X_CopyGC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_CopyGC)},
	{"X_SetDashes", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_SetDashes)},
	{"X_SetClipRectangles", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_SetClipRectangles)},
	{"X_FreeGC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_FreeGC)},
	{"X_ClearArea", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ClearArea)},
	{"X_CopyArea", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_CopyArea)},
	{"X_CopyPlane", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_CopyPlane)},
	{"X_PolyPoint", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_PolyPoint)},
	{"X_PolyLine", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_PolyLine)},
	{"X_PolySegment", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_PolySegment)},
	{"X_PolyRectangle", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_PolyRectangle)},
	{"X_PolyArc", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_PolyArc)},
	{"X_FillPoly", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_FillPoly)},
	{"X_PolyFillRectangle", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_PolyFillRectangle)},
	{"X_PolyFillArc", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_PolyFillArc)},
	{"X_PutImage", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_PutImage)},
	{"X_GetImage", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GetImage)},
	{"X_PolyText8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_PolyText8)},
	{"X_PolyText16", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_PolyText16)},
	{"X_ImageText8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ImageText8)},
	{"X_ImageText16", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ImageText16)},
	{"X_CreateColormap", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_CreateColormap)},
	{"X_FreeColormap", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_FreeColormap)},
	{"X_CopyColormapAndFree", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_CopyColormapAndFree)},
	{"X_InstallColormap", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_InstallColormap)},
	{"X_UninstallColormap", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_UninstallColormap)},
	{"X_ListInstalledColormaps", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ListInstalledColormaps)},
	{"X_AllocColor", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_AllocColor)},
	{"X_AllocNamedColor", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_AllocNamedColor)},
	{"X_AllocColorCells", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_AllocColorCells)},
	{"X_AllocColorPlanes", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_AllocColorPlanes)},
	{"X_FreeColors", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_FreeColors)},
	{"X_StoreColors", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_StoreColors)},
	{"X_StoreNamedColor", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_StoreNamedColor)},
	{"X_QueryColors", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_QueryColors)},
	{"X_LookupColor", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_LookupColor)},
	{"X_CreateCursor", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_CreateCursor)},
	{"X_CreateGlyphCursor", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_CreateGlyphCursor)},
	{"X_FreeCursor", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_FreeCursor)},
	{"X_RecolorCursor", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_RecolorCursor)},
	{"X_QueryBestSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_QueryBestSize)},
	{"X_QueryExtension", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_QueryExtension)},
	{"X_ListExtensions", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ListExtensions)},
	{"X_ChangeKeyboardMapping", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ChangeKeyboardMapping)},
	{"X_GetKeyboardMapping", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GetKeyboardMapping)},
	{"X_ChangeKeyboardControl", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ChangeKeyboardControl)},
	{"X_GetKeyboardControl", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GetKeyboardControl)},
	{"X_Bell", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_Bell)},
	{"X_ChangePointerControl", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ChangePointerControl)},
	{"X_GetPointerControl", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GetPointerControl)},
	{"X_SetScreenSaver", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_SetScreenSaver)},
	{"X_GetScreenSaver", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GetScreenSaver)},
	{"X_ChangeHosts", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ChangeHosts)},
	{"X_ListHosts", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ListHosts)},
	{"X_SetAccessControl", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_SetAccessControl)},
	{"X_SetCloseDownMode", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_SetCloseDownMode)},
	{"X_KillClient", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_KillClient)},
	{"X_RotateProperties", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_RotateProperties)},
	{"X_ForceScreenSaver", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_ForceScreenSaver)},
	{"X_SetPointerMapping", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_SetPointerMapping)},
	{"X_GetPointerMapping", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GetPointerMapping)},
	{"X_SetModifierMapping", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_SetModifierMapping)},
	{"X_GetModifierMapping", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_GetModifierMapping)},
	{"X_NoOperation", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XProtocolConstants, X_NoOperation)},
	{}
};

$MethodInfo _XProtocolConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XProtocolConstants::*)()>(&XProtocolConstants::init$))},
	{}
};

$ClassInfo _XProtocolConstants_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11.XProtocolConstants",
	"java.lang.Object",
	nullptr,
	_XProtocolConstants_FieldInfo_,
	_XProtocolConstants_MethodInfo_
};

$Object* allocate$XProtocolConstants($Class* clazz) {
	return $of($alloc(XProtocolConstants));
}

void XProtocolConstants::init$() {
}

XProtocolConstants::XProtocolConstants() {
}

$Class* XProtocolConstants::load$($String* name, bool initialize) {
	$loadClass(XProtocolConstants, name, initialize, &_XProtocolConstants_ClassInfo_, allocate$XProtocolConstants);
	return class$;
}

$Class* XProtocolConstants::class$ = nullptr;

		} // X11
	} // awt
} // sun