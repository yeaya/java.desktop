#include <sun/awt/X11/XIMHotKeyTrigger.h>

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

$FieldInfo _XIMHotKeyTrigger_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XIMHotKeyTrigger, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XIMHotKeyTrigger, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XIMHotKeyTrigger, pData)},
	{}
};

$MethodInfo _XIMHotKeyTrigger_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XIMHotKeyTrigger::*)(int64_t)>(&XIMHotKeyTrigger::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XIMHotKeyTrigger::*)()>(&XIMHotKeyTrigger::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XIMHotKeyTrigger::getSize))},
	{"get_keysym", "()J", nullptr, $PUBLIC},
	{"get_modifier", "()I", nullptr, $PUBLIC},
	{"get_modifier_mask", "()I", nullptr, $PUBLIC},
	{"set_keysym", "(J)V", nullptr, $PUBLIC},
	{"set_modifier", "(I)V", nullptr, $PUBLIC},
	{"set_modifier_mask", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XIMHotKeyTrigger_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XIMHotKeyTrigger",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XIMHotKeyTrigger_FieldInfo_,
	_XIMHotKeyTrigger_MethodInfo_
};

$Object* allocate$XIMHotKeyTrigger($Class* clazz) {
	return $of($alloc(XIMHotKeyTrigger));
}

int32_t XIMHotKeyTrigger::getSize() {
	$init(XIMHotKeyTrigger);
	return 16;
}

int32_t XIMHotKeyTrigger::getDataSize() {
	return getSize();
}

int64_t XIMHotKeyTrigger::getPData() {
	return this->pData;
}

void XIMHotKeyTrigger::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XIMHotKeyTrigger::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XIMHotKeyTrigger::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XIMHotKeyTrigger::get_keysym() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0));
}

void XIMHotKeyTrigger::set_keysym(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int32_t XIMHotKeyTrigger::get_modifier() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XIMHotKeyTrigger::set_modifier(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

int32_t XIMHotKeyTrigger::get_modifier_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 12));
}

void XIMHotKeyTrigger::set_modifier_mask(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 12, v);
}

$String* XIMHotKeyTrigger::getName() {
	return "XIMHotKeyTrigger"_s;
}

$String* XIMHotKeyTrigger::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 120));
	ret->append("keysym = "_s)->append(get_keysym())->append(", "_s);
	ret->append("modifier = "_s)->append(get_modifier())->append(", "_s);
	ret->append("modifier_mask = "_s)->append(get_modifier_mask())->append(", "_s);
	return ret->toString();
}

$Object* XIMHotKeyTrigger::clone() {
	return $of($XWrapperBase::clone());
}

void XIMHotKeyTrigger::zero() {
	$XWrapperBase::zero();
}

$String* XIMHotKeyTrigger::toString() {
	return $XWrapperBase::toString();
}

XIMHotKeyTrigger::XIMHotKeyTrigger() {
}

$Class* XIMHotKeyTrigger::load$($String* name, bool initialize) {
	$loadClass(XIMHotKeyTrigger, name, initialize, &_XIMHotKeyTrigger_ClassInfo_, allocate$XIMHotKeyTrigger);
	return class$;
}

$Class* XIMHotKeyTrigger::class$ = nullptr;

		} // X11
	} // awt
} // sun