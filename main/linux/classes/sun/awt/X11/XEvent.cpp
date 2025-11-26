#include <sun/awt/X11/XEvent.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XAnyEvent.h>
#include <sun/awt/X11/XButtonEvent.h>
#include <sun/awt/X11/XCirculateEvent.h>
#include <sun/awt/X11/XCirculateRequestEvent.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XColormapEvent.h>
#include <sun/awt/X11/XConfigureEvent.h>
#include <sun/awt/X11/XConfigureRequestEvent.h>
#include <sun/awt/X11/XCreateWindowEvent.h>
#include <sun/awt/X11/XCrossingEvent.h>
#include <sun/awt/X11/XDestroyWindowEvent.h>
#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XExposeEvent.h>
#include <sun/awt/X11/XFocusChangeEvent.h>
#include <sun/awt/X11/XGraphicsExposeEvent.h>
#include <sun/awt/X11/XGravityEvent.h>
#include <sun/awt/X11/XKeyEvent.h>
#include <sun/awt/X11/XKeymapEvent.h>
#include <sun/awt/X11/XMapEvent.h>
#include <sun/awt/X11/XMapRequestEvent.h>
#include <sun/awt/X11/XMappingEvent.h>
#include <sun/awt/X11/XMotionEvent.h>
#include <sun/awt/X11/XNoExposeEvent.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XReparentEvent.h>
#include <sun/awt/X11/XResizeRequestEvent.h>
#include <sun/awt/X11/XSelectionClearEvent.h>
#include <sun/awt/X11/XSelectionEvent.h>
#include <sun/awt/X11/XSelectionRequestEvent.h>
#include <sun/awt/X11/XUnmapEvent.h>
#include <sun/awt/X11/XVisibilityEvent.h>
#include <sun/awt/X11/XWrapperBase.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Native = ::sun::awt::X11::Native;
using $XAnyEvent = ::sun::awt::X11::XAnyEvent;
using $XButtonEvent = ::sun::awt::X11::XButtonEvent;
using $XCirculateEvent = ::sun::awt::X11::XCirculateEvent;
using $XCirculateRequestEvent = ::sun::awt::X11::XCirculateRequestEvent;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XColormapEvent = ::sun::awt::X11::XColormapEvent;
using $XConfigureEvent = ::sun::awt::X11::XConfigureEvent;
using $XConfigureRequestEvent = ::sun::awt::X11::XConfigureRequestEvent;
using $XCreateWindowEvent = ::sun::awt::X11::XCreateWindowEvent;
using $XCrossingEvent = ::sun::awt::X11::XCrossingEvent;
using $XDestroyWindowEvent = ::sun::awt::X11::XDestroyWindowEvent;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XExposeEvent = ::sun::awt::X11::XExposeEvent;
using $XFocusChangeEvent = ::sun::awt::X11::XFocusChangeEvent;
using $XGraphicsExposeEvent = ::sun::awt::X11::XGraphicsExposeEvent;
using $XGravityEvent = ::sun::awt::X11::XGravityEvent;
using $XKeyEvent = ::sun::awt::X11::XKeyEvent;
using $XKeymapEvent = ::sun::awt::X11::XKeymapEvent;
using $XMapEvent = ::sun::awt::X11::XMapEvent;
using $XMapRequestEvent = ::sun::awt::X11::XMapRequestEvent;
using $XMappingEvent = ::sun::awt::X11::XMappingEvent;
using $XMotionEvent = ::sun::awt::X11::XMotionEvent;
using $XNoExposeEvent = ::sun::awt::X11::XNoExposeEvent;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XReparentEvent = ::sun::awt::X11::XReparentEvent;
using $XResizeRequestEvent = ::sun::awt::X11::XResizeRequestEvent;
using $XSelectionClearEvent = ::sun::awt::X11::XSelectionClearEvent;
using $XSelectionEvent = ::sun::awt::X11::XSelectionEvent;
using $XSelectionRequestEvent = ::sun::awt::X11::XSelectionRequestEvent;
using $XUnmapEvent = ::sun::awt::X11::XUnmapEvent;
using $XVisibilityEvent = ::sun::awt::X11::XVisibilityEvent;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XEvent, pData)},
	{}
};

$MethodInfo _XEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XEvent::*)(int64_t)>(&XEvent::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XEvent::*)()>(&XEvent::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XEvent::getSize))},
	{"get_pad", "(I)J", nullptr, $PUBLIC},
	{"get_pad", "()J", nullptr, $PUBLIC},
	{"get_type", "()I", nullptr, $PUBLIC},
	{"get_xany", "()Lsun/awt/X11/XAnyEvent;", nullptr, $PUBLIC},
	{"get_xbutton", "()Lsun/awt/X11/XButtonEvent;", nullptr, $PUBLIC},
	{"get_xcirculate", "()Lsun/awt/X11/XCirculateEvent;", nullptr, $PUBLIC},
	{"get_xcirculaterequest", "()Lsun/awt/X11/XCirculateRequestEvent;", nullptr, $PUBLIC},
	{"get_xclient", "()Lsun/awt/X11/XClientMessageEvent;", nullptr, $PUBLIC},
	{"get_xcolormap", "()Lsun/awt/X11/XColormapEvent;", nullptr, $PUBLIC},
	{"get_xconfigure", "()Lsun/awt/X11/XConfigureEvent;", nullptr, $PUBLIC},
	{"get_xconfigurerequest", "()Lsun/awt/X11/XConfigureRequestEvent;", nullptr, $PUBLIC},
	{"get_xcreatewindow", "()Lsun/awt/X11/XCreateWindowEvent;", nullptr, $PUBLIC},
	{"get_xcrossing", "()Lsun/awt/X11/XCrossingEvent;", nullptr, $PUBLIC},
	{"get_xdestroywindow", "()Lsun/awt/X11/XDestroyWindowEvent;", nullptr, $PUBLIC},
	{"get_xerror", "()Lsun/awt/X11/XErrorEvent;", nullptr, $PUBLIC},
	{"get_xexpose", "()Lsun/awt/X11/XExposeEvent;", nullptr, $PUBLIC},
	{"get_xfocus", "()Lsun/awt/X11/XFocusChangeEvent;", nullptr, $PUBLIC},
	{"get_xgraphicsexpose", "()Lsun/awt/X11/XGraphicsExposeEvent;", nullptr, $PUBLIC},
	{"get_xgravity", "()Lsun/awt/X11/XGravityEvent;", nullptr, $PUBLIC},
	{"get_xkey", "()Lsun/awt/X11/XKeyEvent;", nullptr, $PUBLIC},
	{"get_xkeymap", "()Lsun/awt/X11/XKeymapEvent;", nullptr, $PUBLIC},
	{"get_xmap", "()Lsun/awt/X11/XMapEvent;", nullptr, $PUBLIC},
	{"get_xmapping", "()Lsun/awt/X11/XMappingEvent;", nullptr, $PUBLIC},
	{"get_xmaprequest", "()Lsun/awt/X11/XMapRequestEvent;", nullptr, $PUBLIC},
	{"get_xmotion", "()Lsun/awt/X11/XMotionEvent;", nullptr, $PUBLIC},
	{"get_xnoexpose", "()Lsun/awt/X11/XNoExposeEvent;", nullptr, $PUBLIC},
	{"get_xproperty", "()Lsun/awt/X11/XPropertyEvent;", nullptr, $PUBLIC},
	{"get_xreparent", "()Lsun/awt/X11/XReparentEvent;", nullptr, $PUBLIC},
	{"get_xresizerequest", "()Lsun/awt/X11/XResizeRequestEvent;", nullptr, $PUBLIC},
	{"get_xselection", "()Lsun/awt/X11/XSelectionEvent;", nullptr, $PUBLIC},
	{"get_xselectionclear", "()Lsun/awt/X11/XSelectionClearEvent;", nullptr, $PUBLIC},
	{"get_xselectionrequest", "()Lsun/awt/X11/XSelectionRequestEvent;", nullptr, $PUBLIC},
	{"get_xunmap", "()Lsun/awt/X11/XUnmapEvent;", nullptr, $PUBLIC},
	{"get_xvisibility", "()Lsun/awt/X11/XVisibilityEvent;", nullptr, $PUBLIC},
	{"set_pad", "(IJ)V", nullptr, $PUBLIC},
	{"set_type", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XEvent_FieldInfo_,
	_XEvent_MethodInfo_
};

$Object* allocate$XEvent($Class* clazz) {
	return $of($alloc(XEvent));
}

int32_t XEvent::getSize() {
	$init(XEvent);
	return 192;
}

int32_t XEvent::getDataSize() {
	return getSize();
}

int64_t XEvent::getPData() {
	return this->pData;
}

void XEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

$XAnyEvent* XEvent::get_xany() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XAnyEvent, this->pData + 0);
}

$XKeyEvent* XEvent::get_xkey() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XKeyEvent, this->pData + 0);
}

$XButtonEvent* XEvent::get_xbutton() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XButtonEvent, this->pData + 0);
}

$XMotionEvent* XEvent::get_xmotion() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XMotionEvent, this->pData + 0);
}

$XCrossingEvent* XEvent::get_xcrossing() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XCrossingEvent, this->pData + 0);
}

$XFocusChangeEvent* XEvent::get_xfocus() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XFocusChangeEvent, this->pData + 0);
}

$XExposeEvent* XEvent::get_xexpose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XExposeEvent, this->pData + 0);
}

$XGraphicsExposeEvent* XEvent::get_xgraphicsexpose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XGraphicsExposeEvent, this->pData + 0);
}

$XNoExposeEvent* XEvent::get_xnoexpose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XNoExposeEvent, this->pData + 0);
}

$XVisibilityEvent* XEvent::get_xvisibility() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XVisibilityEvent, this->pData + 0);
}

$XCreateWindowEvent* XEvent::get_xcreatewindow() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XCreateWindowEvent, this->pData + 0);
}

$XDestroyWindowEvent* XEvent::get_xdestroywindow() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XDestroyWindowEvent, this->pData + 0);
}

$XUnmapEvent* XEvent::get_xunmap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XUnmapEvent, this->pData + 0);
}

$XMapEvent* XEvent::get_xmap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XMapEvent, this->pData + 0);
}

$XMapRequestEvent* XEvent::get_xmaprequest() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XMapRequestEvent, this->pData + 0);
}

$XReparentEvent* XEvent::get_xreparent() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XReparentEvent, this->pData + 0);
}

$XConfigureEvent* XEvent::get_xconfigure() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XConfigureEvent, this->pData + 0);
}

$XGravityEvent* XEvent::get_xgravity() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XGravityEvent, this->pData + 0);
}

$XResizeRequestEvent* XEvent::get_xresizerequest() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XResizeRequestEvent, this->pData + 0);
}

$XConfigureRequestEvent* XEvent::get_xconfigurerequest() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XConfigureRequestEvent, this->pData + 0);
}

$XCirculateEvent* XEvent::get_xcirculate() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XCirculateEvent, this->pData + 0);
}

$XCirculateRequestEvent* XEvent::get_xcirculaterequest() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XCirculateRequestEvent, this->pData + 0);
}

$XPropertyEvent* XEvent::get_xproperty() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XPropertyEvent, this->pData + 0);
}

$XSelectionClearEvent* XEvent::get_xselectionclear() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XSelectionClearEvent, this->pData + 0);
}

$XSelectionRequestEvent* XEvent::get_xselectionrequest() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XSelectionRequestEvent, this->pData + 0);
}

$XSelectionEvent* XEvent::get_xselection() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XSelectionEvent, this->pData + 0);
}

$XColormapEvent* XEvent::get_xcolormap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XColormapEvent, this->pData + 0);
}

$XClientMessageEvent* XEvent::get_xclient() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XClientMessageEvent, this->pData + 0);
}

$XMappingEvent* XEvent::get_xmapping() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XMappingEvent, this->pData + 0);
}

$XErrorEvent* XEvent::get_xerror() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XErrorEvent, this->pData + 0);
}

$XKeymapEvent* XEvent::get_xkeymap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XKeymapEvent, this->pData + 0);
}

int64_t XEvent::get_pad(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 0 + index * $Native::getLongSize());
}

void XEvent::set_pad(int32_t index, int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0 + index * $Native::getLongSize(), v);
}

int64_t XEvent::get_pad() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return this->pData + 0;
}

$String* XEvent::getName() {
	return "XEvent"_s;
}

$String* XEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 1320));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("xany = "_s)->append($($of(get_xany())))->append(", "_s);
	ret->append("xkey = "_s)->append($($of(get_xkey())))->append(", "_s);
	ret->append("xbutton = "_s)->append($($of(get_xbutton())))->append(", "_s);
	ret->append("xmotion = "_s)->append($($of(get_xmotion())))->append(", "_s);
	ret->append("xcrossing = "_s)->append($($of(get_xcrossing())))->append(", "_s);
	ret->append("xfocus = "_s)->append($($of(get_xfocus())))->append(", "_s);
	ret->append("xexpose = "_s)->append($($of(get_xexpose())))->append(", "_s);
	ret->append("xgraphicsexpose = "_s)->append($($of(get_xgraphicsexpose())))->append(", "_s);
	ret->append("xnoexpose = "_s)->append($($of(get_xnoexpose())))->append(", "_s);
	ret->append("xvisibility = "_s)->append($($of(get_xvisibility())))->append(", "_s);
	ret->append("xcreatewindow = "_s)->append($($of(get_xcreatewindow())))->append(", "_s);
	ret->append("xdestroywindow = "_s)->append($($of(get_xdestroywindow())))->append(", "_s);
	ret->append("xunmap = "_s)->append($($of(get_xunmap())))->append(", "_s);
	ret->append("xmap = "_s)->append($($of(get_xmap())))->append(", "_s);
	ret->append("xmaprequest = "_s)->append($($of(get_xmaprequest())))->append(", "_s);
	ret->append("xreparent = "_s)->append($($of(get_xreparent())))->append(", "_s);
	ret->append("xconfigure = "_s)->append($($of(get_xconfigure())))->append(", "_s);
	ret->append("xgravity = "_s)->append($($of(get_xgravity())))->append(", "_s);
	ret->append("xresizerequest = "_s)->append($($of(get_xresizerequest())))->append(", "_s);
	ret->append("xconfigurerequest = "_s)->append($($of(get_xconfigurerequest())))->append(", "_s);
	ret->append("xcirculate = "_s)->append($($of(get_xcirculate())))->append(", "_s);
	ret->append("xcirculaterequest = "_s)->append($($of(get_xcirculaterequest())))->append(", "_s);
	ret->append("xproperty = "_s)->append($($of(get_xproperty())))->append(", "_s);
	ret->append("xselectionclear = "_s)->append($($of(get_xselectionclear())))->append(", "_s);
	ret->append("xselectionrequest = "_s)->append($($of(get_xselectionrequest())))->append(", "_s);
	ret->append("xselection = "_s)->append($($of(get_xselection())))->append(", "_s);
	ret->append("xcolormap = "_s)->append($($of(get_xcolormap())))->append(", "_s);
	ret->append("xclient = "_s)->append($($of(get_xclient())))->append(", "_s);
	ret->append("xmapping = "_s)->append($($of(get_xmapping())))->append(", "_s);
	ret->append("xerror = "_s)->append($($of(get_xerror())))->append(", "_s);
	ret->append("xkeymap = "_s)->append($($of(get_xkeymap())))->append(", "_s);
	ret->append("{"_s)->append(get_pad(0))->append(" "_s)->append(get_pad(1))->append(" "_s)->append(get_pad(2))->append(" "_s)->append(get_pad(3))->append(" "_s)->append(get_pad(4))->append(" "_s)->append(get_pad(5))->append(" "_s)->append(get_pad(6))->append(" "_s)->append(get_pad(7))->append(" "_s)->append(get_pad(8))->append(" "_s)->append(get_pad(9))->append(" "_s)->append(get_pad(10))->append(" "_s)->append(get_pad(11))->append(" "_s)->append(get_pad(12))->append(" "_s)->append(get_pad(13))->append(" "_s)->append(get_pad(14))->append(" "_s)->append(get_pad(15))->append(" "_s)->append(get_pad(16))->append(" "_s)->append(get_pad(17))->append(" "_s)->append(get_pad(18))->append(" "_s)->append(get_pad(19))->append(" "_s)->append(get_pad(20))->append(" "_s)->append(get_pad(21))->append(" "_s)->append(get_pad(22))->append(" "_s)->append(get_pad(23))->append(" "_s)->append("}"_s);
	return ret->toString();
}

XEvent* XEvent::clone() {
	return $cast(XEvent, $XWrapperBase::clone());
}

void XEvent::zero() {
	$XWrapperBase::zero();
}

$String* XEvent::toString() {
	return $XWrapperBase::toString();
}

XEvent::XEvent() {
}

$Class* XEvent::load$($String* name, bool initialize) {
	$loadClass(XEvent, name, initialize, &_XEvent_ClassInfo_, allocate$XEvent);
	return class$;
}

$Class* XEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun