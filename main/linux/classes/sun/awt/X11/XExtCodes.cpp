#include <sun/awt/X11/XExtCodes.h>

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

$FieldInfo _XExtCodes_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XExtCodes, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XExtCodes, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XExtCodes, pData)},
	{}
};

$MethodInfo _XExtCodes_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XExtCodes::*)(int64_t)>(&XExtCodes::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XExtCodes::*)()>(&XExtCodes::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XExtCodes::getSize))},
	{"get_extension", "()I", nullptr, $PUBLIC},
	{"get_first_error", "()I", nullptr, $PUBLIC},
	{"get_first_event", "()I", nullptr, $PUBLIC},
	{"get_major_opcode", "()I", nullptr, $PUBLIC},
	{"set_extension", "(I)V", nullptr, $PUBLIC},
	{"set_first_error", "(I)V", nullptr, $PUBLIC},
	{"set_first_event", "(I)V", nullptr, $PUBLIC},
	{"set_major_opcode", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XExtCodes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XExtCodes",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XExtCodes_FieldInfo_,
	_XExtCodes_MethodInfo_
};

$Object* allocate$XExtCodes($Class* clazz) {
	return $of($alloc(XExtCodes));
}

int32_t XExtCodes::getSize() {
	$init(XExtCodes);
	return 16;
}

int32_t XExtCodes::getDataSize() {
	return getSize();
}

int64_t XExtCodes::getPData() {
	return this->pData;
}

void XExtCodes::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XExtCodes::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XExtCodes::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XExtCodes::get_extension() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XExtCodes::set_extension(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int32_t XExtCodes::get_major_opcode() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 4));
}

void XExtCodes::set_major_opcode(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 4, v);
}

int32_t XExtCodes::get_first_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XExtCodes::set_first_event(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

int32_t XExtCodes::get_first_error() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 12));
}

void XExtCodes::set_first_error(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 12, v);
}

$String* XExtCodes::getName() {
	return "XExtCodes"_s;
}

$String* XExtCodes::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 160));
	ret->append("extension = "_s)->append(get_extension())->append(", "_s);
	ret->append("major_opcode = "_s)->append(get_major_opcode())->append(", "_s);
	ret->append("first_event = "_s)->append(get_first_event())->append(", "_s);
	ret->append("first_error = "_s)->append(get_first_error())->append(", "_s);
	return ret->toString();
}

$Object* XExtCodes::clone() {
	return $of($XWrapperBase::clone());
}

void XExtCodes::zero() {
	$XWrapperBase::zero();
}

$String* XExtCodes::toString() {
	return $XWrapperBase::toString();
}

XExtCodes::XExtCodes() {
}

$Class* XExtCodes::load$($String* name, bool initialize) {
	$loadClass(XExtCodes, name, initialize, &_XExtCodes_ClassInfo_, allocate$XExtCodes);
	return class$;
}

$Class* XExtCodes::class$ = nullptr;

		} // X11
	} // awt
} // sun