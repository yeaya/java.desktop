#include <sun/java2d/metal/MTLBufImgOps.h>

#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Image.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ConvolveOp.h>
#include <java/awt/image/LookupOp.h>
#include <java/awt/image/RescaleOp.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/metal/MTLBlitLoops.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <sun/java2d/pipe/BufferedBufImgOps.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef COMP_ALPHA
#undef TEXTURE
#undef TRANSFORM_ISIDENT
#undef TYPE_BICUBIC

using $Color = ::java::awt::Color;
using $Image = ::java::awt::Image;
using $AffineTransformOp = ::java::awt::image::AffineTransformOp;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ConvolveOp = ::java::awt::image::ConvolveOp;
using $LookupOp = ::java::awt::image::LookupOp;
using $RescaleOp = ::java::awt::image::RescaleOp;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $MTLBlitLoops = ::sun::java2d::metal::MTLBlitLoops;
using $MTLGraphicsConfig = ::sun::java2d::metal::MTLGraphicsConfig;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $BufferedBufImgOps = ::sun::java2d::pipe::BufferedBufImgOps;

namespace sun {
	namespace java2d {
		namespace metal {

$MethodInfo _MTLBufImgOps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MTLBufImgOps::*)()>(&MTLBufImgOps::init$))},
	{"renderImageWithOp", "(Lsun/java2d/SunGraphics2D;Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;II)Z", nullptr, $STATIC, $method(static_cast<bool(*)($SunGraphics2D*,$BufferedImage*,$BufferedImageOp*,int32_t,int32_t)>(&MTLBufImgOps::renderImageWithOp))},
	{}
};

$ClassInfo _MTLBufImgOps_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLBufImgOps",
	"sun.java2d.pipe.BufferedBufImgOps",
	nullptr,
	nullptr,
	_MTLBufImgOps_MethodInfo_
};

$Object* allocate$MTLBufImgOps($Class* clazz) {
	return $of($alloc(MTLBufImgOps));
}

void MTLBufImgOps::init$() {
	$BufferedBufImgOps::init$();
}

bool MTLBufImgOps::renderImageWithOp($SunGraphics2D* sg, $BufferedImage* img, $BufferedImageOp* biop, int32_t x, int32_t y) {
	$init(MTLBufImgOps);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($ConvolveOp, biop)) {
		if (!isConvolveOpValid($cast($ConvolveOp, biop))) {
			return false;
		}
	} else if ($instanceOf($RescaleOp, biop)) {
		if (!isRescaleOpValid($cast($RescaleOp, biop), img)) {
			return false;
		}
	} else if ($instanceOf($LookupOp, biop)) {
		if (!isLookupOpValid($cast($LookupOp, biop), img)) {
			return false;
		}
	} else {
		return false;
	}
	$var($SurfaceData, dstData, $nc(sg)->surfaceData);
	if (!($instanceOf($MTLSurfaceData, dstData)) || (sg->interpolationType == $AffineTransformOp::TYPE_BICUBIC) || (sg->compositeState > $SunGraphics2D::COMP_ALPHA)) {
		return false;
	}
	$init($CompositeType);
	$var($SurfaceData, srcData, $nc(dstData)->getSourceSurfaceData(img, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
	if (!($instanceOf($MTLSurfaceData, srcData))) {
		$assign(srcData, dstData->getSourceSurfaceData(img, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
		if (!($instanceOf($MTLSurfaceData, srcData))) {
			return false;
		}
	}
	$var($MTLSurfaceData, mtlSrc, $cast($MTLSurfaceData, srcData));
	$var($MTLGraphicsConfig, gc, $nc(mtlSrc)->getMTLGraphicsConfig());
	bool var$0 = mtlSrc->getType() != $MTLSurfaceData::TEXTURE;
	if (var$0 || !$nc(gc)->isCapPresent(0x00040000)) {
		return false;
	}
	int32_t sw = $nc(img)->getWidth();
	int32_t sh = img->getHeight();
	$MTLBlitLoops::IsoBlit(srcData, dstData, img, biop, sg->composite, $(sg->getCompClip()), sg->transform$, sg->interpolationType, 0, 0, sw, sh, (double)x, (double)y, (double)(x + sw), (double)(y + sh), true);
	return true;
}

MTLBufImgOps::MTLBufImgOps() {
}

$Class* MTLBufImgOps::load$($String* name, bool initialize) {
	$loadClass(MTLBufImgOps, name, initialize, &_MTLBufImgOps_ClassInfo_, allocate$MTLBufImgOps);
	return class$;
}

$Class* MTLBufImgOps::class$ = nullptr;

		} // metal
	} // java2d
} // sun