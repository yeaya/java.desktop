#include <sun/awt/X11/XlibWrapper.h>

#include <java/lang/CharSequence.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/WindowPropertyGetter.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XPropertyCache$PropertyCacheEntry.h>
#include <sun/awt/X11/XPropertyCache.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XUtilConstants.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef MAXSIZE
#undef MINSIZE

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $WindowPropertyGetter = ::sun::awt::X11::WindowPropertyGetter;
using $XAtom = ::sun::awt::X11::XAtom;
using $XConstants = ::sun::awt::X11::XConstants;
using $XPropertyCache = ::sun::awt::X11::XPropertyCache;
using $XPropertyCache$PropertyCacheEntry = ::sun::awt::X11::XPropertyCache$PropertyCacheEntry;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XUtilConstants = ::sun::awt::X11::XUtilConstants;
using $Region = ::sun::java2d::pipe::Region;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XlibWrapper_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $STATIC, $staticField(XlibWrapper, unsafe)},
	{"MAXSIZE", "I", nullptr, $STATIC | $FINAL, $constField(XlibWrapper, MAXSIZE)},
	{"MINSIZE", "I", nullptr, $STATIC | $FINAL, $constField(XlibWrapper, MINSIZE)},
	{"eventToString", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, eventToString)},
	{"lbuffer", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, lbuffer)},
	{"ibuffer", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, ibuffer)},
	{"larg1", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, larg1)},
	{"larg2", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, larg2)},
	{"larg3", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, larg3)},
	{"larg4", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, larg4)},
	{"larg5", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, larg5)},
	{"larg6", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, larg6)},
	{"larg7", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, larg7)},
	{"larg8", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, larg8)},
	{"iarg1", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, iarg1)},
	{"iarg2", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, iarg2)},
	{"iarg3", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, iarg3)},
	{"iarg4", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, iarg4)},
	{"iarg5", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, iarg5)},
	{"iarg6", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, iarg6)},
	{"iarg7", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, iarg7)},
	{"iarg8", "J", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, iarg8)},
	{"dataModel", "I", nullptr, $STATIC, $staticField(XlibWrapper, dataModel)},
	{"isBuildInternal", "Z", nullptr, $STATIC | $FINAL, $staticField(XlibWrapper, isBuildInternal)},
	{}
};

$MethodInfo _XlibWrapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XlibWrapper::*)()>(&XlibWrapper::init$))},
	{"CallErrorHandler", "(JJJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::CallErrorHandler))},
	{"DefaultScreen", "(J)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&XlibWrapper::DefaultScreen))},
	{"DisplayHeight", "(JJ)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&XlibWrapper::DisplayHeight))},
	{"DisplayHeightMM", "(JJ)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&XlibWrapper::DisplayHeightMM))},
	{"DisplayWidth", "(JJ)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&XlibWrapper::DisplayWidth))},
	{"DisplayWidthMM", "(JJ)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&XlibWrapper::DisplayWidthMM))},
	{"DoesBackingStore", "(J)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&XlibWrapper::DoesBackingStore))},
	{"ExitSecondaryLoop", "()V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)()>(&XlibWrapper::ExitSecondaryLoop))},
	{"GetProperty", "(JJJ)Ljava/lang/String;", nullptr, $STATIC | $NATIVE, $method(static_cast<$String*(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::GetProperty))},
	{"InternAtom", "(JLjava/lang/String;I)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,$String*,int32_t)>(&XlibWrapper::InternAtom))},
	{"IsKanaKeyboard", "(J)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t)>(&XlibWrapper::IsKanaKeyboard))},
	{"IsKeypadKey", "(J)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t)>(&XlibWrapper::IsKeypadKey))},
	{"IsSunKeyboard", "(J)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t)>(&XlibWrapper::IsSunKeyboard))},
	{"IsXsunKPBehavior", "(J)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t)>(&XlibWrapper::IsXsunKPBehavior))},
	{"PrintXErrorEvent", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::PrintXErrorEvent))},
	{"RootWindow", "(JJ)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&XlibWrapper::RootWindow))},
	{"ScreenCount", "(J)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&XlibWrapper::ScreenCount))},
	{"ScreenOfDisplay", "(JJ)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&XlibWrapper::ScreenOfDisplay))},
	{"ServerVendor", "(J)Ljava/lang/String;", nullptr, $STATIC | $NATIVE, $method(static_cast<$String*(*)(int64_t)>(&XlibWrapper::ServerVendor))},
	{"SetBitmapShape", "(JJII[I)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int32_t,int32_t,$ints*)>(&XlibWrapper::SetBitmapShape))},
	{"SetProperty", "(JJJLjava/lang/String;)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t,$String*)>(&XlibWrapper::SetProperty))},
	{"SetRectangularShape", "(JJIIIILsun/java2d/pipe/Region;)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int32_t,int32_t,int32_t,int32_t,$Region*)>(&XlibWrapper::SetRectangularShape))},
	{"SetToolkitErrorHandler", "()J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)()>(&XlibWrapper::SetToolkitErrorHandler))},
	{"SetZOrder", "(JJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::SetZOrder))},
	{"VendorRelease", "(J)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&XlibWrapper::VendorRelease))},
	{"XAllocColor", "(JJJ)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XAllocColor))},
	{"XAllocSizeHints", "()J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)()>(&XlibWrapper::XAllocSizeHints))},
	{"XAllocWMHints", "()J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)()>(&XlibWrapper::XAllocWMHints))},
	{"XBell", "(JI)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t)>(&XlibWrapper::XBell))},
	{"XChangeActivePointerGrab", "(JIJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t,int64_t,int64_t)>(&XlibWrapper::XChangeActivePointerGrab))},
	{"XChangeProperty", "(JJJJIIJI)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int64_t,int64_t,int64_t,int32_t,int32_t,int64_t,int32_t)>(&XlibWrapper::XChangeProperty))},
	{"XChangePropertyImpl", "(JJJJIIJI)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t,int64_t,int32_t,int32_t,int64_t,int32_t)>(&XlibWrapper::XChangePropertyImpl))},
	{"XChangePropertyS", "(JJJJIILjava/lang/String;)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t,int64_t,int32_t,int32_t,$String*)>(&XlibWrapper::XChangePropertyS))},
	{"XChangeWindowAttributes", "(JJJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XChangeWindowAttributes))},
	{"XClearWindow", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::XClearWindow))},
	{"XCloseDisplay", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&XlibWrapper::XCloseDisplay))},
	{"XConfigureWindow", "(JJJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XConfigureWindow))},
	{"XConvertCase", "(JJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XConvertCase))},
	{"XConvertSelection", "(JJJJJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XConvertSelection))},
	{"XCreateBitmapFromData", "(JJJII)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t,int64_t,int32_t,int32_t)>(&XlibWrapper::XCreateBitmapFromData))},
	{"XCreateFontCursor", "(JI)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int32_t)>(&XlibWrapper::XCreateFontCursor))},
	{"XCreateGC", "(JJJJ)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XCreateGC))},
	{"XCreateImage", "(JJIIIJIIII)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t,int32_t,int32_t,int32_t,int64_t,int32_t,int32_t,int32_t,int32_t)>(&XlibWrapper::XCreateImage))},
	{"XCreatePixmap", "(JJIII)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t,int32_t,int32_t,int32_t)>(&XlibWrapper::XCreatePixmap))},
	{"XCreatePixmapCursor", "(JJJJJII)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t,int64_t,int64_t,int64_t,int32_t,int32_t)>(&XlibWrapper::XCreatePixmapCursor))},
	{"XCreateWindow", "(JJIIIIIIJJJJ)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XCreateWindow))},
	{"XDeleteProperty", "(JJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XDeleteProperty))},
	{"XDestroyImage", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&XlibWrapper::XDestroyImage))},
	{"XDestroyWindow", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::XDestroyWindow))},
	{"XDisplayString", "(J)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&XlibWrapper::XDisplayString))},
	{"XEventsQueued", "(JI)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int32_t)>(&XlibWrapper::XEventsQueued))},
	{"XFilterEvent", "(JJ)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,int64_t)>(&XlibWrapper::XFilterEvent))},
	{"XFlush", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&XlibWrapper::XFlush))},
	{"XFree", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&XlibWrapper::XFree))},
	{"XFreeCursor", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::XFreeCursor))},
	{"XFreeGC", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::XFreeGC))},
	{"XFreeModifiermap", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&XlibWrapper::XFreeModifiermap))},
	{"XFreePixmap", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::XFreePixmap))},
	{"XGetAtomName", "(JJ)Ljava/lang/String;", nullptr, $STATIC | $NATIVE, $method(static_cast<$String*(*)(int64_t,int64_t)>(&XlibWrapper::XGetAtomName))},
	{"XGetDefault", "(JLjava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC | $NATIVE, $method(static_cast<$String*(*)(int64_t,$String*,$String*)>(&XlibWrapper::XGetDefault))},
	{"XGetGeometry", "(JJJJJJJJJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XGetGeometry))},
	{"XGetIconSizes", "(JJJJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XGetIconSizes))},
	{"XGetInputFocus", "(J)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&XlibWrapper::XGetInputFocus))},
	{"XGetModifierMapping", "(J)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&XlibWrapper::XGetModifierMapping))},
	{"XGetPointerMapping", "(JJI)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int32_t)>(&XlibWrapper::XGetPointerMapping))},
	{"XGetSelectionOwner", "(JJ)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&XlibWrapper::XGetSelectionOwner))},
	{"XGetVisualInfo", "(JJJJ)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XGetVisualInfo))},
	{"XGetWMHints", "(JJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XGetWMHints))},
	{"XGetWMNormalHints", "(JJJJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XGetWMNormalHints))},
	{"XGetWindowAttributes", "(JJJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XGetWindowAttributes))},
	{"XGetWindowProperty", "(JJJJJJJJJJJJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XGetWindowProperty))},
	{"XGrabKeyboard", "(JJIIIJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int32_t,int32_t,int32_t,int64_t)>(&XlibWrapper::XGrabKeyboard))},
	{"XGrabPointer", "(JJIIIIJJJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int32_t,int32_t,int32_t,int32_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XGrabPointer))},
	{"XGrabServer", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&XlibWrapper::XGrabServer))},
	{"XIconifyWindow", "(JJJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XIconifyWindow))},
	{"XInternAtoms", "(J[Ljava/lang/String;ZJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,$StringArray*,bool,int64_t)>(&XlibWrapper::XInternAtoms))},
	{"XKeycodeToKeysym", "(JII)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int32_t,int32_t)>(&XlibWrapper::XKeycodeToKeysym))},
	{"XKeysymToKeycode", "(JJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t)>(&XlibWrapper::XKeysymToKeycode))},
	{"XLowerWindow", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::XLowerWindow))},
	{"XMapRaised", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::XMapRaised))},
	{"XMapWindow", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::XMapWindow))},
	{"XMaskEvent", "(JJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XMaskEvent))},
	{"XMaxRequestSize", "(J)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&XlibWrapper::XMaxRequestSize))},
	{"XMoveResizeWindow", "(JJIIII)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int32_t,int32_t,int32_t,int32_t)>(&XlibWrapper::XMoveResizeWindow))},
	{"XMoveWindow", "(JJII)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int32_t,int32_t)>(&XlibWrapper::XMoveWindow))},
	{"XNextEvent", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::XNextEvent))},
	{"XNextSecondaryLoopEvent", "(JJ)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,int64_t)>(&XlibWrapper::XNextSecondaryLoopEvent))},
	{"XOpenDisplay", "(J)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&XlibWrapper::XOpenDisplay))},
	{"XPeekEvent", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::XPeekEvent))},
	{"XPutBackEvent", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::XPutBackEvent))},
	{"XPutImage", "(JJJJIIIIII)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t,int64_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&XlibWrapper::XPutImage))},
	{"XQueryBestCursor", "(JJIIJJ)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,int64_t,int32_t,int32_t,int64_t,int64_t)>(&XlibWrapper::XQueryBestCursor))},
	{"XQueryExtension", "(JLjava/lang/String;JJJ)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,$String*,int64_t,int64_t,int64_t)>(&XlibWrapper::XQueryExtension))},
	{"XQueryKeymap", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::XQueryKeymap))},
	{"XQueryPointer", "(JJJJJJJJJ)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XQueryPointer))},
	{"XQueryTree", "(JJJJJJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XQueryTree))},
	{"XRaiseWindow", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::XRaiseWindow))},
	{"XRefreshKeyboardMapping", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&XlibWrapper::XRefreshKeyboardMapping))},
	{"XReparentWindow", "(JJJII)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t,int32_t,int32_t)>(&XlibWrapper::XReparentWindow))},
	{"XResizeWindow", "(JJII)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int32_t,int32_t)>(&XlibWrapper::XResizeWindow))},
	{"XRestackWindows", "(JJI)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int32_t)>(&XlibWrapper::XRestackWindows))},
	{"XScreenNumberOfScreen", "(J)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&XlibWrapper::XScreenNumberOfScreen))},
	{"XSelectInput", "(JJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XSelectInput))},
	{"XSendEvent", "(JJZJJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,bool,int64_t,int64_t)>(&XlibWrapper::XSendEvent))},
	{"XSetCloseDownMode", "(JI)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t)>(&XlibWrapper::XSetCloseDownMode))},
	{"XSetErrorHandler", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&XlibWrapper::XSetErrorHandler))},
	{"XSetInputFocus", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::XSetInputFocus))},
	{"XSetInputFocus2", "(JJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XSetInputFocus2))},
	{"XSetLocaleModifiers", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC | $NATIVE, $method(static_cast<$String*(*)($String*)>(&XlibWrapper::XSetLocaleModifiers))},
	{"XSetMinMaxHints", "(JJIIIIJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int32_t,int32_t,int32_t,int32_t,int64_t)>(&XlibWrapper::XSetMinMaxHints))},
	{"XSetSelectionOwner", "(JJJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XSetSelectionOwner))},
	{"XSetTransientFor", "(JJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XSetTransientFor))},
	{"XSetWMHints", "(JJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XSetWMHints))},
	{"XSetWMNormalHints", "(JJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XSetWMNormalHints))},
	{"XSetWindowBackground", "(JJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XSetWindowBackground))},
	{"XSetWindowBackgroundPixmap", "(JJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XSetWindowBackgroundPixmap))},
	{"XShapeQueryExtension", "(JJJ)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XShapeQueryExtension))},
	{"XSupportsLocale", "()Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&XlibWrapper::XSupportsLocale))},
	{"XSync", "(JI)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t)>(&XlibWrapper::XSync))},
	{"XSynchronize", "(JZ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,bool)>(&XlibWrapper::XSynchronize))},
	{"XTextPropertyToStringList", "([BJ)[Ljava/lang/String;", nullptr, $STATIC | $NATIVE, $method(static_cast<$StringArray*(*)($bytes*,int64_t)>(&XlibWrapper::XTextPropertyToStringList))},
	{"XTranslateCoordinates", "(JJJJJJJJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XTranslateCoordinates))},
	{"XUngrabKeyboard", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::XUngrabKeyboard))},
	{"XUngrabPointer", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::XUngrabPointer))},
	{"XUngrabServer", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&XlibWrapper::XUngrabServer))},
	{"XUnmapWindow", "(JJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&XlibWrapper::XUnmapWindow))},
	{"XWindowEvent", "(JJJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XWindowEvent))},
	{"XdbeAllocateBackBufferName", "(JJI)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t,int32_t)>(&XlibWrapper::XdbeAllocateBackBufferName))},
	{"XdbeBeginIdiom", "(J)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&XlibWrapper::XdbeBeginIdiom))},
	{"XdbeDeallocateBackBufferName", "(JJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t)>(&XlibWrapper::XdbeDeallocateBackBufferName))},
	{"XdbeEndIdiom", "(J)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&XlibWrapper::XdbeEndIdiom))},
	{"XdbeQueryExtension", "(JJJ)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XdbeQueryExtension))},
	{"XdbeSwapBuffers", "(JJI)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int64_t,int32_t)>(&XlibWrapper::XdbeSwapBuffers))},
	{"XkbFreeKeyboard", "(JJZ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,bool)>(&XlibWrapper::XkbFreeKeyboard))},
	{"XkbGetEffectiveGroup", "(J)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&XlibWrapper::XkbGetEffectiveGroup))},
	{"XkbGetMap", "(JJJ)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XkbGetMap))},
	{"XkbGetUpdatedMap", "(JJJ)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::XkbGetUpdatedMap))},
	{"XkbKeycodeToKeysym", "(JIII)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int32_t,int32_t,int32_t)>(&XlibWrapper::XkbKeycodeToKeysym))},
	{"XkbLibraryVersion", "(JJ)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,int64_t)>(&XlibWrapper::XkbLibraryVersion))},
	{"XkbQueryExtension", "(JJJJJJ)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XkbQueryExtension))},
	{"XkbSelectEventDetails", "(JJJJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XkbSelectEventDetails))},
	{"XkbSelectEvents", "(JJJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XkbSelectEvents))},
	{"XkbSetDetectableAutoRepeat", "(JZ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,bool)>(&XlibWrapper::XkbSetDetectableAutoRepeat))},
	{"XkbTranslateKeyCode", "(JIJJJ)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,int32_t,int64_t,int64_t,int64_t)>(&XlibWrapper::XkbTranslateKeyCode))},
	{"copyIntArray", "(JLjava/lang/Object;I)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,Object$*,int32_t)>(&XlibWrapper::copyIntArray))},
	{"copyLongArray", "(JLjava/lang/Object;I)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,Object$*,int32_t)>(&XlibWrapper::copyLongArray))},
	{"getAddress", "(Ljava/lang/Object;)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(Object$*)>(&XlibWrapper::getAddress))},
	{"getBuildInternal", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&XlibWrapper::getBuildInternal))},
	{"getDataModel", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&XlibWrapper::getDataModel))},
	{"getEventToString", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&XlibWrapper::getEventToString))},
	{"getScreenOfWindow", "(JJ)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&XlibWrapper::getScreenOfWindow))},
	{"getStringBytes", "(J)[B", nullptr, $STATIC | $NATIVE, $method(static_cast<$bytes*(*)(int64_t)>(&XlibWrapper::getStringBytes))},
	{"hintsToString", "(J)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int64_t)>(&XlibWrapper::hintsToString))},
	{"memcpy", "(JJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t)>(&XlibWrapper::memcpy))},
	{}
};

#define _METHOD_INDEX_CallErrorHandler 1
#define _METHOD_INDEX_DefaultScreen 2
#define _METHOD_INDEX_DisplayHeight 3
#define _METHOD_INDEX_DisplayHeightMM 4
#define _METHOD_INDEX_DisplayWidth 5
#define _METHOD_INDEX_DisplayWidthMM 6
#define _METHOD_INDEX_DoesBackingStore 7
#define _METHOD_INDEX_ExitSecondaryLoop 8
#define _METHOD_INDEX_GetProperty 9
#define _METHOD_INDEX_InternAtom 10
#define _METHOD_INDEX_IsKanaKeyboard 11
#define _METHOD_INDEX_IsKeypadKey 12
#define _METHOD_INDEX_IsSunKeyboard 13
#define _METHOD_INDEX_IsXsunKPBehavior 14
#define _METHOD_INDEX_PrintXErrorEvent 15
#define _METHOD_INDEX_RootWindow 16
#define _METHOD_INDEX_ScreenCount 17
#define _METHOD_INDEX_ScreenOfDisplay 18
#define _METHOD_INDEX_ServerVendor 19
#define _METHOD_INDEX_SetBitmapShape 20
#define _METHOD_INDEX_SetProperty 21
#define _METHOD_INDEX_SetRectangularShape 22
#define _METHOD_INDEX_SetToolkitErrorHandler 23
#define _METHOD_INDEX_SetZOrder 24
#define _METHOD_INDEX_VendorRelease 25
#define _METHOD_INDEX_XAllocColor 26
#define _METHOD_INDEX_XAllocSizeHints 27
#define _METHOD_INDEX_XAllocWMHints 28
#define _METHOD_INDEX_XBell 29
#define _METHOD_INDEX_XChangeActivePointerGrab 30
#define _METHOD_INDEX_XChangePropertyImpl 32
#define _METHOD_INDEX_XChangePropertyS 33
#define _METHOD_INDEX_XChangeWindowAttributes 34
#define _METHOD_INDEX_XClearWindow 35
#define _METHOD_INDEX_XCloseDisplay 36
#define _METHOD_INDEX_XConfigureWindow 37
#define _METHOD_INDEX_XConvertCase 38
#define _METHOD_INDEX_XConvertSelection 39
#define _METHOD_INDEX_XCreateBitmapFromData 40
#define _METHOD_INDEX_XCreateFontCursor 41
#define _METHOD_INDEX_XCreateGC 42
#define _METHOD_INDEX_XCreateImage 43
#define _METHOD_INDEX_XCreatePixmap 44
#define _METHOD_INDEX_XCreatePixmapCursor 45
#define _METHOD_INDEX_XCreateWindow 46
#define _METHOD_INDEX_XDeleteProperty 47
#define _METHOD_INDEX_XDestroyImage 48
#define _METHOD_INDEX_XDestroyWindow 49
#define _METHOD_INDEX_XDisplayString 50
#define _METHOD_INDEX_XEventsQueued 51
#define _METHOD_INDEX_XFilterEvent 52
#define _METHOD_INDEX_XFlush 53
#define _METHOD_INDEX_XFree 54
#define _METHOD_INDEX_XFreeCursor 55
#define _METHOD_INDEX_XFreeGC 56
#define _METHOD_INDEX_XFreeModifiermap 57
#define _METHOD_INDEX_XFreePixmap 58
#define _METHOD_INDEX_XGetAtomName 59
#define _METHOD_INDEX_XGetDefault 60
#define _METHOD_INDEX_XGetGeometry 61
#define _METHOD_INDEX_XGetIconSizes 62
#define _METHOD_INDEX_XGetInputFocus 63
#define _METHOD_INDEX_XGetModifierMapping 64
#define _METHOD_INDEX_XGetPointerMapping 65
#define _METHOD_INDEX_XGetSelectionOwner 66
#define _METHOD_INDEX_XGetVisualInfo 67
#define _METHOD_INDEX_XGetWMHints 68
#define _METHOD_INDEX_XGetWMNormalHints 69
#define _METHOD_INDEX_XGetWindowAttributes 70
#define _METHOD_INDEX_XGetWindowProperty 71
#define _METHOD_INDEX_XGrabKeyboard 72
#define _METHOD_INDEX_XGrabPointer 73
#define _METHOD_INDEX_XGrabServer 74
#define _METHOD_INDEX_XIconifyWindow 75
#define _METHOD_INDEX_XInternAtoms 76
#define _METHOD_INDEX_XKeycodeToKeysym 77
#define _METHOD_INDEX_XKeysymToKeycode 78
#define _METHOD_INDEX_XLowerWindow 79
#define _METHOD_INDEX_XMapRaised 80
#define _METHOD_INDEX_XMapWindow 81
#define _METHOD_INDEX_XMaskEvent 82
#define _METHOD_INDEX_XMaxRequestSize 83
#define _METHOD_INDEX_XMoveResizeWindow 84
#define _METHOD_INDEX_XMoveWindow 85
#define _METHOD_INDEX_XNextEvent 86
#define _METHOD_INDEX_XNextSecondaryLoopEvent 87
#define _METHOD_INDEX_XOpenDisplay 88
#define _METHOD_INDEX_XPeekEvent 89
#define _METHOD_INDEX_XPutBackEvent 90
#define _METHOD_INDEX_XPutImage 91
#define _METHOD_INDEX_XQueryBestCursor 92
#define _METHOD_INDEX_XQueryExtension 93
#define _METHOD_INDEX_XQueryKeymap 94
#define _METHOD_INDEX_XQueryPointer 95
#define _METHOD_INDEX_XQueryTree 96
#define _METHOD_INDEX_XRaiseWindow 97
#define _METHOD_INDEX_XRefreshKeyboardMapping 98
#define _METHOD_INDEX_XReparentWindow 99
#define _METHOD_INDEX_XResizeWindow 100
#define _METHOD_INDEX_XRestackWindows 101
#define _METHOD_INDEX_XScreenNumberOfScreen 102
#define _METHOD_INDEX_XSelectInput 103
#define _METHOD_INDEX_XSendEvent 104
#define _METHOD_INDEX_XSetCloseDownMode 105
#define _METHOD_INDEX_XSetErrorHandler 106
#define _METHOD_INDEX_XSetInputFocus 107
#define _METHOD_INDEX_XSetInputFocus2 108
#define _METHOD_INDEX_XSetLocaleModifiers 109
#define _METHOD_INDEX_XSetMinMaxHints 110
#define _METHOD_INDEX_XSetSelectionOwner 111
#define _METHOD_INDEX_XSetTransientFor 112
#define _METHOD_INDEX_XSetWMHints 113
#define _METHOD_INDEX_XSetWMNormalHints 114
#define _METHOD_INDEX_XSetWindowBackground 115
#define _METHOD_INDEX_XSetWindowBackgroundPixmap 116
#define _METHOD_INDEX_XShapeQueryExtension 117
#define _METHOD_INDEX_XSupportsLocale 118
#define _METHOD_INDEX_XSync 119
#define _METHOD_INDEX_XSynchronize 120
#define _METHOD_INDEX_XTextPropertyToStringList 121
#define _METHOD_INDEX_XTranslateCoordinates 122
#define _METHOD_INDEX_XUngrabKeyboard 123
#define _METHOD_INDEX_XUngrabPointer 124
#define _METHOD_INDEX_XUngrabServer 125
#define _METHOD_INDEX_XUnmapWindow 126
#define _METHOD_INDEX_XWindowEvent 127
#define _METHOD_INDEX_XdbeAllocateBackBufferName 128
#define _METHOD_INDEX_XdbeBeginIdiom 129
#define _METHOD_INDEX_XdbeDeallocateBackBufferName 130
#define _METHOD_INDEX_XdbeEndIdiom 131
#define _METHOD_INDEX_XdbeQueryExtension 132
#define _METHOD_INDEX_XdbeSwapBuffers 133
#define _METHOD_INDEX_XkbFreeKeyboard 134
#define _METHOD_INDEX_XkbGetEffectiveGroup 135
#define _METHOD_INDEX_XkbGetMap 136
#define _METHOD_INDEX_XkbGetUpdatedMap 137
#define _METHOD_INDEX_XkbKeycodeToKeysym 138
#define _METHOD_INDEX_XkbLibraryVersion 139
#define _METHOD_INDEX_XkbQueryExtension 140
#define _METHOD_INDEX_XkbSelectEventDetails 141
#define _METHOD_INDEX_XkbSelectEvents 142
#define _METHOD_INDEX_XkbSetDetectableAutoRepeat 143
#define _METHOD_INDEX_XkbTranslateKeyCode 144
#define _METHOD_INDEX_copyIntArray 145
#define _METHOD_INDEX_copyLongArray 146
#define _METHOD_INDEX_getAddress 147
#define _METHOD_INDEX_getScreenOfWindow 151
#define _METHOD_INDEX_getStringBytes 152
#define _METHOD_INDEX_memcpy 154

$ClassInfo _XlibWrapper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XlibWrapper",
	"java.lang.Object",
	nullptr,
	_XlibWrapper_FieldInfo_,
	_XlibWrapper_MethodInfo_
};

$Object* allocate$XlibWrapper($Class* clazz) {
	return $of($alloc(XlibWrapper));
}

$Unsafe* XlibWrapper::unsafe = nullptr;
$StringArray* XlibWrapper::eventToString = nullptr;
int64_t XlibWrapper::lbuffer = 0;
int64_t XlibWrapper::ibuffer = 0;
int64_t XlibWrapper::larg1 = 0;
int64_t XlibWrapper::larg2 = 0;
int64_t XlibWrapper::larg3 = 0;
int64_t XlibWrapper::larg4 = 0;
int64_t XlibWrapper::larg5 = 0;
int64_t XlibWrapper::larg6 = 0;
int64_t XlibWrapper::larg7 = 0;
int64_t XlibWrapper::larg8 = 0;
int64_t XlibWrapper::iarg1 = 0;
int64_t XlibWrapper::iarg2 = 0;
int64_t XlibWrapper::iarg3 = 0;
int64_t XlibWrapper::iarg4 = 0;
int64_t XlibWrapper::iarg5 = 0;
int64_t XlibWrapper::iarg6 = 0;
int64_t XlibWrapper::iarg7 = 0;
int64_t XlibWrapper::iarg8 = 0;
int32_t XlibWrapper::dataModel = 0;
bool XlibWrapper::isBuildInternal = false;

void XlibWrapper::init$() {
}

void XlibWrapper::XFree(int64_t ptr) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XFree, void, int64_t ptr);
	$invokeNativeStatic(ptr);
	$finishNativeStatic();
}

void XlibWrapper::memcpy(int64_t dest_ptr, int64_t src_ptr, int64_t length) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, memcpy, void, int64_t dest_ptr, int64_t src_ptr, int64_t length);
	$invokeNativeStatic(dest_ptr, src_ptr, length);
	$finishNativeStatic();
}

int64_t XlibWrapper::getAddress(Object$* o) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, getAddress, int64_t, Object$* o);
	$ret = $invokeNativeStatic(o);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::copyIntArray(int64_t dest_ptr, Object$* array, int32_t size_bytes) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, copyIntArray, void, int64_t dest_ptr, Object$* array, int32_t size_bytes);
	$invokeNativeStatic(dest_ptr, array, size_bytes);
	$finishNativeStatic();
}

void XlibWrapper::copyLongArray(int64_t dest_ptr, Object$* array, int32_t size_bytes) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, copyLongArray, void, int64_t dest_ptr, Object$* array, int32_t size_bytes);
	$invokeNativeStatic(dest_ptr, array, size_bytes);
	$finishNativeStatic();
}

$bytes* XlibWrapper::getStringBytes(int64_t str_ptr) {
	$init(XlibWrapper);
	$var($bytes, $ret, nullptr);
	$prepareNativeStatic(XlibWrapper, getStringBytes, $bytes*, int64_t str_ptr);
	$assign($ret, $invokeNativeStaticObject(str_ptr));
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::XOpenDisplay(int64_t display) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XOpenDisplay, int64_t, int64_t display);
	$ret = $invokeNativeStatic(display);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XCloseDisplay(int64_t display) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XCloseDisplay, void, int64_t display);
	$invokeNativeStatic(display);
	$finishNativeStatic();
}

int64_t XlibWrapper::XDisplayString(int64_t display) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XDisplayString, int64_t, int64_t display);
	$ret = $invokeNativeStatic(display);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XSetCloseDownMode(int64_t display, int32_t close_mode) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XSetCloseDownMode, void, int64_t display, int32_t close_mode);
	$invokeNativeStatic(display, close_mode);
	$finishNativeStatic();
}

int64_t XlibWrapper::DefaultScreen(int64_t display) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, DefaultScreen, int64_t, int64_t display);
	$ret = $invokeNativeStatic(display);
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::ScreenOfDisplay(int64_t display, int64_t screen_number) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, ScreenOfDisplay, int64_t, int64_t display, int64_t screen_number);
	$ret = $invokeNativeStatic(display, screen_number);
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::DoesBackingStore(int64_t screen) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, DoesBackingStore, int32_t, int64_t screen);
	$ret = $invokeNativeStatic(screen);
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::DisplayWidth(int64_t display, int64_t screen) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, DisplayWidth, int64_t, int64_t display, int64_t screen);
	$ret = $invokeNativeStatic(display, screen);
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::DisplayWidthMM(int64_t display, int64_t screen) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, DisplayWidthMM, int64_t, int64_t display, int64_t screen);
	$ret = $invokeNativeStatic(display, screen);
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::DisplayHeight(int64_t display, int64_t screen) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, DisplayHeight, int64_t, int64_t display, int64_t screen);
	$ret = $invokeNativeStatic(display, screen);
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::DisplayHeightMM(int64_t display, int64_t screen) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, DisplayHeightMM, int64_t, int64_t display, int64_t screen);
	$ret = $invokeNativeStatic(display, screen);
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::RootWindow(int64_t display, int64_t screen_number) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, RootWindow, int64_t, int64_t display, int64_t screen_number);
	$ret = $invokeNativeStatic(display, screen_number);
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::ScreenCount(int64_t display) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, ScreenCount, int32_t, int64_t display);
	$ret = $invokeNativeStatic(display);
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::XCreateWindow(int64_t display, int64_t parent, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border_width, int32_t depth, int64_t wclass, int64_t visual, int64_t valuemask, int64_t attributes) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XCreateWindow, int64_t, int64_t display, int64_t parent, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border_width, int32_t depth, int64_t wclass, int64_t visual, int64_t valuemask, int64_t attributes);
	$ret = $invokeNativeStatic(display, parent, x, y, width, height, border_width, depth, wclass, visual, valuemask, attributes);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XDestroyWindow(int64_t display, int64_t window) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XDestroyWindow, void, int64_t display, int64_t window);
	$invokeNativeStatic(display, window);
	$finishNativeStatic();
}

int32_t XlibWrapper::XGrabPointer(int64_t display, int64_t grab_window, int32_t owner_events, int32_t event_mask, int32_t pointer_mode, int32_t keyboard_mode, int64_t confine_to, int64_t cursor, int64_t time) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XGrabPointer, int32_t, int64_t display, int64_t grab_window, int32_t owner_events, int32_t event_mask, int32_t pointer_mode, int32_t keyboard_mode, int64_t confine_to, int64_t cursor, int64_t time);
	$ret = $invokeNativeStatic(display, grab_window, owner_events, event_mask, pointer_mode, keyboard_mode, confine_to, cursor, time);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XUngrabPointer(int64_t display, int64_t time) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XUngrabPointer, void, int64_t display, int64_t time);
	$invokeNativeStatic(display, time);
	$finishNativeStatic();
}

int32_t XlibWrapper::XGrabKeyboard(int64_t display, int64_t grab_window, int32_t owner_events, int32_t pointer_mode, int32_t keyboard_mode, int64_t time) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XGrabKeyboard, int32_t, int64_t display, int64_t grab_window, int32_t owner_events, int32_t pointer_mode, int32_t keyboard_mode, int64_t time);
	$ret = $invokeNativeStatic(display, grab_window, owner_events, pointer_mode, keyboard_mode, time);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XUngrabKeyboard(int64_t display, int64_t time) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XUngrabKeyboard, void, int64_t display, int64_t time);
	$invokeNativeStatic(display, time);
	$finishNativeStatic();
}

void XlibWrapper::XGrabServer(int64_t display) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XGrabServer, void, int64_t display);
	$invokeNativeStatic(display);
	$finishNativeStatic();
}

void XlibWrapper::XUngrabServer(int64_t display) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XUngrabServer, void, int64_t display);
	$invokeNativeStatic(display);
	$finishNativeStatic();
}

void XlibWrapper::XMapWindow(int64_t display, int64_t window) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XMapWindow, void, int64_t display, int64_t window);
	$invokeNativeStatic(display, window);
	$finishNativeStatic();
}

void XlibWrapper::XMapRaised(int64_t display, int64_t window) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XMapRaised, void, int64_t display, int64_t window);
	$invokeNativeStatic(display, window);
	$finishNativeStatic();
}

void XlibWrapper::XRaiseWindow(int64_t display, int64_t window) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XRaiseWindow, void, int64_t display, int64_t window);
	$invokeNativeStatic(display, window);
	$finishNativeStatic();
}

void XlibWrapper::XLowerWindow(int64_t display, int64_t window) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XLowerWindow, void, int64_t display, int64_t window);
	$invokeNativeStatic(display, window);
	$finishNativeStatic();
}

void XlibWrapper::XRestackWindows(int64_t display, int64_t windows, int32_t length) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XRestackWindows, void, int64_t display, int64_t windows, int32_t length);
	$invokeNativeStatic(display, windows, length);
	$finishNativeStatic();
}

void XlibWrapper::XConfigureWindow(int64_t display, int64_t window, int64_t value_mask, int64_t values) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XConfigureWindow, void, int64_t display, int64_t window, int64_t value_mask, int64_t values);
	$invokeNativeStatic(display, window, value_mask, values);
	$finishNativeStatic();
}

void XlibWrapper::XSetInputFocus(int64_t display, int64_t window) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XSetInputFocus, void, int64_t display, int64_t window);
	$invokeNativeStatic(display, window);
	$finishNativeStatic();
}

void XlibWrapper::XSetInputFocus2(int64_t display, int64_t window, int64_t time) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XSetInputFocus2, void, int64_t display, int64_t window, int64_t time);
	$invokeNativeStatic(display, window, time);
	$finishNativeStatic();
}

int64_t XlibWrapper::XGetInputFocus(int64_t display) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XGetInputFocus, int64_t, int64_t display);
	$ret = $invokeNativeStatic(display);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XUnmapWindow(int64_t display, int64_t window) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XUnmapWindow, void, int64_t display, int64_t window);
	$invokeNativeStatic(display, window);
	$finishNativeStatic();
}

void XlibWrapper::XSelectInput(int64_t display, int64_t window, int64_t event_mask) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XSelectInput, void, int64_t display, int64_t window, int64_t event_mask);
	$invokeNativeStatic(display, window, event_mask);
	$finishNativeStatic();
}

void XlibWrapper::XNextEvent(int64_t display, int64_t ptr) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XNextEvent, void, int64_t display, int64_t ptr);
	$invokeNativeStatic(display, ptr);
	$finishNativeStatic();
}

void XlibWrapper::XMaskEvent(int64_t display, int64_t event_mask, int64_t event_return) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XMaskEvent, void, int64_t display, int64_t event_mask, int64_t event_return);
	$invokeNativeStatic(display, event_mask, event_return);
	$finishNativeStatic();
}

void XlibWrapper::XWindowEvent(int64_t display, int64_t window, int64_t event_mask, int64_t event_return) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XWindowEvent, void, int64_t display, int64_t window, int64_t event_mask, int64_t event_return);
	$invokeNativeStatic(display, window, event_mask, event_return);
	$finishNativeStatic();
}

bool XlibWrapper::XFilterEvent(int64_t ptr, int64_t window) {
	$init(XlibWrapper);
	bool $ret = false;
	$prepareNativeStatic(XlibWrapper, XFilterEvent, bool, int64_t ptr, int64_t window);
	$ret = $invokeNativeStatic(ptr, window);
	$finishNativeStatic();
	return $ret;
}

bool XlibWrapper::XSupportsLocale() {
	$init(XlibWrapper);
	bool $ret = false;
	$prepareNativeStatic(XlibWrapper, XSupportsLocale, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

$String* XlibWrapper::XSetLocaleModifiers($String* modifier_list) {
	$init(XlibWrapper);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(XlibWrapper, XSetLocaleModifiers, $String*, $String* modifier_list);
	$assign($ret, $invokeNativeStaticObject(modifier_list));
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::XTranslateCoordinates(int64_t display, int64_t src_w, int64_t dest_w, int64_t src_x, int64_t src_y, int64_t dest_x_return, int64_t dest_y_return, int64_t child_return) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XTranslateCoordinates, int32_t, int64_t display, int64_t src_w, int64_t dest_w, int64_t src_x, int64_t src_y, int64_t dest_x_return, int64_t dest_y_return, int64_t child_return);
	$ret = $invokeNativeStatic(display, src_w, dest_w, src_x, src_y, dest_x_return, dest_y_return, child_return);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XPeekEvent(int64_t display, int64_t ptr) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XPeekEvent, void, int64_t display, int64_t ptr);
	$invokeNativeStatic(display, ptr);
	$finishNativeStatic();
}

void XlibWrapper::XFlush(int64_t display) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XFlush, void, int64_t display);
	$invokeNativeStatic(display);
	$finishNativeStatic();
}

void XlibWrapper::XSync(int64_t display, int32_t discard) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XSync, void, int64_t display, int32_t discard);
	$invokeNativeStatic(display, discard);
	$finishNativeStatic();
}

void XlibWrapper::XMoveResizeWindow(int64_t display, int64_t window, int32_t x, int32_t y, int32_t width, int32_t height) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XMoveResizeWindow, void, int64_t display, int64_t window, int32_t x, int32_t y, int32_t width, int32_t height);
	$invokeNativeStatic(display, window, x, y, width, height);
	$finishNativeStatic();
}

void XlibWrapper::XResizeWindow(int64_t display, int64_t window, int32_t width, int32_t height) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XResizeWindow, void, int64_t display, int64_t window, int32_t width, int32_t height);
	$invokeNativeStatic(display, window, width, height);
	$finishNativeStatic();
}

void XlibWrapper::XMoveWindow(int64_t display, int64_t window, int32_t x, int32_t y) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XMoveWindow, void, int64_t display, int64_t window, int32_t x, int32_t y);
	$invokeNativeStatic(display, window, x, y);
	$finishNativeStatic();
}

bool XlibWrapper::XQueryPointer(int64_t display, int64_t window, int64_t root_return, int64_t child_return, int64_t root_x_return, int64_t root_y_return, int64_t win_x_return, int64_t win_y_return, int64_t mask_return) {
	$init(XlibWrapper);
	bool $ret = false;
	$prepareNativeStatic(XlibWrapper, XQueryPointer, bool, int64_t display, int64_t window, int64_t root_return, int64_t child_return, int64_t root_x_return, int64_t root_y_return, int64_t win_x_return, int64_t win_y_return, int64_t mask_return);
	$ret = $invokeNativeStatic(display, window, root_return, child_return, root_x_return, root_y_return, win_x_return, win_y_return, mask_return);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XFreeCursor(int64_t display, int64_t cursor) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XFreeCursor, void, int64_t display, int64_t cursor);
	$invokeNativeStatic(display, cursor);
	$finishNativeStatic();
}

void XlibWrapper::XSetWindowBackground(int64_t display, int64_t window, int64_t background_pixel) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XSetWindowBackground, void, int64_t display, int64_t window, int64_t background_pixel);
	$invokeNativeStatic(display, window, background_pixel);
	$finishNativeStatic();
}

int32_t XlibWrapper::XEventsQueued(int64_t display, int32_t mode) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XEventsQueued, int32_t, int64_t display, int32_t mode);
	$ret = $invokeNativeStatic(display, mode);
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::XInternAtoms(int64_t display, $StringArray* names, bool only_if_exists, int64_t atoms) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XInternAtoms, int32_t, int64_t display, $StringArray* names, bool only_if_exists, int64_t atoms);
	$ret = $invokeNativeStatic(display, names, only_if_exists, atoms);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::SetProperty(int64_t display, int64_t window, int64_t atom, $String* str) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, SetProperty, void, int64_t display, int64_t window, int64_t atom, $String* str);
	$invokeNativeStatic(display, window, atom, str);
	$finishNativeStatic();
}

$String* XlibWrapper::GetProperty(int64_t display, int64_t window, int64_t atom) {
	$init(XlibWrapper);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(XlibWrapper, GetProperty, $String*, int64_t display, int64_t window, int64_t atom);
	$assign($ret, $invokeNativeStaticObject(display, window, atom));
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::InternAtom(int64_t display, $String* string, int32_t only_if_exists) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, InternAtom, int64_t, int64_t display, $String* string, int32_t only_if_exists);
	$ret = $invokeNativeStatic(display, string, only_if_exists);
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::XGetWindowProperty(int64_t display, int64_t window, int64_t atom, int64_t long_offset, int64_t long_length, int64_t delete$, int64_t req_type, int64_t actualy_type, int64_t actualy_format, int64_t nitems_ptr, int64_t bytes_after, int64_t data_ptr) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XGetWindowProperty, int32_t, int64_t display, int64_t window, int64_t atom, int64_t long_offset, int64_t long_length, int64_t delete$, int64_t req_type, int64_t actualy_type, int64_t actualy_format, int64_t nitems_ptr, int64_t bytes_after, int64_t data_ptr);
	$ret = $invokeNativeStatic(display, window, atom, long_offset, long_length, delete$, req_type, actualy_type, actualy_format, nitems_ptr, bytes_after, data_ptr);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XChangePropertyImpl(int64_t display, int64_t window, int64_t atom, int64_t type, int32_t format, int32_t mode, int64_t data, int32_t nelements) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XChangePropertyImpl, void, int64_t display, int64_t window, int64_t atom, int64_t type, int32_t format, int32_t mode, int64_t data, int32_t nelements);
	$invokeNativeStatic(display, window, atom, type, format, mode, data, nelements);
	$finishNativeStatic();
}

void XlibWrapper::XChangeProperty(int64_t display, int64_t window, int64_t atom, int64_t type, int32_t format, int32_t mode, int64_t data, int32_t nelements) {
	$init(XlibWrapper);
	$useLocalCurrentObjectStackCache();
	bool var$1 = $XPropertyCache::isCachingSupported();
	bool var$0 = var$1 && $XToolkit::windowToXWindow(window) != nullptr;
	if (var$0 && $WindowPropertyGetter::isCacheableProperty($($XAtom::get(atom))) && mode == $XConstants::PropModeReplace) {
		int32_t length = (format / 8) * nelements;
		$var($XPropertyCache$PropertyCacheEntry, var$2, $new($XPropertyCache$PropertyCacheEntry, format, nelements, 0, data, length));
		int64_t var$3 = window;
		$XPropertyCache::storeCache(var$2, var$3, $($XAtom::get(atom)));
	}
	XChangePropertyImpl(display, window, atom, type, format, mode, data, nelements);
}

void XlibWrapper::XChangePropertyS(int64_t display, int64_t window, int64_t atom, int64_t type, int32_t format, int32_t mode, $String* value) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XChangePropertyS, void, int64_t display, int64_t window, int64_t atom, int64_t type, int32_t format, int32_t mode, $String* value);
	$invokeNativeStatic(display, window, atom, type, format, mode, value);
	$finishNativeStatic();
}

void XlibWrapper::XDeleteProperty(int64_t display, int64_t window, int64_t atom) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XDeleteProperty, void, int64_t display, int64_t window, int64_t atom);
	$invokeNativeStatic(display, window, atom);
	$finishNativeStatic();
}

void XlibWrapper::XSetTransientFor(int64_t display, int64_t window, int64_t transient_for_window) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XSetTransientFor, void, int64_t display, int64_t window, int64_t transient_for_window);
	$invokeNativeStatic(display, window, transient_for_window);
	$finishNativeStatic();
}

void XlibWrapper::XSetWMHints(int64_t display, int64_t window, int64_t wmhints) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XSetWMHints, void, int64_t display, int64_t window, int64_t wmhints);
	$invokeNativeStatic(display, window, wmhints);
	$finishNativeStatic();
}

void XlibWrapper::XGetWMHints(int64_t display, int64_t window, int64_t wmhints) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XGetWMHints, void, int64_t display, int64_t window, int64_t wmhints);
	$invokeNativeStatic(display, window, wmhints);
	$finishNativeStatic();
}

int64_t XlibWrapper::XAllocWMHints() {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XAllocWMHints, int64_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::XGetPointerMapping(int64_t display, int64_t map, int32_t buttonNumber) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XGetPointerMapping, int32_t, int64_t display, int64_t map, int32_t buttonNumber);
	$ret = $invokeNativeStatic(display, map, buttonNumber);
	$finishNativeStatic();
	return $ret;
}

$String* XlibWrapper::XGetDefault(int64_t display, $String* program, $String* option) {
	$init(XlibWrapper);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(XlibWrapper, XGetDefault, $String*, int64_t display, $String* program, $String* option);
	$assign($ret, $invokeNativeStaticObject(display, program, option));
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::getScreenOfWindow(int64_t display, int64_t window) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, getScreenOfWindow, int64_t, int64_t display, int64_t window);
	$ret = $invokeNativeStatic(display, window);
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::XScreenNumberOfScreen(int64_t screen) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XScreenNumberOfScreen, int64_t, int64_t screen);
	$ret = $invokeNativeStatic(screen);
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::XIconifyWindow(int64_t display, int64_t window, int64_t screenNumber) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XIconifyWindow, int32_t, int64_t display, int64_t window, int64_t screenNumber);
	$ret = $invokeNativeStatic(display, window, screenNumber);
	$finishNativeStatic();
	return $ret;
}

$String* XlibWrapper::ServerVendor(int64_t display) {
	$init(XlibWrapper);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(XlibWrapper, ServerVendor, $String*, int64_t display);
	$assign($ret, $invokeNativeStaticObject(display));
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::VendorRelease(int64_t display) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, VendorRelease, int32_t, int64_t display);
	$ret = $invokeNativeStatic(display);
	$finishNativeStatic();
	return $ret;
}

bool XlibWrapper::IsXsunKPBehavior(int64_t display) {
	$init(XlibWrapper);
	bool $ret = false;
	$prepareNativeStatic(XlibWrapper, IsXsunKPBehavior, bool, int64_t display);
	$ret = $invokeNativeStatic(display);
	$finishNativeStatic();
	return $ret;
}

bool XlibWrapper::IsSunKeyboard(int64_t display) {
	$init(XlibWrapper);
	bool $ret = false;
	$prepareNativeStatic(XlibWrapper, IsSunKeyboard, bool, int64_t display);
	$ret = $invokeNativeStatic(display);
	$finishNativeStatic();
	return $ret;
}

bool XlibWrapper::IsKanaKeyboard(int64_t display) {
	$init(XlibWrapper);
	bool $ret = false;
	$prepareNativeStatic(XlibWrapper, IsKanaKeyboard, bool, int64_t display);
	$ret = $invokeNativeStatic(display);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XBell(int64_t display, int32_t percent) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XBell, void, int64_t display, int32_t percent);
	$invokeNativeStatic(display, percent);
	$finishNativeStatic();
}

int32_t XlibWrapper::XCreateFontCursor(int64_t display, int32_t shape) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XCreateFontCursor, int32_t, int64_t display, int32_t shape);
	$ret = $invokeNativeStatic(display, shape);
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::XCreateBitmapFromData(int64_t display, int64_t drawable, int64_t data, int32_t width, int32_t height) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XCreateBitmapFromData, int64_t, int64_t display, int64_t drawable, int64_t data, int32_t width, int32_t height);
	$ret = $invokeNativeStatic(display, drawable, data, width, height);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XFreePixmap(int64_t display, int64_t pixmap) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XFreePixmap, void, int64_t display, int64_t pixmap);
	$invokeNativeStatic(display, pixmap);
	$finishNativeStatic();
}

int64_t XlibWrapper::XCreatePixmapCursor(int64_t display, int64_t source, int64_t mask, int64_t fore, int64_t back, int32_t x, int32_t y) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XCreatePixmapCursor, int64_t, int64_t display, int64_t source, int64_t mask, int64_t fore, int64_t back, int32_t x, int32_t y);
	$ret = $invokeNativeStatic(display, source, mask, fore, back, x, y);
	$finishNativeStatic();
	return $ret;
}

bool XlibWrapper::XQueryBestCursor(int64_t display, int64_t drawable, int32_t width, int32_t height, int64_t width_return, int64_t height_return) {
	$init(XlibWrapper);
	bool $ret = false;
	$prepareNativeStatic(XlibWrapper, XQueryBestCursor, bool, int64_t display, int64_t drawable, int32_t width, int32_t height, int64_t width_return, int64_t height_return);
	$ret = $invokeNativeStatic(display, drawable, width, height, width_return, height_return);
	$finishNativeStatic();
	return $ret;
}

bool XlibWrapper::XAllocColor(int64_t display, int64_t colormap, int64_t screen_in_out) {
	$init(XlibWrapper);
	bool $ret = false;
	$prepareNativeStatic(XlibWrapper, XAllocColor, bool, int64_t display, int64_t colormap, int64_t screen_in_out);
	$ret = $invokeNativeStatic(display, colormap, screen_in_out);
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::SetToolkitErrorHandler() {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, SetToolkitErrorHandler, int64_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XSetErrorHandler(int64_t handler) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XSetErrorHandler, void, int64_t handler);
	$invokeNativeStatic(handler);
	$finishNativeStatic();
}

int32_t XlibWrapper::CallErrorHandler(int64_t handler, int64_t display, int64_t event_ptr) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, CallErrorHandler, int32_t, int64_t handler, int64_t display, int64_t event_ptr);
	$ret = $invokeNativeStatic(handler, display, event_ptr);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XChangeWindowAttributes(int64_t display, int64_t window, int64_t valuemask, int64_t attributes) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XChangeWindowAttributes, void, int64_t display, int64_t window, int64_t valuemask, int64_t attributes);
	$invokeNativeStatic(display, window, valuemask, attributes);
	$finishNativeStatic();
}

int32_t XlibWrapper::XGetWindowAttributes(int64_t display, int64_t window, int64_t attr_ptr) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XGetWindowAttributes, int32_t, int64_t display, int64_t window, int64_t attr_ptr);
	$ret = $invokeNativeStatic(display, window, attr_ptr);
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::XGetGeometry(int64_t display, int64_t drawable, int64_t root_return, int64_t x_return, int64_t y_return, int64_t width_return, int64_t height_return, int64_t border_width_return, int64_t depth_return) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XGetGeometry, int32_t, int64_t display, int64_t drawable, int64_t root_return, int64_t x_return, int64_t y_return, int64_t width_return, int64_t height_return, int64_t border_width_return, int64_t depth_return);
	$ret = $invokeNativeStatic(display, drawable, root_return, x_return, y_return, width_return, height_return, border_width_return, depth_return);
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::XGetWMNormalHints(int64_t display, int64_t window, int64_t hints, int64_t supplied_return) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XGetWMNormalHints, int32_t, int64_t display, int64_t window, int64_t hints, int64_t supplied_return);
	$ret = $invokeNativeStatic(display, window, hints, supplied_return);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XSetWMNormalHints(int64_t display, int64_t window, int64_t hints) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XSetWMNormalHints, void, int64_t display, int64_t window, int64_t hints);
	$invokeNativeStatic(display, window, hints);
	$finishNativeStatic();
}

void XlibWrapper::XSetMinMaxHints(int64_t display, int64_t window, int32_t x, int32_t y, int32_t width, int32_t height, int64_t flags) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XSetMinMaxHints, void, int64_t display, int64_t window, int32_t x, int32_t y, int32_t width, int32_t height, int64_t flags);
	$invokeNativeStatic(display, window, x, y, width, height, flags);
	$finishNativeStatic();
}

int64_t XlibWrapper::XAllocSizeHints() {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XAllocSizeHints, int64_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::XSendEvent(int64_t display, int64_t window, bool propagate, int64_t event_mask, int64_t event) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XSendEvent, int32_t, int64_t display, int64_t window, bool propagate, int64_t event_mask, int64_t event);
	$ret = $invokeNativeStatic(display, window, propagate, event_mask, event);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XPutBackEvent(int64_t display, int64_t event) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XPutBackEvent, void, int64_t display, int64_t event);
	$invokeNativeStatic(display, event);
	$finishNativeStatic();
}

int32_t XlibWrapper::XQueryTree(int64_t display, int64_t window, int64_t root_return, int64_t parent_return, int64_t children_return, int64_t nchildren_return) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XQueryTree, int32_t, int64_t display, int64_t window, int64_t root_return, int64_t parent_return, int64_t children_return, int64_t nchildren_return);
	$ret = $invokeNativeStatic(display, window, root_return, parent_return, children_return, nchildren_return);
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::XGetVisualInfo(int64_t display, int64_t vinfo_mask, int64_t vinfo_template, int64_t nitems_return) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XGetVisualInfo, int64_t, int64_t display, int64_t vinfo_mask, int64_t vinfo_template, int64_t nitems_return);
	$ret = $invokeNativeStatic(display, vinfo_mask, vinfo_template, nitems_return);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XReparentWindow(int64_t display, int64_t window, int64_t parent, int32_t x, int32_t y) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XReparentWindow, void, int64_t display, int64_t window, int64_t parent, int32_t x, int32_t y);
	$invokeNativeStatic(display, window, parent, x, y);
	$finishNativeStatic();
}

void XlibWrapper::XConvertSelection(int64_t display, int64_t selection, int64_t target, int64_t property, int64_t requestor, int64_t time) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XConvertSelection, void, int64_t display, int64_t selection, int64_t target, int64_t property, int64_t requestor, int64_t time);
	$invokeNativeStatic(display, selection, target, property, requestor, time);
	$finishNativeStatic();
}

void XlibWrapper::XSetSelectionOwner(int64_t display, int64_t selection, int64_t owner, int64_t time) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XSetSelectionOwner, void, int64_t display, int64_t selection, int64_t owner, int64_t time);
	$invokeNativeStatic(display, selection, owner, time);
	$finishNativeStatic();
}

int64_t XlibWrapper::XGetSelectionOwner(int64_t display, int64_t selection) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XGetSelectionOwner, int64_t, int64_t display, int64_t selection);
	$ret = $invokeNativeStatic(display, selection);
	$finishNativeStatic();
	return $ret;
}

$String* XlibWrapper::XGetAtomName(int64_t display, int64_t atom) {
	$init(XlibWrapper);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(XlibWrapper, XGetAtomName, $String*, int64_t display, int64_t atom);
	$assign($ret, $invokeNativeStaticObject(display, atom));
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::XMaxRequestSize(int64_t display) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XMaxRequestSize, int64_t, int64_t display);
	$ret = $invokeNativeStatic(display);
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::XCreatePixmap(int64_t display, int64_t drawable, int32_t width, int32_t height, int32_t depth) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XCreatePixmap, int64_t, int64_t display, int64_t drawable, int32_t width, int32_t height, int32_t depth);
	$ret = $invokeNativeStatic(display, drawable, width, height, depth);
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::XCreateImage(int64_t display, int64_t visual_ptr, int32_t depth, int32_t format, int32_t offset, int64_t data, int32_t width, int32_t height, int32_t bitmap_pad, int32_t bytes_per_line) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XCreateImage, int64_t, int64_t display, int64_t visual_ptr, int32_t depth, int32_t format, int32_t offset, int64_t data, int32_t width, int32_t height, int32_t bitmap_pad, int32_t bytes_per_line);
	$ret = $invokeNativeStatic(display, visual_ptr, depth, format, offset, data, width, height, bitmap_pad, bytes_per_line);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XDestroyImage(int64_t image) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XDestroyImage, void, int64_t image);
	$invokeNativeStatic(image);
	$finishNativeStatic();
}

void XlibWrapper::XPutImage(int64_t display, int64_t drawable, int64_t gc, int64_t image, int32_t src_x, int32_t src_y, int32_t dest_x, int32_t dest_y, int32_t width, int32_t height) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XPutImage, void, int64_t display, int64_t drawable, int64_t gc, int64_t image, int32_t src_x, int32_t src_y, int32_t dest_x, int32_t dest_y, int32_t width, int32_t height);
	$invokeNativeStatic(display, drawable, gc, image, src_x, src_y, dest_x, dest_y, width, height);
	$finishNativeStatic();
}

int64_t XlibWrapper::XCreateGC(int64_t display, int64_t drawable, int64_t valuemask, int64_t values) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XCreateGC, int64_t, int64_t display, int64_t drawable, int64_t valuemask, int64_t values);
	$ret = $invokeNativeStatic(display, drawable, valuemask, values);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XFreeGC(int64_t display, int64_t gc) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XFreeGC, void, int64_t display, int64_t gc);
	$invokeNativeStatic(display, gc);
	$finishNativeStatic();
}

void XlibWrapper::XSetWindowBackgroundPixmap(int64_t display, int64_t window, int64_t pixmap) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XSetWindowBackgroundPixmap, void, int64_t display, int64_t window, int64_t pixmap);
	$invokeNativeStatic(display, window, pixmap);
	$finishNativeStatic();
}

void XlibWrapper::XClearWindow(int64_t display, int64_t window) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XClearWindow, void, int64_t display, int64_t window);
	$invokeNativeStatic(display, window);
	$finishNativeStatic();
}

int32_t XlibWrapper::XGetIconSizes(int64_t display, int64_t window, int64_t ret_sizes, int64_t ret_count) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XGetIconSizes, int32_t, int64_t display, int64_t window, int64_t ret_sizes, int64_t ret_count);
	$ret = $invokeNativeStatic(display, window, ret_sizes, ret_count);
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::XdbeQueryExtension(int64_t display, int64_t major_version_return, int64_t minor_version_return) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XdbeQueryExtension, int32_t, int64_t display, int64_t major_version_return, int64_t minor_version_return);
	$ret = $invokeNativeStatic(display, major_version_return, minor_version_return);
	$finishNativeStatic();
	return $ret;
}

bool XlibWrapper::XQueryExtension(int64_t display, $String* name, int64_t mop_return, int64_t feve_return, int64_t err_return) {
	$init(XlibWrapper);
	bool $ret = false;
	$prepareNativeStatic(XlibWrapper, XQueryExtension, bool, int64_t display, $String* name, int64_t mop_return, int64_t feve_return, int64_t err_return);
	$ret = $invokeNativeStatic(display, name, mop_return, feve_return, err_return);
	$finishNativeStatic();
	return $ret;
}

bool XlibWrapper::IsKeypadKey(int64_t keysym) {
	$init(XlibWrapper);
	bool $ret = false;
	$prepareNativeStatic(XlibWrapper, IsKeypadKey, bool, int64_t keysym);
	$ret = $invokeNativeStatic(keysym);
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::XdbeAllocateBackBufferName(int64_t display, int64_t window, int32_t swap_action) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XdbeAllocateBackBufferName, int64_t, int64_t display, int64_t window, int32_t swap_action);
	$ret = $invokeNativeStatic(display, window, swap_action);
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::XdbeDeallocateBackBufferName(int64_t display, int64_t buffer) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XdbeDeallocateBackBufferName, int32_t, int64_t display, int64_t buffer);
	$ret = $invokeNativeStatic(display, buffer);
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::XdbeBeginIdiom(int64_t display) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XdbeBeginIdiom, int32_t, int64_t display);
	$ret = $invokeNativeStatic(display);
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::XdbeEndIdiom(int64_t display) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XdbeEndIdiom, int32_t, int64_t display);
	$ret = $invokeNativeStatic(display);
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::XdbeSwapBuffers(int64_t display, int64_t swap_info, int32_t num_windows) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XdbeSwapBuffers, int32_t, int64_t display, int64_t swap_info, int32_t num_windows);
	$ret = $invokeNativeStatic(display, swap_info, num_windows);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XQueryKeymap(int64_t display, int64_t vector) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XQueryKeymap, void, int64_t display, int64_t vector);
	$invokeNativeStatic(display, vector);
	$finishNativeStatic();
}

int64_t XlibWrapper::XKeycodeToKeysym(int64_t display, int32_t keycode, int32_t index) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XKeycodeToKeysym, int64_t, int64_t display, int32_t keycode, int32_t index);
	$ret = $invokeNativeStatic(display, keycode, index);
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::XKeysymToKeycode(int64_t display, int64_t keysym) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XKeysymToKeycode, int32_t, int64_t display, int64_t keysym);
	$ret = $invokeNativeStatic(display, keysym);
	$finishNativeStatic();
	return $ret;
}

int32_t XlibWrapper::XkbGetEffectiveGroup(int64_t display) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XkbGetEffectiveGroup, int32_t, int64_t display);
	$ret = $invokeNativeStatic(display);
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::XkbKeycodeToKeysym(int64_t display, int32_t keycode, int32_t group, int32_t level) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XkbKeycodeToKeysym, int64_t, int64_t display, int32_t keycode, int32_t group, int32_t level);
	$ret = $invokeNativeStatic(display, keycode, group, level);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XkbSelectEvents(int64_t display, int64_t device, int64_t bits_to_change, int64_t values_for_bits) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XkbSelectEvents, void, int64_t display, int64_t device, int64_t bits_to_change, int64_t values_for_bits);
	$invokeNativeStatic(display, device, bits_to_change, values_for_bits);
	$finishNativeStatic();
}

void XlibWrapper::XkbSelectEventDetails(int64_t display, int64_t device, int64_t event_type, int64_t bits_to_change, int64_t values_for_bits) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XkbSelectEventDetails, void, int64_t display, int64_t device, int64_t event_type, int64_t bits_to_change, int64_t values_for_bits);
	$invokeNativeStatic(display, device, event_type, bits_to_change, values_for_bits);
	$finishNativeStatic();
}

bool XlibWrapper::XkbQueryExtension(int64_t display, int64_t opcode_rtrn, int64_t event_rtrn, int64_t error_rtrn, int64_t major_in_out, int64_t minor_in_out) {
	$init(XlibWrapper);
	bool $ret = false;
	$prepareNativeStatic(XlibWrapper, XkbQueryExtension, bool, int64_t display, int64_t opcode_rtrn, int64_t event_rtrn, int64_t error_rtrn, int64_t major_in_out, int64_t minor_in_out);
	$ret = $invokeNativeStatic(display, opcode_rtrn, event_rtrn, error_rtrn, major_in_out, minor_in_out);
	$finishNativeStatic();
	return $ret;
}

bool XlibWrapper::XkbLibraryVersion(int64_t lib_major_in_out, int64_t lib_minor_in_out) {
	$init(XlibWrapper);
	bool $ret = false;
	$prepareNativeStatic(XlibWrapper, XkbLibraryVersion, bool, int64_t lib_major_in_out, int64_t lib_minor_in_out);
	$ret = $invokeNativeStatic(lib_major_in_out, lib_minor_in_out);
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::XkbGetMap(int64_t display, int64_t which, int64_t device_spec) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XkbGetMap, int64_t, int64_t display, int64_t which, int64_t device_spec);
	$ret = $invokeNativeStatic(display, which, device_spec);
	$finishNativeStatic();
	return $ret;
}

int64_t XlibWrapper::XkbGetUpdatedMap(int64_t display, int64_t which, int64_t xkb) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XkbGetUpdatedMap, int64_t, int64_t display, int64_t which, int64_t xkb);
	$ret = $invokeNativeStatic(display, which, xkb);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XkbFreeKeyboard(int64_t xkb, int64_t which, bool free_all) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XkbFreeKeyboard, void, int64_t xkb, int64_t which, bool free_all);
	$invokeNativeStatic(xkb, which, free_all);
	$finishNativeStatic();
}

bool XlibWrapper::XkbTranslateKeyCode(int64_t xkb, int32_t keycode, int64_t mods, int64_t mods_rtrn, int64_t keysym_rtrn) {
	$init(XlibWrapper);
	bool $ret = false;
	$prepareNativeStatic(XlibWrapper, XkbTranslateKeyCode, bool, int64_t xkb, int32_t keycode, int64_t mods, int64_t mods_rtrn, int64_t keysym_rtrn);
	$ret = $invokeNativeStatic(xkb, keycode, mods, mods_rtrn, keysym_rtrn);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XkbSetDetectableAutoRepeat(int64_t display, bool detectable) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XkbSetDetectableAutoRepeat, void, int64_t display, bool detectable);
	$invokeNativeStatic(display, detectable);
	$finishNativeStatic();
}

void XlibWrapper::XConvertCase(int64_t keysym, int64_t keysym_lowercase, int64_t keysym_uppercase) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XConvertCase, void, int64_t keysym, int64_t keysym_lowercase, int64_t keysym_uppercase);
	$invokeNativeStatic(keysym, keysym_lowercase, keysym_uppercase);
	$finishNativeStatic();
}

int64_t XlibWrapper::XGetModifierMapping(int64_t display) {
	$init(XlibWrapper);
	int64_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XGetModifierMapping, int64_t, int64_t display);
	$ret = $invokeNativeStatic(display);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::XFreeModifiermap(int64_t keymap) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XFreeModifiermap, void, int64_t keymap);
	$invokeNativeStatic(keymap);
	$finishNativeStatic();
}

void XlibWrapper::XRefreshKeyboardMapping(int64_t event) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XRefreshKeyboardMapping, void, int64_t event);
	$invokeNativeStatic(event);
	$finishNativeStatic();
}

void XlibWrapper::XChangeActivePointerGrab(int64_t display, int32_t mask, int64_t cursor, int64_t time) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, XChangeActivePointerGrab, void, int64_t display, int32_t mask, int64_t cursor, int64_t time);
	$invokeNativeStatic(display, mask, cursor, time);
	$finishNativeStatic();
}

int32_t XlibWrapper::XSynchronize(int64_t display, bool onoff) {
	$init(XlibWrapper);
	int32_t $ret = 0;
	$prepareNativeStatic(XlibWrapper, XSynchronize, int32_t, int64_t display, bool onoff);
	$ret = $invokeNativeStatic(display, onoff);
	$finishNativeStatic();
	return $ret;
}

bool XlibWrapper::XNextSecondaryLoopEvent(int64_t display, int64_t ptr) {
	$init(XlibWrapper);
	bool $ret = false;
	$prepareNativeStatic(XlibWrapper, XNextSecondaryLoopEvent, bool, int64_t display, int64_t ptr);
	$ret = $invokeNativeStatic(display, ptr);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::ExitSecondaryLoop() {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, ExitSecondaryLoop, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$StringArray* XlibWrapper::XTextPropertyToStringList($bytes* bytes, int64_t encoding_atom) {
	$init(XlibWrapper);
	$var($StringArray, $ret, nullptr);
	$prepareNativeStatic(XlibWrapper, XTextPropertyToStringList, $StringArray*, $bytes* bytes, int64_t encoding_atom);
	$assign($ret, $invokeNativeStaticObject(bytes, encoding_atom));
	$finishNativeStatic();
	return $ret;
}

bool XlibWrapper::XShapeQueryExtension(int64_t display, int64_t event_base_return, int64_t error_base_return) {
	$init(XlibWrapper);
	bool $ret = false;
	$prepareNativeStatic(XlibWrapper, XShapeQueryExtension, bool, int64_t display, int64_t event_base_return, int64_t error_base_return);
	$ret = $invokeNativeStatic(display, event_base_return, error_base_return);
	$finishNativeStatic();
	return $ret;
}

void XlibWrapper::SetRectangularShape(int64_t display, int64_t window, int32_t lox, int32_t loy, int32_t hix, int32_t hiy, $Region* region) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, SetRectangularShape, void, int64_t display, int64_t window, int32_t lox, int32_t loy, int32_t hix, int32_t hiy, $Region* region);
	$invokeNativeStatic(display, window, lox, loy, hix, hiy, region);
	$finishNativeStatic();
}

void XlibWrapper::SetBitmapShape(int64_t display, int64_t window, int32_t width, int32_t height, $ints* bitmap) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, SetBitmapShape, void, int64_t display, int64_t window, int32_t width, int32_t height, $ints* bitmap);
	$invokeNativeStatic(display, window, width, height, bitmap);
	$finishNativeStatic();
}

void XlibWrapper::SetZOrder(int64_t display, int64_t window, int64_t above) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, SetZOrder, void, int64_t display, int64_t window, int64_t above);
	$invokeNativeStatic(display, window, above);
	$finishNativeStatic();
}

int32_t XlibWrapper::getDataModel() {
	$init(XlibWrapper);
	return XlibWrapper::dataModel;
}

$String* XlibWrapper::hintsToString(int64_t flags) {
	$init(XlibWrapper);
	$var($StringBuilder, buf, $new($StringBuilder));
	if (((int64_t)(flags & (uint64_t)$XUtilConstants::PMaxSize)) != 0) {
		buf->append("PMaxSize "_s);
	}
	if (((int64_t)(flags & (uint64_t)$XUtilConstants::PMinSize)) != 0) {
		buf->append("PMinSize "_s);
	}
	if (((int64_t)(flags & (uint64_t)$XUtilConstants::USSize)) != 0) {
		buf->append("USSize "_s);
	}
	if (((int64_t)(flags & (uint64_t)$XUtilConstants::USPosition)) != 0) {
		buf->append("USPosition "_s);
	}
	if (((int64_t)(flags & (uint64_t)$XUtilConstants::PPosition)) != 0) {
		buf->append("PPosition "_s);
	}
	if (((int64_t)(flags & (uint64_t)$XUtilConstants::PSize)) != 0) {
		buf->append("PSize "_s);
	}
	if (((int64_t)(flags & (uint64_t)$XUtilConstants::PWinGravity)) != 0) {
		buf->append("PWinGravity "_s);
	}
	return buf->toString();
}

$String* XlibWrapper::getEventToString(int32_t type) {
	$init(XlibWrapper);
	if ((type >= 0) && (type < $nc(XlibWrapper::eventToString)->length)) {
		return $nc(XlibWrapper::eventToString)->get(type);
	} else if (type == $XToolkit::getXKBBaseEventCode()) {
		return "XkbEvent"_s;
	}
	return $nc(XlibWrapper::eventToString)->get(0);
}

bool XlibWrapper::getBuildInternal() {
	$init(XlibWrapper);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, javaVersion, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "java.version"_s)))));
	return javaVersion != nullptr && javaVersion->contains("internal"_s);
}

void XlibWrapper::PrintXErrorEvent(int64_t display, int64_t event_ptr) {
	$init(XlibWrapper);
	$prepareNativeStatic(XlibWrapper, PrintXErrorEvent, void, int64_t display, int64_t event_ptr);
	$invokeNativeStatic(display, event_ptr);
	$finishNativeStatic();
}

void clinit$XlibWrapper($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(XlibWrapper::unsafe, $Unsafe::getUnsafe());
	$assignStatic(XlibWrapper::eventToString, $new($StringArray, {
		"<none:0>"_s,
		"<none:1>"_s,
		"KeyPress"_s,
		"KeyRelease"_s,
		"ButtonPress"_s,
		"ButtonRelease"_s,
		"MotionNotify"_s,
		"EnterNotify"_s,
		"LeaveNotify"_s,
		"FocusIn"_s,
		"FocusOut"_s,
		"KeymapNotify"_s,
		"Expose"_s,
		"GraphicsExpose"_s,
		"NoExpose"_s,
		"VisibilityNotify"_s,
		"CreateNotify"_s,
		"DestroyNotify"_s,
		"UnmapNotify"_s,
		"MapNotify"_s,
		"MapRequest"_s,
		"ReparentNotify"_s,
		"ConfigureNotify"_s,
		"ConfigureRequest"_s,
		"GravityNotify"_s,
		"ResizeRequest"_s,
		"CirculateNotify"_s,
		"CirculateRequest"_s,
		"PropertyNotify"_s,
		"SelectionClear"_s,
		"SelectionRequest"_s,
		"SelectionNotify"_s,
		"ColormapNotify"_s,
		"ClientMessage"_s,
		"MappingNotify"_s,
		"LASTEvent"_s
	}));
	XlibWrapper::lbuffer = $nc(XlibWrapper::unsafe)->allocateMemory(64);
	XlibWrapper::ibuffer = $nc(XlibWrapper::unsafe)->allocateMemory(32);
	XlibWrapper::larg1 = XlibWrapper::lbuffer;
	XlibWrapper::larg2 = XlibWrapper::larg1 + 8;
	XlibWrapper::larg3 = XlibWrapper::larg2 + 8;
	XlibWrapper::larg4 = XlibWrapper::larg3 + 8;
	XlibWrapper::larg5 = XlibWrapper::larg4 + 8;
	XlibWrapper::larg6 = XlibWrapper::larg5 + 8;
	XlibWrapper::larg7 = XlibWrapper::larg6 + 8;
	XlibWrapper::larg8 = XlibWrapper::larg7 + 8;
	XlibWrapper::iarg1 = XlibWrapper::ibuffer;
	XlibWrapper::iarg2 = XlibWrapper::iarg1 + 4;
	XlibWrapper::iarg3 = XlibWrapper::iarg2 + 4;
	XlibWrapper::iarg4 = XlibWrapper::iarg3 + 4;
	XlibWrapper::iarg5 = XlibWrapper::iarg4 + 4;
	XlibWrapper::iarg6 = XlibWrapper::iarg5 + 4;
	XlibWrapper::iarg7 = XlibWrapper::iarg6 + 4;
	XlibWrapper::iarg8 = XlibWrapper::iarg7 + 4;
	{
		$var($String, dataModelProp, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.arch.data.model"_s)))));
		try {
			XlibWrapper::dataModel = $Integer::parseInt(dataModelProp);
		} catch ($Exception& e) {
			XlibWrapper::dataModel = 32;
		}
		XlibWrapper::isBuildInternal = XlibWrapper::getBuildInternal();
	}
}

XlibWrapper::XlibWrapper() {
}

$Class* XlibWrapper::load$($String* name, bool initialize) {
	$loadClass(XlibWrapper, name, initialize, &_XlibWrapper_ClassInfo_, clinit$XlibWrapper, allocate$XlibWrapper);
	return class$;
}

$Class* XlibWrapper::class$ = nullptr;

		} // X11
	} // awt
} // sun