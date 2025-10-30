#include <sun/java2d/d3d/D3DDrawImage.h>

#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Image.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DBufImgOps.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit.h>
#include <sun/java2d/pipe/DrawImage.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef TRANSFORM_GENERIC
#undef TYPE_BICUBIC

using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $Image = ::java::awt::Image;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $AffineTransformOp = ::java::awt::image::AffineTransformOp;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DBufImgOps = ::sun::java2d::d3d::D3DBufImgOps;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $TransformBlit = ::sun::java2d::loops::TransformBlit;
using $DrawImage = ::sun::java2d::pipe::DrawImage;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DDrawImage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(D3DDrawImage::*)()>(&D3DDrawImage::init$))},
	{"renderImageXform", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;Ljava/awt/geom/AffineTransform;IIIIILjava/awt/Color;)V", nullptr, $PROTECTED},
	{"transformImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _D3DDrawImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.d3d.D3DDrawImage",
	"sun.java2d.pipe.DrawImage",
	nullptr,
	nullptr,
	_D3DDrawImage_MethodInfo_
};

$Object* allocate$D3DDrawImage($Class* clazz) {
	return $of($alloc(D3DDrawImage));
}

void D3DDrawImage::init$() {
	$DrawImage::init$();
}

void D3DDrawImage::renderImageXform($SunGraphics2D* sg, $Image* img, $AffineTransform* tx, int32_t interpType, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgColor) {
	$useLocalCurrentObjectStackCache();
	if (interpType != $AffineTransformOp::TYPE_BICUBIC) {
		$var($SurfaceData, dstData, $nc(sg)->surfaceData);
		$var($SurfaceData, srcData, $nc(dstData)->getSourceSurfaceData(img, $SunGraphics2D::TRANSFORM_GENERIC, sg->imageComp, bgColor));
		if (srcData != nullptr && !isBgOperation(srcData, bgColor)) {
			$var($SurfaceType, srcType, srcData->getSurfaceType());
			$var($SurfaceType, dstType, dstData->getSurfaceType());
			$var($TransformBlit, blit, $TransformBlit::getFromCache(srcType, sg->imageComp, dstType));
			if (blit != nullptr) {
				blit->Transform(srcData, dstData, sg->composite, $(sg->getCompClip()), tx, interpType, sx1, sy1, 0, 0, sx2 - sx1, sy2 - sy1);
				return;
			}
		}
	}
	$DrawImage::renderImageXform(sg, img, tx, interpType, sx1, sy1, sx2, sy2, bgColor);
}

void D3DDrawImage::transformImage($SunGraphics2D* sg, $BufferedImage* img$renamed, $BufferedImageOp* op, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, img, img$renamed);
	if (op != nullptr) {
		if ($instanceOf($AffineTransformOp, op)) {
			$var($AffineTransformOp, atop, $cast($AffineTransformOp, op));
			$var($SunGraphics2D, var$0, sg);
			$var($Image, var$1, static_cast<$Image*>(img));
			int32_t var$2 = x;
			int32_t var$3 = y;
			$var($AffineTransform, var$4, atop->getTransform());
			transformImage(var$0, var$1, var$2, var$3, var$4, atop->getInterpolationType());
			return;
		} else if ($D3DBufImgOps::renderImageWithOp(sg, img, op, x, y)) {
			return;
		}
		$assign(img, op->filter(img, nullptr));
	}
	copyImage(sg, img, x, y, nullptr);
}

D3DDrawImage::D3DDrawImage() {
}

$Class* D3DDrawImage::load$($String* name, bool initialize) {
	$loadClass(D3DDrawImage, name, initialize, &_D3DDrawImage_ClassInfo_, allocate$D3DDrawImage);
	return class$;
}

$Class* D3DDrawImage::class$ = nullptr;

		} // d3d
	} // java2d
} // sun