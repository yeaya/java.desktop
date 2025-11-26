#include <sun/awt/X11/Screen.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Depth.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/Visual.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XExtData.h>
#include <sun/awt/X11/XWrapperBase.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Depth = ::sun::awt::X11::Depth;
using $Native = ::sun::awt::X11::Native;
using $Visual = ::sun::awt::X11::Visual;
using $XEvent = ::sun::awt::X11::XEvent;
using $XExtData = ::sun::awt::X11::XExtData;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _Screen_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(Screen, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(Screen, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(Screen, pData)},
	{}
};

$MethodInfo _Screen_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(Screen::*)(int64_t)>(&Screen::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Screen::*)()>(&Screen::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&Screen::getSize))},
	{"get_backing_store", "()I", nullptr, $PUBLIC},
	{"get_black_pixel", "()J", nullptr, $PUBLIC},
	{"get_cmap", "()J", nullptr, $PUBLIC},
	{"get_default_gc", "()J", nullptr, $PUBLIC},
	{"get_depths", "(I)Lsun/awt/X11/Depth;", nullptr, $PUBLIC},
	{"get_depths", "()J", nullptr, $PUBLIC},
	{"get_display", "(I)J", nullptr, $PUBLIC},
	{"get_display", "()J", nullptr, $PUBLIC},
	{"get_ext_data", "(I)Lsun/awt/X11/XExtData;", nullptr, $PUBLIC},
	{"get_ext_data", "()J", nullptr, $PUBLIC},
	{"get_height", "()I", nullptr, $PUBLIC},
	{"get_max_maps", "()I", nullptr, $PUBLIC},
	{"get_mheight", "()I", nullptr, $PUBLIC},
	{"get_min_maps", "()I", nullptr, $PUBLIC},
	{"get_mwidth", "()I", nullptr, $PUBLIC},
	{"get_ndepths", "()I", nullptr, $PUBLIC},
	{"get_root", "()J", nullptr, $PUBLIC},
	{"get_root_depth", "()I", nullptr, $PUBLIC},
	{"get_root_input_mask", "()J", nullptr, $PUBLIC},
	{"get_root_visual", "(I)Lsun/awt/X11/Visual;", nullptr, $PUBLIC},
	{"get_root_visual", "()J", nullptr, $PUBLIC},
	{"get_save_unders", "()Z", nullptr, $PUBLIC},
	{"get_white_pixel", "()J", nullptr, $PUBLIC},
	{"get_width", "()I", nullptr, $PUBLIC},
	{"set_backing_store", "(I)V", nullptr, $PUBLIC},
	{"set_black_pixel", "(J)V", nullptr, $PUBLIC},
	{"set_cmap", "(J)V", nullptr, $PUBLIC},
	{"set_default_gc", "(J)V", nullptr, $PUBLIC},
	{"set_depths", "(J)V", nullptr, $PUBLIC},
	{"set_display", "(J)V", nullptr, $PUBLIC},
	{"set_ext_data", "(J)V", nullptr, $PUBLIC},
	{"set_height", "(I)V", nullptr, $PUBLIC},
	{"set_max_maps", "(I)V", nullptr, $PUBLIC},
	{"set_mheight", "(I)V", nullptr, $PUBLIC},
	{"set_min_maps", "(I)V", nullptr, $PUBLIC},
	{"set_mwidth", "(I)V", nullptr, $PUBLIC},
	{"set_ndepths", "(I)V", nullptr, $PUBLIC},
	{"set_root", "(J)V", nullptr, $PUBLIC},
	{"set_root_depth", "(I)V", nullptr, $PUBLIC},
	{"set_root_input_mask", "(J)V", nullptr, $PUBLIC},
	{"set_root_visual", "(J)V", nullptr, $PUBLIC},
	{"set_save_unders", "(Z)V", nullptr, $PUBLIC},
	{"set_white_pixel", "(J)V", nullptr, $PUBLIC},
	{"set_width", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _Screen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.Screen",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_Screen_FieldInfo_,
	_Screen_MethodInfo_
};

$Object* allocate$Screen($Class* clazz) {
	return $of($alloc(Screen));
}

int32_t Screen::getSize() {
	$init(Screen);
	return 128;
}

int32_t Screen::getDataSize() {
	return getSize();
}

int64_t Screen::getPData() {
	return this->pData;
}

void Screen::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void Screen::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void Screen::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

$XExtData* Screen::get_ext_data(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0) != 0) ? ($new($XExtData, $Native::getLong(this->pData + 0) + index * 32)) : (($XExtData*)nullptr);
}

int64_t Screen::get_ext_data() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 0);
}

void Screen::set_ext_data(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int64_t Screen::get_display(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 8);
	return var$0 + index * $Native::getLongSize();
}

int64_t Screen::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 8);
}

void Screen::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

int64_t Screen::get_root() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 16));
}

void Screen::set_root(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

int32_t Screen::get_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 24));
}

void Screen::set_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 24, v);
}

int32_t Screen::get_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 28));
}

void Screen::set_height(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 28, v);
}

int32_t Screen::get_mwidth() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 32));
}

void Screen::set_mwidth(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 32, v);
}

int32_t Screen::get_mheight() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 36));
}

void Screen::set_mheight(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 36, v);
}

int32_t Screen::get_ndepths() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void Screen::set_ndepths(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

$Depth* Screen::get_depths(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 48) != 0) ? ($new($Depth, $Native::getLong(this->pData + 48) + index * 16)) : (($Depth*)nullptr);
}

int64_t Screen::get_depths() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 48);
}

void Screen::set_depths(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 48, v);
}

int32_t Screen::get_root_depth() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 56));
}

void Screen::set_root_depth(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 56, v);
}

$Visual* Screen::get_root_visual(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 64) != 0) ? ($new($Visual, $Native::getLong(this->pData + 64) + index * 56)) : (($Visual*)nullptr);
}

int64_t Screen::get_root_visual() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 64);
}

void Screen::set_root_visual(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 64, v);
}

int64_t Screen::get_default_gc() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 72));
}

void Screen::set_default_gc(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 72, v);
}

int64_t Screen::get_cmap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 80));
}

void Screen::set_cmap(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 80, v);
}

int64_t Screen::get_white_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 88));
}

void Screen::set_white_pixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 88, v);
}

int64_t Screen::get_black_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 96));
}

void Screen::set_black_pixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 96, v);
}

int32_t Screen::get_max_maps() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 104));
}

void Screen::set_max_maps(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 104, v);
}

int32_t Screen::get_min_maps() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 108));
}

void Screen::set_min_maps(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 108, v);
}

int32_t Screen::get_backing_store() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 112));
}

void Screen::set_backing_store(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 112, v);
}

bool Screen::get_save_unders() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 116));
}

void Screen::set_save_unders(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 116, v);
}

int64_t Screen::get_root_input_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 120));
}

void Screen::set_root_input_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 120, v);
}

$String* Screen::getName() {
	return "Screen"_s;
}

$String* Screen::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 800));
	ret->append("ext_data = "_s)->append(get_ext_data())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("root = "_s)->append(get_root())->append(", "_s);
	ret->append("width = "_s)->append(get_width())->append(", "_s);
	ret->append("height = "_s)->append(get_height())->append(", "_s);
	ret->append("mwidth = "_s)->append(get_mwidth())->append(", "_s);
	ret->append("mheight = "_s)->append(get_mheight())->append(", "_s);
	ret->append("ndepths = "_s)->append(get_ndepths())->append(", "_s);
	ret->append("depths = "_s)->append(get_depths())->append(", "_s);
	ret->append("root_depth = "_s)->append(get_root_depth())->append(", "_s);
	ret->append("root_visual = "_s)->append(get_root_visual())->append(", "_s);
	ret->append("default_gc = "_s)->append(get_default_gc())->append(", "_s);
	ret->append("cmap = "_s)->append(get_cmap())->append(", "_s);
	ret->append("white_pixel = "_s)->append(get_white_pixel())->append(", "_s);
	ret->append("black_pixel = "_s)->append(get_black_pixel())->append(", "_s);
	ret->append("max_maps = "_s)->append(get_max_maps())->append(", "_s);
	ret->append("min_maps = "_s)->append(get_min_maps())->append(", "_s);
	ret->append("backing_store = "_s)->append(get_backing_store())->append(", "_s);
	ret->append("save_unders = "_s)->append(get_save_unders())->append(", "_s);
	ret->append("root_input_mask = "_s)->append(get_root_input_mask())->append(", "_s);
	return ret->toString();
}

$Object* Screen::clone() {
	return $of($XWrapperBase::clone());
}

void Screen::zero() {
	$XWrapperBase::zero();
}

$String* Screen::toString() {
	return $XWrapperBase::toString();
}

Screen::Screen() {
}

$Class* Screen::load$($String* name, bool initialize) {
	$loadClass(Screen, name, initialize, &_Screen_ClassInfo_, allocate$Screen);
	return class$;
}

$Class* Screen::class$ = nullptr;

		} // X11
	} // awt
} // sun