#include <sun/java2d/metal/MTLRTTSurfaceToSurfaceTransform.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit.h>
#include <sun/java2d/metal/MTLBlitLoops.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $TransformBlit = ::sun::java2d::loops::TransformBlit;
using $MTLBlitLoops = ::sun::java2d::metal::MTLBlitLoops;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace metal {

$MethodInfo _MTLRTTSurfaceToSurfaceTransform_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MTLRTTSurfaceToSurfaceTransform::*)()>(&MTLRTTSurfaceToSurfaceTransform::init$))},
	{"Transform", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MTLRTTSurfaceToSurfaceTransform_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLRTTSurfaceToSurfaceTransform",
	"sun.java2d.loops.TransformBlit",
	nullptr,
	nullptr,
	_MTLRTTSurfaceToSurfaceTransform_MethodInfo_
};

$Object* allocate$MTLRTTSurfaceToSurfaceTransform($Class* clazz) {
	return $of($alloc(MTLRTTSurfaceToSurfaceTransform));
}

void MTLRTTSurfaceToSurfaceTransform::init$() {
	$init($MTLSurfaceData);
	$init($CompositeType);
	$TransformBlit::init$($MTLSurfaceData::MTLSurfaceRTT, $CompositeType::AnyAlpha, $MTLSurfaceData::MTLSurface);
}

void MTLRTTSurfaceToSurfaceTransform::Transform($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, $AffineTransform* at, int32_t hint, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$MTLBlitLoops::IsoBlit(src, dst, nullptr, nullptr, comp, clip, at, hint, sx, sy, sx + w, sy + h, (double)dx, (double)dy, (double)(dx + w), (double)(dy + h), true);
}

MTLRTTSurfaceToSurfaceTransform::MTLRTTSurfaceToSurfaceTransform() {
}

$Class* MTLRTTSurfaceToSurfaceTransform::load$($String* name, bool initialize) {
	$loadClass(MTLRTTSurfaceToSurfaceTransform, name, initialize, &_MTLRTTSurfaceToSurfaceTransform_ClassInfo_, allocate$MTLRTTSurfaceToSurfaceTransform);
	return class$;
}

$Class* MTLRTTSurfaceToSurfaceTransform::class$ = nullptr;

		} // metal
	} // java2d
} // sun