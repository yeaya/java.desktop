#include <sun/awt/X11/XIMCallback.h>

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

$FieldInfo _XIMCallback_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XIMCallback, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XIMCallback, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XIMCallback, pData)},
	{}
};

$MethodInfo _XIMCallback_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XIMCallback::*)(int64_t)>(&XIMCallback::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XIMCallback::*)()>(&XIMCallback::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XIMCallback::getSize))},
	{"get_callback", "(I)J", nullptr, $PUBLIC},
	{"get_callback", "()J", nullptr, $PUBLIC},
	{"get_client_data", "(I)J", nullptr, $PUBLIC},
	{"get_client_data", "()J", nullptr, $PUBLIC},
	{"set_callback", "(J)V", nullptr, $PUBLIC},
	{"set_client_data", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XIMCallback_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XIMCallback",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XIMCallback_FieldInfo_,
	_XIMCallback_MethodInfo_
};

$Object* allocate$XIMCallback($Class* clazz) {
	return $of($alloc(XIMCallback));
}

int32_t XIMCallback::getSize() {
	$init(XIMCallback);
	return 16;
}

int32_t XIMCallback::getDataSize() {
	return getSize();
}

int64_t XIMCallback::getPData() {
	return this->pData;
}

void XIMCallback::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XIMCallback::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XIMCallback::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XIMCallback::get_client_data(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 0);
	return var$0 + index * $Native::getLongSize();
}

int64_t XIMCallback::get_client_data() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 0);
}

void XIMCallback::set_client_data(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int64_t XIMCallback::get_callback(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 8);
	return var$0 + index * $Native::getLongSize();
}

int64_t XIMCallback::get_callback() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 8);
}

void XIMCallback::set_callback(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

$String* XIMCallback::getName() {
	return "XIMCallback"_s;
}

$String* XIMCallback::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 80));
	ret->append("client_data = "_s)->append(get_client_data())->append(", "_s);
	ret->append("callback = "_s)->append(get_callback())->append(", "_s);
	return ret->toString();
}

$Object* XIMCallback::clone() {
	return $of($XWrapperBase::clone());
}

void XIMCallback::zero() {
	$XWrapperBase::zero();
}

$String* XIMCallback::toString() {
	return $XWrapperBase::toString();
}

XIMCallback::XIMCallback() {
}

$Class* XIMCallback::load$($String* name, bool initialize) {
	$loadClass(XIMCallback, name, initialize, &_XIMCallback_ClassInfo_, allocate$XIMCallback);
	return class$;
}

$Class* XIMCallback::class$ = nullptr;

		} // X11
	} // awt
} // sun