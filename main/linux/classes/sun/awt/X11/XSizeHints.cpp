#include <sun/awt/X11/XSizeHints.h>

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

$FieldInfo _XSizeHints_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XSizeHints, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XSizeHints, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XSizeHints, pData)},
	{}
};

$MethodInfo _XSizeHints_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XSizeHints::*)(int64_t)>(&XSizeHints::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XSizeHints::*)()>(&XSizeHints::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XSizeHints::getSize))},
	{"get_base_height", "()I", nullptr, $PUBLIC},
	{"get_base_width", "()I", nullptr, $PUBLIC},
	{"get_flags", "()J", nullptr, $PUBLIC},
	{"get_height", "()I", nullptr, $PUBLIC},
	{"get_height_inc", "()I", nullptr, $PUBLIC},
	{"get_max_aspect_x", "()I", nullptr, $PUBLIC},
	{"get_max_aspect_y", "()I", nullptr, $PUBLIC},
	{"get_max_height", "()I", nullptr, $PUBLIC},
	{"get_max_width", "()I", nullptr, $PUBLIC},
	{"get_min_aspect_x", "()I", nullptr, $PUBLIC},
	{"get_min_aspect_y", "()I", nullptr, $PUBLIC},
	{"get_min_height", "()I", nullptr, $PUBLIC},
	{"get_min_width", "()I", nullptr, $PUBLIC},
	{"get_width", "()I", nullptr, $PUBLIC},
	{"get_width_inc", "()I", nullptr, $PUBLIC},
	{"get_win_gravity", "()I", nullptr, $PUBLIC},
	{"get_x", "()I", nullptr, $PUBLIC},
	{"get_y", "()I", nullptr, $PUBLIC},
	{"set_base_height", "(I)V", nullptr, $PUBLIC},
	{"set_base_width", "(I)V", nullptr, $PUBLIC},
	{"set_flags", "(J)V", nullptr, $PUBLIC},
	{"set_height", "(I)V", nullptr, $PUBLIC},
	{"set_height_inc", "(I)V", nullptr, $PUBLIC},
	{"set_max_aspect_x", "(I)V", nullptr, $PUBLIC},
	{"set_max_aspect_y", "(I)V", nullptr, $PUBLIC},
	{"set_max_height", "(I)V", nullptr, $PUBLIC},
	{"set_max_width", "(I)V", nullptr, $PUBLIC},
	{"set_min_aspect_x", "(I)V", nullptr, $PUBLIC},
	{"set_min_aspect_y", "(I)V", nullptr, $PUBLIC},
	{"set_min_height", "(I)V", nullptr, $PUBLIC},
	{"set_min_width", "(I)V", nullptr, $PUBLIC},
	{"set_width", "(I)V", nullptr, $PUBLIC},
	{"set_width_inc", "(I)V", nullptr, $PUBLIC},
	{"set_win_gravity", "(I)V", nullptr, $PUBLIC},
	{"set_x", "(I)V", nullptr, $PUBLIC},
	{"set_y", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XSizeHints_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XSizeHints",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XSizeHints_FieldInfo_,
	_XSizeHints_MethodInfo_
};

$Object* allocate$XSizeHints($Class* clazz) {
	return $of($alloc(XSizeHints));
}

int32_t XSizeHints::getSize() {
	$init(XSizeHints);
	return 80;
}

int32_t XSizeHints::getDataSize() {
	return getSize();
}

int64_t XSizeHints::getPData() {
	return this->pData;
}

void XSizeHints::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XSizeHints::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XSizeHints::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XSizeHints::get_flags() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0));
}

void XSizeHints::set_flags(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int32_t XSizeHints::get_x() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XSizeHints::set_x(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

int32_t XSizeHints::get_y() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 12));
}

void XSizeHints::set_y(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 12, v);
}

int32_t XSizeHints::get_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 16));
}

void XSizeHints::set_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 16, v);
}

int32_t XSizeHints::get_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 20));
}

void XSizeHints::set_height(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 20, v);
}

int32_t XSizeHints::get_min_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 24));
}

void XSizeHints::set_min_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 24, v);
}

int32_t XSizeHints::get_min_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 28));
}

void XSizeHints::set_min_height(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 28, v);
}

int32_t XSizeHints::get_max_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 32));
}

void XSizeHints::set_max_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 32, v);
}

int32_t XSizeHints::get_max_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 36));
}

void XSizeHints::set_max_height(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 36, v);
}

int32_t XSizeHints::get_width_inc() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XSizeHints::set_width_inc(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XSizeHints::get_height_inc() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XSizeHints::set_height_inc(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

int32_t XSizeHints::get_min_aspect_x() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XSizeHints::set_min_aspect_x(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int32_t XSizeHints::get_min_aspect_y() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 52));
}

void XSizeHints::set_min_aspect_y(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 52, v);
}

int32_t XSizeHints::get_max_aspect_x() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 56));
}

void XSizeHints::set_max_aspect_x(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 56, v);
}

int32_t XSizeHints::get_max_aspect_y() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 60));
}

void XSizeHints::set_max_aspect_y(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 60, v);
}

int32_t XSizeHints::get_base_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 64));
}

void XSizeHints::set_base_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 64, v);
}

int32_t XSizeHints::get_base_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 68));
}

void XSizeHints::set_base_height(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 68, v);
}

int32_t XSizeHints::get_win_gravity() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 72));
}

void XSizeHints::set_win_gravity(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 72, v);
}

$String* XSizeHints::getName() {
	return "XSizeHints"_s;
}

$String* XSizeHints::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 720));
	ret->append("flags = "_s)->append(get_flags())->append(", "_s);
	ret->append("x = "_s)->append(get_x())->append(", "_s);
	ret->append("y = "_s)->append(get_y())->append(", "_s);
	ret->append("width = "_s)->append(get_width())->append(", "_s);
	ret->append("height = "_s)->append(get_height())->append(", "_s);
	ret->append("min_width = "_s)->append(get_min_width())->append(", "_s);
	ret->append("min_height = "_s)->append(get_min_height())->append(", "_s);
	ret->append("max_width = "_s)->append(get_max_width())->append(", "_s);
	ret->append("max_height = "_s)->append(get_max_height())->append(", "_s);
	ret->append("width_inc = "_s)->append(get_width_inc())->append(", "_s);
	ret->append("height_inc = "_s)->append(get_height_inc())->append(", "_s);
	ret->append("min_aspect_x = "_s)->append(get_min_aspect_x())->append(", "_s);
	ret->append("min_aspect_y = "_s)->append(get_min_aspect_y())->append(", "_s);
	ret->append("max_aspect_x = "_s)->append(get_max_aspect_x())->append(", "_s);
	ret->append("max_aspect_y = "_s)->append(get_max_aspect_y())->append(", "_s);
	ret->append("base_width = "_s)->append(get_base_width())->append(", "_s);
	ret->append("base_height = "_s)->append(get_base_height())->append(", "_s);
	ret->append("win_gravity = "_s)->append(get_win_gravity())->append(", "_s);
	return ret->toString();
}

$Object* XSizeHints::clone() {
	return $of($XWrapperBase::clone());
}

void XSizeHints::zero() {
	$XWrapperBase::zero();
}

$String* XSizeHints::toString() {
	return $XWrapperBase::toString();
}

XSizeHints::XSizeHints() {
}

$Class* XSizeHints::load$($String* name, bool initialize) {
	$loadClass(XSizeHints, name, initialize, &_XSizeHints_ClassInfo_, allocate$XSizeHints);
	return class$;
}

$Class* XSizeHints::class$ = nullptr;

		} // X11
	} // awt
} // sun