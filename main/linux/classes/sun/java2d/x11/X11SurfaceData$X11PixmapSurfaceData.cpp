#include <sun/java2d/x11/X11SurfaceData$X11PixmapSurfaceData.h>

#include <java/awt/GraphicsDevice.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/awt/X11GraphicsDevice.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/x11/X11SurfaceData.h>
#include <sun/java2d/x11/XSurfaceData.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $X11GraphicsDevice = ::sun::awt::X11GraphicsDevice;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $X11SurfaceData = ::sun::java2d::x11::X11SurfaceData;

namespace sun {
	namespace java2d {
		namespace x11 {

$FieldInfo _X11SurfaceData$X11PixmapSurfaceData_FieldInfo_[] = {
	{"offscreenImage", "Ljava/awt/Image;", nullptr, $PRIVATE | $FINAL, $field(X11SurfaceData$X11PixmapSurfaceData, offscreenImage)},
	{"width", "I", nullptr, $PRIVATE | $FINAL, $field(X11SurfaceData$X11PixmapSurfaceData, width)},
	{"height", "I", nullptr, $PRIVATE | $FINAL, $field(X11SurfaceData$X11PixmapSurfaceData, height)},
	{"transparency", "I", nullptr, $PRIVATE | $FINAL, $field(X11SurfaceData$X11PixmapSurfaceData, transparency)},
	{"scale", "I", nullptr, $PRIVATE | $FINAL, $field(X11SurfaceData$X11PixmapSurfaceData, scale)},
	{}
};

$MethodInfo _X11SurfaceData$X11PixmapSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11GraphicsConfig;IILjava/awt/Image;Lsun/java2d/loops/SurfaceType;Ljava/awt/image/ColorModel;JIZ)V", nullptr, $PUBLIC, $method(static_cast<void(X11SurfaceData$X11PixmapSurfaceData::*)($X11GraphicsConfig*,int32_t,int32_t,$Image*,$SurfaceType*,$ColorModel*,int64_t,int32_t,bool)>(&X11SurfaceData$X11PixmapSurfaceData::init$))},
	{"canSourceSendExposures", "(IIII)Z", nullptr, $PUBLIC},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getDefaultScaleX", "()D", nullptr, $PUBLIC},
	{"getDefaultScaleY", "()D", nullptr, $PUBLIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"getTransparency", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X11SurfaceData$X11PixmapSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.x11.X11SurfaceData$X11PixmapSurfaceData", "sun.java2d.x11.X11SurfaceData", "X11PixmapSurfaceData", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _X11SurfaceData$X11PixmapSurfaceData_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.x11.X11SurfaceData$X11PixmapSurfaceData",
	"sun.java2d.x11.X11SurfaceData",
	nullptr,
	_X11SurfaceData$X11PixmapSurfaceData_FieldInfo_,
	_X11SurfaceData$X11PixmapSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_X11SurfaceData$X11PixmapSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.x11.X11SurfaceData"
};

$Object* allocate$X11SurfaceData$X11PixmapSurfaceData($Class* clazz) {
	return $of($alloc(X11SurfaceData$X11PixmapSurfaceData));
}

void X11SurfaceData$X11PixmapSurfaceData::init$($X11GraphicsConfig* gc, int32_t width, int32_t height, $Image* image, $SurfaceType* sType, $ColorModel* cm, int64_t drawable, int32_t transparency, bool isTexture) {
	$X11SurfaceData::init$(nullptr, gc, sType, cm);
	this->scale = isTexture ? 1 : $nc($($cast($X11GraphicsDevice, $nc(gc)->getDevice())))->getScaleFactor();
	this->width = width * this->scale;
	this->height = height * this->scale;
	$set(this, offscreenImage, image);
	this->transparency = transparency;
	initSurface(this->depth, this->width, this->height, drawable);
	makePipes();
}

$SurfaceData* X11SurfaceData$X11PixmapSurfaceData::getReplacement() {
	return restoreContents(this->offscreenImage);
}

int32_t X11SurfaceData$X11PixmapSurfaceData::getTransparency() {
	return this->transparency;
}

$Rectangle* X11SurfaceData$X11PixmapSurfaceData::getBounds() {
	return $new($Rectangle, this->width, this->height);
}

bool X11SurfaceData$X11PixmapSurfaceData::canSourceSendExposures(int32_t x, int32_t y, int32_t w, int32_t h) {
	return (x < 0 || y < 0 || (x + w) > this->width || (y + h) > this->height);
}

void X11SurfaceData$X11PixmapSurfaceData::flush() {
	invalidate();
	flushNativeSurface();
}

$Object* X11SurfaceData$X11PixmapSurfaceData::getDestination() {
	return $of(this->offscreenImage);
}

double X11SurfaceData$X11PixmapSurfaceData::getDefaultScaleX() {
	return (double)this->scale;
}

double X11SurfaceData$X11PixmapSurfaceData::getDefaultScaleY() {
	return (double)this->scale;
}

X11SurfaceData$X11PixmapSurfaceData::X11SurfaceData$X11PixmapSurfaceData() {
}

$Class* X11SurfaceData$X11PixmapSurfaceData::load$($String* name, bool initialize) {
	$loadClass(X11SurfaceData$X11PixmapSurfaceData, name, initialize, &_X11SurfaceData$X11PixmapSurfaceData_ClassInfo_, allocate$X11SurfaceData$X11PixmapSurfaceData);
	return class$;
}

$Class* X11SurfaceData$X11PixmapSurfaceData::class$ = nullptr;

		} // x11
	} // java2d
} // sun