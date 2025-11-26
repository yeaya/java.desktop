#include <sun/awt/X11/XChar2b.h>

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

$FieldInfo _XChar2b_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XChar2b, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XChar2b, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XChar2b, pData)},
	{}
};

$MethodInfo _XChar2b_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XChar2b::*)(int64_t)>(&XChar2b::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XChar2b::*)()>(&XChar2b::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XChar2b::getSize))},
	{"get_byte1", "()B", nullptr, $PUBLIC},
	{"get_byte2", "()B", nullptr, $PUBLIC},
	{"set_byte1", "(B)V", nullptr, $PUBLIC},
	{"set_byte2", "(B)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XChar2b_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XChar2b",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XChar2b_FieldInfo_,
	_XChar2b_MethodInfo_
};

$Object* allocate$XChar2b($Class* clazz) {
	return $of($alloc(XChar2b));
}

int32_t XChar2b::getSize() {
	$init(XChar2b);
	return 2;
}

int32_t XChar2b::getDataSize() {
	return getSize();
}

int64_t XChar2b::getPData() {
	return this->pData;
}

void XChar2b::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XChar2b::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XChar2b::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int8_t XChar2b::get_byte1() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 0));
}

void XChar2b::set_byte1(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 0, v);
}

int8_t XChar2b::get_byte2() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 1));
}

void XChar2b::set_byte2(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 1, v);
}

$String* XChar2b::getName() {
	return "XChar2b"_s;
}

$String* XChar2b::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 80));
	ret->append("byte1 = "_s)->append((int32_t)get_byte1())->append(", "_s);
	ret->append("byte2 = "_s)->append((int32_t)get_byte2())->append(", "_s);
	return ret->toString();
}

$Object* XChar2b::clone() {
	return $of($XWrapperBase::clone());
}

void XChar2b::zero() {
	$XWrapperBase::zero();
}

$String* XChar2b::toString() {
	return $XWrapperBase::toString();
}

XChar2b::XChar2b() {
}

$Class* XChar2b::load$($String* name, bool initialize) {
	$loadClass(XChar2b, name, initialize, &_XChar2b_ClassInfo_, allocate$XChar2b);
	return class$;
}

$Class* XChar2b::class$ = nullptr;

		} // X11
	} // awt
} // sun