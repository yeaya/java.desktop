#include <sun/awt/X11/XErrorEvent.h>

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

$FieldInfo _XErrorEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XErrorEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XErrorEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XErrorEvent, pData)},
	{}
};

$MethodInfo _XErrorEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XErrorEvent::*)(int64_t)>(&XErrorEvent::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XErrorEvent::*)()>(&XErrorEvent::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XErrorEvent::getSize))},
	{"get_display", "()J", nullptr, $PUBLIC},
	{"get_error_code", "()B", nullptr, $PUBLIC},
	{"get_minor_code", "()B", nullptr, $PUBLIC},
	{"get_request_code", "()B", nullptr, $PUBLIC},
	{"get_resourceid", "()J", nullptr, $PUBLIC},
	{"get_serial", "()J", nullptr, $PUBLIC},
	{"get_type", "()I", nullptr, $PUBLIC},
	{"set_display", "(J)V", nullptr, $PUBLIC},
	{"set_error_code", "(B)V", nullptr, $PUBLIC},
	{"set_minor_code", "(B)V", nullptr, $PUBLIC},
	{"set_request_code", "(B)V", nullptr, $PUBLIC},
	{"set_resourceid", "(J)V", nullptr, $PUBLIC},
	{"set_serial", "(J)V", nullptr, $PUBLIC},
	{"set_type", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XErrorEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XErrorEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XErrorEvent_FieldInfo_,
	_XErrorEvent_MethodInfo_
};

$Object* allocate$XErrorEvent($Class* clazz) {
	return $of($alloc(XErrorEvent));
}

int32_t XErrorEvent::getSize() {
	$init(XErrorEvent);
	return 40;
}

int32_t XErrorEvent::getDataSize() {
	return getSize();
}

int64_t XErrorEvent::getPData() {
	return this->pData;
}

void XErrorEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XErrorEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XErrorEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XErrorEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XErrorEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XErrorEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XErrorEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

int64_t XErrorEvent::get_resourceid() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 16));
}

void XErrorEvent::set_resourceid(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

int64_t XErrorEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XErrorEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int8_t XErrorEvent::get_error_code() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 32));
}

void XErrorEvent::set_error_code(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 32, v);
}

int8_t XErrorEvent::get_request_code() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 33));
}

void XErrorEvent::set_request_code(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 33, v);
}

int8_t XErrorEvent::get_minor_code() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 34));
}

void XErrorEvent::set_minor_code(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 34, v);
}

$String* XErrorEvent::getName() {
	return "XErrorEvent"_s;
}

$String* XErrorEvent::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 280));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("resourceid = "_s)->append(get_resourceid())->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("error_code = "_s)->append((int32_t)get_error_code())->append(", "_s);
	ret->append("request_code = "_s)->append((int32_t)get_request_code())->append(", "_s);
	ret->append("minor_code = "_s)->append((int32_t)get_minor_code())->append(", "_s);
	return ret->toString();
}

$Object* XErrorEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XErrorEvent::zero() {
	$XWrapperBase::zero();
}

$String* XErrorEvent::toString() {
	return $XWrapperBase::toString();
}

XErrorEvent::XErrorEvent() {
}

$Class* XErrorEvent::load$($String* name, bool initialize) {
	$loadClass(XErrorEvent, name, initialize, &_XErrorEvent_ClassInfo_, allocate$XErrorEvent);
	return class$;
}

$Class* XErrorEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun