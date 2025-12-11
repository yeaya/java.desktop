#include <sun/java2d/metal/MTLSurfaceToSurfaceScale.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/ScaledBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/metal/MTLBlitLoops.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef TYPE_NEAREST_NEIGHBOR

using $Composite = ::java::awt::Composite;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $AffineTransformOp = ::java::awt::image::AffineTransformOp;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $ScaledBlit = ::sun::java2d::loops::ScaledBlit;
using $MTLBlitLoops = ::sun::java2d::metal::MTLBlitLoops;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace metal {

$MethodInfo _MTLSurfaceToSurfaceScale_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MTLSurfaceToSurfaceScale::*)()>(&MTLSurfaceToSurfaceScale::init$))},
	{"Scale", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIDDDD)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MTLSurfaceToSurfaceScale_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLSurfaceToSurfaceScale",
	"sun.java2d.loops.ScaledBlit",
	nullptr,
	nullptr,
	_MTLSurfaceToSurfaceScale_MethodInfo_
};

$Object* allocate$MTLSurfaceToSurfaceScale($Class* clazz) {
	return $of($alloc(MTLSurfaceToSurfaceScale));
}

void MTLSurfaceToSurfaceScale::init$() {
	$init($MTLSurfaceData);
	$init($CompositeType);
	$ScaledBlit::init$($MTLSurfaceData::MTLSurface, $CompositeType::AnyAlpha, $MTLSurfaceData::MTLSurface);
}

void MTLSurfaceToSurfaceScale::Scale($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) {
	$MTLBlitLoops::IsoBlit(src, dst, nullptr, nullptr, comp, clip, nullptr, $AffineTransformOp::TYPE_NEAREST_NEIGHBOR, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2, false);
}

MTLSurfaceToSurfaceScale::MTLSurfaceToSurfaceScale() {
}

$Class* MTLSurfaceToSurfaceScale::load$($String* name, bool initialize) {
	$loadClass(MTLSurfaceToSurfaceScale, name, initialize, &_MTLSurfaceToSurfaceScale_ClassInfo_, allocate$MTLSurfaceToSurfaceScale);
	return class$;
}

$Class* MTLSurfaceToSurfaceScale::class$ = nullptr;

		} // metal
	} // java2d
} // sun