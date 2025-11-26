#include <sun/font/ColorGlyphSurfaceData.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/Raster.h>
#include <java/lang/UnsupportedOperationException.h>
#include <sun/java2d/StateTrackable$State.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

#undef UNTRACKABLE

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Rectangle = ::java::awt::Rectangle;
using $Raster = ::java::awt::image::Raster;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;
using $SurfaceData = ::sun::java2d::SurfaceData;

namespace sun {
	namespace font {

$MethodInfo _ColorGlyphSurfaceData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ColorGlyphSurfaceData::*)()>(&ColorGlyphSurfaceData::init$))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"initOps", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(ColorGlyphSurfaceData::*)()>(&ColorGlyphSurfaceData::initOps))},
	{"setCurrentGlyph", "(J)V", nullptr, $NATIVE},
	{}
};

#define _METHOD_INDEX_initOps 6
#define _METHOD_INDEX_setCurrentGlyph 7

$ClassInfo _ColorGlyphSurfaceData_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.ColorGlyphSurfaceData",
	"sun.java2d.SurfaceData",
	nullptr,
	nullptr,
	_ColorGlyphSurfaceData_MethodInfo_
};

$Object* allocate$ColorGlyphSurfaceData($Class* clazz) {
	return $of($alloc(ColorGlyphSurfaceData));
}

void ColorGlyphSurfaceData::init$() {
	$init($StateTrackable$State);
	$SurfaceData::init$($StateTrackable$State::UNTRACKABLE);
	initOps();
}

void ColorGlyphSurfaceData::initOps() {
	$prepareNative(ColorGlyphSurfaceData, initOps, void);
	$invokeNative(ColorGlyphSurfaceData, initOps);
	$finishNative();
}

void ColorGlyphSurfaceData::setCurrentGlyph(int64_t imgPtr) {
	$prepareNative(ColorGlyphSurfaceData, setCurrentGlyph, void, int64_t imgPtr);
	$invokeNative(ColorGlyphSurfaceData, setCurrentGlyph, imgPtr);
	$finishNative();
}

$SurfaceData* ColorGlyphSurfaceData::getReplacement() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$GraphicsConfiguration* ColorGlyphSurfaceData::getDeviceConfiguration() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Raster* ColorGlyphSurfaceData::getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Rectangle* ColorGlyphSurfaceData::getBounds() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* ColorGlyphSurfaceData::getDestination() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

ColorGlyphSurfaceData::ColorGlyphSurfaceData() {
}

$Class* ColorGlyphSurfaceData::load$($String* name, bool initialize) {
	$loadClass(ColorGlyphSurfaceData, name, initialize, &_ColorGlyphSurfaceData_ClassInfo_, allocate$ColorGlyphSurfaceData);
	return class$;
}

$Class* ColorGlyphSurfaceData::class$ = nullptr;

	} // font
} // sun