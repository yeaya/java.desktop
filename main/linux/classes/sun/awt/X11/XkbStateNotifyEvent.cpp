#include <sun/awt/X11/XkbStateNotifyEvent.h>

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

$FieldInfo _XkbStateNotifyEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XkbStateNotifyEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XkbStateNotifyEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XkbStateNotifyEvent, pData)},
	{}
};

$MethodInfo _XkbStateNotifyEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XkbStateNotifyEvent::*)(int64_t)>(&XkbStateNotifyEvent::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XkbStateNotifyEvent::*)()>(&XkbStateNotifyEvent::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XkbStateNotifyEvent::getSize))},
	{"get_base_group", "()I", nullptr, $PUBLIC},
	{"get_base_mods", "()I", nullptr, $PUBLIC},
	{"get_changed", "()I", nullptr, $PUBLIC},
	{"get_compat_grab_mods", "()B", nullptr, $PUBLIC},
	{"get_compat_lookup_mods", "()B", nullptr, $PUBLIC},
	{"get_compat_state", "()I", nullptr, $PUBLIC},
	{"get_device", "()I", nullptr, $PUBLIC},
	{"get_display", "()J", nullptr, $PUBLIC},
	{"get_event_type", "()B", nullptr, $PUBLIC},
	{"get_grab_mods", "()B", nullptr, $PUBLIC},
	{"get_group", "()I", nullptr, $PUBLIC},
	{"get_keycode", "()I", nullptr, $PUBLIC},
	{"get_latched_group", "()I", nullptr, $PUBLIC},
	{"get_latched_mods", "()I", nullptr, $PUBLIC},
	{"get_locked_group", "()I", nullptr, $PUBLIC},
	{"get_locked_mods", "()I", nullptr, $PUBLIC},
	{"get_lookup_mods", "()B", nullptr, $PUBLIC},
	{"get_mods", "()I", nullptr, $PUBLIC},
	{"get_ptr_buttons", "()I", nullptr, $PUBLIC},
	{"get_req_major", "()B", nullptr, $PUBLIC},
	{"get_req_minor", "()B", nullptr, $PUBLIC},
	{"get_send_event", "()Z", nullptr, $PUBLIC},
	{"get_serial", "()J", nullptr, $PUBLIC},
	{"get_time", "()J", nullptr, $PUBLIC},
	{"get_type", "()I", nullptr, $PUBLIC},
	{"get_xkb_type", "()I", nullptr, $PUBLIC},
	{"set_base_group", "(I)V", nullptr, $PUBLIC},
	{"set_base_mods", "(I)V", nullptr, $PUBLIC},
	{"set_changed", "(I)V", nullptr, $PUBLIC},
	{"set_compat_grab_mods", "(B)V", nullptr, $PUBLIC},
	{"set_compat_lookup_mods", "(B)V", nullptr, $PUBLIC},
	{"set_compat_state", "(I)V", nullptr, $PUBLIC},
	{"set_device", "(I)V", nullptr, $PUBLIC},
	{"set_display", "(J)V", nullptr, $PUBLIC},
	{"set_event_type", "(B)V", nullptr, $PUBLIC},
	{"set_grab_mods", "(B)V", nullptr, $PUBLIC},
	{"set_group", "(I)V", nullptr, $PUBLIC},
	{"set_keycode", "(I)V", nullptr, $PUBLIC},
	{"set_latched_group", "(I)V", nullptr, $PUBLIC},
	{"set_latched_mods", "(I)V", nullptr, $PUBLIC},
	{"set_locked_group", "(I)V", nullptr, $PUBLIC},
	{"set_locked_mods", "(I)V", nullptr, $PUBLIC},
	{"set_lookup_mods", "(B)V", nullptr, $PUBLIC},
	{"set_mods", "(I)V", nullptr, $PUBLIC},
	{"set_ptr_buttons", "(I)V", nullptr, $PUBLIC},
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

$ClassInfo _XkbStateNotifyEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XkbStateNotifyEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XkbStateNotifyEvent_FieldInfo_,
	_XkbStateNotifyEvent_MethodInfo_
};

$Object* allocate$XkbStateNotifyEvent($Class* clazz) {
	return $of($alloc(XkbStateNotifyEvent));
}

int32_t XkbStateNotifyEvent::getSize() {
	$init(XkbStateNotifyEvent);
	return 104;
}

int32_t XkbStateNotifyEvent::getDataSize() {
	return getSize();
}

int64_t XkbStateNotifyEvent::getPData() {
	return this->pData;
}

void XkbStateNotifyEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XkbStateNotifyEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XkbStateNotifyEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XkbStateNotifyEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XkbStateNotifyEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XkbStateNotifyEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 8));
}

void XkbStateNotifyEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 8, v);
}

bool XkbStateNotifyEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XkbStateNotifyEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XkbStateNotifyEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XkbStateNotifyEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XkbStateNotifyEvent::get_time() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 32));
}

void XkbStateNotifyEvent::set_time(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 32, v);
}

int32_t XkbStateNotifyEvent::get_xkb_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XkbStateNotifyEvent::set_xkb_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XkbStateNotifyEvent::get_device() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XkbStateNotifyEvent::set_device(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

int32_t XkbStateNotifyEvent::get_changed() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XkbStateNotifyEvent::set_changed(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int32_t XkbStateNotifyEvent::get_group() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 52));
}

void XkbStateNotifyEvent::set_group(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 52, v);
}

int32_t XkbStateNotifyEvent::get_base_group() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 56));
}

void XkbStateNotifyEvent::set_base_group(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 56, v);
}

int32_t XkbStateNotifyEvent::get_latched_group() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 60));
}

void XkbStateNotifyEvent::set_latched_group(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 60, v);
}

int32_t XkbStateNotifyEvent::get_locked_group() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 64));
}

void XkbStateNotifyEvent::set_locked_group(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 64, v);
}

int32_t XkbStateNotifyEvent::get_mods() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 68));
}

void XkbStateNotifyEvent::set_mods(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 68, v);
}

int32_t XkbStateNotifyEvent::get_base_mods() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 72));
}

void XkbStateNotifyEvent::set_base_mods(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 72, v);
}

int32_t XkbStateNotifyEvent::get_latched_mods() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 76));
}

void XkbStateNotifyEvent::set_latched_mods(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 76, v);
}

int32_t XkbStateNotifyEvent::get_locked_mods() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 80));
}

void XkbStateNotifyEvent::set_locked_mods(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 80, v);
}

int32_t XkbStateNotifyEvent::get_compat_state() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 84));
}

void XkbStateNotifyEvent::set_compat_state(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 84, v);
}

int8_t XkbStateNotifyEvent::get_grab_mods() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 88));
}

void XkbStateNotifyEvent::set_grab_mods(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 88, v);
}

int8_t XkbStateNotifyEvent::get_compat_grab_mods() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 89));
}

void XkbStateNotifyEvent::set_compat_grab_mods(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 89, v);
}

int8_t XkbStateNotifyEvent::get_lookup_mods() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 90));
}

void XkbStateNotifyEvent::set_lookup_mods(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 90, v);
}

int8_t XkbStateNotifyEvent::get_compat_lookup_mods() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 91));
}

void XkbStateNotifyEvent::set_compat_lookup_mods(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 91, v);
}

int32_t XkbStateNotifyEvent::get_ptr_buttons() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 92));
}

void XkbStateNotifyEvent::set_ptr_buttons(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 92, v);
}

int32_t XkbStateNotifyEvent::get_keycode() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 96));
}

void XkbStateNotifyEvent::set_keycode(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 96, v);
}

int8_t XkbStateNotifyEvent::get_event_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 97));
}

void XkbStateNotifyEvent::set_event_type(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 97, v);
}

int8_t XkbStateNotifyEvent::get_req_major() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 98));
}

void XkbStateNotifyEvent::set_req_major(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 98, v);
}

int8_t XkbStateNotifyEvent::get_req_minor() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 99));
}

void XkbStateNotifyEvent::set_req_minor(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 99, v);
}

$String* XkbStateNotifyEvent::getName() {
	return "XkbStateNotifyEvent"_s;
}

$String* XkbStateNotifyEvent::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 1040));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("time = "_s)->append(get_time())->append(", "_s);
	ret->append("xkb_type = "_s)->append(get_xkb_type())->append(", "_s);
	ret->append("device = "_s)->append(get_device())->append(", "_s);
	ret->append("changed = "_s)->append(get_changed())->append(", "_s);
	ret->append("group = "_s)->append(get_group())->append(", "_s);
	ret->append("base_group = "_s)->append(get_base_group())->append(", "_s);
	ret->append("latched_group = "_s)->append(get_latched_group())->append(", "_s);
	ret->append("locked_group = "_s)->append(get_locked_group())->append(", "_s);
	ret->append("mods = "_s)->append(get_mods())->append(", "_s);
	ret->append("base_mods = "_s)->append(get_base_mods())->append(", "_s);
	ret->append("latched_mods = "_s)->append(get_latched_mods())->append(", "_s);
	ret->append("locked_mods = "_s)->append(get_locked_mods())->append(", "_s);
	ret->append("compat_state = "_s)->append(get_compat_state())->append(", "_s);
	ret->append("grab_mods = "_s)->append((int32_t)get_grab_mods())->append(", "_s);
	ret->append("compat_grab_mods = "_s)->append((int32_t)get_compat_grab_mods())->append(", "_s);
	ret->append("lookup_mods = "_s)->append((int32_t)get_lookup_mods())->append(", "_s);
	ret->append("compat_lookup_mods = "_s)->append((int32_t)get_compat_lookup_mods())->append(", "_s);
	ret->append("ptr_buttons = "_s)->append(get_ptr_buttons())->append(", "_s);
	ret->append("keycode = "_s)->append(get_keycode())->append(", "_s);
	ret->append("event_type = "_s)->append((int32_t)get_event_type())->append(", "_s);
	ret->append("req_major = "_s)->append((int32_t)get_req_major())->append(", "_s);
	ret->append("req_minor = "_s)->append((int32_t)get_req_minor())->append(", "_s);
	return ret->toString();
}

$Object* XkbStateNotifyEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XkbStateNotifyEvent::zero() {
	$XWrapperBase::zero();
}

$String* XkbStateNotifyEvent::toString() {
	return $XWrapperBase::toString();
}

XkbStateNotifyEvent::XkbStateNotifyEvent() {
}

$Class* XkbStateNotifyEvent::load$($String* name, bool initialize) {
	$loadClass(XkbStateNotifyEvent, name, initialize, &_XkbStateNotifyEvent_ClassInfo_, allocate$XkbStateNotifyEvent);
	return class$;
}

$Class* XkbStateNotifyEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun