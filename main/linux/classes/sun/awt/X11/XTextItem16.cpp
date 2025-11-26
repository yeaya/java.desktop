#include <sun/awt/X11/XTextItem16.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XChar2b.h>
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
using $XChar2b = ::sun::awt::X11::XChar2b;
using $XEvent = ::sun::awt::X11::XEvent;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextItem16_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XTextItem16, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XTextItem16, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XTextItem16, pData)},
	{}
};

$MethodInfo _XTextItem16_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XTextItem16::*)(int64_t)>(&XTextItem16::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XTextItem16::*)()>(&XTextItem16::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XTextItem16::getSize))},
	{"get_chars", "(I)Lsun/awt/X11/XChar2b;", nullptr, $PUBLIC},
	{"get_chars", "()J", nullptr, $PUBLIC},
	{"get_delta", "()I", nullptr, $PUBLIC},
	{"get_font", "()J", nullptr, $PUBLIC},
	{"get_nchars", "()I", nullptr, $PUBLIC},
	{"set_chars", "(J)V", nullptr, $PUBLIC},
	{"set_delta", "(I)V", nullptr, $PUBLIC},
	{"set_font", "(J)V", nullptr, $PUBLIC},
	{"set_nchars", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XTextItem16_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XTextItem16",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XTextItem16_FieldInfo_,
	_XTextItem16_MethodInfo_
};

$Object* allocate$XTextItem16($Class* clazz) {
	return $of($alloc(XTextItem16));
}

int32_t XTextItem16::getSize() {
	$init(XTextItem16);
	return 24;
}

int32_t XTextItem16::getDataSize() {
	return getSize();
}

int64_t XTextItem16::getPData() {
	return this->pData;
}

void XTextItem16::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XTextItem16::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XTextItem16::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

$XChar2b* XTextItem16::get_chars(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0) != 0) ? ($new($XChar2b, $Native::getLong(this->pData + 0) + index * 2)) : (($XChar2b*)nullptr);
}

int64_t XTextItem16::get_chars() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 0);
}

void XTextItem16::set_chars(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int32_t XTextItem16::get_nchars() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XTextItem16::set_nchars(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

int32_t XTextItem16::get_delta() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 12));
}

void XTextItem16::set_delta(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 12, v);
}

int64_t XTextItem16::get_font() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 16));
}

void XTextItem16::set_font(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

$String* XTextItem16::getName() {
	return "XTextItem16"_s;
}

$String* XTextItem16::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 160));
	ret->append("chars = "_s)->append(get_chars())->append(", "_s);
	ret->append("nchars = "_s)->append(get_nchars())->append(", "_s);
	ret->append("delta = "_s)->append(get_delta())->append(", "_s);
	ret->append("font = "_s)->append(get_font())->append(", "_s);
	return ret->toString();
}

$Object* XTextItem16::clone() {
	return $of($XWrapperBase::clone());
}

void XTextItem16::zero() {
	$XWrapperBase::zero();
}

$String* XTextItem16::toString() {
	return $XWrapperBase::toString();
}

XTextItem16::XTextItem16() {
}

$Class* XTextItem16::load$($String* name, bool initialize) {
	$loadClass(XTextItem16, name, initialize, &_XTextItem16_ClassInfo_, allocate$XTextItem16);
	return class$;
}

$Class* XTextItem16::class$ = nullptr;

		} // X11
	} // awt
} // sun