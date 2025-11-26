#include <sun/awt/X11/XkbAccessXNotifyEvent.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XWrapperBase.h>
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
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XkbAccessXNotifyEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XkbAccessXNotifyEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XkbAccessXNotifyEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XkbAccessXNotifyEvent, pData)},
	{}
};

$MethodInfo _XkbAccessXNotifyEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XkbAccessXNotifyEvent::*)(int64_t)>(&XkbAccessXNotifyEvent::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XkbAccessXNotifyEvent::*)()>(&XkbAccessXNotifyEvent::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XkbAccessXNotifyEvent::getSize))},
	{"get_debounce_delay", "()I", nullptr, $PUBLIC},
	{"get_detail", "()I", nullptr, $PUBLIC},
	{"get_device", "()I", nullptr, $PUBLIC},
	{"get_display", "()J", nullptr, $PUBLIC},
	{"get_keycode", "()I", nullptr, $PUBLIC},
	{"get_send_event", "()Z", nullptr, $PUBLIC},
	{"get_serial", "()J", nullptr, $PUBLIC},
	{"get_sk_delay", "()I", nullptr, $PUBLIC},
	{"get_time", "()J", nullptr, $PUBLIC},
	{"get_type", "()I", nullptr, $PUBLIC},
	{"get_xkb_type", "()I", nullptr, $PUBLIC},
	{"set_debounce_delay", "(I)V", nullptr, $PUBLIC},
	{"set_detail", "(I)V", nullptr, $PUBLIC},
	{"set_device", "(I)V", nullptr, $PUBLIC},
	{"set_display", "(J)V", nullptr, $PUBLIC},
	{"set_keycode", "(I)V", nullptr, $PUBLIC},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC},
	{"set_serial", "(J)V", nullptr, $PUBLIC},
	{"set_sk_delay", "(I)V", nullptr, $PUBLIC},
	{"set_time", "(J)V", nullptr, $PUBLIC},
	{"set_type", "(I)V", nullptr, $PUBLIC},
	{"set_xkb_type", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XkbAccessXNotifyEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XkbAccessXNotifyEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XkbAccessXNotifyEvent_FieldInfo_,
	_XkbAccessXNotifyEvent_MethodInfo_
};

$Object* allocate$XkbAccessXNotifyEvent($Class* clazz) {
	return $of($alloc(XkbAccessXNotifyEvent));
}

int32_t XkbAccessXNotifyEvent::getSize() {
	$init(XkbAccessXNotifyEvent);
	return 64;
}

int32_t XkbAccessXNotifyEvent::getDataSize() {
	return getSize();
}

int64_t XkbAccessXNotifyEvent::getPData() {
	return this->pData;
}

void XkbAccessXNotifyEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XkbAccessXNotifyEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XkbAccessXNotifyEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XkbAccessXNotifyEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XkbAccessXNotifyEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XkbAccessXNotifyEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 8));
}

void XkbAccessXNotifyEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 8, v);
}

bool XkbAccessXNotifyEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XkbAccessXNotifyEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XkbAccessXNotifyEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XkbAccessXNotifyEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XkbAccessXNotifyEvent::get_time() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 32));
}

void XkbAccessXNotifyEvent::set_time(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 32, v);
}

int32_t XkbAccessXNotifyEvent::get_xkb_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XkbAccessXNotifyEvent::set_xkb_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XkbAccessXNotifyEvent::get_device() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XkbAccessXNotifyEvent::set_device(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

int32_t XkbAccessXNotifyEvent::get_detail() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XkbAccessXNotifyEvent::set_detail(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int32_t XkbAccessXNotifyEvent::get_keycode() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 52));
}

void XkbAccessXNotifyEvent::set_keycode(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 52, v);
}

int32_t XkbAccessXNotifyEvent::get_sk_delay() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 56));
}

void XkbAccessXNotifyEvent::set_sk_delay(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 56, v);
}

int32_t XkbAccessXNotifyEvent::get_debounce_delay() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 60));
}

void XkbAccessXNotifyEvent::set_debounce_delay(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 60, v);
}

$String* XkbAccessXNotifyEvent::getName() {
	return "XkbAccessXNotifyEvent"_s;
}

$String* XkbAccessXNotifyEvent::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 440));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("time = "_s)->append(get_time())->append(", "_s);
	ret->append("xkb_type = "_s)->append(get_xkb_type())->append(", "_s);
	ret->append("device = "_s)->append(get_device())->append(", "_s);
	ret->append("detail = "_s)->append(get_detail())->append(", "_s);
	ret->append("keycode = "_s)->append(get_keycode())->append(", "_s);
	ret->append("sk_delay = "_s)->append(get_sk_delay())->append(", "_s);
	ret->append("debounce_delay = "_s)->append(get_debounce_delay())->append(", "_s);
	return ret->toString();
}

$Object* XkbAccessXNotifyEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XkbAccessXNotifyEvent::zero() {
	$XWrapperBase::zero();
}

$String* XkbAccessXNotifyEvent::toString() {
	return $XWrapperBase::toString();
}

XkbAccessXNotifyEvent::XkbAccessXNotifyEvent() {
}

$Class* XkbAccessXNotifyEvent::load$($String* name, bool initialize) {
	$loadClass(XkbAccessXNotifyEvent, name, initialize, &_XkbAccessXNotifyEvent_ClassInfo_, allocate$XkbAccessXNotifyEvent);
	return class$;
}

$Class* XkbAccessXNotifyEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun