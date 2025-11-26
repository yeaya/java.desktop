#include <sun/awt/X11/XArc.h>

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

$FieldInfo _XArc_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XArc, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XArc, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XArc, pData)},
	{}
};

$MethodInfo _XArc_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XArc::*)(int64_t)>(&XArc::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XArc::*)()>(&XArc::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XArc::getSize))},
	{"get_angle1", "()S", nullptr, $PUBLIC},
	{"get_angle2", "()S", nullptr, $PUBLIC},
	{"get_height", "()S", nullptr, $PUBLIC},
	{"get_width", "()S", nullptr, $PUBLIC},
	{"get_x", "()S", nullptr, $PUBLIC},
	{"get_y", "()S", nullptr, $PUBLIC},
	{"set_angle1", "(S)V", nullptr, $PUBLIC},
	{"set_angle2", "(S)V", nullptr, $PUBLIC},
	{"set_height", "(S)V", nullptr, $PUBLIC},
	{"set_width", "(S)V", nullptr, $PUBLIC},
	{"set_x", "(S)V", nullptr, $PUBLIC},
	{"set_y", "(S)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XArc_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XArc",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XArc_FieldInfo_,
	_XArc_MethodInfo_
};

$Object* allocate$XArc($Class* clazz) {
	return $of($alloc(XArc));
}

int32_t XArc::getSize() {
	$init(XArc);
	return 12;
}

int32_t XArc::getDataSize() {
	return getSize();
}

int64_t XArc::getPData() {
	return this->pData;
}

void XArc::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XArc::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XArc::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int16_t XArc::get_x() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 0));
}

void XArc::set_x(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 0, v);
}

int16_t XArc::get_y() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 2));
}

void XArc::set_y(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 2, v);
}

int16_t XArc::get_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 4));
}

void XArc::set_width(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 4, v);
}

int16_t XArc::get_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 6));
}

void XArc::set_height(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 6, v);
}

int16_t XArc::get_angle1() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 8));
}

void XArc::set_angle1(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 8, v);
}

int16_t XArc::get_angle2() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 10));
}

void XArc::set_angle2(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 10, v);
}

$String* XArc::getName() {
	return "XArc"_s;
}

$String* XArc::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 240));
	ret->append("x = "_s)->append((int32_t)get_x())->append(", "_s);
	ret->append("y = "_s)->append((int32_t)get_y())->append(", "_s);
	ret->append("width = "_s)->append((int32_t)get_width())->append(", "_s);
	ret->append("height = "_s)->append((int32_t)get_height())->append(", "_s);
	ret->append("angle1 = "_s)->append((int32_t)get_angle1())->append(", "_s);
	ret->append("angle2 = "_s)->append((int32_t)get_angle2())->append(", "_s);
	return ret->toString();
}

$Object* XArc::clone() {
	return $of($XWrapperBase::clone());
}

void XArc::zero() {
	$XWrapperBase::zero();
}

$String* XArc::toString() {
	return $XWrapperBase::toString();
}

XArc::XArc() {
}

$Class* XArc::load$($String* name, bool initialize) {
	$loadClass(XArc, name, initialize, &_XArc_ClassInfo_, allocate$XArc);
	return class$;
}

$Class* XArc::class$ = nullptr;

		} // X11
	} // awt
} // sun