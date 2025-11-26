#include <sun/awt/X11/XPoint.h>

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

$FieldInfo _XPoint_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XPoint, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XPoint, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XPoint, pData)},
	{}
};

$MethodInfo _XPoint_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XPoint::*)(int64_t)>(&XPoint::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XPoint::*)()>(&XPoint::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XPoint::getSize))},
	{"get_x", "()S", nullptr, $PUBLIC},
	{"get_y", "()S", nullptr, $PUBLIC},
	{"set_x", "(S)V", nullptr, $PUBLIC},
	{"set_y", "(S)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XPoint_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XPoint",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XPoint_FieldInfo_,
	_XPoint_MethodInfo_
};

$Object* allocate$XPoint($Class* clazz) {
	return $of($alloc(XPoint));
}

int32_t XPoint::getSize() {
	$init(XPoint);
	return 4;
}

int32_t XPoint::getDataSize() {
	return getSize();
}

int64_t XPoint::getPData() {
	return this->pData;
}

void XPoint::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XPoint::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XPoint::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int16_t XPoint::get_x() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 0));
}

void XPoint::set_x(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 0, v);
}

int16_t XPoint::get_y() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 2));
}

void XPoint::set_y(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 2, v);
}

$String* XPoint::getName() {
	return "XPoint"_s;
}

$String* XPoint::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 80));
	ret->append("x = "_s)->append((int32_t)get_x())->append(", "_s);
	ret->append("y = "_s)->append((int32_t)get_y())->append(", "_s);
	return ret->toString();
}

$Object* XPoint::clone() {
	return $of($XWrapperBase::clone());
}

void XPoint::zero() {
	$XWrapperBase::zero();
}

$String* XPoint::toString() {
	return $XWrapperBase::toString();
}

XPoint::XPoint() {
}

$Class* XPoint::load$($String* name, bool initialize) {
	$loadClass(XPoint, name, initialize, &_XPoint_ClassInfo_, allocate$XPoint);
	return class$;
}

$Class* XPoint::class$ = nullptr;

		} // X11
	} // awt
} // sun