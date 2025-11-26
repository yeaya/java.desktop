#include <sun/awt/X11/XIMStringConversionText.h>

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

$FieldInfo _XIMStringConversionText_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XIMStringConversionText, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XIMStringConversionText, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XIMStringConversionText, pData)},
	{}
};

$MethodInfo _XIMStringConversionText_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XIMStringConversionText::*)(int64_t)>(&XIMStringConversionText::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XIMStringConversionText::*)()>(&XIMStringConversionText::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XIMStringConversionText::getSize))},
	{"get_encoding_is_wchar", "()Z", nullptr, $PUBLIC},
	{"get_feedback", "(I)J", nullptr, $PUBLIC},
	{"get_feedback", "()J", nullptr, $PUBLIC},
	{"get_length", "()S", nullptr, $PUBLIC},
	{"get_string", "(I)J", nullptr, $PUBLIC},
	{"get_string", "()J", nullptr, $PUBLIC},
	{"set_encoding_is_wchar", "(Z)V", nullptr, $PUBLIC},
	{"set_feedback", "(J)V", nullptr, $PUBLIC},
	{"set_length", "(S)V", nullptr, $PUBLIC},
	{"set_string", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XIMStringConversionText_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XIMStringConversionText",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XIMStringConversionText_FieldInfo_,
	_XIMStringConversionText_MethodInfo_
};

$Object* allocate$XIMStringConversionText($Class* clazz) {
	return $of($alloc(XIMStringConversionText));
}

int32_t XIMStringConversionText::getSize() {
	$init(XIMStringConversionText);
	return 32;
}

int32_t XIMStringConversionText::getDataSize() {
	return getSize();
}

int64_t XIMStringConversionText::getPData() {
	return this->pData;
}

void XIMStringConversionText::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XIMStringConversionText::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XIMStringConversionText::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int16_t XIMStringConversionText::get_length() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 0));
}

void XIMStringConversionText::set_length(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 0, v);
}

int64_t XIMStringConversionText::get_feedback(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 8);
	return var$0 + index * $Native::getLongSize();
}

int64_t XIMStringConversionText::get_feedback() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 8);
}

void XIMStringConversionText::set_feedback(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XIMStringConversionText::get_encoding_is_wchar() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XIMStringConversionText::set_encoding_is_wchar(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XIMStringConversionText::get_string(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 24);
	return var$0 + index * $Native::getLongSize();
}

int64_t XIMStringConversionText::get_string() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 24);
}

void XIMStringConversionText::set_string(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

$String* XIMStringConversionText::getName() {
	return "XIMStringConversionText"_s;
}

$String* XIMStringConversionText::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 160));
	ret->append("length = "_s)->append((int32_t)get_length())->append(", "_s);
	ret->append("feedback = "_s)->append(get_feedback())->append(", "_s);
	ret->append("encoding_is_wchar = "_s)->append(get_encoding_is_wchar())->append(", "_s);
	ret->append("string = "_s)->append(get_string())->append(", "_s);
	return ret->toString();
}

$Object* XIMStringConversionText::clone() {
	return $of($XWrapperBase::clone());
}

void XIMStringConversionText::zero() {
	$XWrapperBase::zero();
}

$String* XIMStringConversionText::toString() {
	return $XWrapperBase::toString();
}

XIMStringConversionText::XIMStringConversionText() {
}

$Class* XIMStringConversionText::load$($String* name, bool initialize) {
	$loadClass(XIMStringConversionText, name, initialize, &_XIMStringConversionText_ClassInfo_, allocate$XIMStringConversionText);
	return class$;
}

$Class* XIMStringConversionText::class$ = nullptr;

		} // X11
	} // awt
} // sun