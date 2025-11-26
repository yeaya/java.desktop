#include <sun/awt/X11/XFontProp.h>

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

$FieldInfo _XFontProp_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XFontProp, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XFontProp, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XFontProp, pData)},
	{}
};

$MethodInfo _XFontProp_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XFontProp::*)(int64_t)>(&XFontProp::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XFontProp::*)()>(&XFontProp::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XFontProp::getSize))},
	{"get_card32", "()J", nullptr, $PUBLIC},
	{"get_name", "()J", nullptr, $PUBLIC},
	{"set_card32", "(J)V", nullptr, $PUBLIC},
	{"set_name", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XFontProp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XFontProp",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XFontProp_FieldInfo_,
	_XFontProp_MethodInfo_
};

$Object* allocate$XFontProp($Class* clazz) {
	return $of($alloc(XFontProp));
}

int32_t XFontProp::getSize() {
	$init(XFontProp);
	return 16;
}

int32_t XFontProp::getDataSize() {
	return getSize();
}

int64_t XFontProp::getPData() {
	return this->pData;
}

void XFontProp::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XFontProp::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XFontProp::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XFontProp::get_name() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0));
}

void XFontProp::set_name(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int64_t XFontProp::get_card32() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XFontProp::set_card32(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

$String* XFontProp::getName() {
	return "XFontProp"_s;
}

$String* XFontProp::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 80));
	ret->append("name = "_s)->append(get_name())->append(", "_s);
	ret->append("card32 = "_s)->append(get_card32())->append(", "_s);
	return ret->toString();
}

$Object* XFontProp::clone() {
	return $of($XWrapperBase::clone());
}

void XFontProp::zero() {
	$XWrapperBase::zero();
}

$String* XFontProp::toString() {
	return $XWrapperBase::toString();
}

XFontProp::XFontProp() {
}

$Class* XFontProp::load$($String* name, bool initialize) {
	$loadClass(XFontProp, name, initialize, &_XFontProp_ClassInfo_, allocate$XFontProp);
	return class$;
}

$Class* XFontProp::class$ = nullptr;

		} // X11
	} // awt
} // sun