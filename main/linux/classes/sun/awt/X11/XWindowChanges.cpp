#include <sun/awt/X11/XWindowChanges.h>

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

$FieldInfo _XWindowChanges_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XWindowChanges, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XWindowChanges, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XWindowChanges, pData)},
	{}
};

$MethodInfo _XWindowChanges_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XWindowChanges::*)(int64_t)>(&XWindowChanges::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XWindowChanges::*)()>(&XWindowChanges::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XWindowChanges::getSize))},
	{"get_border_width", "()I", nullptr, $PUBLIC},
	{"get_height", "()I", nullptr, $PUBLIC},
	{"get_sibling", "()J", nullptr, $PUBLIC},
	{"get_stack_mode", "()I", nullptr, $PUBLIC},
	{"get_width", "()I", nullptr, $PUBLIC},
	{"get_x", "()I", nullptr, $PUBLIC},
	{"get_y", "()I", nullptr, $PUBLIC},
	{"set_border_width", "(I)V", nullptr, $PUBLIC},
	{"set_height", "(I)V", nullptr, $PUBLIC},
	{"set_sibling", "(J)V", nullptr, $PUBLIC},
	{"set_stack_mode", "(I)V", nullptr, $PUBLIC},
	{"set_width", "(I)V", nullptr, $PUBLIC},
	{"set_x", "(I)V", nullptr, $PUBLIC},
	{"set_y", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XWindowChanges_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XWindowChanges",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XWindowChanges_FieldInfo_,
	_XWindowChanges_MethodInfo_
};

$Object* allocate$XWindowChanges($Class* clazz) {
	return $of($alloc(XWindowChanges));
}

int32_t XWindowChanges::getSize() {
	$init(XWindowChanges);
	return 40;
}

int32_t XWindowChanges::getDataSize() {
	return getSize();
}

int64_t XWindowChanges::getPData() {
	return this->pData;
}

void XWindowChanges::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XWindowChanges::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XWindowChanges::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XWindowChanges::get_x() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XWindowChanges::set_x(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int32_t XWindowChanges::get_y() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 4));
}

void XWindowChanges::set_y(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 4, v);
}

int32_t XWindowChanges::get_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XWindowChanges::set_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

int32_t XWindowChanges::get_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 12));
}

void XWindowChanges::set_height(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 12, v);
}

int32_t XWindowChanges::get_border_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 16));
}

void XWindowChanges::set_border_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 16, v);
}

int64_t XWindowChanges::get_sibling() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XWindowChanges::set_sibling(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int32_t XWindowChanges::get_stack_mode() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 32));
}

void XWindowChanges::set_stack_mode(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 32, v);
}

$String* XWindowChanges::getName() {
	return "XWindowChanges"_s;
}

$String* XWindowChanges::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 280));
	ret->append("x = "_s)->append(get_x())->append(", "_s);
	ret->append("y = "_s)->append(get_y())->append(", "_s);
	ret->append("width = "_s)->append(get_width())->append(", "_s);
	ret->append("height = "_s)->append(get_height())->append(", "_s);
	ret->append("border_width = "_s)->append(get_border_width())->append(", "_s);
	ret->append("sibling = "_s)->append(get_sibling())->append(", "_s);
	ret->append("stack_mode = "_s)->append(get_stack_mode())->append(", "_s);
	return ret->toString();
}

$Object* XWindowChanges::clone() {
	return $of($XWrapperBase::clone());
}

void XWindowChanges::zero() {
	$XWrapperBase::zero();
}

$String* XWindowChanges::toString() {
	return $XWrapperBase::toString();
}

XWindowChanges::XWindowChanges() {
}

$Class* XWindowChanges::load$($String* name, bool initialize) {
	$loadClass(XWindowChanges, name, initialize, &_XWindowChanges_ClassInfo_, allocate$XWindowChanges);
	return class$;
}

$Class* XWindowChanges::class$ = nullptr;

		} // X11
	} // awt
} // sun