#ifndef _sun_awt_X11_XProtocolConstants_h_
#define _sun_awt_X11_XProtocolConstants_h_
//$ class sun.awt.X11.XProtocolConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace X11 {

class XProtocolConstants : public ::java::lang::Object {
	$class(XProtocolConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XProtocolConstants();
	void init$();
	static const int32_t X_Reply = 1;
	static const int32_t X_Error = 0;
	static const int32_t X_CreateWindow = 1;
	static const int32_t X_ChangeWindowAttributes = 2;
	static const int32_t X_GetWindowAttributes = 3;
	static const int32_t X_DestroyWindow = 4;
	static const int32_t X_DestroySubwindows = 5;
	static const int32_t X_ChangeSaveSet = 6;
	static const int32_t X_ReparentWindow = 7;
	static const int32_t X_MapWindow = 8;
	static const int32_t X_MapSubwindows = 9;
	static const int32_t X_UnmapWindow = 10;
	static const int32_t X_UnmapSubwindows = 11;
	static const int32_t X_ConfigureWindow = 12;
	static const int32_t X_CirculateWindow = 13;
	static const int32_t X_GetGeometry = 14;
	static const int32_t X_QueryTree = 15;
	static const int32_t X_InternAtom = 16;
	static const int32_t X_GetAtomName = 17;
	static const int32_t X_ChangeProperty = 18;
	static const int32_t X_DeleteProperty = 19;
	static const int32_t X_GetProperty = 20;
	static const int32_t X_ListProperties = 21;
	static const int32_t X_SetSelectionOwner = 22;
	static const int32_t X_GetSelectionOwner = 23;
	static const int32_t X_ConvertSelection = 24;
	static const int32_t X_SendEvent = 25;
	static const int32_t X_GrabPointer = 26;
	static const int32_t X_UngrabPointer = 27;
	static const int32_t X_GrabButton = 28;
	static const int32_t X_UngrabButton = 29;
	static const int32_t X_ChangeActivePointerGrab = 30;
	static const int32_t X_GrabKeyboard = 31;
	static const int32_t X_UngrabKeyboard = 32;
	static const int32_t X_GrabKey = 33;
	static const int32_t X_UngrabKey = 34;
	static const int32_t X_AllowEvents = 35;
	static const int32_t X_GrabServer = 36;
	static const int32_t X_UngrabServer = 37;
	static const int32_t X_QueryPointer = 38;
	static const int32_t X_GetMotionEvents = 39;
	static const int32_t X_TranslateCoords = 40;
	static const int32_t X_WarpPointer = 41;
	static const int32_t X_SetInputFocus = 42;
	static const int32_t X_GetInputFocus = 43;
	static const int32_t X_QueryKeymap = 44;
	static const int32_t X_OpenFont = 45;
	static const int32_t X_CloseFont = 46;
	static const int32_t X_QueryFont = 47;
	static const int32_t X_QueryTextExtents = 48;
	static const int32_t X_ListFonts = 49;
	static const int32_t X_ListFontsWithInfo = 50;
	static const int32_t X_SetFontPath = 51;
	static const int32_t X_GetFontPath = 52;
	static const int32_t X_CreatePixmap = 53;
	static const int32_t X_FreePixmap = 54;
	static const int32_t X_CreateGC = 55;
	static const int32_t X_ChangeGC = 56;
	static const int32_t X_CopyGC = 57;
	static const int32_t X_SetDashes = 58;
	static const int32_t X_SetClipRectangles = 59;
	static const int32_t X_FreeGC = 60;
	static const int32_t X_ClearArea = 61;
	static const int32_t X_CopyArea = 62;
	static const int32_t X_CopyPlane = 63;
	static const int32_t X_PolyPoint = 64;
	static const int32_t X_PolyLine = 65;
	static const int32_t X_PolySegment = 66;
	static const int32_t X_PolyRectangle = 67;
	static const int32_t X_PolyArc = 68;
	static const int32_t X_FillPoly = 69;
	static const int32_t X_PolyFillRectangle = 70;
	static const int32_t X_PolyFillArc = 71;
	static const int32_t X_PutImage = 72;
	static const int32_t X_GetImage = 73;
	static const int32_t X_PolyText8 = 74;
	static const int32_t X_PolyText16 = 75;
	static const int32_t X_ImageText8 = 76;
	static const int32_t X_ImageText16 = 77;
	static const int32_t X_CreateColormap = 78;
	static const int32_t X_FreeColormap = 79;
	static const int32_t X_CopyColormapAndFree = 80;
	static const int32_t X_InstallColormap = 81;
	static const int32_t X_UninstallColormap = 82;
	static const int32_t X_ListInstalledColormaps = 83;
	static const int32_t X_AllocColor = 84;
	static const int32_t X_AllocNamedColor = 85;
	static const int32_t X_AllocColorCells = 86;
	static const int32_t X_AllocColorPlanes = 87;
	static const int32_t X_FreeColors = 88;
	static const int32_t X_StoreColors = 89;
	static const int32_t X_StoreNamedColor = 90;
	static const int32_t X_QueryColors = 91;
	static const int32_t X_LookupColor = 92;
	static const int32_t X_CreateCursor = 93;
	static const int32_t X_CreateGlyphCursor = 94;
	static const int32_t X_FreeCursor = 95;
	static const int32_t X_RecolorCursor = 96;
	static const int32_t X_QueryBestSize = 97;
	static const int32_t X_QueryExtension = 98;
	static const int32_t X_ListExtensions = 99;
	static const int32_t X_ChangeKeyboardMapping = 100;
	static const int32_t X_GetKeyboardMapping = 101;
	static const int32_t X_ChangeKeyboardControl = 102;
	static const int32_t X_GetKeyboardControl = 103;
	static const int32_t X_Bell = 104;
	static const int32_t X_ChangePointerControl = 105;
	static const int32_t X_GetPointerControl = 106;
	static const int32_t X_SetScreenSaver = 107;
	static const int32_t X_GetScreenSaver = 108;
	static const int32_t X_ChangeHosts = 109;
	static const int32_t X_ListHosts = 110;
	static const int32_t X_SetAccessControl = 111;
	static const int32_t X_SetCloseDownMode = 112;
	static const int32_t X_KillClient = 113;
	static const int32_t X_RotateProperties = 114;
	static const int32_t X_ForceScreenSaver = 115;
	static const int32_t X_SetPointerMapping = 116;
	static const int32_t X_GetPointerMapping = 117;
	static const int32_t X_SetModifierMapping = 118;
	static const int32_t X_GetModifierMapping = 119;
	static const int32_t X_NoOperation = 127;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XProtocolConstants_h_