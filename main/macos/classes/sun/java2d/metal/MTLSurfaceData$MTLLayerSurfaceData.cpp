#include <sun/java2d/metal/MTLSurfaceData$MTLLayerSurfaceData.h>

#include <java/awt/image/ColorModel.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/metal/MTLContext.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <sun/java2d/metal/MTLLayer.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef RT_TEXTURE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $MTLGraphicsConfig = ::sun::java2d::metal::MTLGraphicsConfig;
using $MTLLayer = ::sun::java2d::metal::MTLLayer;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace metal {

$FieldInfo _MTLSurfaceData$MTLLayerSurfaceData_FieldInfo_[] = {
	{"layer", "Lsun/java2d/metal/MTLLayer;", nullptr, $PRIVATE | $FINAL, $field(MTLSurfaceData$MTLLayerSurfaceData, layer)},
	{}
};

$MethodInfo _MTLSurfaceData$MTLLayerSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/metal/MTLLayer;Lsun/java2d/metal/MTLGraphicsConfig;II)V", nullptr, $PRIVATE, $method(static_cast<void(MTLSurfaceData$MTLLayerSurfaceData::*)($MTLLayer*,$MTLGraphicsConfig*,int32_t,int32_t)>(&MTLSurfaceData$MTLLayerSurfaceData::init$))},
	{"getContext", "()Lsun/java2d/pipe/BufferedContext;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"getTransparency", "()I", nullptr, $PUBLIC},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"isOnScreen", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MTLSurfaceData$MTLLayerSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLSurfaceData$MTLLayerSurfaceData", "sun.java2d.metal.MTLSurfaceData", "MTLLayerSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MTLSurfaceData$MTLLayerSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.metal.MTLSurfaceData$MTLLayerSurfaceData",
	"sun.java2d.metal.MTLSurfaceData",
	nullptr,
	_MTLSurfaceData$MTLLayerSurfaceData_FieldInfo_,
	_MTLSurfaceData$MTLLayerSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_MTLSurfaceData$MTLLayerSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLSurfaceData"
};

$Object* allocate$MTLSurfaceData$MTLLayerSurfaceData($Class* clazz) {
	return $of($alloc(MTLSurfaceData$MTLLayerSurfaceData));
}

void MTLSurfaceData$MTLLayerSurfaceData::init$($MTLLayer* layer, $MTLGraphicsConfig* gc, int32_t width, int32_t height) {
	$MTLSurfaceData::init$(layer, gc, $($nc(gc)->getColorModel()), $AccelSurface::RT_TEXTURE, width, height);
	$set(this, layer, layer);
	initSurface(this->width, this->height);
}

$SurfaceData* MTLSurfaceData$MTLLayerSurfaceData::getReplacement() {
	return $nc(this->layer)->getSurfaceData();
}

bool MTLSurfaceData$MTLLayerSurfaceData::isOnScreen() {
	return true;
}

$Object* MTLSurfaceData$MTLLayerSurfaceData::getDestination() {
	return $of($nc(this->layer)->getDestination());
}

int32_t MTLSurfaceData$MTLLayerSurfaceData::getTransparency() {
	return $nc(this->layer)->getTransparency();
}

void MTLSurfaceData$MTLLayerSurfaceData::invalidate() {
	$MTLSurfaceData::invalidate();
	clearWindow();
}

$BufferedContext* MTLSurfaceData$MTLLayerSurfaceData::getContext() {
	return $MTLSurfaceData::getContext();
}

MTLSurfaceData$MTLLayerSurfaceData::MTLSurfaceData$MTLLayerSurfaceData() {
}

$Class* MTLSurfaceData$MTLLayerSurfaceData::load$($String* name, bool initialize) {
	$loadClass(MTLSurfaceData$MTLLayerSurfaceData, name, initialize, &_MTLSurfaceData$MTLLayerSurfaceData_ClassInfo_, allocate$MTLSurfaceData$MTLLayerSurfaceData);
	return class$;
}

$Class* MTLSurfaceData$MTLLayerSurfaceData::class$ = nullptr;

		} // metal
	} // java2d
} // sun