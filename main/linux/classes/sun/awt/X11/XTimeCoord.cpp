#include <sun/awt/X11/XTimeCoord.h>

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

$FieldInfo _XTimeCoord_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XTimeCoord, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XTimeCoord, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XTimeCoord, pData)},
	{}
};

$MethodInfo _XTimeCoord_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XTimeCoord::*)(int64_t)>(&XTimeCoord::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XTimeCoord::*)()>(&XTimeCoord::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XTimeCoord::getSize))},
	{"get_time", "()J", nullptr, $PUBLIC},
	{"get_x", "()S", nullptr, $PUBLIC},
	{"get_y", "()S", nullptr, $PUBLIC},
	{"set_time", "(J)V", nullptr, $PUBLIC},
	{"set_x", "(S)V", nullptr, $PUBLIC},
	{"set_y", "(S)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XTimeCoord_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XTimeCoord",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XTimeCoord_FieldInfo_,
	_XTimeCoord_MethodInfo_
};

$Object* allocate$XTimeCoord($Class* clazz) {
	return $of($alloc(XTimeCoord));
}

int32_t XTimeCoord::getSize() {
	$init(XTimeCoord);
	return 16;
}

int32_t XTimeCoord::getDataSize() {
	return getSize();
}

int64_t XTimeCoord::getPData() {
	return this->pData;
}

void XTimeCoord::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XTimeCoord::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XTimeCoord::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XTimeCoord::get_time() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 0));
}

void XTimeCoord::set_time(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 0, v);
}

int16_t XTimeCoord::get_x() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 8));
}

void XTimeCoord::set_x(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 8, v);
}

int16_t XTimeCoord::get_y() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 10));
}

void XTimeCoord::set_y(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 10, v);
}

$String* XTimeCoord::getName() {
	return "XTimeCoord"_s;
}

$String* XTimeCoord::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 120));
	ret->append("time = "_s)->append(get_time())->append(", "_s);
	ret->append("x = "_s)->append((int32_t)get_x())->append(", "_s);
	ret->append("y = "_s)->append((int32_t)get_y())->append(", "_s);
	return ret->toString();
}

$Object* XTimeCoord::clone() {
	return $of($XWrapperBase::clone());
}

void XTimeCoord::zero() {
	$XWrapperBase::zero();
}

$String* XTimeCoord::toString() {
	return $XWrapperBase::toString();
}

XTimeCoord::XTimeCoord() {
}

$Class* XTimeCoord::load$($String* name, bool initialize) {
	$loadClass(XTimeCoord, name, initialize, &_XTimeCoord_ClassInfo_, allocate$XTimeCoord);
	return class$;
}

$Class* XTimeCoord::class$ = nullptr;

		} // X11
	} // awt
} // sun