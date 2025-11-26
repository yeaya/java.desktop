#include <sun/awt/X11/XGCValues.h>

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

$FieldInfo _XGCValues_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XGCValues, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XGCValues, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XGCValues, pData)},
	{}
};

$MethodInfo _XGCValues_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XGCValues::*)(int64_t)>(&XGCValues::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XGCValues::*)()>(&XGCValues::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XGCValues::getSize))},
	{"get_arc_mode", "()I", nullptr, $PUBLIC},
	{"get_background", "()J", nullptr, $PUBLIC},
	{"get_cap_style", "()I", nullptr, $PUBLIC},
	{"get_clip_mask", "()J", nullptr, $PUBLIC},
	{"get_clip_x_origin", "()I", nullptr, $PUBLIC},
	{"get_clip_y_origin", "()I", nullptr, $PUBLIC},
	{"get_dash_offset", "()I", nullptr, $PUBLIC},
	{"get_dashes", "()B", nullptr, $PUBLIC},
	{"get_fill_rule", "()I", nullptr, $PUBLIC},
	{"get_fill_style", "()I", nullptr, $PUBLIC},
	{"get_font", "()J", nullptr, $PUBLIC},
	{"get_foreground", "()J", nullptr, $PUBLIC},
	{"get_function", "()I", nullptr, $PUBLIC},
	{"get_graphics_exposures", "()Z", nullptr, $PUBLIC},
	{"get_join_style", "()I", nullptr, $PUBLIC},
	{"get_line_style", "()I", nullptr, $PUBLIC},
	{"get_line_width", "()I", nullptr, $PUBLIC},
	{"get_plane_mask", "()J", nullptr, $PUBLIC},
	{"get_stipple", "()J", nullptr, $PUBLIC},
	{"get_subwindow_mode", "()I", nullptr, $PUBLIC},
	{"get_tile", "()J", nullptr, $PUBLIC},
	{"get_ts_x_origin", "()I", nullptr, $PUBLIC},
	{"get_ts_y_origin", "()I", nullptr, $PUBLIC},
	{"set_arc_mode", "(I)V", nullptr, $PUBLIC},
	{"set_background", "(J)V", nullptr, $PUBLIC},
	{"set_cap_style", "(I)V", nullptr, $PUBLIC},
	{"set_clip_mask", "(J)V", nullptr, $PUBLIC},
	{"set_clip_x_origin", "(I)V", nullptr, $PUBLIC},
	{"set_clip_y_origin", "(I)V", nullptr, $PUBLIC},
	{"set_dash_offset", "(I)V", nullptr, $PUBLIC},
	{"set_dashes", "(B)V", nullptr, $PUBLIC},
	{"set_fill_rule", "(I)V", nullptr, $PUBLIC},
	{"set_fill_style", "(I)V", nullptr, $PUBLIC},
	{"set_font", "(J)V", nullptr, $PUBLIC},
	{"set_foreground", "(J)V", nullptr, $PUBLIC},
	{"set_function", "(I)V", nullptr, $PUBLIC},
	{"set_graphics_exposures", "(Z)V", nullptr, $PUBLIC},
	{"set_join_style", "(I)V", nullptr, $PUBLIC},
	{"set_line_style", "(I)V", nullptr, $PUBLIC},
	{"set_line_width", "(I)V", nullptr, $PUBLIC},
	{"set_plane_mask", "(J)V", nullptr, $PUBLIC},
	{"set_stipple", "(J)V", nullptr, $PUBLIC},
	{"set_subwindow_mode", "(I)V", nullptr, $PUBLIC},
	{"set_tile", "(J)V", nullptr, $PUBLIC},
	{"set_ts_x_origin", "(I)V", nullptr, $PUBLIC},
	{"set_ts_y_origin", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XGCValues_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XGCValues",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XGCValues_FieldInfo_,
	_XGCValues_MethodInfo_
};

$Object* allocate$XGCValues($Class* clazz) {
	return $of($alloc(XGCValues));
}

int32_t XGCValues::getSize() {
	$init(XGCValues);
	return 128;
}

int32_t XGCValues::getDataSize() {
	return getSize();
}

int64_t XGCValues::getPData() {
	return this->pData;
}

void XGCValues::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XGCValues::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XGCValues::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XGCValues::get_function() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XGCValues::set_function(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XGCValues::get_plane_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XGCValues::set_plane_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

int64_t XGCValues::get_foreground() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 16));
}

void XGCValues::set_foreground(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

int64_t XGCValues::get_background() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XGCValues::set_background(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int32_t XGCValues::get_line_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 32));
}

void XGCValues::set_line_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 32, v);
}

int32_t XGCValues::get_line_style() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 36));
}

void XGCValues::set_line_style(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 36, v);
}

int32_t XGCValues::get_cap_style() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XGCValues::set_cap_style(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XGCValues::get_join_style() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XGCValues::set_join_style(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

int32_t XGCValues::get_fill_style() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XGCValues::set_fill_style(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int32_t XGCValues::get_fill_rule() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 52));
}

void XGCValues::set_fill_rule(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 52, v);
}

int32_t XGCValues::get_arc_mode() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 56));
}

void XGCValues::set_arc_mode(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 56, v);
}

int64_t XGCValues::get_tile() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 64));
}

void XGCValues::set_tile(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 64, v);
}

int64_t XGCValues::get_stipple() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 72));
}

void XGCValues::set_stipple(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 72, v);
}

int32_t XGCValues::get_ts_x_origin() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 80));
}

void XGCValues::set_ts_x_origin(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 80, v);
}

int32_t XGCValues::get_ts_y_origin() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 84));
}

void XGCValues::set_ts_y_origin(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 84, v);
}

int64_t XGCValues::get_font() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 88));
}

void XGCValues::set_font(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 88, v);
}

int32_t XGCValues::get_subwindow_mode() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 96));
}

void XGCValues::set_subwindow_mode(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 96, v);
}

bool XGCValues::get_graphics_exposures() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 100));
}

void XGCValues::set_graphics_exposures(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 100, v);
}

int32_t XGCValues::get_clip_x_origin() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 104));
}

void XGCValues::set_clip_x_origin(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 104, v);
}

int32_t XGCValues::get_clip_y_origin() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 108));
}

void XGCValues::set_clip_y_origin(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 108, v);
}

int64_t XGCValues::get_clip_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 112));
}

void XGCValues::set_clip_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 112, v);
}

int32_t XGCValues::get_dash_offset() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 120));
}

void XGCValues::set_dash_offset(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 120, v);
}

int8_t XGCValues::get_dashes() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 124));
}

void XGCValues::set_dashes(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 124, v);
}

$String* XGCValues::getName() {
	return "XGCValues"_s;
}

$String* XGCValues::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 920));
	ret->append("function = "_s)->append(get_function())->append(", "_s);
	ret->append("plane_mask = "_s)->append(get_plane_mask())->append(", "_s);
	ret->append("foreground = "_s)->append(get_foreground())->append(", "_s);
	ret->append("background = "_s)->append(get_background())->append(", "_s);
	ret->append("line_width = "_s)->append(get_line_width())->append(", "_s);
	ret->append("line_style = "_s)->append(get_line_style())->append(", "_s);
	ret->append("cap_style = "_s)->append(get_cap_style())->append(", "_s);
	ret->append("join_style = "_s)->append(get_join_style())->append(", "_s);
	ret->append("fill_style = "_s)->append(get_fill_style())->append(", "_s);
	ret->append("fill_rule = "_s)->append(get_fill_rule())->append(", "_s);
	ret->append("arc_mode = "_s)->append(get_arc_mode())->append(", "_s);
	ret->append("tile = "_s)->append(get_tile())->append(", "_s);
	ret->append("stipple = "_s)->append(get_stipple())->append(", "_s);
	ret->append("ts_x_origin = "_s)->append(get_ts_x_origin())->append(", "_s);
	ret->append("ts_y_origin = "_s)->append(get_ts_y_origin())->append(", "_s);
	ret->append("font = "_s)->append(get_font())->append(", "_s);
	ret->append("subwindow_mode = "_s)->append(get_subwindow_mode())->append(", "_s);
	ret->append("graphics_exposures = "_s)->append(get_graphics_exposures())->append(", "_s);
	ret->append("clip_x_origin = "_s)->append(get_clip_x_origin())->append(", "_s);
	ret->append("clip_y_origin = "_s)->append(get_clip_y_origin())->append(", "_s);
	ret->append("clip_mask = "_s)->append(get_clip_mask())->append(", "_s);
	ret->append("dash_offset = "_s)->append(get_dash_offset())->append(", "_s);
	ret->append("dashes = "_s)->append((int32_t)get_dashes())->append(", "_s);
	return ret->toString();
}

$Object* XGCValues::clone() {
	return $of($XWrapperBase::clone());
}

void XGCValues::zero() {
	$XWrapperBase::zero();
}

$String* XGCValues::toString() {
	return $XWrapperBase::toString();
}

XGCValues::XGCValues() {
}

$Class* XGCValues::load$($String* name, bool initialize) {
	$loadClass(XGCValues, name, initialize, &_XGCValues_ClassInfo_, allocate$XGCValues);
	return class$;
}

$Class* XGCValues::class$ = nullptr;

		} // X11
	} // awt
} // sun