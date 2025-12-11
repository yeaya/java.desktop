#ifndef _sun_awt_X11_XConstants_h_
#define _sun_awt_X11_XConstants_h_
//$ class sun.awt.X11.XConstants
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALL_BUTTONS_MASK")
#undef ALL_BUTTONS_MASK
#pragma push_macro("CWX")
#undef CWX
#pragma push_macro("CWY")
#undef CWY
#pragma push_macro("MAX_BUTTONS")
#undef MAX_BUTTONS
#pragma push_macro("X_PROTOCOL")
#undef X_PROTOCOL
#pragma push_macro("X_PROTOCOL_REVISION")
#undef X_PROTOCOL_REVISION

namespace sun {
	namespace awt {
		namespace X11 {

class XConstants : public ::java::lang::Object {
	$class(XConstants, 0, ::java::lang::Object)
public:
	XConstants();
	void init$();
	static const int32_t X_PROTOCOL = 11;
	static const int32_t X_PROTOCOL_REVISION = 0;
	static const int64_t None = (int64_t)0;
	static const int64_t ParentRelative = (int64_t)1;
	static const int64_t CopyFromParent = (int64_t)0;
	static const int64_t PointerWindow = (int64_t)0;
	static const int64_t InputFocus = (int64_t)1;
	static const int64_t PointerRoot = (int64_t)1;
	static const int64_t AnyPropertyType = (int64_t)0;
	static const int64_t AnyKey = (int64_t)0;
	static const int64_t AnyButton = (int64_t)0;
	static const int64_t AllTemporary = (int64_t)0;
	static const int64_t CurrentTime = (int64_t)0;
	static const int64_t NoSymbol = (int64_t)0;
	static const int64_t NoEventMask = (int64_t)0;
	static const int64_t KeyPressMask = 1; // ((int64_t)1 << 0)
	static const int64_t KeyReleaseMask = 2; // ((int64_t)1 << 1)
	static const int64_t ButtonPressMask = 4; // ((int64_t)1 << 2)
	static const int64_t ButtonReleaseMask = 8; // ((int64_t)1 << 3)
	static const int64_t EnterWindowMask = 16; // ((int64_t)1 << 4)
	static const int64_t LeaveWindowMask = 32; // ((int64_t)1 << 5)
	static const int64_t PointerMotionMask = 64; // ((int64_t)1 << 6)
	static const int64_t PointerMotionHintMask = 128; // ((int64_t)1 << 7)
	static const int64_t Button1MotionMask = 256; // ((int64_t)1 << 8)
	static const int64_t Button2MotionMask = 512; // ((int64_t)1 << 9)
	static const int64_t Button3MotionMask = 1024; // ((int64_t)1 << 10)
	static const int64_t Button4MotionMask = 2048; // ((int64_t)1 << 11)
	static const int64_t Button5MotionMask = 4096; // ((int64_t)1 << 12)
	static const int64_t ButtonMotionMask = 8192; // ((int64_t)1 << 13)
	static const int64_t KeymapStateMask = 16384; // ((int64_t)1 << 14)
	static const int64_t ExposureMask = 32768; // ((int64_t)1 << 15)
	static const int64_t VisibilityChangeMask = 65536; // ((int64_t)1 << 16)
	static const int64_t StructureNotifyMask = 131072; // ((int64_t)1 << 17)
	static const int64_t ResizeRedirectMask = 262144; // ((int64_t)1 << 18)
	static const int64_t SubstructureNotifyMask = 524288; // ((int64_t)1 << 19)
	static const int64_t SubstructureRedirectMask = 1048576; // ((int64_t)1 << 20)
	static const int64_t FocusChangeMask = 2097152; // ((int64_t)1 << 21)
	static const int64_t PropertyChangeMask = 4194304; // ((int64_t)1 << 22)
	static const int64_t ColormapChangeMask = 8388608; // ((int64_t)1 << 23)
	static const int64_t OwnerGrabButtonMask = 16777216; // ((int64_t)1 << 24)
	static const int32_t MAX_BUTTONS = 5;
	static const int32_t ALL_BUTTONS_MASK = 7936; // (int32_t)(Button1MotionMask | Button2MotionMask | Button3MotionMask | Button4MotionMask | Button5MotionMask)
	static const int32_t KeyPress = 2;
	static const int32_t KeyRelease = 3;
	static const int32_t ButtonPress = 4;
	static const int32_t ButtonRelease = 5;
	static const int32_t MotionNotify = 6;
	static const int32_t EnterNotify = 7;
	static const int32_t LeaveNotify = 8;
	static const int32_t FocusIn = 9;
	static const int32_t FocusOut = 10;
	static const int32_t KeymapNotify = 11;
	static const int32_t Expose = 12;
	static const int32_t GraphicsExpose = 13;
	static const int32_t NoExpose = 14;
	static const int32_t VisibilityNotify = 15;
	static const int32_t CreateNotify = 16;
	static const int32_t DestroyNotify = 17;
	static const int32_t UnmapNotify = 18;
	static const int32_t MapNotify = 19;
	static const int32_t MapRequest = 20;
	static const int32_t ReparentNotify = 21;
	static const int32_t ConfigureNotify = 22;
	static const int32_t ConfigureRequest = 23;
	static const int32_t GravityNotify = 24;
	static const int32_t ResizeRequest = 25;
	static const int32_t CirculateNotify = 26;
	static const int32_t CirculateRequest = 27;
	static const int32_t PropertyNotify = 28;
	static const int32_t SelectionClear = 29;
	static const int32_t SelectionRequest = 30;
	static const int32_t SelectionNotify = 31;
	static const int32_t ColormapNotify = 32;
	static const int32_t ClientMessage = 33;
	static const int32_t MappingNotify = 34;
	static const int32_t LASTEvent = 35;
	static const int32_t ShiftMask = 1; // (1 << 0)
	static const int32_t LockMask = 2; // (1 << 1)
	static const int32_t ControlMask = 4; // (1 << 2)
	static const int32_t Mod1Mask = 8; // (1 << 3)
	static const int32_t Mod2Mask = 16; // (1 << 4)
	static const int32_t Mod3Mask = 32; // (1 << 5)
	static const int32_t Mod4Mask = 64; // (1 << 6)
	static const int32_t Mod5Mask = 128; // (1 << 7)
	static const int32_t ShiftMapIndex = 0;
	static const int32_t LockMapIndex = 1;
	static const int32_t ControlMapIndex = 2;
	static const int32_t Mod1MapIndex = 3;
	static const int32_t Mod2MapIndex = 4;
	static const int32_t Mod3MapIndex = 5;
	static const int32_t Mod4MapIndex = 6;
	static const int32_t Mod5MapIndex = 7;
	static const int32_t AnyModifier = 32768; // (1 << 15)
	static $ints* buttons;
	static int32_t MouseWheelUp;
	static int32_t MouseWheelDown;
	static const int32_t NotifyNormal = 0;
	static const int32_t NotifyGrab = 1;
	static const int32_t NotifyUngrab = 2;
	static const int32_t NotifyWhileGrabbed = 3;
	static const int32_t NotifyHint = 1;
	static const int32_t NotifyAncestor = 0;
	static const int32_t NotifyVirtual = 1;
	static const int32_t NotifyInferior = 2;
	static const int32_t NotifyNonlinear = 3;
	static const int32_t NotifyNonlinearVirtual = 4;
	static const int32_t NotifyPointer = 5;
	static const int32_t NotifyPointerRoot = 6;
	static const int32_t NotifyDetailNone = 7;
	static const int32_t VisibilityUnobscured = 0;
	static const int32_t VisibilityPartiallyObscured = 1;
	static const int32_t VisibilityFullyObscured = 2;
	static const int32_t PlaceOnTop = 0;
	static const int32_t PlaceOnBottom = 1;
	static const int32_t FamilyInternet = 0;
	static const int32_t FamilyDECnet = 1;
	static const int32_t FamilyChaos = 2;
	static const int32_t PropertyNewValue = 0;
	static const int32_t PropertyDelete = 1;
	static const int32_t ColormapUninstalled = 0;
	static const int32_t ColormapInstalled = 1;
	static const int32_t GrabModeSync = 0;
	static const int32_t GrabModeAsync = 1;
	static const int32_t GrabSuccess = 0;
	static const int32_t AlreadyGrabbed = 1;
	static const int32_t GrabInvalidTime = 2;
	static const int32_t GrabNotViewable = 3;
	static const int32_t GrabFrozen = 4;
	static const int32_t AsyncPointer = 0;
	static const int32_t SyncPointer = 1;
	static const int32_t ReplayPointer = 2;
	static const int32_t AsyncKeyboard = 3;
	static const int32_t SyncKeyboard = 4;
	static const int32_t ReplayKeyboard = 5;
	static const int32_t AsyncBoth = 6;
	static const int32_t SyncBoth = 7;
	static const int32_t RevertToNone = (int32_t)None;
	static const int32_t RevertToPointerRoot = (int32_t)PointerRoot;
	static const int32_t RevertToParent = 2;
	static const int32_t QueuedAlready = 0;
	static const int32_t QueuedAfterReading = 1;
	static const int32_t QueuedAfterFlush = 2;
	static const int32_t Success = 0;
	static const int32_t BadRequest = 1;
	static const int32_t BadValue = 2;
	static const int32_t BadWindow = 3;
	static const int32_t BadPixmap = 4;
	static const int32_t BadAtom = 5;
	static const int32_t BadCursor = 6;
	static const int32_t BadFont = 7;
	static const int32_t BadMatch = 8;
	static const int32_t BadDrawable = 9;
	static const int32_t BadAccess = 10;
	static const int32_t BadAlloc = 11;
	static const int32_t BadColor = 12;
	static const int32_t BadGC = 13;
	static const int32_t BadIDChoice = 14;
	static const int32_t BadName = 15;
	static const int32_t BadLength = 16;
	static const int32_t BadImplementation = 17;
	static const int32_t FirstExtensionError = 128;
	static const int32_t LastExtensionError = 255;
	static const int32_t InputOutput = 1;
	static const int32_t InputOnly = 2;
	static const int64_t CWBackPixmap = 1; // ((int64_t)1 << 0)
	static const int64_t CWBackPixel = 2; // ((int64_t)1 << 1)
	static const int64_t CWBorderPixmap = 4; // ((int64_t)1 << 2)
	static const int64_t CWBorderPixel = 8; // ((int64_t)1 << 3)
	static const int64_t CWBitGravity = 16; // ((int64_t)1 << 4)
	static const int64_t CWWinGravity = 32; // ((int64_t)1 << 5)
	static const int64_t CWBackingStore = 64; // ((int64_t)1 << 6)
	static const int64_t CWBackingPlanes = 128; // ((int64_t)1 << 7)
	static const int64_t CWBackingPixel = 256; // ((int64_t)1 << 8)
	static const int64_t CWOverrideRedirect = 512; // ((int64_t)1 << 9)
	static const int64_t CWSaveUnder = 1024; // ((int64_t)1 << 10)
	static const int64_t CWEventMask = 2048; // ((int64_t)1 << 11)
	static const int64_t CWDontPropagate = 4096; // ((int64_t)1 << 12)
	static const int64_t CWColormap = 8192; // ((int64_t)1 << 13)
	static const int64_t CWCursor = 16384; // ((int64_t)1 << 14)
	static const int32_t CWX = 1; // (1 << 0)
	static const int32_t CWY = 2; // (1 << 1)
	static const int32_t CWWidth = 4; // (1 << 2)
	static const int32_t CWHeight = 8; // (1 << 3)
	static const int32_t CWBorderWidth = 16; // (1 << 4)
	static const int32_t CWSibling = 32; // (1 << 5)
	static const int32_t CWStackMode = 64; // (1 << 6)
	static const int32_t ForgetGravity = 0;
	static const int32_t NorthWestGravity = 1;
	static const int32_t NorthGravity = 2;
	static const int32_t NorthEastGravity = 3;
	static const int32_t WestGravity = 4;
	static const int32_t CenterGravity = 5;
	static const int32_t EastGravity = 6;
	static const int32_t SouthWestGravity = 7;
	static const int32_t SouthGravity = 8;
	static const int32_t SouthEastGravity = 9;
	static const int32_t StaticGravity = 10;
	static const int32_t UnmapGravity = 0;
	static const int32_t NotUseful = 0;
	static const int32_t WhenMapped = 1;
	static const int32_t Always = 2;
	static const int32_t IsUnmapped = 0;
	static const int32_t IsUnviewable = 1;
	static const int32_t IsViewable = 2;
	static const int32_t SetModeInsert = 0;
	static const int32_t SetModeDelete = 1;
	static const int32_t DestroyAll = 0;
	static const int32_t RetainPermanent = 1;
	static const int32_t RetainTemporary = 2;
	static const int32_t Above = 0;
	static const int32_t Below = 1;
	static const int32_t TopIf = 2;
	static const int32_t BottomIf = 3;
	static const int32_t Opposite = 4;
	static const int32_t RaiseLowest = 0;
	static const int32_t LowerHighest = 1;
	static const int32_t PropModeReplace = 0;
	static const int32_t PropModePrepend = 1;
	static const int32_t PropModeAppend = 2;
	static const int32_t GXclear = 0;
	static const int32_t GXand = 1;
	static const int32_t GXandReverse = 2;
	static const int32_t GXcopy = 3;
	static const int32_t GXandInverted = 4;
	static const int32_t GXnoop = 5;
	static const int32_t GXxor = 6;
	static const int32_t GXor = 7;
	static const int32_t GXnor = 8;
	static const int32_t GXequiv = 9;
	static const int32_t GXinvert = 10;
	static const int32_t GXorReverse = 11;
	static const int32_t GXcopyInverted = 12;
	static const int32_t GXorInverted = 13;
	static const int32_t GXnand = 14;
	static const int32_t GXset = 15;
	static const int32_t LineSolid = 0;
	static const int32_t LineOnOffDash = 1;
	static const int32_t LineDoubleDash = 2;
	static const int32_t CapNotLast = 0;
	static const int32_t CapButt = 1;
	static const int32_t CapRound = 2;
	static const int32_t CapProjecting = 3;
	static const int32_t JoinMiter = 0;
	static const int32_t JoinRound = 1;
	static const int32_t JoinBevel = 2;
	static const int32_t FillSolid = 0;
	static const int32_t FillTiled = 1;
	static const int32_t FillStippled = 2;
	static const int32_t FillOpaqueStippled = 3;
	static const int32_t EvenOddRule = 0;
	static const int32_t WindingRule = 1;
	static const int32_t ClipByChildren = 0;
	static const int32_t IncludeInferiors = 1;
	static const int32_t Unsorted = 0;
	static const int32_t YSorted = 1;
	static const int32_t YXSorted = 2;
	static const int32_t YXBanded = 3;
	static const int32_t CoordModeOrigin = 0;
	static const int32_t CoordModePrevious = 1;
	static const int32_t Complex = 0;
	static const int32_t Nonconvex = 1;
	static const int32_t Convex = 2;
	static const int32_t ArcChord = 0;
	static const int32_t ArcPieSlice = 1;
	static const int64_t GCFunction = 1; // ((int64_t)1 << 0)
	static const int64_t GCPlaneMask = 2; // ((int64_t)1 << 1)
	static const int64_t GCForeground = 4; // ((int64_t)1 << 2)
	static const int64_t GCBackground = 8; // ((int64_t)1 << 3)
	static const int64_t GCLineWidth = 16; // ((int64_t)1 << 4)
	static const int64_t GCLineStyle = 32; // ((int64_t)1 << 5)
	static const int64_t GCCapStyle = 64; // ((int64_t)1 << 6)
	static const int64_t GCJoinStyle = 128; // ((int64_t)1 << 7)
	static const int64_t GCFillStyle = 256; // ((int64_t)1 << 8)
	static const int64_t GCFillRule = 512; // ((int64_t)1 << 9)
	static const int64_t GCTile = 1024; // ((int64_t)1 << 10)
	static const int64_t GCStipple = 2048; // ((int64_t)1 << 11)
	static const int64_t GCTileStipXOrigin = 4096; // ((int64_t)1 << 12)
	static const int64_t GCTileStipYOrigin = 8192; // ((int64_t)1 << 13)
	static const int64_t GCFont = 16384; // ((int64_t)1 << 14)
	static const int64_t GCSubwindowMode = 32768; // ((int64_t)1 << 15)
	static const int64_t GCGraphicsExposures = 65536; // ((int64_t)1 << 16)
	static const int64_t GCClipXOrigin = 131072; // ((int64_t)1 << 17)
	static const int64_t GCClipYOrigin = 262144; // ((int64_t)1 << 18)
	static const int64_t GCClipMask = 524288; // ((int64_t)1 << 19)
	static const int64_t GCDashOffset = 1048576; // ((int64_t)1 << 20)
	static const int64_t GCDashList = 2097152; // ((int64_t)1 << 21)
	static const int64_t GCArcMode = 4194304; // ((int64_t)1 << 22)
	static const int32_t GCLastBit = 22;
	static const int32_t FontLeftToRight = 0;
	static const int32_t FontRightToLeft = 1;
	static const int32_t FontChange = 255;
	static const int32_t XYBitmap = 0;
	static const int32_t XYPixmap = 1;
	static const int32_t ZPixmap = 2;
	static const int32_t AllocNone = 0;
	static const int32_t AllocAll = 1;
	static const int32_t DoRed = 1; // (1 << 0)
	static const int32_t DoGreen = 2; // (1 << 1)
	static const int32_t DoBlue = 4; // (1 << 2)
	static const int32_t CursorShape = 0;
	static const int32_t TileShape = 1;
	static const int32_t StippleShape = 2;
	static const int32_t AutoRepeatModeOff = 0;
	static const int32_t AutoRepeatModeOn = 1;
	static const int32_t AutoRepeatModeDefault = 2;
	static const int32_t LedModeOff = 0;
	static const int32_t LedModeOn = 1;
	static const int64_t KBKeyClickPercent = 1; // ((int64_t)1 << 0)
	static const int64_t KBBellPercent = 2; // ((int64_t)1 << 1)
	static const int64_t KBBellPitch = 4; // ((int64_t)1 << 2)
	static const int64_t KBBellDuration = 8; // ((int64_t)1 << 3)
	static const int64_t KBLed = 16; // ((int64_t)1 << 4)
	static const int64_t KBLedMode = 32; // ((int64_t)1 << 5)
	static const int64_t KBKey = 64; // ((int64_t)1 << 6)
	static const int64_t KBAutoRepeatMode = 128; // ((int64_t)1 << 7)
	static const int32_t MappingSuccess = 0;
	static const int32_t MappingBusy = 1;
	static const int32_t MappingFailed = 2;
	static const int32_t MappingModifier = 0;
	static const int32_t MappingKeyboard = 1;
	static const int32_t MappingPointer = 2;
	static const int32_t DontPreferBlanking = 0;
	static const int32_t PreferBlanking = 1;
	static const int32_t DefaultBlanking = 2;
	static const int32_t DisableScreenSaver = 0;
	static const int32_t DisableScreenInterval = 0;
	static const int32_t DontAllowExposures = 0;
	static const int32_t AllowExposures = 1;
	static const int32_t DefaultExposures = 2;
	static const int32_t ScreenSaverReset = 0;
	static const int32_t ScreenSaverActive = 1;
	static const int32_t HostInsert = 0;
	static const int32_t HostDelete = 1;
	static const int32_t EnableAccess = 1;
	static const int32_t DisableAccess = 0;
	static const int32_t StaticGray = 0;
	static const int32_t GrayScale = 1;
	static const int32_t StaticColor = 2;
	static const int32_t PseudoColor = 3;
	static const int32_t TrueColor = 4;
	static const int32_t DirectColor = 5;
	static const int32_t LSBFirst = 0;
	static const int32_t MSBFirst = 1;
	static const int32_t XkbUseCoreKbd = 256;
	static const int32_t XkbNewKeyboardNotify = 0;
	static const int32_t XkbMapNotify = 1;
	static const int32_t XkbStateNotify = 2;
	static const int64_t XkbNewKeyboardNotifyMask = 1; // ((int64_t)1 << 0)
	static const int64_t XkbMapNotifyMask = 2; // ((int64_t)1 << 1)
	static const int64_t XkbStateNotifyMask = 4; // ((int64_t)1 << 2)
	static const int64_t XkbGroupStateMask = 16; // ((int64_t)1 << 4)
	static const int64_t XkbKeyTypesMask = 1; // ((int64_t)1 << 0)
	static const int64_t XkbKeySymsMask = 2; // ((int64_t)1 << 1)
	static const int64_t XkbModifierMapMask = 4; // ((int64_t)1 << 2)
	static const int64_t XkbVirtualModsMask = 64; // ((int64_t)1 << 6)
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("ALL_BUTTONS_MASK")
#pragma pop_macro("CWX")
#pragma pop_macro("CWY")
#pragma pop_macro("MAX_BUTTONS")
#pragma pop_macro("X_PROTOCOL")
#pragma pop_macro("X_PROTOCOL_REVISION")

#endif // _sun_awt_X11_XConstants_h_