#include <sun/awt/X11/XImage.h>

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

$FieldInfo _XImage_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XImage, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XImage, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XImage, pData)},
	{}
};

$MethodInfo _XImage_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XImage::*)(int64_t)>(&XImage::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XImage::*)()>(&XImage::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XImage::getSize))},
	{"get_bitmap_bit_order", "()I", nullptr, $PUBLIC},
	{"get_bitmap_pad", "()I", nullptr, $PUBLIC},
	{"get_bitmap_unit", "()I", nullptr, $PUBLIC},
	{"get_bits_per_pixel", "()I", nullptr, $PUBLIC},
	{"get_blue_mask", "()J", nullptr, $PUBLIC},
	{"get_byte_order", "()I", nullptr, $PUBLIC},
	{"get_bytes_per_line", "()I", nullptr, $PUBLIC},
	{"get_data", "(I)B", nullptr, $PUBLIC},
	{"get_data", "()J", nullptr, $PUBLIC},
	{"get_depth", "()I", nullptr, $PUBLIC},
	{"get_f_add_pixel", "(I)J", nullptr, $PUBLIC},
	{"get_f_add_pixel", "()J", nullptr, $PUBLIC},
	{"get_f_create_image", "(I)J", nullptr, $PUBLIC},
	{"get_f_create_image", "()J", nullptr, $PUBLIC},
	{"get_f_destroy_image", "(I)J", nullptr, $PUBLIC},
	{"get_f_destroy_image", "()J", nullptr, $PUBLIC},
	{"get_f_get_pixel", "(I)J", nullptr, $PUBLIC},
	{"get_f_get_pixel", "()J", nullptr, $PUBLIC},
	{"get_f_put_pixel", "(I)J", nullptr, $PUBLIC},
	{"get_f_put_pixel", "()J", nullptr, $PUBLIC},
	{"get_f_sub_image", "(I)J", nullptr, $PUBLIC},
	{"get_f_sub_image", "()J", nullptr, $PUBLIC},
	{"get_format", "()I", nullptr, $PUBLIC},
	{"get_green_mask", "()J", nullptr, $PUBLIC},
	{"get_height", "()I", nullptr, $PUBLIC},
	{"get_obdata", "(I)J", nullptr, $PUBLIC},
	{"get_obdata", "()J", nullptr, $PUBLIC},
	{"get_red_mask", "()J", nullptr, $PUBLIC},
	{"get_width", "()I", nullptr, $PUBLIC},
	{"get_xoffset", "()I", nullptr, $PUBLIC},
	{"set_bitmap_bit_order", "(I)V", nullptr, $PUBLIC},
	{"set_bitmap_pad", "(I)V", nullptr, $PUBLIC},
	{"set_bitmap_unit", "(I)V", nullptr, $PUBLIC},
	{"set_bits_per_pixel", "(I)V", nullptr, $PUBLIC},
	{"set_blue_mask", "(J)V", nullptr, $PUBLIC},
	{"set_byte_order", "(I)V", nullptr, $PUBLIC},
	{"set_bytes_per_line", "(I)V", nullptr, $PUBLIC},
	{"set_data", "(J)V", nullptr, $PUBLIC},
	{"set_depth", "(I)V", nullptr, $PUBLIC},
	{"set_f_add_pixel", "(J)V", nullptr, $PUBLIC},
	{"set_f_create_image", "(J)V", nullptr, $PUBLIC},
	{"set_f_destroy_image", "(J)V", nullptr, $PUBLIC},
	{"set_f_get_pixel", "(J)V", nullptr, $PUBLIC},
	{"set_f_put_pixel", "(J)V", nullptr, $PUBLIC},
	{"set_f_sub_image", "(J)V", nullptr, $PUBLIC},
	{"set_format", "(I)V", nullptr, $PUBLIC},
	{"set_green_mask", "(J)V", nullptr, $PUBLIC},
	{"set_height", "(I)V", nullptr, $PUBLIC},
	{"set_obdata", "(J)V", nullptr, $PUBLIC},
	{"set_red_mask", "(J)V", nullptr, $PUBLIC},
	{"set_width", "(I)V", nullptr, $PUBLIC},
	{"set_xoffset", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XImage",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XImage_FieldInfo_,
	_XImage_MethodInfo_
};

$Object* allocate$XImage($Class* clazz) {
	return $of($alloc(XImage));
}

int32_t XImage::getSize() {
	$init(XImage);
	return 136;
}

int32_t XImage::getDataSize() {
	return getSize();
}

int64_t XImage::getPData() {
	return this->pData;
}

void XImage::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XImage::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XImage::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XImage::get_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XImage::set_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int32_t XImage::get_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 4));
}

void XImage::set_height(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 4, v);
}

int32_t XImage::get_xoffset() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XImage::set_xoffset(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

int32_t XImage::get_format() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 12));
}

void XImage::set_format(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 12, v);
}

int8_t XImage::get_data(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getByte($Native::getLong(this->pData + 16) + index * 1);
}

int64_t XImage::get_data() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 16);
}

void XImage::set_data(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

int32_t XImage::get_byte_order() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 24));
}

void XImage::set_byte_order(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 24, v);
}

int32_t XImage::get_bitmap_unit() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 28));
}

void XImage::set_bitmap_unit(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 28, v);
}

int32_t XImage::get_bitmap_bit_order() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 32));
}

void XImage::set_bitmap_bit_order(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 32, v);
}

int32_t XImage::get_bitmap_pad() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 36));
}

void XImage::set_bitmap_pad(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 36, v);
}

int32_t XImage::get_depth() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XImage::set_depth(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XImage::get_bytes_per_line() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XImage::set_bytes_per_line(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

int32_t XImage::get_bits_per_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XImage::set_bits_per_pixel(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int64_t XImage::get_red_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 56));
}

void XImage::set_red_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 56, v);
}

int64_t XImage::get_green_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 64));
}

void XImage::set_green_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 64, v);
}

int64_t XImage::get_blue_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 72));
}

void XImage::set_blue_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 72, v);
}

int64_t XImage::get_obdata(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 80);
	return var$0 + index * $Native::getLongSize();
}

int64_t XImage::get_obdata() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 80);
}

void XImage::set_obdata(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 80, v);
}

int64_t XImage::get_f_create_image(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 88);
	return var$0 + index * $Native::getLongSize();
}

int64_t XImage::get_f_create_image() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 88);
}

void XImage::set_f_create_image(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 88, v);
}

int64_t XImage::get_f_destroy_image(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 96);
	return var$0 + index * $Native::getLongSize();
}

int64_t XImage::get_f_destroy_image() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 96);
}

void XImage::set_f_destroy_image(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 96, v);
}

int64_t XImage::get_f_get_pixel(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 104);
	return var$0 + index * $Native::getLongSize();
}

int64_t XImage::get_f_get_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 104);
}

void XImage::set_f_get_pixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 104, v);
}

int64_t XImage::get_f_put_pixel(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 112);
	return var$0 + index * $Native::getLongSize();
}

int64_t XImage::get_f_put_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 112);
}

void XImage::set_f_put_pixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 112, v);
}

int64_t XImage::get_f_sub_image(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 120);
	return var$0 + index * $Native::getLongSize();
}

int64_t XImage::get_f_sub_image() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 120);
}

void XImage::set_f_sub_image(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 120, v);
}

int64_t XImage::get_f_add_pixel(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 128);
	return var$0 + index * $Native::getLongSize();
}

int64_t XImage::get_f_add_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 128);
}

void XImage::set_f_add_pixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 128, v);
}

$String* XImage::getName() {
	return "XImage"_s;
}

$String* XImage::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 880));
	ret->append("width = "_s)->append(get_width())->append(", "_s);
	ret->append("height = "_s)->append(get_height())->append(", "_s);
	ret->append("xoffset = "_s)->append(get_xoffset())->append(", "_s);
	ret->append("format = "_s)->append(get_format())->append(", "_s);
	ret->append("data = "_s)->append(get_data())->append(", "_s);
	ret->append("byte_order = "_s)->append(get_byte_order())->append(", "_s);
	ret->append("bitmap_unit = "_s)->append(get_bitmap_unit())->append(", "_s);
	ret->append("bitmap_bit_order = "_s)->append(get_bitmap_bit_order())->append(", "_s);
	ret->append("bitmap_pad = "_s)->append(get_bitmap_pad())->append(", "_s);
	ret->append("depth = "_s)->append(get_depth())->append(", "_s);
	ret->append("bytes_per_line = "_s)->append(get_bytes_per_line())->append(", "_s);
	ret->append("bits_per_pixel = "_s)->append(get_bits_per_pixel())->append(", "_s);
	ret->append("red_mask = "_s)->append(get_red_mask())->append(", "_s);
	ret->append("green_mask = "_s)->append(get_green_mask())->append(", "_s);
	ret->append("blue_mask = "_s)->append(get_blue_mask())->append(", "_s);
	ret->append("obdata = "_s)->append(get_obdata())->append(", "_s);
	ret->append("f_create_image = "_s)->append(get_f_create_image())->append(", "_s);
	ret->append("f_destroy_image = "_s)->append(get_f_destroy_image())->append(", "_s);
	ret->append("f_get_pixel = "_s)->append(get_f_get_pixel())->append(", "_s);
	ret->append("f_put_pixel = "_s)->append(get_f_put_pixel())->append(", "_s);
	ret->append("f_sub_image = "_s)->append(get_f_sub_image())->append(", "_s);
	ret->append("f_add_pixel = "_s)->append(get_f_add_pixel())->append(", "_s);
	return ret->toString();
}

$Object* XImage::clone() {
	return $of($XWrapperBase::clone());
}

void XImage::zero() {
	$XWrapperBase::zero();
}

$String* XImage::toString() {
	return $XWrapperBase::toString();
}

XImage::XImage() {
}

$Class* XImage::load$($String* name, bool initialize) {
	$loadClass(XImage, name, initialize, &_XImage_ClassInfo_, allocate$XImage);
	return class$;
}

$Class* XImage::class$ = nullptr;

		} // X11
	} // awt
} // sun