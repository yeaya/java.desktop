#include <sun/awt/X11/XIMText.h>

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

$FieldInfo _XIMText_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XIMText, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XIMText, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XIMText, pData)},
	{}
};

$MethodInfo _XIMText_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XIMText::*)(int64_t)>(&XIMText::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XIMText::*)()>(&XIMText::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XIMText::getSize))},
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

$ClassInfo _XIMText_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XIMText",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XIMText_FieldInfo_,
	_XIMText_MethodInfo_
};

$Object* allocate$XIMText($Class* clazz) {
	return $of($alloc(XIMText));
}

int32_t XIMText::getSize() {
	$init(XIMText);
	return 32;
}

int32_t XIMText::getDataSize() {
	return getSize();
}

int64_t XIMText::getPData() {
	return this->pData;
}

void XIMText::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XIMText::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XIMText::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int16_t XIMText::get_length() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 0));
}

void XIMText::set_length(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 0, v);
}

int64_t XIMText::get_feedback(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 8);
	return var$0 + index * $Native::getLongSize();
}

int64_t XIMText::get_feedback() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 8);
}

void XIMText::set_feedback(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XIMText::get_encoding_is_wchar() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XIMText::set_encoding_is_wchar(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XIMText::get_string(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 24);
	return var$0 + index * $Native::getLongSize();
}

int64_t XIMText::get_string() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 24);
}

void XIMText::set_string(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

$String* XIMText::getName() {
	return "XIMText"_s;
}

$String* XIMText::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 160));
	ret->append("length = "_s)->append((int32_t)get_length())->append(", "_s);
	ret->append("feedback = "_s)->append(get_feedback())->append(", "_s);
	ret->append("encoding_is_wchar = "_s)->append(get_encoding_is_wchar())->append(", "_s);
	ret->append("string = "_s)->append(get_string())->append(", "_s);
	return ret->toString();
}

$Object* XIMText::clone() {
	return $of($XWrapperBase::clone());
}

void XIMText::zero() {
	$XWrapperBase::zero();
}

$String* XIMText::toString() {
	return $XWrapperBase::toString();
}

XIMText::XIMText() {
}

$Class* XIMText::load$($String* name, bool initialize) {
	$loadClass(XIMText, name, initialize, &_XIMText_ClassInfo_, allocate$XIMText);
	return class$;
}

$Class* XIMText::class$ = nullptr;

		} // X11
	} // awt
} // sun