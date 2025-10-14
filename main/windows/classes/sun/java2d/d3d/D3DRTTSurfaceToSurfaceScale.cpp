#include <sun/java2d/d3d/D3DRTTSurfaceToSurfaceScale.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ClassInfo = ::java::lang::ClassInfo;
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

$MethodInfo _D3DRTTSurfaceToSurfaceScale_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(D3DRTTSurfaceToSurfaceScale::*)()>(&D3DRTTSurfaceToSurfaceScale::init$))},
	{"Scale", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIDDDD)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _D3DRTTSurfaceToSurfaceScale_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DRTTSurfaceToSurfaceScale",
	"sun.java2d.loops.ScaledBlit",
	nullptr,
	nullptr,
	_D3DRTTSurfaceToSurfaceScale_MethodInfo_
};

$Object* allocate$D3DRTTSurfaceToSurfaceScale($Class* clazz) {
	return $of($alloc(D3DRTTSurfaceToSurfaceScale));
}

void D3DRTTSurfaceToSurfaceScale::init$() {
	$init($D3DSurfaceData);
	$init($CompositeType);
	$ScaledBlit::init$($D3DSurfaceData::D3DSurfaceRTT, $CompositeType::AnyAlpha, $D3DSurfaceData::D3DSurface);
}

void D3DRTTSurfaceToSurfaceScale::Scale($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) {
	$D3DBlitLoops::IsoBlit(src, dst, nullptr, nullptr, comp, clip, nullptr, $AffineTransformOp::TYPE_NEAREST_NEIGHBOR, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2, true);
}

D3DRTTSurfaceToSurfaceScale::D3DRTTSurfaceToSurfaceScale() {
}

$Class* D3DRTTSurfaceToSurfaceScale::load$($String* name, bool initialize) {
	$loadClass(D3DRTTSurfaceToSurfaceScale, name, initialize, &_D3DRTTSurfaceToSurfaceScale_ClassInfo_, allocate$D3DRTTSurfaceToSurfaceScale);
	return class$;
}

$Class* D3DRTTSurfaceToSurfaceScale::class$ = nullptr;

		} // d3d
	} // java2d
} // sun