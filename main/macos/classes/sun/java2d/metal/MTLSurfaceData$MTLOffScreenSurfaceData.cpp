#include <sun/java2d/metal/MTLSurfaceData$MTLOffScreenSurfaceData.h>

#include <java/awt/Image.h>
#include <java/awt/image/ColorModel.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/metal/MTLContext.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <sun/java2d/metal/MTLLayer.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $MTLGraphicsConfig = ::sun::java2d::metal::MTLGraphicsConfig;
using $MTLLayer = ::sun::java2d::metal::MTLLayer;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;

namespace sun {
	namespace java2d {
		namespace metal {

$FieldInfo _MTLSurfaceData$MTLOffScreenSurfaceData_FieldInfo_[] = {
	{"offscreenImage", "Ljava/awt/Image;", nullptr, $PRIVATE | $FINAL, $field(MTLSurfaceData$MTLOffScreenSurfaceData, offscreenImage)},
	{}
};

$MethodInfo _MTLSurfaceData$MTLOffScreenSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/metal/MTLGraphicsConfig;IILjava/awt/Image;Ljava/awt/image/ColorModel;I)V", nullptr, $PUBLIC, $method(static_cast<void(MTLSurfaceData$MTLOffScreenSurfaceData::*)($MTLGraphicsConfig*,int32_t,int32_t,$Image*,$ColorModel*,int32_t)>(&MTLSurfaceData$MTLOffScreenSurfaceData::init$))},
	{"getContext", "()Lsun/java2d/pipe/BufferedContext;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MTLSurfaceData$MTLOffScreenSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLSurfaceData$MTLOffScreenSurfaceData", "sun.java2d.metal.MTLSurfaceData", "MTLOffScreenSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MTLSurfaceData$MTLOffScreenSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.metal.MTLSurfaceData$MTLOffScreenSurfaceData",
	"sun.java2d.metal.MTLSurfaceData",
	nullptr,
	_MTLSurfaceData$MTLOffScreenSurfaceData_FieldInfo_,
	_MTLSurfaceData$MTLOffScreenSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_MTLSurfaceData$MTLOffScreenSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLSurfaceData"
};

$Object* allocate$MTLSurfaceData$MTLOffScreenSurfaceData($Class* clazz) {
	return $of($alloc(MTLSurfaceData$MTLOffScreenSurfaceData));
}

void MTLSurfaceData$MTLOffScreenSurfaceData::init$($MTLGraphicsConfig* gc, int32_t width, int32_t height, $Image* image, $ColorModel* cm, int32_t type) {
	$MTLSurfaceData::init$(nullptr, gc, cm, type, width, height);
	$set(this, offscreenImage, image);
	initSurface(this->width, this->height);
}

$SurfaceData* MTLSurfaceData$MTLOffScreenSurfaceData::getReplacement() {
	return restoreContents(this->offscreenImage);
}

$Object* MTLSurfaceData$MTLOffScreenSurfaceData::getDestination() {
	return $of(this->offscreenImage);
}

$BufferedContext* MTLSurfaceData$MTLOffScreenSurfaceData::getContext() {
	return $MTLSurfaceData::getContext();
}

MTLSurfaceData$MTLOffScreenSurfaceData::MTLSurfaceData$MTLOffScreenSurfaceData() {
}

$Class* MTLSurfaceData$MTLOffScreenSurfaceData::load$($String* name, bool initialize) {
	$loadClass(MTLSurfaceData$MTLOffScreenSurfaceData, name, initialize, &_MTLSurfaceData$MTLOffScreenSurfaceData_ClassInfo_, allocate$MTLSurfaceData$MTLOffScreenSurfaceData);
	return class$;
}

$Class* MTLSurfaceData$MTLOffScreenSurfaceData::class$ = nullptr;

		} // metal
	} // java2d
} // sun