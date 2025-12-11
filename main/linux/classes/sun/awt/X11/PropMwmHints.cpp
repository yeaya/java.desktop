#include <sun/awt/X11/PropMwmHints.h>

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

$FieldInfo _PropMwmHints_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(PropMwmHints, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(PropMwmHints, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(PropMwmHints, pData)},
	{}
};

$MethodInfo _PropMwmHints_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(PropMwmHints::*)(int64_t)>(&PropMwmHints::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PropMwmHints::*)()>(&PropMwmHints::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&PropMwmHints::getSize))},
	{"get_decorations", "()J", nullptr, $PUBLIC},
	{"get_flags", "()J", nullptr, $PUBLIC},
	{"get_functions", "()J", nullptr, $PUBLIC},
	{"get_inputMode", "()J", nullptr, $PUBLIC},
	{"get_status", "()J", nullptr, $PUBLIC},
	{"set_decorations", "(J)V", nullptr, $PUBLIC},
	{"set_flags", "(J)V", nullptr, $PUBLIC},
	{"set_functions", "(J)V", nullptr, $PUBLIC},
	{"set_inputMode", "(J)V", nullptr, $PUBLIC},
	{"set_status", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _PropMwmHints_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.PropMwmHints",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_PropMwmHints_FieldInfo_,
	_PropMwmHints_MethodInfo_
};

$Object* allocate$PropMwmHints($Class* clazz) {
	return $of($alloc(PropMwmHints));
}

int32_t PropMwmHints::getSize() {
	$init(PropMwmHints);
	return 40;
}

int32_t PropMwmHints::getDataSize() {
	return getSize();
}

int64_t PropMwmHints::getPData() {
	return this->pData;
}

void PropMwmHints::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void PropMwmHints::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void PropMwmHints::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t PropMwmHints::get_flags() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0));
}

void PropMwmHints::set_flags(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int64_t PropMwmHints::get_functions() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void PropMwmHints::set_functions(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

int64_t PropMwmHints::get_decorations() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 16));
}

void PropMwmHints::set_decorations(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

int64_t PropMwmHints::get_inputMode() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void PropMwmHints::set_inputMode(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t PropMwmHints::get_status() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void PropMwmHints::set_status(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

$String* PropMwmHints::getName() {
	return "PropMwmHints"_s;
}

$String* PropMwmHints::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 200));
	ret->append("flags = "_s)->append(get_flags())->append(", "_s);
	ret->append("functions = "_s)->append(get_functions())->append(", "_s);
	ret->append("decorations = "_s)->append(get_decorations())->append(", "_s);
	ret->append("inputMode = "_s)->append(get_inputMode())->append(", "_s);
	ret->append("status = "_s)->append(get_status())->append(", "_s);
	return ret->toString();
}

$Object* PropMwmHints::clone() {
	return $of($XWrapperBase::clone());
}

void PropMwmHints::zero() {
	$XWrapperBase::zero();
}

$String* PropMwmHints::toString() {
	return $XWrapperBase::toString();
}

PropMwmHints::PropMwmHints() {
}

$Class* PropMwmHints::load$($String* name, bool initialize) {
	$loadClass(PropMwmHints, name, initialize, &_PropMwmHints_ClassInfo_, allocate$PropMwmHints);
	return class$;
}

$Class* PropMwmHints::class$ = nullptr;

		} // X11
	} // awt
} // sun