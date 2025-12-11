#include <sun/awt/X11/XColor.h>

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
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XColor_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XColor, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XColor, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XColor, pData)},
	{}
};

$MethodInfo _XColor_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XColor::*)(int64_t)>(&XColor::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XColor::*)()>(&XColor::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XColor::getSize))},
	{"get_blue", "()S", nullptr, $PUBLIC},
	{"get_flags", "()B", nullptr, $PUBLIC},
	{"get_green", "()S", nullptr, $PUBLIC},
	{"get_pad", "()B", nullptr, $PUBLIC},
	{"get_pixel", "()J", nullptr, $PUBLIC},
	{"get_red", "()S", nullptr, $PUBLIC},
	{"set_blue", "(S)V", nullptr, $PUBLIC},
	{"set_flags", "(B)V", nullptr, $PUBLIC},
	{"set_green", "(S)V", nullptr, $PUBLIC},
	{"set_pad", "(B)V", nullptr, $PUBLIC},
	{"set_pixel", "(J)V", nullptr, $PUBLIC},
	{"set_red", "(S)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XColor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XColor",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XColor_FieldInfo_,
	_XColor_MethodInfo_
};

$Object* allocate$XColor($Class* clazz) {
	return $of($alloc(XColor));
}

int32_t XColor::getSize() {
	$init(XColor);
	return 16;
}

int32_t XColor::getDataSize() {
	return getSize();
}

int64_t XColor::getPData() {
	return this->pData;
}

void XColor::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XColor::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XColor::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XColor::get_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0));
}

void XColor::set_pixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int16_t XColor::get_red() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 8));
}

void XColor::set_red(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 8, v);
}

int16_t XColor::get_green() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 10));
}

void XColor::set_green(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 10, v);
}

int16_t XColor::get_blue() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 12));
}

void XColor::set_blue(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 12, v);
}

int8_t XColor::get_flags() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 14));
}

void XColor::set_flags(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 14, v);
}

int8_t XColor::get_pad() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 15));
}

void XColor::set_pad(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 15, v);
}

$String* XColor::getName() {
	return "XColor"_s;
}

$String* XColor::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 240));
	ret->append("pixel = "_s)->append(get_pixel())->append(", "_s);
	ret->append("red = "_s)->append((int32_t)get_red())->append(", "_s);
	ret->append("green = "_s)->append((int32_t)get_green())->append(", "_s);
	ret->append("blue = "_s)->append((int32_t)get_blue())->append(", "_s);
	ret->append("flags = "_s)->append((int32_t)get_flags())->append(", "_s);
	ret->append("pad = "_s)->append((int32_t)get_pad())->append(", "_s);
	return ret->toString();
}

$Object* XColor::clone() {
	return $of($XWrapperBase::clone());
}

void XColor::zero() {
	$XWrapperBase::zero();
}

$String* XColor::toString() {
	return $XWrapperBase::toString();
}

XColor::XColor() {
}

$Class* XColor::load$($String* name, bool initialize) {
	$loadClass(XColor, name, initialize, &_XColor_ClassInfo_, allocate$XColor);
	return class$;
}

$Class* XColor::class$ = nullptr;

		} // X11
	} // awt
} // sun