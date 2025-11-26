#include <sun/awt/X11/XClientMessageEvent.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XAtom.h>
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
using $XAtom = ::sun::awt::X11::XAtom;
using $XEvent = ::sun::awt::X11::XEvent;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XClientMessageEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XClientMessageEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XClientMessageEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XClientMessageEvent, pData)},
	{}
};

$MethodInfo _XClientMessageEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XClientMessageEvent::*)(int64_t)>(&XClientMessageEvent::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XClientMessageEvent::*)()>(&XClientMessageEvent::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XClientMessageEvent::getSize))},
	{"get_data", "(I)J", nullptr, $PUBLIC},
	{"get_data", "()J", nullptr, $PUBLIC},
	{"get_display", "()J", nullptr, $PUBLIC},
	{"get_format", "()I", nullptr, $PUBLIC},
	{"get_message_type", "()J", nullptr, $PUBLIC},
	{"get_send_event", "()Z", nullptr, $PUBLIC},
	{"get_serial", "()J", nullptr, $PUBLIC},
	{"get_type", "()I", nullptr, $PUBLIC},
	{"get_window", "()J", nullptr, $PUBLIC},
	{"set_data", "(IJ)V", nullptr, $PUBLIC},
	{"set_display", "(J)V", nullptr, $PUBLIC},
	{"set_format", "(I)V", nullptr, $PUBLIC},
	{"set_message_type", "(J)V", nullptr, $PUBLIC},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC},
	{"set_serial", "(J)V", nullptr, $PUBLIC},
	{"set_type", "(I)V", nullptr, $PUBLIC},
	{"set_window", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XClientMessageEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XClientMessageEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XClientMessageEvent_FieldInfo_,
	_XClientMessageEvent_MethodInfo_
};

$Object* allocate$XClientMessageEvent($Class* clazz) {
	return $of($alloc(XClientMessageEvent));
}

int32_t XClientMessageEvent::getSize() {
	$init(XClientMessageEvent);
	return 96;
}

int32_t XClientMessageEvent::getDataSize() {
	return getSize();
}

int64_t XClientMessageEvent::getPData() {
	return this->pData;
}

void XClientMessageEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XClientMessageEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XClientMessageEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XClientMessageEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XClientMessageEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XClientMessageEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XClientMessageEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XClientMessageEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XClientMessageEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XClientMessageEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XClientMessageEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XClientMessageEvent::get_window() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XClientMessageEvent::set_window(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int64_t XClientMessageEvent::get_message_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 40));
}

void XClientMessageEvent::set_message_type(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 40, v);
}

int32_t XClientMessageEvent::get_format() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XClientMessageEvent::set_format(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int64_t XClientMessageEvent::get_data(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 56 + index * $Native::getLongSize());
}

void XClientMessageEvent::set_data(int32_t index, int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 56 + index * $Native::getLongSize(), v);
}

int64_t XClientMessageEvent::get_data() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return this->pData + 56;
}

$String* XClientMessageEvent::getName() {
	return "XClientMessageEvent"_s;
}

$String* XClientMessageEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 320));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("window = "_s)->append($(getWindow(get_window())))->append(", "_s);
	ret->append("message_type = "_s)->append($($of($XAtom::get(get_message_type()))))->append(", "_s);
	ret->append("format = "_s)->append(get_format())->append(", "_s);
	ret->append("{"_s)->append(get_data(0))->append(" "_s)->append(get_data(1))->append(" "_s)->append(get_data(2))->append(" "_s)->append(get_data(3))->append(" "_s)->append(get_data(4))->append(" "_s)->append("}"_s);
	return ret->toString();
}

$Object* XClientMessageEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XClientMessageEvent::zero() {
	$XWrapperBase::zero();
}

$String* XClientMessageEvent::toString() {
	return $XWrapperBase::toString();
}

XClientMessageEvent::XClientMessageEvent() {
}

$Class* XClientMessageEvent::load$($String* name, bool initialize) {
	$loadClass(XClientMessageEvent, name, initialize, &_XClientMessageEvent_ClassInfo_, allocate$XClientMessageEvent);
	return class$;
}

$Class* XClientMessageEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun