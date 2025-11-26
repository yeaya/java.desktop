#include <sun/awt/X11/XIMStringConversionCallbackStruct.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XIMStringConversionText.h>
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
using $XIMStringConversionText = ::sun::awt::X11::XIMStringConversionText;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XIMStringConversionCallbackStruct_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XIMStringConversionCallbackStruct, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XIMStringConversionCallbackStruct, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XIMStringConversionCallbackStruct, pData)},
	{}
};

$MethodInfo _XIMStringConversionCallbackStruct_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XIMStringConversionCallbackStruct::*)(int64_t)>(&XIMStringConversionCallbackStruct::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XIMStringConversionCallbackStruct::*)()>(&XIMStringConversionCallbackStruct::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XIMStringConversionCallbackStruct::getSize))},
	{"get_direction", "()I", nullptr, $PUBLIC},
	{"get_factor", "()S", nullptr, $PUBLIC},
	{"get_operation", "()S", nullptr, $PUBLIC},
	{"get_position", "()S", nullptr, $PUBLIC},
	{"get_text", "(I)Lsun/awt/X11/XIMStringConversionText;", nullptr, $PUBLIC},
	{"get_text", "()J", nullptr, $PUBLIC},
	{"set_direction", "(I)V", nullptr, $PUBLIC},
	{"set_factor", "(S)V", nullptr, $PUBLIC},
	{"set_operation", "(S)V", nullptr, $PUBLIC},
	{"set_position", "(S)V", nullptr, $PUBLIC},
	{"set_text", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XIMStringConversionCallbackStruct_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XIMStringConversionCallbackStruct",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XIMStringConversionCallbackStruct_FieldInfo_,
	_XIMStringConversionCallbackStruct_MethodInfo_
};

$Object* allocate$XIMStringConversionCallbackStruct($Class* clazz) {
	return $of($alloc(XIMStringConversionCallbackStruct));
}

int32_t XIMStringConversionCallbackStruct::getSize() {
	$init(XIMStringConversionCallbackStruct);
	return 24;
}

int32_t XIMStringConversionCallbackStruct::getDataSize() {
	return getSize();
}

int64_t XIMStringConversionCallbackStruct::getPData() {
	return this->pData;
}

void XIMStringConversionCallbackStruct::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XIMStringConversionCallbackStruct::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XIMStringConversionCallbackStruct::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int16_t XIMStringConversionCallbackStruct::get_position() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 0));
}

void XIMStringConversionCallbackStruct::set_position(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 0, v);
}

int32_t XIMStringConversionCallbackStruct::get_direction() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 4));
}

void XIMStringConversionCallbackStruct::set_direction(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 4, v);
}

int16_t XIMStringConversionCallbackStruct::get_operation() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 8));
}

void XIMStringConversionCallbackStruct::set_operation(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 8, v);
}

int16_t XIMStringConversionCallbackStruct::get_factor() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 10));
}

void XIMStringConversionCallbackStruct::set_factor(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 10, v);
}

$XIMStringConversionText* XIMStringConversionCallbackStruct::get_text(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 16) != 0) ? ($new($XIMStringConversionText, $Native::getLong(this->pData + 16) + index * 32)) : (($XIMStringConversionText*)nullptr);
}

int64_t XIMStringConversionCallbackStruct::get_text() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 16);
}

void XIMStringConversionCallbackStruct::set_text(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

$String* XIMStringConversionCallbackStruct::getName() {
	return "XIMStringConversionCallbackStruct"_s;
}

$String* XIMStringConversionCallbackStruct::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 200));
	ret->append("position = "_s)->append((int32_t)get_position())->append(", "_s);
	ret->append("direction = "_s)->append(get_direction())->append(", "_s);
	ret->append("operation = "_s)->append((int32_t)get_operation())->append(", "_s);
	ret->append("factor = "_s)->append((int32_t)get_factor())->append(", "_s);
	ret->append("text = "_s)->append(get_text())->append(", "_s);
	return ret->toString();
}

$Object* XIMStringConversionCallbackStruct::clone() {
	return $of($XWrapperBase::clone());
}

void XIMStringConversionCallbackStruct::zero() {
	$XWrapperBase::zero();
}

$String* XIMStringConversionCallbackStruct::toString() {
	return $XWrapperBase::toString();
}

XIMStringConversionCallbackStruct::XIMStringConversionCallbackStruct() {
}

$Class* XIMStringConversionCallbackStruct::load$($String* name, bool initialize) {
	$loadClass(XIMStringConversionCallbackStruct, name, initialize, &_XIMStringConversionCallbackStruct_ClassInfo_, allocate$XIMStringConversionCallbackStruct);
	return class$;
}

$Class* XIMStringConversionCallbackStruct::class$ = nullptr;

		} // X11
	} // awt
} // sun