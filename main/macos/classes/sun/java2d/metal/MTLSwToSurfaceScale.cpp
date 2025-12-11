#include <sun/java2d/metal/MTLSwToSurfaceScale.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
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
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $ScaledBlit = ::sun::java2d::loops::ScaledBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $MTLBlitLoops = ::sun::java2d::metal::MTLBlitLoops;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace metal {

$FieldInfo _MTLSwToSurfaceScale_FieldInfo_[] = {
	{"typeval", "I", nullptr, $PRIVATE, $field(MTLSwToSurfaceScale, typeval)},
	{}
};

$MethodInfo _MTLSwToSurfaceScale_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;I)V", nullptr, 0, $method(static_cast<void(MTLSwToSurfaceScale::*)($SurfaceType*,int32_t)>(&MTLSwToSurfaceScale::init$))},
	{"Scale", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIDDDD)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MTLSwToSurfaceScale_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLSwToSurfaceScale",
	"sun.java2d.loops.ScaledBlit",
	nullptr,
	_MTLSwToSurfaceScale_FieldInfo_,
	_MTLSwToSurfaceScale_MethodInfo_
};

$Object* allocate$MTLSwToSurfaceScale($Class* clazz) {
	return $of($alloc(MTLSwToSurfaceScale));
}

void MTLSwToSurfaceScale::init$($SurfaceType* srcType, int32_t typeval) {
	$init($CompositeType);
	$init($MTLSurfaceData);
	$ScaledBlit::init$(srcType, $CompositeType::AnyAlpha, $MTLSurfaceData::MTLSurface);
	this->typeval = typeval;
}

void MTLSwToSurfaceScale::Scale($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) {
	$MTLBlitLoops::Blit(src, dst, comp, clip, nullptr, $AffineTransformOp::TYPE_NEAREST_NEIGHBOR, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2, this->typeval, false);
}

MTLSwToSurfaceScale::MTLSwToSurfaceScale() {
}

$Class* MTLSwToSurfaceScale::load$($String* name, bool initialize) {
	$loadClass(MTLSwToSurfaceScale, name, initialize, &_MTLSwToSurfaceScale_ClassInfo_, allocate$MTLSwToSurfaceScale);
	return class$;
}

$Class* MTLSwToSurfaceScale::class$ = nullptr;

		} // metal
	} // java2d
} // sun