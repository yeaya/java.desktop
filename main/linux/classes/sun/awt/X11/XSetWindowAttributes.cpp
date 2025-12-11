#include <sun/awt/X11/XSetWindowAttributes.h>

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

$FieldInfo _XSetWindowAttributes_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XSetWindowAttributes, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XSetWindowAttributes, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XSetWindowAttributes, pData)},
	{}
};

$MethodInfo _XSetWindowAttributes_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XSetWindowAttributes::*)(int64_t)>(&XSetWindowAttributes::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XSetWindowAttributes::*)()>(&XSetWindowAttributes::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XSetWindowAttributes::getSize))},
	{"get_background_pixel", "()J", nullptr, $PUBLIC},
	{"get_background_pixmap", "()J", nullptr, $PUBLIC},
	{"get_backing_pixel", "()J", nullptr, $PUBLIC},
	{"get_backing_planes", "()J", nullptr, $PUBLIC},
	{"get_backing_store", "()I", nullptr, $PUBLIC},
	{"get_bit_gravity", "()I", nullptr, $PUBLIC},
	{"get_border_pixel", "()J", nullptr, $PUBLIC},
	{"get_border_pixmap", "()J", nullptr, $PUBLIC},
	{"get_colormap", "()J", nullptr, $PUBLIC},
	{"get_cursor", "()J", nullptr, $PUBLIC},
	{"get_do_not_propagate_mask", "()J", nullptr, $PUBLIC},
	{"get_event_mask", "()J", nullptr, $PUBLIC},
	{"get_override_redirect", "()Z", nullptr, $PUBLIC},
	{"get_save_under", "()Z", nullptr, $PUBLIC},
	{"get_win_gravity", "()I", nullptr, $PUBLIC},
	{"set_background_pixel", "(J)V", nullptr, $PUBLIC},
	{"set_background_pixmap", "(J)V", nullptr, $PUBLIC},
	{"set_backing_pixel", "(J)V", nullptr, $PUBLIC},
	{"set_backing_planes", "(J)V", nullptr, $PUBLIC},
	{"set_backing_store", "(I)V", nullptr, $PUBLIC},
	{"set_bit_gravity", "(I)V", nullptr, $PUBLIC},
	{"set_border_pixel", "(J)V", nullptr, $PUBLIC},
	{"set_border_pixmap", "(J)V", nullptr, $PUBLIC},
	{"set_colormap", "(J)V", nullptr, $PUBLIC},
	{"set_cursor", "(J)V", nullptr, $PUBLIC},
	{"set_do_not_propagate_mask", "(J)V", nullptr, $PUBLIC},
	{"set_event_mask", "(J)V", nullptr, $PUBLIC},
	{"set_override_redirect", "(Z)V", nullptr, $PUBLIC},
	{"set_save_under", "(Z)V", nullptr, $PUBLIC},
	{"set_win_gravity", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XSetWindowAttributes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XSetWindowAttributes",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XSetWindowAttributes_FieldInfo_,
	_XSetWindowAttributes_MethodInfo_
};

$Object* allocate$XSetWindowAttributes($Class* clazz) {
	return $of($alloc(XSetWindowAttributes));
}

int32_t XSetWindowAttributes::getSize() {
	$init(XSetWindowAttributes);
	return 112;
}

int32_t XSetWindowAttributes::getDataSize() {
	return getSize();
}

int64_t XSetWindowAttributes::getPData() {
	return this->pData;
}

void XSetWindowAttributes::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XSetWindowAttributes::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XSetWindowAttributes::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XSetWindowAttributes::get_background_pixmap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0));
}

void XSetWindowAttributes::set_background_pixmap(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int64_t XSetWindowAttributes::get_background_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XSetWindowAttributes::set_background_pixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

int64_t XSetWindowAttributes::get_border_pixmap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 16));
}

void XSetWindowAttributes::set_border_pixmap(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

int64_t XSetWindowAttributes::get_border_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XSetWindowAttributes::set_border_pixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int32_t XSetWindowAttributes::get_bit_gravity() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 32));
}

void XSetWindowAttributes::set_bit_gravity(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 32, v);
}

int32_t XSetWindowAttributes::get_win_gravity() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 36));
}

void XSetWindowAttributes::set_win_gravity(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 36, v);
}

int32_t XSetWindowAttributes::get_backing_store() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XSetWindowAttributes::set_backing_store(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int64_t XSetWindowAttributes::get_backing_planes() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 48));
}

void XSetWindowAttributes::set_backing_planes(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 48, v);
}

int64_t XSetWindowAttributes::get_backing_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 56));
}

void XSetWindowAttributes::set_backing_pixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 56, v);
}

bool XSetWindowAttributes::get_save_under() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 64));
}

void XSetWindowAttributes::set_save_under(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 64, v);
}

int64_t XSetWindowAttributes::get_event_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 72));
}

void XSetWindowAttributes::set_event_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 72, v);
}

int64_t XSetWindowAttributes::get_do_not_propagate_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 80));
}

void XSetWindowAttributes::set_do_not_propagate_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 80, v);
}

bool XSetWindowAttributes::get_override_redirect() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 88));
}

void XSetWindowAttributes::set_override_redirect(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 88, v);
}

int64_t XSetWindowAttributes::get_colormap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 96));
}

void XSetWindowAttributes::set_colormap(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 96, v);
}

int64_t XSetWindowAttributes::get_cursor() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 104));
}

void XSetWindowAttributes::set_cursor(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 104, v);
}

$String* XSetWindowAttributes::getName() {
	return "XSetWindowAttributes"_s;
}

$String* XSetWindowAttributes::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 600));
	ret->append("background_pixmap = "_s)->append(get_background_pixmap())->append(", "_s);
	ret->append("background_pixel = "_s)->append(get_background_pixel())->append(", "_s);
	ret->append("border_pixmap = "_s)->append(get_border_pixmap())->append(", "_s);
	ret->append("border_pixel = "_s)->append(get_border_pixel())->append(", "_s);
	ret->append("bit_gravity = "_s)->append(get_bit_gravity())->append(", "_s);
	ret->append("win_gravity = "_s)->append(get_win_gravity())->append(", "_s);
	ret->append("backing_store = "_s)->append(get_backing_store())->append(", "_s);
	ret->append("backing_planes = "_s)->append(get_backing_planes())->append(", "_s);
	ret->append("backing_pixel = "_s)->append(get_backing_pixel())->append(", "_s);
	ret->append("save_under = "_s)->append(get_save_under())->append(", "_s);
	ret->append("event_mask = "_s)->append(get_event_mask())->append(", "_s);
	ret->append("do_not_propagate_mask = "_s)->append(get_do_not_propagate_mask())->append(", "_s);
	ret->append("override_redirect = "_s)->append(get_override_redirect())->append(", "_s);
	ret->append("colormap = "_s)->append(get_colormap())->append(", "_s);
	ret->append("cursor = "_s)->append(get_cursor())->append(", "_s);
	return ret->toString();
}

$Object* XSetWindowAttributes::clone() {
	return $of($XWrapperBase::clone());
}

void XSetWindowAttributes::zero() {
	$XWrapperBase::zero();
}

$String* XSetWindowAttributes::toString() {
	return $XWrapperBase::toString();
}

XSetWindowAttributes::XSetWindowAttributes() {
}

$Class* XSetWindowAttributes::load$($String* name, bool initialize) {
	$loadClass(XSetWindowAttributes, name, initialize, &_XSetWindowAttributes_ClassInfo_, allocate$XSetWindowAttributes);
	return class$;
}

$Class* XSetWindowAttributes::class$ = nullptr;

		} // X11
	} // awt
} // sun