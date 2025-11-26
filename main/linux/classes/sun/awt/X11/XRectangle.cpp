#include <sun/awt/X11/XRectangle.h>

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

$FieldInfo _XRectangle_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XRectangle, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XRectangle, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XRectangle, pData)},
	{}
};

$MethodInfo _XRectangle_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XRectangle::*)(int64_t)>(&XRectangle::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XRectangle::*)()>(&XRectangle::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XRectangle::getSize))},
	{"get_height", "()S", nullptr, $PUBLIC},
	{"get_width", "()S", nullptr, $PUBLIC},
	{"get_x", "()S", nullptr, $PUBLIC},
	{"get_y", "()S", nullptr, $PUBLIC},
	{"set_height", "(S)V", nullptr, $PUBLIC},
	{"set_width", "(S)V", nullptr, $PUBLIC},
	{"set_x", "(S)V", nullptr, $PUBLIC},
	{"set_y", "(S)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XRectangle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XRectangle",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XRectangle_FieldInfo_,
	_XRectangle_MethodInfo_
};

$Object* allocate$XRectangle($Class* clazz) {
	return $of($alloc(XRectangle));
}

int32_t XRectangle::getSize() {
	$init(XRectangle);
	return 8;
}

int32_t XRectangle::getDataSize() {
	return getSize();
}

int64_t XRectangle::getPData() {
	return this->pData;
}

void XRectangle::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XRectangle::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XRectangle::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int16_t XRectangle::get_x() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 0));
}

void XRectangle::set_x(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 0, v);
}

int16_t XRectangle::get_y() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 2));
}

void XRectangle::set_y(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 2, v);
}

int16_t XRectangle::get_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 4));
}

void XRectangle::set_width(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 4, v);
}

int16_t XRectangle::get_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 6));
}

void XRectangle::set_height(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 6, v);
}

$String* XRectangle::getName() {
	return "XRectangle"_s;
}

$String* XRectangle::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 160));
	ret->append("x = "_s)->append((int32_t)get_x())->append(", "_s);
	ret->append("y = "_s)->append((int32_t)get_y())->append(", "_s);
	ret->append("width = "_s)->append((int32_t)get_width())->append(", "_s);
	ret->append("height = "_s)->append((int32_t)get_height())->append(", "_s);
	return ret->toString();
}

$Object* XRectangle::clone() {
	return $of($XWrapperBase::clone());
}

void XRectangle::zero() {
	$XWrapperBase::zero();
}

$String* XRectangle::toString() {
	return $XWrapperBase::toString();
}

XRectangle::XRectangle() {
}

$Class* XRectangle::load$($String* name, bool initialize) {
	$loadClass(XRectangle, name, initialize, &_XRectangle_ClassInfo_, allocate$XRectangle);
	return class$;
}

$Class* XRectangle::class$ = nullptr;

		} // X11
	} // awt
} // sun