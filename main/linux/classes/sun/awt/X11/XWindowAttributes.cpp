#include <sun/awt/X11/XWindowAttributes.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/Screen.h>
#include <sun/awt/X11/Visual.h>
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
using $Screen = ::sun::awt::X11::Screen;
using $Visual = ::sun::awt::X11::Visual;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWindowAttributes_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XWindowAttributes, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XWindowAttributes, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XWindowAttributes, pData)},
	{}
};

$MethodInfo _XWindowAttributes_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XWindowAttributes::*)(int64_t)>(&XWindowAttributes::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XWindowAttributes::*)()>(&XWindowAttributes::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XWindowAttributes::getSize))},
	{"get_all_event_masks", "()J", nullptr, $PUBLIC},
	{"get_backing_pixel", "()J", nullptr, $PUBLIC},
	{"get_backing_planes", "()J", nullptr, $PUBLIC},
	{"get_backing_store", "()I", nullptr, $PUBLIC},
	{"get_bit_gravity", "()I", nullptr, $PUBLIC},
	{"get_border_width", "()I", nullptr, $PUBLIC},
	{"get_class", "()I", nullptr, $PUBLIC},
	{"get_colormap", "()J", nullptr, $PUBLIC},
	{"get_depth", "()I", nullptr, $PUBLIC},
	{"get_do_not_propagate_mask", "()J", nullptr, $PUBLIC},
	{"get_height", "()I", nullptr, $PUBLIC},
	{"get_map_installed", "()Z", nullptr, $PUBLIC},
	{"get_map_state", "()I", nullptr, $PUBLIC},
	{"get_override_redirect", "()Z", nullptr, $PUBLIC},
	{"get_root", "()J", nullptr, $PUBLIC},
	{"get_save_under", "()Z", nullptr, $PUBLIC},
	{"get_screen", "(I)Lsun/awt/X11/Screen;", nullptr, $PUBLIC},
	{"get_screen", "()J", nullptr, $PUBLIC},
	{"get_visual", "(I)Lsun/awt/X11/Visual;", nullptr, $PUBLIC},
	{"get_visual", "()J", nullptr, $PUBLIC},
	{"get_width", "()I", nullptr, $PUBLIC},
	{"get_win_gravity", "()I", nullptr, $PUBLIC},
	{"get_x", "()I", nullptr, $PUBLIC},
	{"get_y", "()I", nullptr, $PUBLIC},
	{"get_your_event_mask", "()J", nullptr, $PUBLIC},
	{"set_all_event_masks", "(J)V", nullptr, $PUBLIC},
	{"set_backing_pixel", "(J)V", nullptr, $PUBLIC},
	{"set_backing_planes", "(J)V", nullptr, $PUBLIC},
	{"set_backing_store", "(I)V", nullptr, $PUBLIC},
	{"set_bit_gravity", "(I)V", nullptr, $PUBLIC},
	{"set_border_width", "(I)V", nullptr, $PUBLIC},
	{"set_class", "(I)V", nullptr, $PUBLIC},
	{"set_colormap", "(J)V", nullptr, $PUBLIC},
	{"set_depth", "(I)V", nullptr, $PUBLIC},
	{"set_do_not_propagate_mask", "(J)V", nullptr, $PUBLIC},
	{"set_height", "(I)V", nullptr, $PUBLIC},
	{"set_map_installed", "(Z)V", nullptr, $PUBLIC},
	{"set_map_state", "(I)V", nullptr, $PUBLIC},
	{"set_override_redirect", "(Z)V", nullptr, $PUBLIC},
	{"set_root", "(J)V", nullptr, $PUBLIC},
	{"set_save_under", "(Z)V", nullptr, $PUBLIC},
	{"set_screen", "(J)V", nullptr, $PUBLIC},
	{"set_visual", "(J)V", nullptr, $PUBLIC},
	{"set_width", "(I)V", nullptr, $PUBLIC},
	{"set_win_gravity", "(I)V", nullptr, $PUBLIC},
	{"set_x", "(I)V", nullptr, $PUBLIC},
	{"set_y", "(I)V", nullptr, $PUBLIC},
	{"set_your_event_mask", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XWindowAttributes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XWindowAttributes",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XWindowAttributes_FieldInfo_,
	_XWindowAttributes_MethodInfo_
};

$Object* allocate$XWindowAttributes($Class* clazz) {
	return $of($alloc(XWindowAttributes));
}

int32_t XWindowAttributes::getSize() {
	$init(XWindowAttributes);
	return 136;
}

int32_t XWindowAttributes::getDataSize() {
	return getSize();
}

int64_t XWindowAttributes::getPData() {
	return this->pData;
}

void XWindowAttributes::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XWindowAttributes::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XWindowAttributes::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XWindowAttributes::get_x() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XWindowAttributes::set_x(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int32_t XWindowAttributes::get_y() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 4));
}

void XWindowAttributes::set_y(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 4, v);
}

int32_t XWindowAttributes::get_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XWindowAttributes::set_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

int32_t XWindowAttributes::get_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 12));
}

void XWindowAttributes::set_height(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 12, v);
}

int32_t XWindowAttributes::get_border_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 16));
}

void XWindowAttributes::set_border_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 16, v);
}

int32_t XWindowAttributes::get_depth() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 20));
}

void XWindowAttributes::set_depth(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 20, v);
}

$Visual* XWindowAttributes::get_visual(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24) != 0) ? ($new($Visual, $Native::getLong(this->pData + 24) + index * 56)) : (($Visual*)nullptr);
}

int64_t XWindowAttributes::get_visual() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 24);
}

void XWindowAttributes::set_visual(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XWindowAttributes::get_root() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XWindowAttributes::set_root(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int32_t XWindowAttributes::get_class() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XWindowAttributes::set_class(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XWindowAttributes::get_bit_gravity() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XWindowAttributes::set_bit_gravity(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

int32_t XWindowAttributes::get_win_gravity() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XWindowAttributes::set_win_gravity(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int32_t XWindowAttributes::get_backing_store() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 52));
}

void XWindowAttributes::set_backing_store(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 52, v);
}

int64_t XWindowAttributes::get_backing_planes() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 56));
}

void XWindowAttributes::set_backing_planes(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 56, v);
}

int64_t XWindowAttributes::get_backing_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 64));
}

void XWindowAttributes::set_backing_pixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 64, v);
}

bool XWindowAttributes::get_save_under() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 72));
}

void XWindowAttributes::set_save_under(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 72, v);
}

int64_t XWindowAttributes::get_colormap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 80));
}

void XWindowAttributes::set_colormap(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 80, v);
}

bool XWindowAttributes::get_map_installed() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 88));
}

void XWindowAttributes::set_map_installed(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 88, v);
}

int32_t XWindowAttributes::get_map_state() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 92));
}

void XWindowAttributes::set_map_state(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 92, v);
}

int64_t XWindowAttributes::get_all_event_masks() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 96));
}

void XWindowAttributes::set_all_event_masks(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 96, v);
}

int64_t XWindowAttributes::get_your_event_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 104));
}

void XWindowAttributes::set_your_event_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 104, v);
}

int64_t XWindowAttributes::get_do_not_propagate_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 112));
}

void XWindowAttributes::set_do_not_propagate_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 112, v);
}

bool XWindowAttributes::get_override_redirect() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 120));
}

void XWindowAttributes::set_override_redirect(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 120, v);
}

$Screen* XWindowAttributes::get_screen(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 128) != 0) ? ($new($Screen, $Native::getLong(this->pData + 128) + index * 128)) : (($Screen*)nullptr);
}

int64_t XWindowAttributes::get_screen() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 128);
}

void XWindowAttributes::set_screen(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 128, v);
}

$String* XWindowAttributes::getName() {
	return "XWindowAttributes"_s;
}

$String* XWindowAttributes::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 920));
	ret->append("x = "_s)->append(get_x())->append(", "_s);
	ret->append("y = "_s)->append(get_y())->append(", "_s);
	ret->append("width = "_s)->append(get_width())->append(", "_s);
	ret->append("height = "_s)->append(get_height())->append(", "_s);
	ret->append("border_width = "_s)->append(get_border_width())->append(", "_s);
	ret->append("depth = "_s)->append(get_depth())->append(", "_s);
	ret->append("visual = "_s)->append(get_visual())->append(", "_s);
	ret->append("root = "_s)->append(get_root())->append(", "_s);
	ret->append("class = "_s)->append(get_class())->append(", "_s);
	ret->append("bit_gravity = "_s)->append(get_bit_gravity())->append(", "_s);
	ret->append("win_gravity = "_s)->append(get_win_gravity())->append(", "_s);
	ret->append("backing_store = "_s)->append(get_backing_store())->append(", "_s);
	ret->append("backing_planes = "_s)->append(get_backing_planes())->append(", "_s);
	ret->append("backing_pixel = "_s)->append(get_backing_pixel())->append(", "_s);
	ret->append("save_under = "_s)->append(get_save_under())->append(", "_s);
	ret->append("colormap = "_s)->append(get_colormap())->append(", "_s);
	ret->append("map_installed = "_s)->append(get_map_installed())->append(", "_s);
	ret->append("map_state = "_s)->append(get_map_state())->append(", "_s);
	ret->append("all_event_masks = "_s)->append(get_all_event_masks())->append(", "_s);
	ret->append("your_event_mask = "_s)->append(get_your_event_mask())->append(", "_s);
	ret->append("do_not_propagate_mask = "_s)->append(get_do_not_propagate_mask())->append(", "_s);
	ret->append("override_redirect = "_s)->append(get_override_redirect())->append(", "_s);
	ret->append("screen = "_s)->append(get_screen())->append(", "_s);
	return ret->toString();
}

$Object* XWindowAttributes::clone() {
	return $of($XWrapperBase::clone());
}

void XWindowAttributes::zero() {
	$XWrapperBase::zero();
}

$String* XWindowAttributes::toString() {
	return $XWrapperBase::toString();
}

XWindowAttributes::XWindowAttributes() {
}

$Class* XWindowAttributes::load$($String* name, bool initialize) {
	$loadClass(XWindowAttributes, name, initialize, &_XWindowAttributes_ClassInfo_, allocate$XWindowAttributes);
	return class$;
}

$Class* XWindowAttributes::class$ = nullptr;

		} // X11
	} // awt
} // sun