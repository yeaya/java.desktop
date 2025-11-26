#include <sun/awt/X11/XKeyboardControl.h>

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

$FieldInfo _XKeyboardControl_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XKeyboardControl, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XKeyboardControl, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XKeyboardControl, pData)},
	{}
};

$MethodInfo _XKeyboardControl_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XKeyboardControl::*)(int64_t)>(&XKeyboardControl::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XKeyboardControl::*)()>(&XKeyboardControl::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XKeyboardControl::getSize))},
	{"get_auto_repeat_mode", "()I", nullptr, $PUBLIC},
	{"get_bell_duration", "()I", nullptr, $PUBLIC},
	{"get_bell_percent", "()I", nullptr, $PUBLIC},
	{"get_bell_pitch", "()I", nullptr, $PUBLIC},
	{"get_key", "()I", nullptr, $PUBLIC},
	{"get_key_click_percent", "()I", nullptr, $PUBLIC},
	{"get_led", "()I", nullptr, $PUBLIC},
	{"get_led_mode", "()I", nullptr, $PUBLIC},
	{"set_auto_repeat_mode", "(I)V", nullptr, $PUBLIC},
	{"set_bell_duration", "(I)V", nullptr, $PUBLIC},
	{"set_bell_percent", "(I)V", nullptr, $PUBLIC},
	{"set_bell_pitch", "(I)V", nullptr, $PUBLIC},
	{"set_key", "(I)V", nullptr, $PUBLIC},
	{"set_key_click_percent", "(I)V", nullptr, $PUBLIC},
	{"set_led", "(I)V", nullptr, $PUBLIC},
	{"set_led_mode", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XKeyboardControl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XKeyboardControl",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XKeyboardControl_FieldInfo_,
	_XKeyboardControl_MethodInfo_
};

$Object* allocate$XKeyboardControl($Class* clazz) {
	return $of($alloc(XKeyboardControl));
}

int32_t XKeyboardControl::getSize() {
	$init(XKeyboardControl);
	return 32;
}

int32_t XKeyboardControl::getDataSize() {
	return getSize();
}

int64_t XKeyboardControl::getPData() {
	return this->pData;
}

void XKeyboardControl::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XKeyboardControl::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XKeyboardControl::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XKeyboardControl::get_key_click_percent() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XKeyboardControl::set_key_click_percent(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int32_t XKeyboardControl::get_bell_percent() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 4));
}

void XKeyboardControl::set_bell_percent(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 4, v);
}

int32_t XKeyboardControl::get_bell_pitch() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XKeyboardControl::set_bell_pitch(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

int32_t XKeyboardControl::get_bell_duration() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 12));
}

void XKeyboardControl::set_bell_duration(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 12, v);
}

int32_t XKeyboardControl::get_led() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 16));
}

void XKeyboardControl::set_led(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 16, v);
}

int32_t XKeyboardControl::get_led_mode() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 20));
}

void XKeyboardControl::set_led_mode(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 20, v);
}

int32_t XKeyboardControl::get_key() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 24));
}

void XKeyboardControl::set_key(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 24, v);
}

int32_t XKeyboardControl::get_auto_repeat_mode() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 28));
}

void XKeyboardControl::set_auto_repeat_mode(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 28, v);
}

$String* XKeyboardControl::getName() {
	return "XKeyboardControl"_s;
}

$String* XKeyboardControl::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 320));
	ret->append("key_click_percent = "_s)->append(get_key_click_percent())->append(", "_s);
	ret->append("bell_percent = "_s)->append(get_bell_percent())->append(", "_s);
	ret->append("bell_pitch = "_s)->append(get_bell_pitch())->append(", "_s);
	ret->append("bell_duration = "_s)->append(get_bell_duration())->append(", "_s);
	ret->append("led = "_s)->append(get_led())->append(", "_s);
	ret->append("led_mode = "_s)->append(get_led_mode())->append(", "_s);
	ret->append("key = "_s)->append(get_key())->append(", "_s);
	ret->append("auto_repeat_mode = "_s)->append(get_auto_repeat_mode())->append(", "_s);
	return ret->toString();
}

$Object* XKeyboardControl::clone() {
	return $of($XWrapperBase::clone());
}

void XKeyboardControl::zero() {
	$XWrapperBase::zero();
}

$String* XKeyboardControl::toString() {
	return $XWrapperBase::toString();
}

XKeyboardControl::XKeyboardControl() {
}

$Class* XKeyboardControl::load$($String* name, bool initialize) {
	$loadClass(XKeyboardControl, name, initialize, &_XKeyboardControl_ClassInfo_, allocate$XKeyboardControl);
	return class$;
}

$Class* XKeyboardControl::class$ = nullptr;

		} // X11
	} // awt
} // sun