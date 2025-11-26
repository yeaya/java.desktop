#include <sun/awt/X11/XOMOrientation.h>

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

$FieldInfo _XOMOrientation_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XOMOrientation, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XOMOrientation, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XOMOrientation, pData)},
	{}
};

$MethodInfo _XOMOrientation_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XOMOrientation::*)(int64_t)>(&XOMOrientation::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XOMOrientation::*)()>(&XOMOrientation::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XOMOrientation::getSize))},
	{"get_num_orientation", "()I", nullptr, $PUBLIC},
	{"get_orientation", "(I)I", nullptr, $PUBLIC},
	{"get_orientation", "()J", nullptr, $PUBLIC},
	{"set_num_orientation", "(I)V", nullptr, $PUBLIC},
	{"set_orientation", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XOMOrientation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XOMOrientation",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XOMOrientation_FieldInfo_,
	_XOMOrientation_MethodInfo_
};

$Object* allocate$XOMOrientation($Class* clazz) {
	return $of($alloc(XOMOrientation));
}

int32_t XOMOrientation::getSize() {
	$init(XOMOrientation);
	return 16;
}

int32_t XOMOrientation::getDataSize() {
	return getSize();
}

int64_t XOMOrientation::getPData() {
	return this->pData;
}

void XOMOrientation::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XOMOrientation::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XOMOrientation::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XOMOrientation::get_num_orientation() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XOMOrientation::set_num_orientation(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int32_t XOMOrientation::get_orientation(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getInt($Native::getLong(this->pData + 8) + index * 4);
}

int64_t XOMOrientation::get_orientation() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 8);
}

void XOMOrientation::set_orientation(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

$String* XOMOrientation::getName() {
	return "XOMOrientation"_s;
}

$String* XOMOrientation::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 80));
	ret->append("num_orientation = "_s)->append(get_num_orientation())->append(", "_s);
	ret->append("orientation = "_s)->append(get_orientation())->append(", "_s);
	return ret->toString();
}

$Object* XOMOrientation::clone() {
	return $of($XWrapperBase::clone());
}

void XOMOrientation::zero() {
	$XWrapperBase::zero();
}

$String* XOMOrientation::toString() {
	return $XWrapperBase::toString();
}

XOMOrientation::XOMOrientation() {
}

$Class* XOMOrientation::load$($String* name, bool initialize) {
	$loadClass(XOMOrientation, name, initialize, &_XOMOrientation_ClassInfo_, allocate$XOMOrientation);
	return class$;
}

$Class* XOMOrientation::class$ = nullptr;

		} // X11
	} // awt
} // sun