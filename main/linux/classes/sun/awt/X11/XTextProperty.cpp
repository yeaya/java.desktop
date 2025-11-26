#include <sun/awt/X11/XTextProperty.h>

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

$FieldInfo _XTextProperty_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XTextProperty, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XTextProperty, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XTextProperty, pData)},
	{}
};

$MethodInfo _XTextProperty_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XTextProperty::*)(int64_t)>(&XTextProperty::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XTextProperty::*)()>(&XTextProperty::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XTextProperty::getSize))},
	{"get_encoding", "()J", nullptr, $PUBLIC},
	{"get_format", "()I", nullptr, $PUBLIC},
	{"get_nitems", "()J", nullptr, $PUBLIC},
	{"get_value", "(I)B", nullptr, $PUBLIC},
	{"get_value", "()J", nullptr, $PUBLIC},
	{"set_encoding", "(J)V", nullptr, $PUBLIC},
	{"set_format", "(I)V", nullptr, $PUBLIC},
	{"set_nitems", "(J)V", nullptr, $PUBLIC},
	{"set_value", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XTextProperty_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XTextProperty",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XTextProperty_FieldInfo_,
	_XTextProperty_MethodInfo_
};

$Object* allocate$XTextProperty($Class* clazz) {
	return $of($alloc(XTextProperty));
}

int32_t XTextProperty::getSize() {
	$init(XTextProperty);
	return 32;
}

int32_t XTextProperty::getDataSize() {
	return getSize();
}

int64_t XTextProperty::getPData() {
	return this->pData;
}

void XTextProperty::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XTextProperty::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XTextProperty::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int8_t XTextProperty::get_value(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getByte($Native::getLong(this->pData + 0) + index * 1);
}

int64_t XTextProperty::get_value() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 0);
}

void XTextProperty::set_value(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int64_t XTextProperty::get_encoding() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XTextProperty::set_encoding(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

int32_t XTextProperty::get_format() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 16));
}

void XTextProperty::set_format(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 16, v);
}

int64_t XTextProperty::get_nitems() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XTextProperty::set_nitems(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

$String* XTextProperty::getName() {
	return "XTextProperty"_s;
}

$String* XTextProperty::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 160));
	ret->append("value = "_s)->append(get_value())->append(", "_s);
	ret->append("encoding = "_s)->append(get_encoding())->append(", "_s);
	ret->append("format = "_s)->append(get_format())->append(", "_s);
	ret->append("nitems = "_s)->append(get_nitems())->append(", "_s);
	return ret->toString();
}

$Object* XTextProperty::clone() {
	return $of($XWrapperBase::clone());
}

void XTextProperty::zero() {
	$XWrapperBase::zero();
}

$String* XTextProperty::toString() {
	return $XWrapperBase::toString();
}

XTextProperty::XTextProperty() {
}

$Class* XTextProperty::load$($String* name, bool initialize) {
	$loadClass(XTextProperty, name, initialize, &_XTextProperty_ClassInfo_, allocate$XTextProperty);
	return class$;
}

$Class* XTextProperty::class$ = nullptr;

		} // X11
	} // awt
} // sun