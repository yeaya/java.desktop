#include <sun/awt/X11/XConfigureEvent.h>

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

$FieldInfo _XConfigureEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XConfigureEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XConfigureEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XConfigureEvent, pData)},
	{}
};

$MethodInfo _XConfigureEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XConfigureEvent::*)(int64_t)>(&XConfigureEvent::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XConfigureEvent::*)()>(&XConfigureEvent::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XConfigureEvent::getSize))},
	{"get_above", "()J", nullptr, $PUBLIC},
	{"get_border_width", "()I", nullptr, $PUBLIC},
	{"get_display", "()J", nullptr, $PUBLIC},
	{"get_event", "()J", nullptr, $PUBLIC},
	{"get_height", "()I", nullptr, $PUBLIC},
	{"get_override_redirect", "()Z", nullptr, $PUBLIC},
	{"get_send_event", "()Z", nullptr, $PUBLIC},
	{"get_serial", "()J", nullptr, $PUBLIC},
	{"get_type", "()I", nullptr, $PUBLIC},
	{"get_width", "()I", nullptr, $PUBLIC},
	{"get_window", "()J", nullptr, $PUBLIC},
	{"get_x", "()I", nullptr, $PUBLIC},
	{"get_y", "()I", nullptr, $PUBLIC},
	{"set_above", "(J)V", nullptr, $PUBLIC},
	{"set_border_width", "(I)V", nullptr, $PUBLIC},
	{"set_display", "(J)V", nullptr, $PUBLIC},
	{"set_event", "(J)V", nullptr, $PUBLIC},
	{"set_height", "(I)V", nullptr, $PUBLIC},
	{"set_override_redirect", "(Z)V", nullptr, $PUBLIC},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC},
	{"set_serial", "(J)V", nullptr, $PUBLIC},
	{"set_type", "(I)V", nullptr, $PUBLIC},
	{"set_width", "(I)V", nullptr, $PUBLIC},
	{"set_window", "(J)V", nullptr, $PUBLIC},
	{"set_x", "(I)V", nullptr, $PUBLIC},
	{"set_y", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XConfigureEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XConfigureEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XConfigureEvent_FieldInfo_,
	_XConfigureEvent_MethodInfo_
};

$Object* allocate$XConfigureEvent($Class* clazz) {
	return $of($alloc(XConfigureEvent));
}

int32_t XConfigureEvent::getSize() {
	$init(XConfigureEvent);
	return 88;
}

int32_t XConfigureEvent::getDataSize() {
	return getSize();
}

int64_t XConfigureEvent::getPData() {
	return this->pData;
}

void XConfigureEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XConfigureEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XConfigureEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XConfigureEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XConfigureEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XConfigureEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XConfigureEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XConfigureEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XConfigureEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XConfigureEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XConfigureEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XConfigureEvent::get_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XConfigureEvent::set_event(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int64_t XConfigureEvent::get_window() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 40));
}

void XConfigureEvent::set_window(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 40, v);
}

int32_t XConfigureEvent::get_x() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XConfigureEvent::set_x(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int32_t XConfigureEvent::get_y() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 52));
}

void XConfigureEvent::set_y(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 52, v);
}

int32_t XConfigureEvent::get_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 56));
}

void XConfigureEvent::set_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 56, v);
}

int32_t XConfigureEvent::get_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 60));
}

void XConfigureEvent::set_height(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 60, v);
}

int32_t XConfigureEvent::get_border_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 64));
}

void XConfigureEvent::set_border_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 64, v);
}

int64_t XConfigureEvent::get_above() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 72));
}

void XConfigureEvent::set_above(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 72, v);
}

bool XConfigureEvent::get_override_redirect() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 80));
}

void XConfigureEvent::set_override_redirect(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 80, v);
}

$String* XConfigureEvent::getName() {
	return "XConfigureEvent"_s;
}

$String* XConfigureEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 520));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("event = "_s)->append(get_event())->append(", "_s);
	ret->append("window = "_s)->append($(getWindow(get_window())))->append(", "_s);
	ret->append("x = "_s)->append(get_x())->append(", "_s);
	ret->append("y = "_s)->append(get_y())->append(", "_s);
	ret->append("width = "_s)->append(get_width())->append(", "_s);
	ret->append("height = "_s)->append(get_height())->append(", "_s);
	ret->append("border_width = "_s)->append(get_border_width())->append(", "_s);
	ret->append("above = "_s)->append(get_above())->append(", "_s);
	ret->append("override_redirect = "_s)->append(get_override_redirect())->append(", "_s);
	return ret->toString();
}

$Object* XConfigureEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XConfigureEvent::zero() {
	$XWrapperBase::zero();
}

$String* XConfigureEvent::toString() {
	return $XWrapperBase::toString();
}

XConfigureEvent::XConfigureEvent() {
}

$Class* XConfigureEvent::load$($String* name, bool initialize) {
	$loadClass(XConfigureEvent, name, initialize, &_XConfigureEvent_ClassInfo_, allocate$XConfigureEvent);
	return class$;
}

$Class* XConfigureEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun