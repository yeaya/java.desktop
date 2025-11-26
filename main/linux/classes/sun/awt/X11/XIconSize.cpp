#include <sun/awt/X11/XIconSize.h>

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

$FieldInfo _XIconSize_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XIconSize, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XIconSize, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XIconSize, pData)},
	{}
};

$MethodInfo _XIconSize_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XIconSize::*)(int64_t)>(&XIconSize::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XIconSize::*)()>(&XIconSize::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XIconSize::getSize))},
	{"get_height_inc", "()I", nullptr, $PUBLIC},
	{"get_max_height", "()I", nullptr, $PUBLIC},
	{"get_max_width", "()I", nullptr, $PUBLIC},
	{"get_min_height", "()I", nullptr, $PUBLIC},
	{"get_min_width", "()I", nullptr, $PUBLIC},
	{"get_width_inc", "()I", nullptr, $PUBLIC},
	{"set_height_inc", "(I)V", nullptr, $PUBLIC},
	{"set_max_height", "(I)V", nullptr, $PUBLIC},
	{"set_max_width", "(I)V", nullptr, $PUBLIC},
	{"set_min_height", "(I)V", nullptr, $PUBLIC},
	{"set_min_width", "(I)V", nullptr, $PUBLIC},
	{"set_width_inc", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XIconSize_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XIconSize",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XIconSize_FieldInfo_,
	_XIconSize_MethodInfo_
};

$Object* allocate$XIconSize($Class* clazz) {
	return $of($alloc(XIconSize));
}

int32_t XIconSize::getSize() {
	$init(XIconSize);
	return 24;
}

int32_t XIconSize::getDataSize() {
	return getSize();
}

int64_t XIconSize::getPData() {
	return this->pData;
}

void XIconSize::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XIconSize::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XIconSize::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XIconSize::get_min_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XIconSize::set_min_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int32_t XIconSize::get_min_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 4));
}

void XIconSize::set_min_height(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 4, v);
}

int32_t XIconSize::get_max_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XIconSize::set_max_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

int32_t XIconSize::get_max_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 12));
}

void XIconSize::set_max_height(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 12, v);
}

int32_t XIconSize::get_width_inc() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 16));
}

void XIconSize::set_width_inc(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 16, v);
}

int32_t XIconSize::get_height_inc() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 20));
}

void XIconSize::set_height_inc(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 20, v);
}

$String* XIconSize::getName() {
	return "XIconSize"_s;
}

$String* XIconSize::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 240));
	ret->append("min_width = "_s)->append(get_min_width())->append(", "_s);
	ret->append("min_height = "_s)->append(get_min_height())->append(", "_s);
	ret->append("max_width = "_s)->append(get_max_width())->append(", "_s);
	ret->append("max_height = "_s)->append(get_max_height())->append(", "_s);
	ret->append("width_inc = "_s)->append(get_width_inc())->append(", "_s);
	ret->append("height_inc = "_s)->append(get_height_inc())->append(", "_s);
	return ret->toString();
}

$Object* XIconSize::clone() {
	return $of($XWrapperBase::clone());
}

void XIconSize::zero() {
	$XWrapperBase::zero();
}

$String* XIconSize::toString() {
	return $XWrapperBase::toString();
}

XIconSize::XIconSize() {
}

$Class* XIconSize::load$($String* name, bool initialize) {
	$loadClass(XIconSize, name, initialize, &_XIconSize_ClassInfo_, allocate$XIconSize);
	return class$;
}

$Class* XIconSize::class$ = nullptr;

		} // X11
	} // awt
} // sun