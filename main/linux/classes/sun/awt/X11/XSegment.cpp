#include <sun/awt/X11/XSegment.h>

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

$FieldInfo _XSegment_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XSegment, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XSegment, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XSegment, pData)},
	{}
};

$MethodInfo _XSegment_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XSegment::*)(int64_t)>(&XSegment::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XSegment::*)()>(&XSegment::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XSegment::getSize))},
	{"get_x1", "()S", nullptr, $PUBLIC},
	{"get_x2", "()S", nullptr, $PUBLIC},
	{"get_y1", "()S", nullptr, $PUBLIC},
	{"get_y2", "()S", nullptr, $PUBLIC},
	{"set_x1", "(S)V", nullptr, $PUBLIC},
	{"set_x2", "(S)V", nullptr, $PUBLIC},
	{"set_y1", "(S)V", nullptr, $PUBLIC},
	{"set_y2", "(S)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XSegment_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XSegment",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XSegment_FieldInfo_,
	_XSegment_MethodInfo_
};

$Object* allocate$XSegment($Class* clazz) {
	return $of($alloc(XSegment));
}

int32_t XSegment::getSize() {
	$init(XSegment);
	return 8;
}

int32_t XSegment::getDataSize() {
	return getSize();
}

int64_t XSegment::getPData() {
	return this->pData;
}

void XSegment::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XSegment::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XSegment::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int16_t XSegment::get_x1() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 0));
}

void XSegment::set_x1(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 0, v);
}

int16_t XSegment::get_y1() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 2));
}

void XSegment::set_y1(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 2, v);
}

int16_t XSegment::get_x2() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 4));
}

void XSegment::set_x2(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 4, v);
}

int16_t XSegment::get_y2() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 6));
}

void XSegment::set_y2(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 6, v);
}

$String* XSegment::getName() {
	return "XSegment"_s;
}

$String* XSegment::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 160));
	ret->append("x1 = "_s)->append((int32_t)get_x1())->append(", "_s);
	ret->append("y1 = "_s)->append((int32_t)get_y1())->append(", "_s);
	ret->append("x2 = "_s)->append((int32_t)get_x2())->append(", "_s);
	ret->append("y2 = "_s)->append((int32_t)get_y2())->append(", "_s);
	return ret->toString();
}

$Object* XSegment::clone() {
	return $of($XWrapperBase::clone());
}

void XSegment::zero() {
	$XWrapperBase::zero();
}

$String* XSegment::toString() {
	return $XWrapperBase::toString();
}

XSegment::XSegment() {
}

$Class* XSegment::load$($String* name, bool initialize) {
	$loadClass(XSegment, name, initialize, &_XSegment_ClassInfo_, allocate$XSegment);
	return class$;
}

$Class* XSegment::class$ = nullptr;

		} // X11
	} // awt
} // sun