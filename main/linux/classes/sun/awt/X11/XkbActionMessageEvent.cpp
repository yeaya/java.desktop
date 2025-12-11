#include <sun/awt/X11/XkbActionMessageEvent.h>

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
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XkbActionMessageEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XkbActionMessageEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XkbActionMessageEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XkbActionMessageEvent, pData)},
	{}
};

$MethodInfo _XkbActionMessageEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XkbActionMessageEvent::*)(int64_t)>(&XkbActionMessageEvent::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XkbActionMessageEvent::*)()>(&XkbActionMessageEvent::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XkbActionMessageEvent::getSize))},
	{"get_device", "()I", nullptr, $PUBLIC},
	{"get_display", "()J", nullptr, $PUBLIC},
	{"get_group", "()I", nullptr, $PUBLIC},
	{"get_key_event_follows", "()Z", nullptr, $PUBLIC},
	{"get_keycode", "()I", nullptr, $PUBLIC},
	{"get_message", "(I)B", nullptr, $PUBLIC},
	{"get_message", "()J", nullptr, $PUBLIC},
	{"get_mods", "()I", nullptr, $PUBLIC},
	{"get_press", "()Z", nullptr, $PUBLIC},
	{"get_send_event", "()Z", nullptr, $PUBLIC},
	{"get_serial", "()J", nullptr, $PUBLIC},
	{"get_time", "()J", nullptr, $PUBLIC},
	{"get_type", "()I", nullptr, $PUBLIC},
	{"get_xkb_type", "()I", nullptr, $PUBLIC},
	{"set_device", "(I)V", nullptr, $PUBLIC},
	{"set_display", "(J)V", nullptr, $PUBLIC},
	{"set_group", "(I)V", nullptr, $PUBLIC},
	{"set_key_event_follows", "(Z)V", nullptr, $PUBLIC},
	{"set_keycode", "(I)V", nullptr, $PUBLIC},
	{"set_message", "(IB)V", nullptr, $PUBLIC},
	{"set_mods", "(I)V", nullptr, $PUBLIC},
	{"set_press", "(Z)V", nullptr, $PUBLIC},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC},
	{"set_serial", "(J)V", nullptr, $PUBLIC},
	{"set_time", "(J)V", nullptr, $PUBLIC},
	{"set_type", "(I)V", nullptr, $PUBLIC},
	{"set_xkb_type", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XkbActionMessageEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XkbActionMessageEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XkbActionMessageEvent_FieldInfo_,
	_XkbActionMessageEvent_MethodInfo_
};

$Object* allocate$XkbActionMessageEvent($Class* clazz) {
	return $of($alloc(XkbActionMessageEvent));
}

int32_t XkbActionMessageEvent::getSize() {
	$init(XkbActionMessageEvent);
	return 80;
}

int32_t XkbActionMessageEvent::getDataSize() {
	return getSize();
}

int64_t XkbActionMessageEvent::getPData() {
	return this->pData;
}

void XkbActionMessageEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XkbActionMessageEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XkbActionMessageEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XkbActionMessageEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XkbActionMessageEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XkbActionMessageEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 8));
}

void XkbActionMessageEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 8, v);
}

bool XkbActionMessageEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XkbActionMessageEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XkbActionMessageEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XkbActionMessageEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XkbActionMessageEvent::get_time() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 32));
}

void XkbActionMessageEvent::set_time(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 32, v);
}

int32_t XkbActionMessageEvent::get_xkb_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XkbActionMessageEvent::set_xkb_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XkbActionMessageEvent::get_device() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XkbActionMessageEvent::set_device(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

int32_t XkbActionMessageEvent::get_keycode() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XkbActionMessageEvent::set_keycode(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

bool XkbActionMessageEvent::get_press() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 52));
}

void XkbActionMessageEvent::set_press(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 52, v);
}

bool XkbActionMessageEvent::get_key_event_follows() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 56));
}

void XkbActionMessageEvent::set_key_event_follows(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 56, v);
}

int32_t XkbActionMessageEvent::get_group() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 60));
}

void XkbActionMessageEvent::set_group(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 60, v);
}

int32_t XkbActionMessageEvent::get_mods() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 64));
}

void XkbActionMessageEvent::set_mods(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 64, v);
}

int8_t XkbActionMessageEvent::get_message(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getByte(this->pData + 68 + index * 1);
}

void XkbActionMessageEvent::set_message(int32_t index, int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 68 + index * 1, v);
}

int64_t XkbActionMessageEvent::get_message() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return this->pData + 68;
}

$String* XkbActionMessageEvent::getName() {
	return "XkbActionMessageEvent"_s;
}

$String* XkbActionMessageEvent::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 520));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("time = "_s)->append(get_time())->append(", "_s);
	ret->append("xkb_type = "_s)->append(get_xkb_type())->append(", "_s);
	ret->append("device = "_s)->append(get_device())->append(", "_s);
	ret->append("keycode = "_s)->append(get_keycode())->append(", "_s);
	ret->append("press = "_s)->append(get_press())->append(", "_s);
	ret->append("key_event_follows = "_s)->append(get_key_event_follows())->append(", "_s);
	ret->append("group = "_s)->append(get_group())->append(", "_s);
	ret->append("mods = "_s)->append(get_mods())->append(", "_s);
	ret->append("{"_s)->append((int32_t)get_message(0))->append(" "_s)->append((int32_t)get_message(1))->append(" "_s)->append((int32_t)get_message(2))->append(" "_s)->append((int32_t)get_message(3))->append(" "_s)->append((int32_t)get_message(4))->append(" "_s)->append((int32_t)get_message(5))->append(" "_s)->append((int32_t)get_message(6))->append(" "_s)->append("}"_s);
	return ret->toString();
}

$Object* XkbActionMessageEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XkbActionMessageEvent::zero() {
	$XWrapperBase::zero();
}

$String* XkbActionMessageEvent::toString() {
	return $XWrapperBase::toString();
}

XkbActionMessageEvent::XkbActionMessageEvent() {
}

$Class* XkbActionMessageEvent::load$($String* name, bool initialize) {
	$loadClass(XkbActionMessageEvent, name, initialize, &_XkbActionMessageEvent_ClassInfo_, allocate$XkbActionMessageEvent);
	return class$;
}

$Class* XkbActionMessageEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun