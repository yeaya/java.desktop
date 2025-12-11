#include <sun/java2d/opengl/OGLBufImgOps.h>

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
#include <sun/java2d/opengl/OGLBlitLoops.h>
#include <sun/java2d/opengl/OGLGraphicsConfig.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
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
using $OGLBlitLoops = ::sun::java2d::opengl::OGLBlitLoops;
using $OGLGraphicsConfig = ::sun::java2d::opengl::OGLGraphicsConfig;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $BufferedBufImgOps = ::sun::java2d::pipe::BufferedBufImgOps;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _OGLBufImgOps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(OGLBufImgOps::*)()>(&OGLBufImgOps::init$))},
	{"renderImageWithOp", "(Lsun/java2d/SunGraphics2D;Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;II)Z", nullptr, $STATIC, $method(static_cast<bool(*)($SunGraphics2D*,$BufferedImage*,$BufferedImageOp*,int32_t,int32_t)>(&OGLBufImgOps::renderImageWithOp))},
	{}
};

$ClassInfo _OGLBufImgOps_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLBufImgOps",
	"sun.java2d.pipe.BufferedBufImgOps",
	nullptr,
	nullptr,
	_OGLBufImgOps_MethodInfo_
};

$Object* allocate$OGLBufImgOps($Class* clazz) {
	return $of($alloc(OGLBufImgOps));
}

void OGLBufImgOps::init$() {
	$BufferedBufImgOps::init$();
}

bool OGLBufImgOps::renderImageWithOp($SunGraphics2D* sg, $BufferedImage* img, $BufferedImageOp* biop, int32_t x, int32_t y) {
	$init(OGLBufImgOps);
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
	if (!($instanceOf($OGLSurfaceData, dstData)) || (sg->interpolationType == $AffineTransformOp::TYPE_BICUBIC) || (sg->compositeState > $SunGraphics2D::COMP_ALPHA)) {
		return false;
	}
	$init($CompositeType);
	$var($SurfaceData, srcData, $nc(dstData)->getSourceSurfaceData(img, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
	if (!($instanceOf($OGLSurfaceData, srcData))) {
		$assign(srcData, dstData->getSourceSurfaceData(img, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
		if (!($instanceOf($OGLSurfaceData, srcData))) {
			return false;
		}
	}
	$var($OGLSurfaceData, oglSrc, $cast($OGLSurfaceData, srcData));
	$var($OGLGraphicsConfig, gc, $nc(oglSrc)->getOGLGraphicsConfig());
	bool var$0 = oglSrc->getType() != $OGLSurfaceData::TEXTURE;
	if (var$0 || !$nc(gc)->isCapPresent(0x00040000)) {
		return false;
	}
	int32_t sw = $nc(img)->getWidth();
	int32_t sh = img->getHeight();
	$OGLBlitLoops::IsoBlit(srcData, dstData, img, biop, sg->composite, $(sg->getCompClip()), sg->transform$, sg->interpolationType, 0, 0, sw, sh, (double)x, (double)y, (double)(x + sw), (double)(y + sh), true);
	return true;
}

OGLBufImgOps::OGLBufImgOps() {
}

$Class* OGLBufImgOps::load$($String* name, bool initialize) {
	$loadClass(OGLBufImgOps, name, initialize, &_OGLBufImgOps_ClassInfo_, allocate$OGLBufImgOps);
	return class$;
}

$Class* OGLBufImgOps::class$ = nullptr;

		} // opengl
	} // java2d
} // sun