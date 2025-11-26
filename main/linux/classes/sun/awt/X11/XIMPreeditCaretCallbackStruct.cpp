#include <sun/awt/X11/XIMPreeditCaretCallbackStruct.h>

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

$FieldInfo _XIMPreeditCaretCallbackStruct_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XIMPreeditCaretCallbackStruct, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XIMPreeditCaretCallbackStruct, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XIMPreeditCaretCallbackStruct, pData)},
	{}
};

$MethodInfo _XIMPreeditCaretCallbackStruct_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XIMPreeditCaretCallbackStruct::*)(int64_t)>(&XIMPreeditCaretCallbackStruct::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XIMPreeditCaretCallbackStruct::*)()>(&XIMPreeditCaretCallbackStruct::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XIMPreeditCaretCallbackStruct::getSize))},
	{"get_direction", "()I", nullptr, $PUBLIC},
	{"get_position", "()I", nullptr, $PUBLIC},
	{"get_style", "()I", nullptr, $PUBLIC},
	{"set_direction", "(I)V", nullptr, $PUBLIC},
	{"set_position", "(I)V", nullptr, $PUBLIC},
	{"set_style", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XIMPreeditCaretCallbackStruct_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XIMPreeditCaretCallbackStruct",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XIMPreeditCaretCallbackStruct_FieldInfo_,
	_XIMPreeditCaretCallbackStruct_MethodInfo_
};

$Object* allocate$XIMPreeditCaretCallbackStruct($Class* clazz) {
	return $of($alloc(XIMPreeditCaretCallbackStruct));
}

int32_t XIMPreeditCaretCallbackStruct::getSize() {
	$init(XIMPreeditCaretCallbackStruct);
	return 12;
}

int32_t XIMPreeditCaretCallbackStruct::getDataSize() {
	return getSize();
}

int64_t XIMPreeditCaretCallbackStruct::getPData() {
	return this->pData;
}

void XIMPreeditCaretCallbackStruct::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XIMPreeditCaretCallbackStruct::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XIMPreeditCaretCallbackStruct::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XIMPreeditCaretCallbackStruct::get_position() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XIMPreeditCaretCallbackStruct::set_position(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int32_t XIMPreeditCaretCallbackStruct::get_direction() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 4));
}

void XIMPreeditCaretCallbackStruct::set_direction(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 4, v);
}

int32_t XIMPreeditCaretCallbackStruct::get_style() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XIMPreeditCaretCallbackStruct::set_style(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

$String* XIMPreeditCaretCallbackStruct::getName() {
	return "XIMPreeditCaretCallbackStruct"_s;
}

$String* XIMPreeditCaretCallbackStruct::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 120));
	ret->append("position = "_s)->append(get_position())->append(", "_s);
	ret->append("direction = "_s)->append(get_direction())->append(", "_s);
	ret->append("style = "_s)->append(get_style())->append(", "_s);
	return ret->toString();
}

$Object* XIMPreeditCaretCallbackStruct::clone() {
	return $of($XWrapperBase::clone());
}

void XIMPreeditCaretCallbackStruct::zero() {
	$XWrapperBase::zero();
}

$String* XIMPreeditCaretCallbackStruct::toString() {
	return $XWrapperBase::toString();
}

XIMPreeditCaretCallbackStruct::XIMPreeditCaretCallbackStruct() {
}

$Class* XIMPreeditCaretCallbackStruct::load$($String* name, bool initialize) {
	$loadClass(XIMPreeditCaretCallbackStruct, name, initialize, &_XIMPreeditCaretCallbackStruct_ClassInfo_, allocate$XIMPreeditCaretCallbackStruct);
	return class$;
}

$Class* XIMPreeditCaretCallbackStruct::class$ = nullptr;

		} // X11
	} // awt
} // sun