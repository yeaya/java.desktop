#include <sun/awt/X11/XkbEvent.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XWrapperBase.h>
#include <sun/awt/X11/XkbAccessXNotifyEvent.h>
#include <sun/awt/X11/XkbActionMessageEvent.h>
#include <sun/awt/X11/XkbAnyEvent.h>
#include <sun/awt/X11/XkbBellNotifyEvent.h>
#include <sun/awt/X11/XkbCompatMapNotifyEvent.h>
#include <sun/awt/X11/XkbControlsNotifyEvent.h>
#include <sun/awt/X11/XkbExtensionDeviceNotifyEvent.h>
#include <sun/awt/X11/XkbIndicatorNotifyEvent.h>
#include <sun/awt/X11/XkbMapNotifyEvent.h>
#include <sun/awt/X11/XkbNamesNotifyEvent.h>
#include <sun/awt/X11/XkbNewKeyboardNotifyEvent.h>
#include <sun/awt/X11/XkbStateNotifyEvent.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Native = ::sun::awt::X11::Native;
using $XEvent = ::sun::awt::X11::XEvent;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XkbAccessXNotifyEvent = ::sun::awt::X11::XkbAccessXNotifyEvent;
using $XkbActionMessageEvent = ::sun::awt::X11::XkbActionMessageEvent;
using $XkbAnyEvent = ::sun::awt::X11::XkbAnyEvent;
using $XkbBellNotifyEvent = ::sun::awt::X11::XkbBellNotifyEvent;
using $XkbCompatMapNotifyEvent = ::sun::awt::X11::XkbCompatMapNotifyEvent;
using $XkbControlsNotifyEvent = ::sun::awt::X11::XkbControlsNotifyEvent;
using $XkbExtensionDeviceNotifyEvent = ::sun::awt::X11::XkbExtensionDeviceNotifyEvent;
using $XkbIndicatorNotifyEvent = ::sun::awt::X11::XkbIndicatorNotifyEvent;
using $XkbMapNotifyEvent = ::sun::awt::X11::XkbMapNotifyEvent;
using $XkbNamesNotifyEvent = ::sun::awt::X11::XkbNamesNotifyEvent;
using $XkbNewKeyboardNotifyEvent = ::sun::awt::X11::XkbNewKeyboardNotifyEvent;
using $XkbStateNotifyEvent = ::sun::awt::X11::XkbStateNotifyEvent;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XkbEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XkbEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XkbEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XkbEvent, pData)},
	{}
};

$MethodInfo _XkbEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XkbEvent::*)(int64_t)>(&XkbEvent::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XkbEvent::*)()>(&XkbEvent::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XkbEvent::getSize))},
	{"get_accessx", "()Lsun/awt/X11/XkbAccessXNotifyEvent;", nullptr, $PUBLIC},
	{"get_any", "()Lsun/awt/X11/XkbAnyEvent;", nullptr, $PUBLIC},
	{"get_bell", "()Lsun/awt/X11/XkbBellNotifyEvent;", nullptr, $PUBLIC},
	{"get_compat", "()Lsun/awt/X11/XkbCompatMapNotifyEvent;", nullptr, $PUBLIC},
	{"get_core", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC},
	{"get_ctrls", "()Lsun/awt/X11/XkbControlsNotifyEvent;", nullptr, $PUBLIC},
	{"get_device", "()Lsun/awt/X11/XkbExtensionDeviceNotifyEvent;", nullptr, $PUBLIC},
	{"get_indicators", "()Lsun/awt/X11/XkbIndicatorNotifyEvent;", nullptr, $PUBLIC},
	{"get_map", "()Lsun/awt/X11/XkbMapNotifyEvent;", nullptr, $PUBLIC},
	{"get_message", "()Lsun/awt/X11/XkbActionMessageEvent;", nullptr, $PUBLIC},
	{"get_names", "()Lsun/awt/X11/XkbNamesNotifyEvent;", nullptr, $PUBLIC},
	{"get_new_kbd", "()Lsun/awt/X11/XkbNewKeyboardNotifyEvent;", nullptr, $PUBLIC},
	{"get_state", "()Lsun/awt/X11/XkbStateNotifyEvent;", nullptr, $PUBLIC},
	{"get_type", "()I", nullptr, $PUBLIC},
	{"set_type", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XkbEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XkbEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XkbEvent_FieldInfo_,
	_XkbEvent_MethodInfo_
};

$Object* allocate$XkbEvent($Class* clazz) {
	return $of($alloc(XkbEvent));
}

int32_t XkbEvent::getSize() {
	$init(XkbEvent);
	return 192;
}

int32_t XkbEvent::getDataSize() {
	return getSize();
}

int64_t XkbEvent::getPData() {
	return this->pData;
}

void XkbEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XkbEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XkbEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XkbEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XkbEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

$XkbAnyEvent* XkbEvent::get_any() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XkbAnyEvent, this->pData + 0);
}

$XkbNewKeyboardNotifyEvent* XkbEvent::get_new_kbd() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XkbNewKeyboardNotifyEvent, this->pData + 0);
}

$XkbMapNotifyEvent* XkbEvent::get_map() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XkbMapNotifyEvent, this->pData + 0);
}

$XkbStateNotifyEvent* XkbEvent::get_state() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XkbStateNotifyEvent, this->pData + 0);
}

$XkbControlsNotifyEvent* XkbEvent::get_ctrls() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XkbControlsNotifyEvent, this->pData + 0);
}

$XkbIndicatorNotifyEvent* XkbEvent::get_indicators() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XkbIndicatorNotifyEvent, this->pData + 0);
}

$XkbNamesNotifyEvent* XkbEvent::get_names() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XkbNamesNotifyEvent, this->pData + 0);
}

$XkbCompatMapNotifyEvent* XkbEvent::get_compat() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XkbCompatMapNotifyEvent, this->pData + 0);
}

$XkbBellNotifyEvent* XkbEvent::get_bell() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XkbBellNotifyEvent, this->pData + 0);
}

$XkbActionMessageEvent* XkbEvent::get_message() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XkbActionMessageEvent, this->pData + 0);
}

$XkbAccessXNotifyEvent* XkbEvent::get_accessx() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XkbAccessXNotifyEvent, this->pData + 0);
}

$XkbExtensionDeviceNotifyEvent* XkbEvent::get_device() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XkbExtensionDeviceNotifyEvent, this->pData + 0);
}

$XEvent* XkbEvent::get_core() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XEvent, this->pData + 0);
}

$String* XkbEvent::getName() {
	return "XkbEvent"_s;
}

$String* XkbEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 560));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("any = "_s)->append($($of(get_any())))->append(", "_s);
	ret->append("new_kbd = "_s)->append($($of(get_new_kbd())))->append(", "_s);
	ret->append("map = "_s)->append($($of(get_map())))->append(", "_s);
	ret->append("state = "_s)->append($($of(get_state())))->append(", "_s);
	ret->append("ctrls = "_s)->append($($of(get_ctrls())))->append(", "_s);
	ret->append("indicators = "_s)->append($($of(get_indicators())))->append(", "_s);
	ret->append("names = "_s)->append($($of(get_names())))->append(", "_s);
	ret->append("compat = "_s)->append($($of(get_compat())))->append(", "_s);
	ret->append("bell = "_s)->append($($of(get_bell())))->append(", "_s);
	ret->append("message = "_s)->append($($of(get_message())))->append(", "_s);
	ret->append("accessx = "_s)->append($($of(get_accessx())))->append(", "_s);
	ret->append("device = "_s)->append($($of(get_device())))->append(", "_s);
	ret->append("core = "_s)->append($($of(get_core())))->append(", "_s);
	return ret->toString();
}

$Object* XkbEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XkbEvent::zero() {
	$XWrapperBase::zero();
}

$String* XkbEvent::toString() {
	return $XWrapperBase::toString();
}

XkbEvent::XkbEvent() {
}

$Class* XkbEvent::load$($String* name, bool initialize) {
	$loadClass(XkbEvent, name, initialize, &_XkbEvent_ClassInfo_, allocate$XkbEvent);
	return class$;
}

$Class* XkbEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun