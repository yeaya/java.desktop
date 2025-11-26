#include <sun/awt/X11/XIMStyles.h>

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

$FieldInfo _XIMStyles_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XIMStyles, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XIMStyles, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XIMStyles, pData)},
	{}
};

$MethodInfo _XIMStyles_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XIMStyles::*)(int64_t)>(&XIMStyles::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XIMStyles::*)()>(&XIMStyles::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XIMStyles::getSize))},
	{"get_count_styles", "()S", nullptr, $PUBLIC},
	{"get_supported_styles", "(I)J", nullptr, $PUBLIC},
	{"get_supported_styles", "()J", nullptr, $PUBLIC},
	{"set_count_styles", "(S)V", nullptr, $PUBLIC},
	{"set_supported_styles", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XIMStyles_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XIMStyles",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XIMStyles_FieldInfo_,
	_XIMStyles_MethodInfo_
};

$Object* allocate$XIMStyles($Class* clazz) {
	return $of($alloc(XIMStyles));
}

int32_t XIMStyles::getSize() {
	$init(XIMStyles);
	return 16;
}

int32_t XIMStyles::getDataSize() {
	return getSize();
}

int64_t XIMStyles::getPData() {
	return this->pData;
}

void XIMStyles::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XIMStyles::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XIMStyles::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int16_t XIMStyles::get_count_styles() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 0));
}

void XIMStyles::set_count_styles(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 0, v);
}

int64_t XIMStyles::get_supported_styles(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 8);
	return $Native::getLong(var$0 + index * $Native::getLongSize());
}

int64_t XIMStyles::get_supported_styles() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 8);
}

void XIMStyles::set_supported_styles(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

$String* XIMStyles::getName() {
	return "XIMStyles"_s;
}

$String* XIMStyles::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 80));
	ret->append("count_styles = "_s)->append((int32_t)get_count_styles())->append(", "_s);
	ret->append("supported_styles = "_s)->append(get_supported_styles())->append(", "_s);
	return ret->toString();
}

$Object* XIMStyles::clone() {
	return $of($XWrapperBase::clone());
}

void XIMStyles::zero() {
	$XWrapperBase::zero();
}

$String* XIMStyles::toString() {
	return $XWrapperBase::toString();
}

XIMStyles::XIMStyles() {
}

$Class* XIMStyles::load$($String* name, bool initialize) {
	$loadClass(XIMStyles, name, initialize, &_XIMStyles_ClassInfo_, allocate$XIMStyles);
	return class$;
}

$Class* XIMStyles::class$ = nullptr;

		} // X11
	} // awt
} // sun