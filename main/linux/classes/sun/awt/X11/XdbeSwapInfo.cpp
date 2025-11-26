#include <sun/awt/X11/XdbeSwapInfo.h>

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

$FieldInfo _XdbeSwapInfo_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XdbeSwapInfo, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XdbeSwapInfo, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XdbeSwapInfo, pData)},
	{}
};

$MethodInfo _XdbeSwapInfo_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XdbeSwapInfo::*)(int64_t)>(&XdbeSwapInfo::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XdbeSwapInfo::*)()>(&XdbeSwapInfo::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XdbeSwapInfo::getSize))},
	{"get_swap_action", "()I", nullptr, $PUBLIC},
	{"get_swap_window", "()J", nullptr, $PUBLIC},
	{"set_swap_action", "(I)V", nullptr, $PUBLIC},
	{"set_swap_window", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XdbeSwapInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XdbeSwapInfo",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XdbeSwapInfo_FieldInfo_,
	_XdbeSwapInfo_MethodInfo_
};

$Object* allocate$XdbeSwapInfo($Class* clazz) {
	return $of($alloc(XdbeSwapInfo));
}

int32_t XdbeSwapInfo::getSize() {
	$init(XdbeSwapInfo);
	return 16;
}

int32_t XdbeSwapInfo::getDataSize() {
	return getSize();
}

int64_t XdbeSwapInfo::getPData() {
	return this->pData;
}

void XdbeSwapInfo::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XdbeSwapInfo::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XdbeSwapInfo::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XdbeSwapInfo::get_swap_window() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0));
}

void XdbeSwapInfo::set_swap_window(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int32_t XdbeSwapInfo::get_swap_action() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XdbeSwapInfo::set_swap_action(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

$String* XdbeSwapInfo::getName() {
	return "XdbeSwapInfo"_s;
}

$String* XdbeSwapInfo::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 80));
	ret->append("swap_window = "_s)->append(get_swap_window())->append(", "_s);
	ret->append("swap_action = "_s)->append(get_swap_action())->append(", "_s);
	return ret->toString();
}

$Object* XdbeSwapInfo::clone() {
	return $of($XWrapperBase::clone());
}

void XdbeSwapInfo::zero() {
	$XWrapperBase::zero();
}

$String* XdbeSwapInfo::toString() {
	return $XWrapperBase::toString();
}

XdbeSwapInfo::XdbeSwapInfo() {
}

$Class* XdbeSwapInfo::load$($String* name, bool initialize) {
	$loadClass(XdbeSwapInfo, name, initialize, &_XdbeSwapInfo_ClassInfo_, allocate$XdbeSwapInfo);
	return class$;
}

$Class* XdbeSwapInfo::class$ = nullptr;

		} // X11
	} // awt
} // sun