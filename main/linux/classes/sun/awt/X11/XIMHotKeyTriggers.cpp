#include <sun/awt/X11/XIMHotKeyTriggers.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XIMHotKeyTrigger.h>
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
using $XIMHotKeyTrigger = ::sun::awt::X11::XIMHotKeyTrigger;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XIMHotKeyTriggers_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XIMHotKeyTriggers, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XIMHotKeyTriggers, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XIMHotKeyTriggers, pData)},
	{}
};

$MethodInfo _XIMHotKeyTriggers_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XIMHotKeyTriggers::*)(int64_t)>(&XIMHotKeyTriggers::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XIMHotKeyTriggers::*)()>(&XIMHotKeyTriggers::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XIMHotKeyTriggers::getSize))},
	{"get_key", "(I)Lsun/awt/X11/XIMHotKeyTrigger;", nullptr, $PUBLIC},
	{"get_key", "()J", nullptr, $PUBLIC},
	{"get_num_hot_key", "()I", nullptr, $PUBLIC},
	{"set_key", "(J)V", nullptr, $PUBLIC},
	{"set_num_hot_key", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XIMHotKeyTriggers_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XIMHotKeyTriggers",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XIMHotKeyTriggers_FieldInfo_,
	_XIMHotKeyTriggers_MethodInfo_
};

$Object* allocate$XIMHotKeyTriggers($Class* clazz) {
	return $of($alloc(XIMHotKeyTriggers));
}

int32_t XIMHotKeyTriggers::getSize() {
	$init(XIMHotKeyTriggers);
	return 16;
}

int32_t XIMHotKeyTriggers::getDataSize() {
	return getSize();
}

int64_t XIMHotKeyTriggers::getPData() {
	return this->pData;
}

void XIMHotKeyTriggers::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XIMHotKeyTriggers::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XIMHotKeyTriggers::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XIMHotKeyTriggers::get_num_hot_key() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XIMHotKeyTriggers::set_num_hot_key(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

$XIMHotKeyTrigger* XIMHotKeyTriggers::get_key(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8) != 0) ? ($new($XIMHotKeyTrigger, $Native::getLong(this->pData + 8) + index * 16)) : (($XIMHotKeyTrigger*)nullptr);
}

int64_t XIMHotKeyTriggers::get_key() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 8);
}

void XIMHotKeyTriggers::set_key(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

$String* XIMHotKeyTriggers::getName() {
	return "XIMHotKeyTriggers"_s;
}

$String* XIMHotKeyTriggers::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 80));
	ret->append("num_hot_key = "_s)->append(get_num_hot_key())->append(", "_s);
	ret->append("key = "_s)->append(get_key())->append(", "_s);
	return ret->toString();
}

$Object* XIMHotKeyTriggers::clone() {
	return $of($XWrapperBase::clone());
}

void XIMHotKeyTriggers::zero() {
	$XWrapperBase::zero();
}

$String* XIMHotKeyTriggers::toString() {
	return $XWrapperBase::toString();
}

XIMHotKeyTriggers::XIMHotKeyTriggers() {
}

$Class* XIMHotKeyTriggers::load$($String* name, bool initialize) {
	$loadClass(XIMHotKeyTriggers, name, initialize, &_XIMHotKeyTriggers_ClassInfo_, allocate$XIMHotKeyTriggers);
	return class$;
}

$Class* XIMHotKeyTriggers::class$ = nullptr;

		} // X11
	} // awt
} // sun