#include <sun/awt/X11/XHostAddress.h>

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

$FieldInfo _XHostAddress_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XHostAddress, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XHostAddress, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XHostAddress, pData)},
	{}
};

$MethodInfo _XHostAddress_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XHostAddress::*)(int64_t)>(&XHostAddress::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XHostAddress::*)()>(&XHostAddress::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XHostAddress::getSize))},
	{"get_address", "(I)J", nullptr, $PUBLIC},
	{"get_address", "()J", nullptr, $PUBLIC},
	{"get_family", "()I", nullptr, $PUBLIC},
	{"get_length", "()I", nullptr, $PUBLIC},
	{"set_address", "(J)V", nullptr, $PUBLIC},
	{"set_family", "(I)V", nullptr, $PUBLIC},
	{"set_length", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XHostAddress_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XHostAddress",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XHostAddress_FieldInfo_,
	_XHostAddress_MethodInfo_
};

$Object* allocate$XHostAddress($Class* clazz) {
	return $of($alloc(XHostAddress));
}

int32_t XHostAddress::getSize() {
	$init(XHostAddress);
	return 16;
}

int32_t XHostAddress::getDataSize() {
	return getSize();
}

int64_t XHostAddress::getPData() {
	return this->pData;
}

void XHostAddress::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XHostAddress::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XHostAddress::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XHostAddress::get_family() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XHostAddress::set_family(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int32_t XHostAddress::get_length() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 4));
}

void XHostAddress::set_length(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 4, v);
}

int64_t XHostAddress::get_address(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 8);
	return var$0 + index * $Native::getLongSize();
}

int64_t XHostAddress::get_address() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 8);
}

void XHostAddress::set_address(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

$String* XHostAddress::getName() {
	return "XHostAddress"_s;
}

$String* XHostAddress::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 120));
	ret->append("family = "_s)->append(get_family())->append(", "_s);
	ret->append("length = "_s)->append(get_length())->append(", "_s);
	ret->append("address = "_s)->append(get_address())->append(", "_s);
	return ret->toString();
}

$Object* XHostAddress::clone() {
	return $of($XWrapperBase::clone());
}

void XHostAddress::zero() {
	$XWrapperBase::zero();
}

$String* XHostAddress::toString() {
	return $XWrapperBase::toString();
}

XHostAddress::XHostAddress() {
}

$Class* XHostAddress::load$($String* name, bool initialize) {
	$loadClass(XHostAddress, name, initialize, &_XHostAddress_ClassInfo_, allocate$XHostAddress);
	return class$;
}

$Class* XHostAddress::class$ = nullptr;

		} // X11
	} // awt
} // sun