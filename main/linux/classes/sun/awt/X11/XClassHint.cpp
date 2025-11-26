#include <sun/awt/X11/XClassHint.h>

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

$FieldInfo _XClassHint_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XClassHint, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XClassHint, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XClassHint, pData)},
	{}
};

$MethodInfo _XClassHint_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XClassHint::*)(int64_t)>(&XClassHint::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XClassHint::*)()>(&XClassHint::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XClassHint::getSize))},
	{"get_res_class", "(I)J", nullptr, $PUBLIC},
	{"get_res_class", "()J", nullptr, $PUBLIC},
	{"get_res_name", "(I)J", nullptr, $PUBLIC},
	{"get_res_name", "()J", nullptr, $PUBLIC},
	{"set_res_class", "(J)V", nullptr, $PUBLIC},
	{"set_res_name", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XClassHint_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XClassHint",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XClassHint_FieldInfo_,
	_XClassHint_MethodInfo_
};

$Object* allocate$XClassHint($Class* clazz) {
	return $of($alloc(XClassHint));
}

int32_t XClassHint::getSize() {
	$init(XClassHint);
	return 16;
}

int32_t XClassHint::getDataSize() {
	return getSize();
}

int64_t XClassHint::getPData() {
	return this->pData;
}

void XClassHint::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XClassHint::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XClassHint::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XClassHint::get_res_name(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 0);
	return var$0 + index * $Native::getLongSize();
}

int64_t XClassHint::get_res_name() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 0);
}

void XClassHint::set_res_name(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int64_t XClassHint::get_res_class(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 8);
	return var$0 + index * $Native::getLongSize();
}

int64_t XClassHint::get_res_class() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 8);
}

void XClassHint::set_res_class(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

$String* XClassHint::getName() {
	return "XClassHint"_s;
}

$String* XClassHint::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 80));
	ret->append("res_name = "_s)->append(get_res_name())->append(", "_s);
	ret->append("res_class = "_s)->append(get_res_class())->append(", "_s);
	return ret->toString();
}

$Object* XClassHint::clone() {
	return $of($XWrapperBase::clone());
}

void XClassHint::zero() {
	$XWrapperBase::zero();
}

$String* XClassHint::toString() {
	return $XWrapperBase::toString();
}

XClassHint::XClassHint() {
}

$Class* XClassHint::load$($String* name, bool initialize) {
	$loadClass(XClassHint, name, initialize, &_XClassHint_ClassInfo_, allocate$XClassHint);
	return class$;
}

$Class* XClassHint::class$ = nullptr;

		} // X11
	} // awt
} // sun