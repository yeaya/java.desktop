#include <sun/awt/X11/XComposeStatus.h>

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

$FieldInfo _XComposeStatus_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XComposeStatus, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XComposeStatus, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XComposeStatus, pData)},
	{}
};

$MethodInfo _XComposeStatus_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XComposeStatus::*)(int64_t)>(&XComposeStatus::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XComposeStatus::*)()>(&XComposeStatus::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XComposeStatus::getSize))},
	{"get_chars_matched", "()I", nullptr, $PUBLIC},
	{"get_compose_ptr", "(I)J", nullptr, $PUBLIC},
	{"get_compose_ptr", "()J", nullptr, $PUBLIC},
	{"set_chars_matched", "(I)V", nullptr, $PUBLIC},
	{"set_compose_ptr", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XComposeStatus_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XComposeStatus",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XComposeStatus_FieldInfo_,
	_XComposeStatus_MethodInfo_
};

$Object* allocate$XComposeStatus($Class* clazz) {
	return $of($alloc(XComposeStatus));
}

int32_t XComposeStatus::getSize() {
	$init(XComposeStatus);
	return 16;
}

int32_t XComposeStatus::getDataSize() {
	return getSize();
}

int64_t XComposeStatus::getPData() {
	return this->pData;
}

void XComposeStatus::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XComposeStatus::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XComposeStatus::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XComposeStatus::get_compose_ptr(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 0);
	return var$0 + index * $Native::getLongSize();
}

int64_t XComposeStatus::get_compose_ptr() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 0);
}

void XComposeStatus::set_compose_ptr(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int32_t XComposeStatus::get_chars_matched() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XComposeStatus::set_chars_matched(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

$String* XComposeStatus::getName() {
	return "XComposeStatus"_s;
}

$String* XComposeStatus::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 80));
	ret->append("compose_ptr = "_s)->append(get_compose_ptr())->append(", "_s);
	ret->append("chars_matched = "_s)->append(get_chars_matched())->append(", "_s);
	return ret->toString();
}

$Object* XComposeStatus::clone() {
	return $of($XWrapperBase::clone());
}

void XComposeStatus::zero() {
	$XWrapperBase::zero();
}

$String* XComposeStatus::toString() {
	return $XWrapperBase::toString();
}

XComposeStatus::XComposeStatus() {
}

$Class* XComposeStatus::load$($String* name, bool initialize) {
	$loadClass(XComposeStatus, name, initialize, &_XComposeStatus_ClassInfo_, allocate$XComposeStatus);
	return class$;
}

$Class* XComposeStatus::class$ = nullptr;

		} // X11
	} // awt
} // sun