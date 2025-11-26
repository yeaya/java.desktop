#include <sun/awt/X11/XExtData.h>

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

$FieldInfo _XExtData_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XExtData, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XExtData, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XExtData, pData)},
	{}
};

$MethodInfo _XExtData_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XExtData::*)(int64_t)>(&XExtData::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XExtData::*)()>(&XExtData::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XExtData::getSize))},
	{"get_free_private", "(I)J", nullptr, $PUBLIC},
	{"get_free_private", "()J", nullptr, $PUBLIC},
	{"get_next", "(I)Lsun/awt/X11/XExtData;", nullptr, $PUBLIC},
	{"get_next", "()J", nullptr, $PUBLIC},
	{"get_number", "()I", nullptr, $PUBLIC},
	{"get_private_data", "(I)J", nullptr, $PUBLIC},
	{"get_private_data", "()J", nullptr, $PUBLIC},
	{"set_free_private", "(J)V", nullptr, $PUBLIC},
	{"set_next", "(J)V", nullptr, $PUBLIC},
	{"set_number", "(I)V", nullptr, $PUBLIC},
	{"set_private_data", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XExtData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XExtData",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XExtData_FieldInfo_,
	_XExtData_MethodInfo_
};

$Object* allocate$XExtData($Class* clazz) {
	return $of($alloc(XExtData));
}

int32_t XExtData::getSize() {
	$init(XExtData);
	return 32;
}

int32_t XExtData::getDataSize() {
	return getSize();
}

int64_t XExtData::getPData() {
	return this->pData;
}

void XExtData::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XExtData::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XExtData::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XExtData::get_number() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XExtData::set_number(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

XExtData* XExtData::get_next(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8) != 0) ? ($new(XExtData, $Native::getLong(this->pData + 8) + index * 32)) : ((XExtData*)nullptr);
}

int64_t XExtData::get_next() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 8);
}

void XExtData::set_next(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

int64_t XExtData::get_free_private(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 16);
	return var$0 + index * $Native::getLongSize();
}

int64_t XExtData::get_free_private() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 16);
}

void XExtData::set_free_private(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

int64_t XExtData::get_private_data(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 24);
	return var$0 + index * $Native::getLongSize();
}

int64_t XExtData::get_private_data() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 24);
}

void XExtData::set_private_data(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

$String* XExtData::getName() {
	return "XExtData"_s;
}

$String* XExtData::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 160));
	ret->append("number = "_s)->append(get_number())->append(", "_s);
	ret->append("next = "_s)->append(get_next())->append(", "_s);
	ret->append("free_private = "_s)->append(get_free_private())->append(", "_s);
	ret->append("private_data = "_s)->append(get_private_data())->append(", "_s);
	return ret->toString();
}

$Object* XExtData::clone() {
	return $of($XWrapperBase::clone());
}

void XExtData::zero() {
	$XWrapperBase::zero();
}

$String* XExtData::toString() {
	return $XWrapperBase::toString();
}

XExtData::XExtData() {
}

$Class* XExtData::load$($String* name, bool initialize) {
	$loadClass(XExtData, name, initialize, &_XExtData_ClassInfo_, allocate$XExtData);
	return class$;
}

$Class* XExtData::class$ = nullptr;

		} // X11
	} // awt
} // sun