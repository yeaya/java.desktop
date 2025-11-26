#include <sun/awt/X11/XIMValuesList.h>

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

$FieldInfo _XIMValuesList_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XIMValuesList, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XIMValuesList, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XIMValuesList, pData)},
	{}
};

$MethodInfo _XIMValuesList_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XIMValuesList::*)(int64_t)>(&XIMValuesList::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XIMValuesList::*)()>(&XIMValuesList::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XIMValuesList::getSize))},
	{"get_count_values", "()S", nullptr, $PUBLIC},
	{"get_supported_values", "(I)J", nullptr, $PUBLIC},
	{"get_supported_values", "()J", nullptr, $PUBLIC},
	{"set_count_values", "(S)V", nullptr, $PUBLIC},
	{"set_supported_values", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XIMValuesList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XIMValuesList",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XIMValuesList_FieldInfo_,
	_XIMValuesList_MethodInfo_
};

$Object* allocate$XIMValuesList($Class* clazz) {
	return $of($alloc(XIMValuesList));
}

int32_t XIMValuesList::getSize() {
	$init(XIMValuesList);
	return 16;
}

int32_t XIMValuesList::getDataSize() {
	return getSize();
}

int64_t XIMValuesList::getPData() {
	return this->pData;
}

void XIMValuesList::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XIMValuesList::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XIMValuesList::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int16_t XIMValuesList::get_count_values() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 0));
}

void XIMValuesList::set_count_values(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 0, v);
}

int64_t XIMValuesList::get_supported_values(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 8);
	return var$0 + index * $Native::getLongSize();
}

int64_t XIMValuesList::get_supported_values() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 8);
}

void XIMValuesList::set_supported_values(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

$String* XIMValuesList::getName() {
	return "XIMValuesList"_s;
}

$String* XIMValuesList::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 80));
	ret->append("count_values = "_s)->append((int32_t)get_count_values())->append(", "_s);
	ret->append("supported_values = "_s)->append(get_supported_values())->append(", "_s);
	return ret->toString();
}

$Object* XIMValuesList::clone() {
	return $of($XWrapperBase::clone());
}

void XIMValuesList::zero() {
	$XWrapperBase::zero();
}

$String* XIMValuesList::toString() {
	return $XWrapperBase::toString();
}

XIMValuesList::XIMValuesList() {
}

$Class* XIMValuesList::load$($String* name, bool initialize) {
	$loadClass(XIMValuesList, name, initialize, &_XIMValuesList_ClassInfo_, allocate$XIMValuesList);
	return class$;
}

$Class* XIMValuesList::class$ = nullptr;

		} // X11
	} // awt
} // sun