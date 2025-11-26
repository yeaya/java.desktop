#include <sun/awt/X11/XIMPreeditDrawCallbackStruct.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XIMText.h>
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
using $XIMText = ::sun::awt::X11::XIMText;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XIMPreeditDrawCallbackStruct_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XIMPreeditDrawCallbackStruct, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XIMPreeditDrawCallbackStruct, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XIMPreeditDrawCallbackStruct, pData)},
	{}
};

$MethodInfo _XIMPreeditDrawCallbackStruct_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XIMPreeditDrawCallbackStruct::*)(int64_t)>(&XIMPreeditDrawCallbackStruct::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XIMPreeditDrawCallbackStruct::*)()>(&XIMPreeditDrawCallbackStruct::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XIMPreeditDrawCallbackStruct::getSize))},
	{"get_caret", "()I", nullptr, $PUBLIC},
	{"get_chg_first", "()I", nullptr, $PUBLIC},
	{"get_chg_length", "()I", nullptr, $PUBLIC},
	{"get_text", "(I)Lsun/awt/X11/XIMText;", nullptr, $PUBLIC},
	{"get_text", "()J", nullptr, $PUBLIC},
	{"set_caret", "(I)V", nullptr, $PUBLIC},
	{"set_chg_first", "(I)V", nullptr, $PUBLIC},
	{"set_chg_length", "(I)V", nullptr, $PUBLIC},
	{"set_text", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XIMPreeditDrawCallbackStruct_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XIMPreeditDrawCallbackStruct",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XIMPreeditDrawCallbackStruct_FieldInfo_,
	_XIMPreeditDrawCallbackStruct_MethodInfo_
};

$Object* allocate$XIMPreeditDrawCallbackStruct($Class* clazz) {
	return $of($alloc(XIMPreeditDrawCallbackStruct));
}

int32_t XIMPreeditDrawCallbackStruct::getSize() {
	$init(XIMPreeditDrawCallbackStruct);
	return 24;
}

int32_t XIMPreeditDrawCallbackStruct::getDataSize() {
	return getSize();
}

int64_t XIMPreeditDrawCallbackStruct::getPData() {
	return this->pData;
}

void XIMPreeditDrawCallbackStruct::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XIMPreeditDrawCallbackStruct::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XIMPreeditDrawCallbackStruct::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XIMPreeditDrawCallbackStruct::get_caret() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XIMPreeditDrawCallbackStruct::set_caret(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int32_t XIMPreeditDrawCallbackStruct::get_chg_first() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 4));
}

void XIMPreeditDrawCallbackStruct::set_chg_first(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 4, v);
}

int32_t XIMPreeditDrawCallbackStruct::get_chg_length() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XIMPreeditDrawCallbackStruct::set_chg_length(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

$XIMText* XIMPreeditDrawCallbackStruct::get_text(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 16) != 0) ? ($new($XIMText, $Native::getLong(this->pData + 16) + index * 32)) : (($XIMText*)nullptr);
}

int64_t XIMPreeditDrawCallbackStruct::get_text() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 16);
}

void XIMPreeditDrawCallbackStruct::set_text(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

$String* XIMPreeditDrawCallbackStruct::getName() {
	return "XIMPreeditDrawCallbackStruct"_s;
}

$String* XIMPreeditDrawCallbackStruct::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 160));
	ret->append("caret = "_s)->append(get_caret())->append(", "_s);
	ret->append("chg_first = "_s)->append(get_chg_first())->append(", "_s);
	ret->append("chg_length = "_s)->append(get_chg_length())->append(", "_s);
	ret->append("text = "_s)->append(get_text())->append(", "_s);
	return ret->toString();
}

$Object* XIMPreeditDrawCallbackStruct::clone() {
	return $of($XWrapperBase::clone());
}

void XIMPreeditDrawCallbackStruct::zero() {
	$XWrapperBase::zero();
}

$String* XIMPreeditDrawCallbackStruct::toString() {
	return $XWrapperBase::toString();
}

XIMPreeditDrawCallbackStruct::XIMPreeditDrawCallbackStruct() {
}

$Class* XIMPreeditDrawCallbackStruct::load$($String* name, bool initialize) {
	$loadClass(XIMPreeditDrawCallbackStruct, name, initialize, &_XIMPreeditDrawCallbackStruct_ClassInfo_, allocate$XIMPreeditDrawCallbackStruct);
	return class$;
}

$Class* XIMPreeditDrawCallbackStruct::class$ = nullptr;

		} // X11
	} // awt
} // sun