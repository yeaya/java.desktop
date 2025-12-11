#include <sun/awt/X11/XWMHints.h>

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
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWMHints_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XWMHints, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XWMHints, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XWMHints, pData)},
	{}
};

$MethodInfo _XWMHints_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XWMHints::*)(int64_t)>(&XWMHints::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XWMHints::*)()>(&XWMHints::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XWMHints::getSize))},
	{"get_flags", "()J", nullptr, $PUBLIC},
	{"get_icon_mask", "()J", nullptr, $PUBLIC},
	{"get_icon_pixmap", "(I)J", nullptr, $PUBLIC},
	{"get_icon_pixmap", "()J", nullptr, $PUBLIC},
	{"get_icon_window", "()J", nullptr, $PUBLIC},
	{"get_icon_x", "()I", nullptr, $PUBLIC},
	{"get_icon_y", "()I", nullptr, $PUBLIC},
	{"get_initial_state", "()I", nullptr, $PUBLIC},
	{"get_input", "()Z", nullptr, $PUBLIC},
	{"get_window_group", "()J", nullptr, $PUBLIC},
	{"set_flags", "(J)V", nullptr, $PUBLIC},
	{"set_icon_mask", "(J)V", nullptr, $PUBLIC},
	{"set_icon_pixmap", "(J)V", nullptr, $PUBLIC},
	{"set_icon_window", "(J)V", nullptr, $PUBLIC},
	{"set_icon_x", "(I)V", nullptr, $PUBLIC},
	{"set_icon_y", "(I)V", nullptr, $PUBLIC},
	{"set_initial_state", "(I)V", nullptr, $PUBLIC},
	{"set_input", "(Z)V", nullptr, $PUBLIC},
	{"set_window_group", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XWMHints_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XWMHints",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XWMHints_FieldInfo_,
	_XWMHints_MethodInfo_
};

$Object* allocate$XWMHints($Class* clazz) {
	return $of($alloc(XWMHints));
}

int32_t XWMHints::getSize() {
	$init(XWMHints);
	return 56;
}

int32_t XWMHints::getDataSize() {
	return getSize();
}

int64_t XWMHints::getPData() {
	return this->pData;
}

void XWMHints::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XWMHints::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XWMHints::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XWMHints::get_flags() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0));
}

void XWMHints::set_flags(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int32_t XWMHints::get_initial_state() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 12));
}

void XWMHints::set_initial_state(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 12, v);
}

int64_t XWMHints::get_icon_pixmap(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 16);
	return var$0 + index * $Native::getLongSize();
}

int64_t XWMHints::get_icon_pixmap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 16);
}

void XWMHints::set_icon_pixmap(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

int64_t XWMHints::get_icon_window() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XWMHints::set_icon_window(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int32_t XWMHints::get_icon_x() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 32));
}

void XWMHints::set_icon_x(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 32, v);
}

int32_t XWMHints::get_icon_y() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 36));
}

void XWMHints::set_icon_y(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 36, v);
}

int64_t XWMHints::get_icon_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 40));
}

void XWMHints::set_icon_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 40, v);
}

bool XWMHints::get_input() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 8));
}

void XWMHints::set_input(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 8, v);
}

int64_t XWMHints::get_window_group() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 48));
}

void XWMHints::set_window_group(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 48, v);
}

$String* XWMHints::getName() {
	return "XWMHints"_s;
}

$String* XWMHints::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 360));
	ret->append("flags = "_s)->append(get_flags())->append(", "_s);
	ret->append("initial_state = "_s)->append(get_initial_state())->append(", "_s);
	ret->append("icon_pixmap = "_s)->append(get_icon_pixmap())->append(", "_s);
	ret->append("icon_window = "_s)->append(get_icon_window())->append(", "_s);
	ret->append("icon_x = "_s)->append(get_icon_x())->append(", "_s);
	ret->append("icon_y = "_s)->append(get_icon_y())->append(", "_s);
	ret->append("icon_mask = "_s)->append(get_icon_mask())->append(", "_s);
	ret->append("input = "_s)->append(get_input())->append(", "_s);
	ret->append("window_group = "_s)->append(get_window_group())->append(", "_s);
	return ret->toString();
}

$Object* XWMHints::clone() {
	return $of($XWrapperBase::clone());
}

void XWMHints::zero() {
	$XWrapperBase::zero();
}

$String* XWMHints::toString() {
	return $XWrapperBase::toString();
}

XWMHints::XWMHints() {
}

$Class* XWMHints::load$($String* name, bool initialize) {
	$loadClass(XWMHints, name, initialize, &_XWMHints_ClassInfo_, allocate$XWMHints);
	return class$;
}

$Class* XWMHints::class$ = nullptr;

		} // X11
	} // awt
} // sun