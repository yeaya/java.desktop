#include <sun/java2d/xr/XRSurfaceData$XRPixmapSurfaceData.h>

#include <java/awt/GraphicsDevice.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/awt/X11GraphicsDevice.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/x11/XSurfaceData.h>
#include <sun/java2d/xr/XRGraphicsConfig.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $X11GraphicsDevice = ::sun::awt::X11GraphicsDevice;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $XRGraphicsConfig = ::sun::java2d::xr::XRGraphicsConfig;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XRSurfaceData$XRPixmapSurfaceData_FieldInfo_[] = {
	{"offscreenImage", "Ljava/awt/Image;", nullptr, 0, $field(XRSurfaceData$XRPixmapSurfaceData, offscreenImage)},
	{"width", "I", nullptr, 0, $field(XRSurfaceData$XRPixmapSurfaceData, width)},
	{"height", "I", nullptr, 0, $field(XRSurfaceData$XRPixmapSurfaceData, height)},
	{"transparency", "I", nullptr, 0, $field(XRSurfaceData$XRPixmapSurfaceData, transparency)},
	{"scale", "I", nullptr, $PRIVATE | $FINAL, $field(XRSurfaceData$XRPixmapSurfaceData, scale)},
	{}
};

$MethodInfo _XRSurfaceData$XRPixmapSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/xr/XRGraphicsConfig;IILjava/awt/Image;Lsun/java2d/loops/SurfaceType;Ljava/awt/image/ColorModel;JIIIZ)V", nullptr, $PUBLIC, $method(static_cast<void(XRSurfaceData$XRPixmapSurfaceData::*)($XRGraphicsConfig*,int32_t,int32_t,$Image*,$SurfaceType*,$ColorModel*,int64_t,int32_t,int32_t,int32_t,bool)>(&XRSurfaceData$XRPixmapSurfaceData::init$))},
	{"canSourceSendExposures", "(IIII)Z", nullptr, $PUBLIC},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getDefaultScaleX", "()D", nullptr, $PUBLIC},
	{"getDefaultScaleY", "()D", nullptr, $PUBLIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"getTransparency", "()I", nullptr, $PUBLIC},
	{"initSurface", "(IIIJI)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XRSurfaceData$XRPixmapSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.xr.XRSurfaceData$XRPixmapSurfaceData", "sun.java2d.xr.XRSurfaceData", "XRPixmapSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XRSurfaceData$XRPixmapSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRSurfaceData$XRPixmapSurfaceData",
	"sun.java2d.xr.XRSurfaceData",
	nullptr,
	_XRSurfaceData$XRPixmapSurfaceData_FieldInfo_,
	_XRSurfaceData$XRPixmapSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_XRSurfaceData$XRPixmapSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.xr.XRSurfaceData"
};

$Object* allocate$XRSurfaceData$XRPixmapSurfaceData($Class* clazz) {
	return $of($alloc(XRSurfaceData$XRPixmapSurfaceData));
}

void XRSurfaceData$XRPixmapSurfaceData::init$($XRGraphicsConfig* gc, int32_t width, int32_t height, $Image* image, $SurfaceType* sType, $ColorModel* cm, int64_t drawable, int32_t transparency, int32_t pictFormat, int32_t depth, bool isTexture) {
	$XRSurfaceData::init$(nullptr, gc, sType, cm, depth, transparency);
	this->scale = isTexture ? 1 : $nc($($cast($X11GraphicsDevice, $nc(gc)->getDevice())))->getScaleFactor();
	this->width = width * this->scale;
	this->height = height * this->scale;
	$set(this, offscreenImage, image);
	this->transparency = transparency;
	initSurface(depth, this->width, this->height, drawable, pictFormat);
	initXRender(pictFormat);
	makePipes();
}

void XRSurfaceData$XRPixmapSurfaceData::initSurface(int32_t depth, int32_t width, int32_t height, int64_t drawable, int32_t pictFormat) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SunToolkit::awtLock();
			XRInitSurface(depth, width, height, drawable, pictFormat);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$SurfaceData* XRSurfaceData$XRPixmapSurfaceData::getReplacement() {
	return restoreContents(this->offscreenImage);
}

int32_t XRSurfaceData$XRPixmapSurfaceData::getTransparency() {
	return this->transparency;
}

$Rectangle* XRSurfaceData$XRPixmapSurfaceData::getBounds() {
	return $new($Rectangle, this->width, this->height);
}

bool XRSurfaceData$XRPixmapSurfaceData::canSourceSendExposures(int32_t x, int32_t y, int32_t w, int32_t h) {
	return (x < 0 || y < 0 || (x + w) > this->width || (y + h) > this->height);
}

void XRSurfaceData$XRPixmapSurfaceData::flush() {
	invalidate();
	flushNativeSurface();
}

$Object* XRSurfaceData$XRPixmapSurfaceData::getDestination() {
	return $of(this->offscreenImage);
}

double XRSurfaceData$XRPixmapSurfaceData::getDefaultScaleX() {
	return (double)this->scale;
}

double XRSurfaceData$XRPixmapSurfaceData::getDefaultScaleY() {
	return (double)this->scale;
}

XRSurfaceData$XRPixmapSurfaceData::XRSurfaceData$XRPixmapSurfaceData() {
}

$Class* XRSurfaceData$XRPixmapSurfaceData::load$($String* name, bool initialize) {
	$loadClass(XRSurfaceData$XRPixmapSurfaceData, name, initialize, &_XRSurfaceData$XRPixmapSurfaceData_ClassInfo_, allocate$XRSurfaceData$XRPixmapSurfaceData);
	return class$;
}

$Class* XRSurfaceData$XRPixmapSurfaceData::class$ = nullptr;

		} // xr
	} // java2d
} // sun