#include <sun/awt/X11/XFocusChangeEvent.h>

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

$FieldInfo _XFocusChangeEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XFocusChangeEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XFocusChangeEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XFocusChangeEvent, pData)},
	{}
};

$MethodInfo _XFocusChangeEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XFocusChangeEvent::*)(int64_t)>(&XFocusChangeEvent::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XFocusChangeEvent::*)()>(&XFocusChangeEvent::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XFocusChangeEvent::getSize))},
	{"get_detail", "()I", nullptr, $PUBLIC},
	{"get_display", "()J", nullptr, $PUBLIC},
	{"get_mode", "()I", nullptr, $PUBLIC},
	{"get_send_event", "()Z", nullptr, $PUBLIC},
	{"get_serial", "()J", nullptr, $PUBLIC},
	{"get_type", "()I", nullptr, $PUBLIC},
	{"get_window", "()J", nullptr, $PUBLIC},
	{"set_detail", "(I)V", nullptr, $PUBLIC},
	{"set_display", "(J)V", nullptr, $PUBLIC},
	{"set_mode", "(I)V", nullptr, $PUBLIC},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC},
	{"set_serial", "(J)V", nullptr, $PUBLIC},
	{"set_type", "(I)V", nullptr, $PUBLIC},
	{"set_window", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XFocusChangeEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XFocusChangeEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XFocusChangeEvent_FieldInfo_,
	_XFocusChangeEvent_MethodInfo_
};

$Object* allocate$XFocusChangeEvent($Class* clazz) {
	return $of($alloc(XFocusChangeEvent));
}

int32_t XFocusChangeEvent::getSize() {
	$init(XFocusChangeEvent);
	return 48;
}

int32_t XFocusChangeEvent::getDataSize() {
	return getSize();
}

int64_t XFocusChangeEvent::getPData() {
	return this->pData;
}

void XFocusChangeEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XFocusChangeEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XFocusChangeEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XFocusChangeEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XFocusChangeEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XFocusChangeEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XFocusChangeEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XFocusChangeEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XFocusChangeEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XFocusChangeEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XFocusChangeEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XFocusChangeEvent::get_window() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XFocusChangeEvent::set_window(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int32_t XFocusChangeEvent::get_mode() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XFocusChangeEvent::set_mode(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XFocusChangeEvent::get_detail() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XFocusChangeEvent::set_detail(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

$String* XFocusChangeEvent::getName() {
	return "XFocusChangeEvent"_s;
}

$String* XFocusChangeEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 280));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("window = "_s)->append($(getWindow(get_window())))->append(", "_s);
	ret->append("mode = "_s)->append(get_mode())->append(", "_s);
	ret->append("detail = "_s)->append(get_detail())->append(", "_s);
	return ret->toString();
}

$Object* XFocusChangeEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XFocusChangeEvent::zero() {
	$XWrapperBase::zero();
}

$String* XFocusChangeEvent::toString() {
	return $XWrapperBase::toString();
}

XFocusChangeEvent::XFocusChangeEvent() {
}

$Class* XFocusChangeEvent::load$($String* name, bool initialize) {
	$loadClass(XFocusChangeEvent, name, initialize, &_XFocusChangeEvent_ClassInfo_, allocate$XFocusChangeEvent);
	return class$;
}

$Class* XFocusChangeEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun