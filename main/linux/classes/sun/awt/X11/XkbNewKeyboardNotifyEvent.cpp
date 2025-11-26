#include <sun/awt/X11/XkbNewKeyboardNotifyEvent.h>

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

$FieldInfo _XkbNewKeyboardNotifyEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XkbNewKeyboardNotifyEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XkbNewKeyboardNotifyEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XkbNewKeyboardNotifyEvent, pData)},
	{}
};

$MethodInfo _XkbNewKeyboardNotifyEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XkbNewKeyboardNotifyEvent::*)(int64_t)>(&XkbNewKeyboardNotifyEvent::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XkbNewKeyboardNotifyEvent::*)()>(&XkbNewKeyboardNotifyEvent::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XkbNewKeyboardNotifyEvent::getSize))},
	{"get_changed", "()I", nullptr, $PUBLIC},
	{"get_device", "()I", nullptr, $PUBLIC},
	{"get_display", "()J", nullptr, $PUBLIC},
	{"get_max_key_code", "()I", nullptr, $PUBLIC},
	{"get_min_key_code", "()I", nullptr, $PUBLIC},
	{"get_old_device", "()I", nullptr, $PUBLIC},
	{"get_old_max_key_code", "()I", nullptr, $PUBLIC},
	{"get_old_min_key_code", "()I", nullptr, $PUBLIC},
	{"get_req_major", "()B", nullptr, $PUBLIC},
	{"get_req_minor", "()B", nullptr, $PUBLIC},
	{"get_send_event", "()Z", nullptr, $PUBLIC},
	{"get_serial", "()J", nullptr, $PUBLIC},
	{"get_time", "()J", nullptr, $PUBLIC},
	{"get_type", "()I", nullptr, $PUBLIC},
	{"get_xkb_type", "()I", nullptr, $PUBLIC},
	{"set_changed", "(I)V", nullptr, $PUBLIC},
	{"set_device", "(I)V", nullptr, $PUBLIC},
	{"set_display", "(J)V", nullptr, $PUBLIC},
	{"set_max_key_code", "(I)V", nullptr, $PUBLIC},
	{"set_min_key_code", "(I)V", nullptr, $PUBLIC},
	{"set_old_device", "(I)V", nullptr, $PUBLIC},
	{"set_old_max_key_code", "(I)V", nullptr, $PUBLIC},
	{"set_old_min_key_code", "(I)V", nullptr, $PUBLIC},
	{"set_req_major", "(B)V", nullptr, $PUBLIC},
	{"set_req_minor", "(B)V", nullptr, $PUBLIC},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC},
	{"set_serial", "(J)V", nullptr, $PUBLIC},
	{"set_time", "(J)V", nullptr, $PUBLIC},
	{"set_type", "(I)V", nullptr, $PUBLIC},
	{"set_xkb_type", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XkbNewKeyboardNotifyEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XkbNewKeyboardNotifyEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XkbNewKeyboardNotifyEvent_FieldInfo_,
	_XkbNewKeyboardNotifyEvent_MethodInfo_
};

$Object* allocate$XkbNewKeyboardNotifyEvent($Class* clazz) {
	return $of($alloc(XkbNewKeyboardNotifyEvent));
}

int32_t XkbNewKeyboardNotifyEvent::getSize() {
	$init(XkbNewKeyboardNotifyEvent);
	return 80;
}

int32_t XkbNewKeyboardNotifyEvent::getDataSize() {
	return getSize();
}

int64_t XkbNewKeyboardNotifyEvent::getPData() {
	return this->pData;
}

void XkbNewKeyboardNotifyEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XkbNewKeyboardNotifyEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XkbNewKeyboardNotifyEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XkbNewKeyboardNotifyEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XkbNewKeyboardNotifyEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XkbNewKeyboardNotifyEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 8));
}

void XkbNewKeyboardNotifyEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 8, v);
}

bool XkbNewKeyboardNotifyEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XkbNewKeyboardNotifyEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XkbNewKeyboardNotifyEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XkbNewKeyboardNotifyEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XkbNewKeyboardNotifyEvent::get_time() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 32));
}

void XkbNewKeyboardNotifyEvent::set_time(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 32, v);
}

int32_t XkbNewKeyboardNotifyEvent::get_xkb_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XkbNewKeyboardNotifyEvent::set_xkb_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XkbNewKeyboardNotifyEvent::get_device() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XkbNewKeyboardNotifyEvent::set_device(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

int32_t XkbNewKeyboardNotifyEvent::get_old_device() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XkbNewKeyboardNotifyEvent::set_old_device(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int32_t XkbNewKeyboardNotifyEvent::get_min_key_code() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 52));
}

void XkbNewKeyboardNotifyEvent::set_min_key_code(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 52, v);
}

int32_t XkbNewKeyboardNotifyEvent::get_max_key_code() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 56));
}

void XkbNewKeyboardNotifyEvent::set_max_key_code(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 56, v);
}

int32_t XkbNewKeyboardNotifyEvent::get_old_min_key_code() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 60));
}

void XkbNewKeyboardNotifyEvent::set_old_min_key_code(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 60, v);
}

int32_t XkbNewKeyboardNotifyEvent::get_old_max_key_code() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 64));
}

void XkbNewKeyboardNotifyEvent::set_old_max_key_code(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 64, v);
}

int32_t XkbNewKeyboardNotifyEvent::get_changed() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 68));
}

void XkbNewKeyboardNotifyEvent::set_changed(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 68, v);
}

int8_t XkbNewKeyboardNotifyEvent::get_req_major() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 72));
}

void XkbNewKeyboardNotifyEvent::set_req_major(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 72, v);
}

int8_t XkbNewKeyboardNotifyEvent::get_req_minor() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 73));
}

void XkbNewKeyboardNotifyEvent::set_req_minor(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 73, v);
}

$String* XkbNewKeyboardNotifyEvent::getName() {
	return "XkbNewKeyboardNotifyEvent"_s;
}

$String* XkbNewKeyboardNotifyEvent::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 600));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("time = "_s)->append(get_time())->append(", "_s);
	ret->append("xkb_type = "_s)->append(get_xkb_type())->append(", "_s);
	ret->append("device = "_s)->append(get_device())->append(", "_s);
	ret->append("old_device = "_s)->append(get_old_device())->append(", "_s);
	ret->append("min_key_code = "_s)->append(get_min_key_code())->append(", "_s);
	ret->append("max_key_code = "_s)->append(get_max_key_code())->append(", "_s);
	ret->append("old_min_key_code = "_s)->append(get_old_min_key_code())->append(", "_s);
	ret->append("old_max_key_code = "_s)->append(get_old_max_key_code())->append(", "_s);
	ret->append("changed = "_s)->append(get_changed())->append(", "_s);
	ret->append("req_major = "_s)->append((int32_t)get_req_major())->append(", "_s);
	ret->append("req_minor = "_s)->append((int32_t)get_req_minor())->append(", "_s);
	return ret->toString();
}

$Object* XkbNewKeyboardNotifyEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XkbNewKeyboardNotifyEvent::zero() {
	$XWrapperBase::zero();
}

$String* XkbNewKeyboardNotifyEvent::toString() {
	return $XWrapperBase::toString();
}

XkbNewKeyboardNotifyEvent::XkbNewKeyboardNotifyEvent() {
}

$Class* XkbNewKeyboardNotifyEvent::load$($String* name, bool initialize) {
	$loadClass(XkbNewKeyboardNotifyEvent, name, initialize, &_XkbNewKeyboardNotifyEvent_ClassInfo_, allocate$XkbNewKeyboardNotifyEvent);
	return class$;
}

$Class* XkbNewKeyboardNotifyEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun