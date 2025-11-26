#include <sun/awt/X11/XStandardColormap.h>

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

$FieldInfo _XStandardColormap_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XStandardColormap, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XStandardColormap, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XStandardColormap, pData)},
	{}
};

$MethodInfo _XStandardColormap_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XStandardColormap::*)(int64_t)>(&XStandardColormap::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XStandardColormap::*)()>(&XStandardColormap::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XStandardColormap::getSize))},
	{"get_base_pixel", "()J", nullptr, $PUBLIC},
	{"get_blue_max", "()J", nullptr, $PUBLIC},
	{"get_blue_mult", "()J", nullptr, $PUBLIC},
	{"get_colormap", "()J", nullptr, $PUBLIC},
	{"get_green_max", "()J", nullptr, $PUBLIC},
	{"get_green_mult", "()J", nullptr, $PUBLIC},
	{"get_killid", "()J", nullptr, $PUBLIC},
	{"get_red_max", "()J", nullptr, $PUBLIC},
	{"get_red_mult", "()J", nullptr, $PUBLIC},
	{"get_visualid", "()J", nullptr, $PUBLIC},
	{"set_base_pixel", "(J)V", nullptr, $PUBLIC},
	{"set_blue_max", "(J)V", nullptr, $PUBLIC},
	{"set_blue_mult", "(J)V", nullptr, $PUBLIC},
	{"set_colormap", "(J)V", nullptr, $PUBLIC},
	{"set_green_max", "(J)V", nullptr, $PUBLIC},
	{"set_green_mult", "(J)V", nullptr, $PUBLIC},
	{"set_killid", "(J)V", nullptr, $PUBLIC},
	{"set_red_max", "(J)V", nullptr, $PUBLIC},
	{"set_red_mult", "(J)V", nullptr, $PUBLIC},
	{"set_visualid", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XStandardColormap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XStandardColormap",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XStandardColormap_FieldInfo_,
	_XStandardColormap_MethodInfo_
};

$Object* allocate$XStandardColormap($Class* clazz) {
	return $of($alloc(XStandardColormap));
}

int32_t XStandardColormap::getSize() {
	$init(XStandardColormap);
	return 80;
}

int32_t XStandardColormap::getDataSize() {
	return getSize();
}

int64_t XStandardColormap::getPData() {
	return this->pData;
}

void XStandardColormap::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XStandardColormap::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XStandardColormap::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XStandardColormap::get_colormap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0));
}

void XStandardColormap::set_colormap(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int64_t XStandardColormap::get_red_max() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XStandardColormap::set_red_max(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

int64_t XStandardColormap::get_red_mult() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 16));
}

void XStandardColormap::set_red_mult(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

int64_t XStandardColormap::get_green_max() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XStandardColormap::set_green_max(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XStandardColormap::get_green_mult() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XStandardColormap::set_green_mult(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int64_t XStandardColormap::get_blue_max() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 40));
}

void XStandardColormap::set_blue_max(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 40, v);
}

int64_t XStandardColormap::get_blue_mult() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 48));
}

void XStandardColormap::set_blue_mult(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 48, v);
}

int64_t XStandardColormap::get_base_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 56));
}

void XStandardColormap::set_base_pixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 56, v);
}

int64_t XStandardColormap::get_visualid() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 64));
}

void XStandardColormap::set_visualid(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 64, v);
}

int64_t XStandardColormap::get_killid() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 72));
}

void XStandardColormap::set_killid(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 72, v);
}

$String* XStandardColormap::getName() {
	return "XStandardColormap"_s;
}

$String* XStandardColormap::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 400));
	ret->append("colormap = "_s)->append(get_colormap())->append(", "_s);
	ret->append("red_max = "_s)->append(get_red_max())->append(", "_s);
	ret->append("red_mult = "_s)->append(get_red_mult())->append(", "_s);
	ret->append("green_max = "_s)->append(get_green_max())->append(", "_s);
	ret->append("green_mult = "_s)->append(get_green_mult())->append(", "_s);
	ret->append("blue_max = "_s)->append(get_blue_max())->append(", "_s);
	ret->append("blue_mult = "_s)->append(get_blue_mult())->append(", "_s);
	ret->append("base_pixel = "_s)->append(get_base_pixel())->append(", "_s);
	ret->append("visualid = "_s)->append(get_visualid())->append(", "_s);
	ret->append("killid = "_s)->append(get_killid())->append(", "_s);
	return ret->toString();
}

$Object* XStandardColormap::clone() {
	return $of($XWrapperBase::clone());
}

void XStandardColormap::zero() {
	$XWrapperBase::zero();
}

$String* XStandardColormap::toString() {
	return $XWrapperBase::toString();
}

XStandardColormap::XStandardColormap() {
}

$Class* XStandardColormap::load$($String* name, bool initialize) {
	$loadClass(XStandardColormap, name, initialize, &_XStandardColormap_ClassInfo_, allocate$XStandardColormap);
	return class$;
}

$Class* XStandardColormap::class$ = nullptr;

		} // X11
	} // awt
} // sun