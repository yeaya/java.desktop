#include <sun/java2d/metal/MTLRTTSurfaceToSurfaceBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
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
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $MTLBlitLoops = ::sun::java2d::metal::MTLBlitLoops;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace metal {

$MethodInfo _MTLRTTSurfaceToSurfaceBlit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MTLRTTSurfaceToSurfaceBlit::*)()>(&MTLRTTSurfaceToSurfaceBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MTLRTTSurfaceToSurfaceBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLRTTSurfaceToSurfaceBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	nullptr,
	_MTLRTTSurfaceToSurfaceBlit_MethodInfo_
};

$Object* allocate$MTLRTTSurfaceToSurfaceBlit($Class* clazz) {
	return $of($alloc(MTLRTTSurfaceToSurfaceBlit));
}

void MTLRTTSurfaceToSurfaceBlit::init$() {
	$init($MTLSurfaceData);
	$init($CompositeType);
	$Blit::init$($MTLSurfaceData::MTLSurfaceRTT, $CompositeType::AnyAlpha, $MTLSurfaceData::MTLSurface);
}

void MTLRTTSurfaceToSurfaceBlit::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$MTLBlitLoops::IsoBlit(src, dst, nullptr, nullptr, comp, clip, nullptr, $AffineTransformOp::TYPE_NEAREST_NEIGHBOR, sx, sy, sx + w, sy + h, (double)dx, (double)dy, (double)(dx + w), (double)(dy + h), true);
}

MTLRTTSurfaceToSurfaceBlit::MTLRTTSurfaceToSurfaceBlit() {
}

$Class* MTLRTTSurfaceToSurfaceBlit::load$($String* name, bool initialize) {
	$loadClass(MTLRTTSurfaceToSurfaceBlit, name, initialize, &_MTLRTTSurfaceToSurfaceBlit_ClassInfo_, allocate$MTLRTTSurfaceToSurfaceBlit);
	return class$;
}

$Class* MTLRTTSurfaceToSurfaceBlit::class$ = nullptr;

		} // metal
	} // java2d
} // sun