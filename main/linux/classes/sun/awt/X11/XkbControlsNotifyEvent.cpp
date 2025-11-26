#include <sun/awt/X11/XkbControlsNotifyEvent.h>

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

$FieldInfo _XkbControlsNotifyEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XkbControlsNotifyEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XkbControlsNotifyEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XkbControlsNotifyEvent, pData)},
	{}
};

$MethodInfo _XkbControlsNotifyEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XkbControlsNotifyEvent::*)(int64_t)>(&XkbControlsNotifyEvent::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XkbControlsNotifyEvent::*)()>(&XkbControlsNotifyEvent::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XkbControlsNotifyEvent::getSize))},
	{"get_changed_ctrls", "()I", nullptr, $PUBLIC},
	{"get_device", "()I", nullptr, $PUBLIC},
	{"get_display", "()J", nullptr, $PUBLIC},
	{"get_enabled_ctrl_changes", "()I", nullptr, $PUBLIC},
	{"get_enabled_ctrls", "()I", nullptr, $PUBLIC},
	{"get_event_type", "()B", nullptr, $PUBLIC},
	{"get_keycode", "()I", nullptr, $PUBLIC},
	{"get_num_groups", "()I", nullptr, $PUBLIC},
	{"get_req_major", "()B", nullptr, $PUBLIC},
	{"get_req_minor", "()B", nullptr, $PUBLIC},
	{"get_send_event", "()Z", nullptr, $PUBLIC},
	{"get_serial", "()J", nullptr, $PUBLIC},
	{"get_time", "()J", nullptr, $PUBLIC},
	{"get_type", "()I", nullptr, $PUBLIC},
	{"get_xkb_type", "()I", nullptr, $PUBLIC},
	{"set_changed_ctrls", "(I)V", nullptr, $PUBLIC},
	{"set_device", "(I)V", nullptr, $PUBLIC},
	{"set_display", "(J)V", nullptr, $PUBLIC},
	{"set_enabled_ctrl_changes", "(I)V", nullptr, $PUBLIC},
	{"set_enabled_ctrls", "(I)V", nullptr, $PUBLIC},
	{"set_event_type", "(B)V", nullptr, $PUBLIC},
	{"set_keycode", "(I)V", nullptr, $PUBLIC},
	{"set_num_groups", "(I)V", nullptr, $PUBLIC},
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

$ClassInfo _XkbControlsNotifyEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XkbControlsNotifyEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XkbControlsNotifyEvent_FieldInfo_,
	_XkbControlsNotifyEvent_MethodInfo_
};

$Object* allocate$XkbControlsNotifyEvent($Class* clazz) {
	return $of($alloc(XkbControlsNotifyEvent));
}

int32_t XkbControlsNotifyEvent::getSize() {
	$init(XkbControlsNotifyEvent);
	return 72;
}

int32_t XkbControlsNotifyEvent::getDataSize() {
	return getSize();
}

int64_t XkbControlsNotifyEvent::getPData() {
	return this->pData;
}

void XkbControlsNotifyEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XkbControlsNotifyEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XkbControlsNotifyEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XkbControlsNotifyEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XkbControlsNotifyEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XkbControlsNotifyEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 8));
}

void XkbControlsNotifyEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 8, v);
}

bool XkbControlsNotifyEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XkbControlsNotifyEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XkbControlsNotifyEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XkbControlsNotifyEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XkbControlsNotifyEvent::get_time() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 32));
}

void XkbControlsNotifyEvent::set_time(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 32, v);
}

int32_t XkbControlsNotifyEvent::get_xkb_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XkbControlsNotifyEvent::set_xkb_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XkbControlsNotifyEvent::get_device() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XkbControlsNotifyEvent::set_device(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

int32_t XkbControlsNotifyEvent::get_changed_ctrls() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XkbControlsNotifyEvent::set_changed_ctrls(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int32_t XkbControlsNotifyEvent::get_enabled_ctrls() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 52));
}

void XkbControlsNotifyEvent::set_enabled_ctrls(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 52, v);
}

int32_t XkbControlsNotifyEvent::get_enabled_ctrl_changes() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 56));
}

void XkbControlsNotifyEvent::set_enabled_ctrl_changes(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 56, v);
}

int32_t XkbControlsNotifyEvent::get_num_groups() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 60));
}

void XkbControlsNotifyEvent::set_num_groups(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 60, v);
}

int32_t XkbControlsNotifyEvent::get_keycode() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 64));
}

void XkbControlsNotifyEvent::set_keycode(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 64, v);
}

int8_t XkbControlsNotifyEvent::get_event_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 65));
}

void XkbControlsNotifyEvent::set_event_type(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 65, v);
}

int8_t XkbControlsNotifyEvent::get_req_major() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 66));
}

void XkbControlsNotifyEvent::set_req_major(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 66, v);
}

int8_t XkbControlsNotifyEvent::get_req_minor() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 67));
}

void XkbControlsNotifyEvent::set_req_minor(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 67, v);
}

$String* XkbControlsNotifyEvent::getName() {
	return "XkbControlsNotifyEvent"_s;
}

$String* XkbControlsNotifyEvent::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 600));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("time = "_s)->append(get_time())->append(", "_s);
	ret->append("xkb_type = "_s)->append(get_xkb_type())->append(", "_s);
	ret->append("device = "_s)->append(get_device())->append(", "_s);
	ret->append("changed_ctrls = "_s)->append(get_changed_ctrls())->append(", "_s);
	ret->append("enabled_ctrls = "_s)->append(get_enabled_ctrls())->append(", "_s);
	ret->append("enabled_ctrl_changes = "_s)->append(get_enabled_ctrl_changes())->append(", "_s);
	ret->append("num_groups = "_s)->append(get_num_groups())->append(", "_s);
	ret->append("keycode = "_s)->append(get_keycode())->append(", "_s);
	ret->append("event_type = "_s)->append((int32_t)get_event_type())->append(", "_s);
	ret->append("req_major = "_s)->append((int32_t)get_req_major())->append(", "_s);
	ret->append("req_minor = "_s)->append((int32_t)get_req_minor())->append(", "_s);
	return ret->toString();
}

$Object* XkbControlsNotifyEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XkbControlsNotifyEvent::zero() {
	$XWrapperBase::zero();
}

$String* XkbControlsNotifyEvent::toString() {
	return $XWrapperBase::toString();
}

XkbControlsNotifyEvent::XkbControlsNotifyEvent() {
}

$Class* XkbControlsNotifyEvent::load$($String* name, bool initialize) {
	$loadClass(XkbControlsNotifyEvent, name, initialize, &_XkbControlsNotifyEvent_ClassInfo_, allocate$XkbControlsNotifyEvent);
	return class$;
}

$Class* XkbControlsNotifyEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun