#include <sun/awt/X11/XIMPreeditStateNotifyCallbackStruct.h>

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

$FieldInfo _XIMPreeditStateNotifyCallbackStruct_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XIMPreeditStateNotifyCallbackStruct, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XIMPreeditStateNotifyCallbackStruct, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XIMPreeditStateNotifyCallbackStruct, pData)},
	{}
};

$MethodInfo _XIMPreeditStateNotifyCallbackStruct_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XIMPreeditStateNotifyCallbackStruct::*)(int64_t)>(&XIMPreeditStateNotifyCallbackStruct::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XIMPreeditStateNotifyCallbackStruct::*)()>(&XIMPreeditStateNotifyCallbackStruct::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XIMPreeditStateNotifyCallbackStruct::getSize))},
	{"get_state", "()J", nullptr, $PUBLIC},
	{"set_state", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XIMPreeditStateNotifyCallbackStruct_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XIMPreeditStateNotifyCallbackStruct",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XIMPreeditStateNotifyCallbackStruct_FieldInfo_,
	_XIMPreeditStateNotifyCallbackStruct_MethodInfo_
};

$Object* allocate$XIMPreeditStateNotifyCallbackStruct($Class* clazz) {
	return $of($alloc(XIMPreeditStateNotifyCallbackStruct));
}

int32_t XIMPreeditStateNotifyCallbackStruct::getSize() {
	$init(XIMPreeditStateNotifyCallbackStruct);
	return 8;
}

int32_t XIMPreeditStateNotifyCallbackStruct::getDataSize() {
	return getSize();
}

int64_t XIMPreeditStateNotifyCallbackStruct::getPData() {
	return this->pData;
}

void XIMPreeditStateNotifyCallbackStruct::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XIMPreeditStateNotifyCallbackStruct::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XIMPreeditStateNotifyCallbackStruct::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XIMPreeditStateNotifyCallbackStruct::get_state() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0));
}

void XIMPreeditStateNotifyCallbackStruct::set_state(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

$String* XIMPreeditStateNotifyCallbackStruct::getName() {
	return "XIMPreeditStateNotifyCallbackStruct"_s;
}

$String* XIMPreeditStateNotifyCallbackStruct::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 40));
	ret->append("state = "_s)->append(get_state())->append(", "_s);
	return ret->toString();
}

$Object* XIMPreeditStateNotifyCallbackStruct::clone() {
	return $of($XWrapperBase::clone());
}

void XIMPreeditStateNotifyCallbackStruct::zero() {
	$XWrapperBase::zero();
}

$String* XIMPreeditStateNotifyCallbackStruct::toString() {
	return $XWrapperBase::toString();
}

XIMPreeditStateNotifyCallbackStruct::XIMPreeditStateNotifyCallbackStruct() {
}

$Class* XIMPreeditStateNotifyCallbackStruct::load$($String* name, bool initialize) {
	$loadClass(XIMPreeditStateNotifyCallbackStruct, name, initialize, &_XIMPreeditStateNotifyCallbackStruct_ClassInfo_, allocate$XIMPreeditStateNotifyCallbackStruct);
	return class$;
}

$Class* XIMPreeditStateNotifyCallbackStruct::class$ = nullptr;

		} // X11
	} // awt
} // sun