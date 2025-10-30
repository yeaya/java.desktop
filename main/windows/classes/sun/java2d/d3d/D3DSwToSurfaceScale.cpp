#include <sun/java2d/d3d/D3DSwToSurfaceScale.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DBlitLoops.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/ScaledBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
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
using $D3DBlitLoops = ::sun::java2d::d3d::D3DBlitLoops;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $ScaledBlit = ::sun::java2d::loops::ScaledBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DSwToSurfaceScale_FieldInfo_[] = {
	{"typeval", "I", nullptr, $PRIVATE, $field(D3DSwToSurfaceScale, typeval)},
	{}
};

$MethodInfo _D3DSwToSurfaceScale_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;I)V", nullptr, 0, $method(static_cast<void(D3DSwToSurfaceScale::*)($SurfaceType*,int32_t)>(&D3DSwToSurfaceScale::init$))},
	{"Scale", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIDDDD)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _D3DSwToSurfaceScale_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DSwToSurfaceScale",
	"sun.java2d.loops.ScaledBlit",
	nullptr,
	_D3DSwToSurfaceScale_FieldInfo_,
	_D3DSwToSurfaceScale_MethodInfo_
};

$Object* allocate$D3DSwToSurfaceScale($Class* clazz) {
	return $of($alloc(D3DSwToSurfaceScale));
}

void D3DSwToSurfaceScale::init$($SurfaceType* srcType, int32_t typeval) {
	$init($CompositeType);
	$init($D3DSurfaceData);
	$ScaledBlit::init$(srcType, $CompositeType::AnyAlpha, $D3DSurfaceData::D3DSurface);
	this->typeval = typeval;
}

void D3DSwToSurfaceScale::Scale($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) {
	$D3DBlitLoops::Blit(src, dst, comp, clip, nullptr, $AffineTransformOp::TYPE_NEAREST_NEIGHBOR, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2, this->typeval, false);
}

D3DSwToSurfaceScale::D3DSwToSurfaceScale() {
}

$Class* D3DSwToSurfaceScale::load$($String* name, bool initialize) {
	$loadClass(D3DSwToSurfaceScale, name, initialize, &_D3DSwToSurfaceScale_ClassInfo_, allocate$D3DSwToSurfaceScale);
	return class$;
}

$Class* D3DSwToSurfaceScale::class$ = nullptr;

		} // d3d
	} // java2d
} // sun