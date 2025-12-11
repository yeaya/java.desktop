#include <sun/awt/X11/AwtGraphicsConfigData.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/ColorData.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XRenderPictFormat.h>
#include <sun/awt/X11/XVisualInfo.h>
#include <sun/awt/X11/XWrapperBase.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/X11/awtImageData.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $ColorData = ::sun::awt::X11::ColorData;
using $Native = ::sun::awt::X11::Native;
using $XRenderPictFormat = ::sun::awt::X11::XRenderPictFormat;
using $XVisualInfo = ::sun::awt::X11::XVisualInfo;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $awtImageData = ::sun::awt::X11::awtImageData;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _AwtGraphicsConfigData_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(AwtGraphicsConfigData, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(AwtGraphicsConfigData, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(AwtGraphicsConfigData, pData)},
	{}
};

$MethodInfo _AwtGraphicsConfigData_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(AwtGraphicsConfigData::*)(int64_t)>(&AwtGraphicsConfigData::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AwtGraphicsConfigData::*)()>(&AwtGraphicsConfigData::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&AwtGraphicsConfigData::getSize))},
	{"get_AwtColorMatch", "(I)J", nullptr, $PUBLIC},
	{"get_AwtColorMatch", "()J", nullptr, $PUBLIC},
	{"get_awtImage", "(I)Lsun/awt/X11/awtImageData;", nullptr, $PUBLIC},
	{"get_awtImage", "()J", nullptr, $PUBLIC},
	{"get_awt_cmap", "()J", nullptr, $PUBLIC},
	{"get_awt_depth", "()I", nullptr, $PUBLIC},
	{"get_awt_num_colors", "()I", nullptr, $PUBLIC},
	{"get_awt_visInfo", "()Lsun/awt/X11/XVisualInfo;", nullptr, $PUBLIC},
	{"get_color_data", "(I)Lsun/awt/X11/ColorData;", nullptr, $PUBLIC},
	{"get_color_data", "()J", nullptr, $PUBLIC},
	{"get_glxInfo", "(I)J", nullptr, $PUBLIC},
	{"get_glxInfo", "()J", nullptr, $PUBLIC},
	{"get_isTranslucencySupported", "()I", nullptr, $PUBLIC},
	{"get_monoImage", "(I)J", nullptr, $PUBLIC},
	{"get_monoImage", "()J", nullptr, $PUBLIC},
	{"get_monoPixmap", "()J", nullptr, $PUBLIC},
	{"get_monoPixmapGC", "()J", nullptr, $PUBLIC},
	{"get_monoPixmapHeight", "()I", nullptr, $PUBLIC},
	{"get_monoPixmapWidth", "()I", nullptr, $PUBLIC},
	{"get_pixelStride", "()I", nullptr, $PUBLIC},
	{"get_renderPictFormat", "()Lsun/awt/X11/XRenderPictFormat;", nullptr, $PUBLIC},
	{"set_AwtColorMatch", "(J)V", nullptr, $PUBLIC},
	{"set_awtImage", "(J)V", nullptr, $PUBLIC},
	{"set_awt_cmap", "(J)V", nullptr, $PUBLIC},
	{"set_awt_depth", "(I)V", nullptr, $PUBLIC},
	{"set_awt_num_colors", "(I)V", nullptr, $PUBLIC},
	{"set_color_data", "(J)V", nullptr, $PUBLIC},
	{"set_glxInfo", "(J)V", nullptr, $PUBLIC},
	{"set_isTranslucencySupported", "(I)V", nullptr, $PUBLIC},
	{"set_monoImage", "(J)V", nullptr, $PUBLIC},
	{"set_monoPixmap", "(J)V", nullptr, $PUBLIC},
	{"set_monoPixmapGC", "(J)V", nullptr, $PUBLIC},
	{"set_monoPixmapHeight", "(I)V", nullptr, $PUBLIC},
	{"set_monoPixmapWidth", "(I)V", nullptr, $PUBLIC},
	{"set_pixelStride", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _AwtGraphicsConfigData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.AwtGraphicsConfigData",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_AwtGraphicsConfigData_FieldInfo_,
	_AwtGraphicsConfigData_MethodInfo_
};

$Object* allocate$AwtGraphicsConfigData($Class* clazz) {
	return $of($alloc(AwtGraphicsConfigData));
}

int32_t AwtGraphicsConfigData::getSize() {
	$init(AwtGraphicsConfigData);
	return 208;
}

int32_t AwtGraphicsConfigData::getDataSize() {
	return getSize();
}

int64_t AwtGraphicsConfigData::getPData() {
	return this->pData;
}

void AwtGraphicsConfigData::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void AwtGraphicsConfigData::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void AwtGraphicsConfigData::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t AwtGraphicsConfigData::get_awt_depth() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void AwtGraphicsConfigData::set_awt_depth(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t AwtGraphicsConfigData::get_awt_cmap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void AwtGraphicsConfigData::set_awt_cmap(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

$XVisualInfo* AwtGraphicsConfigData::get_awt_visInfo() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XVisualInfo, this->pData + 16);
}

int32_t AwtGraphicsConfigData::get_awt_num_colors() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 80));
}

void AwtGraphicsConfigData::set_awt_num_colors(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 80, v);
}

$awtImageData* AwtGraphicsConfigData::get_awtImage(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 88) != 0) ? ($new($awtImageData, $Native::getLong(this->pData + 88) + index * 560)) : (($awtImageData*)nullptr);
}

int64_t AwtGraphicsConfigData::get_awtImage() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 88);
}

void AwtGraphicsConfigData::set_awtImage(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 88, v);
}

int64_t AwtGraphicsConfigData::get_AwtColorMatch(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 96);
	return var$0 + index * $Native::getLongSize();
}

int64_t AwtGraphicsConfigData::get_AwtColorMatch() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 96);
}

void AwtGraphicsConfigData::set_AwtColorMatch(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 96, v);
}

int64_t AwtGraphicsConfigData::get_monoImage(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 104);
	return var$0 + index * $Native::getLongSize();
}

int64_t AwtGraphicsConfigData::get_monoImage() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 104);
}

void AwtGraphicsConfigData::set_monoImage(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 104, v);
}

int64_t AwtGraphicsConfigData::get_monoPixmap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 112));
}

void AwtGraphicsConfigData::set_monoPixmap(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 112, v);
}

int32_t AwtGraphicsConfigData::get_monoPixmapWidth() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 120));
}

void AwtGraphicsConfigData::set_monoPixmapWidth(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 120, v);
}

int32_t AwtGraphicsConfigData::get_monoPixmapHeight() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 124));
}

void AwtGraphicsConfigData::set_monoPixmapHeight(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 124, v);
}

int64_t AwtGraphicsConfigData::get_monoPixmapGC() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 128));
}

void AwtGraphicsConfigData::set_monoPixmapGC(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 128, v);
}

int32_t AwtGraphicsConfigData::get_pixelStride() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 136));
}

void AwtGraphicsConfigData::set_pixelStride(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 136, v);
}

$ColorData* AwtGraphicsConfigData::get_color_data(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 144) != 0) ? ($new($ColorData, $Native::getLong(this->pData + 144) + index * 88)) : (($ColorData*)nullptr);
}

int64_t AwtGraphicsConfigData::get_color_data() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 144);
}

void AwtGraphicsConfigData::set_color_data(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 144, v);
}

int64_t AwtGraphicsConfigData::get_glxInfo(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 152);
	return var$0 + index * $Native::getLongSize();
}

int64_t AwtGraphicsConfigData::get_glxInfo() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 152);
}

void AwtGraphicsConfigData::set_glxInfo(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 152, v);
}

int32_t AwtGraphicsConfigData::get_isTranslucencySupported() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 160));
}

void AwtGraphicsConfigData::set_isTranslucencySupported(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 160, v);
}

$XRenderPictFormat* AwtGraphicsConfigData::get_renderPictFormat() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XRenderPictFormat, this->pData + 168);
}

$String* AwtGraphicsConfigData::getName() {
	return "AwtGraphicsConfigData"_s;
}

$String* AwtGraphicsConfigData::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 640));
	ret->append("awt_depth = "_s)->append(get_awt_depth())->append(", "_s);
	ret->append("awt_cmap = "_s)->append(get_awt_cmap())->append(", "_s);
	ret->append("awt_visInfo = "_s)->append($($of(get_awt_visInfo())))->append(", "_s);
	ret->append("awt_num_colors = "_s)->append(get_awt_num_colors())->append(", "_s);
	ret->append("awtImage = "_s)->append(get_awtImage())->append(", "_s);
	ret->append("AwtColorMatch = "_s)->append(get_AwtColorMatch())->append(", "_s);
	ret->append("monoImage = "_s)->append(get_monoImage())->append(", "_s);
	ret->append("monoPixmap = "_s)->append(get_monoPixmap())->append(", "_s);
	ret->append("monoPixmapWidth = "_s)->append(get_monoPixmapWidth())->append(", "_s);
	ret->append("monoPixmapHeight = "_s)->append(get_monoPixmapHeight())->append(", "_s);
	ret->append("monoPixmapGC = "_s)->append(get_monoPixmapGC())->append(", "_s);
	ret->append("pixelStride = "_s)->append(get_pixelStride())->append(", "_s);
	ret->append("color_data = "_s)->append(get_color_data())->append(", "_s);
	ret->append("glxInfo = "_s)->append(get_glxInfo())->append(", "_s);
	ret->append("isTranslucencySupported = "_s)->append(get_isTranslucencySupported())->append(", "_s);
	ret->append("renderPictFormat = "_s)->append($($of(get_renderPictFormat())))->append(", "_s);
	return ret->toString();
}

$Object* AwtGraphicsConfigData::clone() {
	return $of($XWrapperBase::clone());
}

void AwtGraphicsConfigData::zero() {
	$XWrapperBase::zero();
}

$String* AwtGraphicsConfigData::toString() {
	return $XWrapperBase::toString();
}

AwtGraphicsConfigData::AwtGraphicsConfigData() {
}

$Class* AwtGraphicsConfigData::load$($String* name, bool initialize) {
	$loadClass(AwtGraphicsConfigData, name, initialize, &_AwtGraphicsConfigData_ClassInfo_, allocate$AwtGraphicsConfigData);
	return class$;
}

$Class* AwtGraphicsConfigData::class$ = nullptr;

		} // X11
	} // awt
} // sun