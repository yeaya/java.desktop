#include <sun/awt/X11/XKeyboardState.h>

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

$FieldInfo _XKeyboardState_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XKeyboardState, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XKeyboardState, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XKeyboardState, pData)},
	{}
};

$MethodInfo _XKeyboardState_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XKeyboardState::*)(int64_t)>(&XKeyboardState::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XKeyboardState::*)()>(&XKeyboardState::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XKeyboardState::getSize))},
	{"get_auto_repeats", "(I)B", nullptr, $PUBLIC},
	{"get_auto_repeats", "()J", nullptr, $PUBLIC},
	{"get_bell_duration", "()I", nullptr, $PUBLIC},
	{"get_bell_percent", "()I", nullptr, $PUBLIC},
	{"get_bell_pitch", "()I", nullptr, $PUBLIC},
	{"get_global_auto_repeat", "()I", nullptr, $PUBLIC},
	{"get_key_click_percent", "()I", nullptr, $PUBLIC},
	{"get_led_mask", "()J", nullptr, $PUBLIC},
	{"set_auto_repeats", "(IB)V", nullptr, $PUBLIC},
	{"set_bell_duration", "(I)V", nullptr, $PUBLIC},
	{"set_bell_percent", "(I)V", nullptr, $PUBLIC},
	{"set_bell_pitch", "(I)V", nullptr, $PUBLIC},
	{"set_global_auto_repeat", "(I)V", nullptr, $PUBLIC},
	{"set_key_click_percent", "(I)V", nullptr, $PUBLIC},
	{"set_led_mask", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XKeyboardState_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XKeyboardState",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XKeyboardState_FieldInfo_,
	_XKeyboardState_MethodInfo_
};

$Object* allocate$XKeyboardState($Class* clazz) {
	return $of($alloc(XKeyboardState));
}

int32_t XKeyboardState::getSize() {
	$init(XKeyboardState);
	return 64;
}

int32_t XKeyboardState::getDataSize() {
	return getSize();
}

int64_t XKeyboardState::getPData() {
	return this->pData;
}

void XKeyboardState::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XKeyboardState::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XKeyboardState::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XKeyboardState::get_key_click_percent() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XKeyboardState::set_key_click_percent(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int32_t XKeyboardState::get_bell_percent() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 4));
}

void XKeyboardState::set_bell_percent(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 4, v);
}

int32_t XKeyboardState::get_bell_pitch() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XKeyboardState::set_bell_pitch(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

int32_t XKeyboardState::get_bell_duration() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 12));
}

void XKeyboardState::set_bell_duration(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 12, v);
}

int64_t XKeyboardState::get_led_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 16));
}

void XKeyboardState::set_led_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

int32_t XKeyboardState::get_global_auto_repeat() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 24));
}

void XKeyboardState::set_global_auto_repeat(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 24, v);
}

int8_t XKeyboardState::get_auto_repeats(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getByte(this->pData + 28 + index * 1);
}

void XKeyboardState::set_auto_repeats(int32_t index, int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 28 + index * 1, v);
}

int64_t XKeyboardState::get_auto_repeats() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return this->pData + 28;
}

$String* XKeyboardState::getName() {
	return "XKeyboardState"_s;
}

$String* XKeyboardState::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 280));
	ret->append("key_click_percent = "_s)->append(get_key_click_percent())->append(", "_s);
	ret->append("bell_percent = "_s)->append(get_bell_percent())->append(", "_s);
	ret->append("bell_pitch = "_s)->append(get_bell_pitch())->append(", "_s);
	ret->append("bell_duration = "_s)->append(get_bell_duration())->append(", "_s);
	ret->append("led_mask = "_s)->append(get_led_mask())->append(", "_s);
	ret->append("global_auto_repeat = "_s)->append(get_global_auto_repeat())->append(", "_s);
	ret->append("{"_s)->append((int32_t)get_auto_repeats(0))->append(" "_s)->append((int32_t)get_auto_repeats(1))->append(" "_s)->append((int32_t)get_auto_repeats(2))->append(" "_s)->append((int32_t)get_auto_repeats(3))->append(" "_s)->append((int32_t)get_auto_repeats(4))->append(" "_s)->append((int32_t)get_auto_repeats(5))->append(" "_s)->append((int32_t)get_auto_repeats(6))->append(" "_s)->append((int32_t)get_auto_repeats(7))->append(" "_s)->append((int32_t)get_auto_repeats(8))->append(" "_s)->append((int32_t)get_auto_repeats(9))->append(" "_s)->append((int32_t)get_auto_repeats(10))->append(" "_s)->append((int32_t)get_auto_repeats(11))->append(" "_s)->append((int32_t)get_auto_repeats(12))->append(" "_s)->append((int32_t)get_auto_repeats(13))->append(" "_s)->append((int32_t)get_auto_repeats(14))->append(" "_s)->append((int32_t)get_auto_repeats(15))->append(" "_s)->append((int32_t)get_auto_repeats(16))->append(" "_s)->append((int32_t)get_auto_repeats(17))->append(" "_s)->append((int32_t)get_auto_repeats(18))->append(" "_s)->append((int32_t)get_auto_repeats(19))->append(" "_s)->append((int32_t)get_auto_repeats(20))->append(" "_s)->append((int32_t)get_auto_repeats(21))->append(" "_s)->append((int32_t)get_auto_repeats(22))->append(" "_s)->append((int32_t)get_auto_repeats(23))->append(" "_s)->append((int32_t)get_auto_repeats(24))->append(" "_s)->append((int32_t)get_auto_repeats(25))->append(" "_s)->append((int32_t)get_auto_repeats(26))->append(" "_s)->append((int32_t)get_auto_repeats(27))->append(" "_s)->append((int32_t)get_auto_repeats(28))->append(" "_s)->append((int32_t)get_auto_repeats(29))->append(" "_s)->append((int32_t)get_auto_repeats(30))->append(" "_s)->append((int32_t)get_auto_repeats(31))->append(" "_s)->append("}"_s);
	return ret->toString();
}

$Object* XKeyboardState::clone() {
	return $of($XWrapperBase::clone());
}

void XKeyboardState::zero() {
	$XWrapperBase::zero();
}

$String* XKeyboardState::toString() {
	return $XWrapperBase::toString();
}

XKeyboardState::XKeyboardState() {
}

$Class* XKeyboardState::load$($String* name, bool initialize) {
	$loadClass(XKeyboardState, name, initialize, &_XKeyboardState_ClassInfo_, allocate$XKeyboardState);
	return class$;
}

$Class* XKeyboardState::class$ = nullptr;

		} // X11
	} // awt
} // sun