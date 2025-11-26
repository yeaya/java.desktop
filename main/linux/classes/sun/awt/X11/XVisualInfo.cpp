#include <sun/awt/X11/XVisualInfo.h>

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

$FieldInfo _XVisualInfo_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XVisualInfo, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XVisualInfo, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XVisualInfo, pData)},
	{}
};

$MethodInfo _XVisualInfo_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XVisualInfo::*)(int64_t)>(&XVisualInfo::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XVisualInfo::*)()>(&XVisualInfo::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XVisualInfo::getSize))},
	{"get_bits_per_rgb", "()I", nullptr, $PUBLIC},
	{"get_blue_mask", "()J", nullptr, $PUBLIC},
	{"get_class", "()I", nullptr, $PUBLIC},
	{"get_colormap_size", "()I", nullptr, $PUBLIC},
	{"get_depth", "()I", nullptr, $PUBLIC},
	{"get_green_mask", "()J", nullptr, $PUBLIC},
	{"get_red_mask", "()J", nullptr, $PUBLIC},
	{"get_screen", "()I", nullptr, $PUBLIC},
	{"get_visual", "(I)J", nullptr, $PUBLIC},
	{"get_visual", "()J", nullptr, $PUBLIC},
	{"get_visualid", "()J", nullptr, $PUBLIC},
	{"set_bits_per_rgb", "(I)V", nullptr, $PUBLIC},
	{"set_blue_mask", "(J)V", nullptr, $PUBLIC},
	{"set_class", "(I)V", nullptr, $PUBLIC},
	{"set_colormap_size", "(I)V", nullptr, $PUBLIC},
	{"set_depth", "(I)V", nullptr, $PUBLIC},
	{"set_green_mask", "(J)V", nullptr, $PUBLIC},
	{"set_red_mask", "(J)V", nullptr, $PUBLIC},
	{"set_screen", "(I)V", nullptr, $PUBLIC},
	{"set_visual", "(J)V", nullptr, $PUBLIC},
	{"set_visualid", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XVisualInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XVisualInfo",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XVisualInfo_FieldInfo_,
	_XVisualInfo_MethodInfo_
};

$Object* allocate$XVisualInfo($Class* clazz) {
	return $of($alloc(XVisualInfo));
}

int32_t XVisualInfo::getSize() {
	$init(XVisualInfo);
	return 64;
}

int32_t XVisualInfo::getDataSize() {
	return getSize();
}

int64_t XVisualInfo::getPData() {
	return this->pData;
}

void XVisualInfo::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XVisualInfo::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XVisualInfo::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XVisualInfo::get_visual(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 0);
	return var$0 + index * $Native::getLongSize();
}

int64_t XVisualInfo::get_visual() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 0);
}

void XVisualInfo::set_visual(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int64_t XVisualInfo::get_visualid() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XVisualInfo::set_visualid(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

int32_t XVisualInfo::get_screen() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 16));
}

void XVisualInfo::set_screen(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 16, v);
}

int32_t XVisualInfo::get_depth() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 20));
}

void XVisualInfo::set_depth(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 20, v);
}

int32_t XVisualInfo::get_class() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 24));
}

void XVisualInfo::set_class(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 24, v);
}

int64_t XVisualInfo::get_red_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XVisualInfo::set_red_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int64_t XVisualInfo::get_green_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 40));
}

void XVisualInfo::set_green_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 40, v);
}

int64_t XVisualInfo::get_blue_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 48));
}

void XVisualInfo::set_blue_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 48, v);
}

int32_t XVisualInfo::get_colormap_size() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 56));
}

void XVisualInfo::set_colormap_size(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 56, v);
}

int32_t XVisualInfo::get_bits_per_rgb() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 60));
}

void XVisualInfo::set_bits_per_rgb(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 60, v);
}

$String* XVisualInfo::getName() {
	return "XVisualInfo"_s;
}

$String* XVisualInfo::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 400));
	ret->append("visual = "_s)->append(get_visual())->append(", "_s);
	ret->append("visualid = "_s)->append(get_visualid())->append(", "_s);
	ret->append("screen = "_s)->append(get_screen())->append(", "_s);
	ret->append("depth = "_s)->append(get_depth())->append(", "_s);
	ret->append("class = "_s)->append(get_class())->append(", "_s);
	ret->append("red_mask = "_s)->append(get_red_mask())->append(", "_s);
	ret->append("green_mask = "_s)->append(get_green_mask())->append(", "_s);
	ret->append("blue_mask = "_s)->append(get_blue_mask())->append(", "_s);
	ret->append("colormap_size = "_s)->append(get_colormap_size())->append(", "_s);
	ret->append("bits_per_rgb = "_s)->append(get_bits_per_rgb())->append(", "_s);
	return ret->toString();
}

$Object* XVisualInfo::clone() {
	return $of($XWrapperBase::clone());
}

void XVisualInfo::zero() {
	$XWrapperBase::zero();
}

$String* XVisualInfo::toString() {
	return $XWrapperBase::toString();
}

XVisualInfo::XVisualInfo() {
}

$Class* XVisualInfo::load$($String* name, bool initialize) {
	$loadClass(XVisualInfo, name, initialize, &_XVisualInfo_ClassInfo_, allocate$XVisualInfo);
	return class$;
}

$Class* XVisualInfo::class$ = nullptr;

		} // X11
	} // awt
} // sun