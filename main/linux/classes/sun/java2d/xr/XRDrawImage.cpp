#include <sun/java2d/xr/XRDrawImage.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Image.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AffineTransformOp.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit.h>
#include <sun/java2d/pipe/DrawImage.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef TRANSFORM_GENERIC
#undef TYPE_BILINEAR

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Image = ::java::awt::Image;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $AffineTransformOp = ::java::awt::image::AffineTransformOp;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $TransformBlit = ::sun::java2d::loops::TransformBlit;
using $DrawImage = ::sun::java2d::pipe::DrawImage;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

$MethodInfo _XRDrawImage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XRDrawImage::*)()>(&XRDrawImage::init$))},
	{"renderImageXform", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;Ljava/awt/geom/AffineTransform;IIIIILjava/awt/Color;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _XRDrawImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRDrawImage",
	"sun.java2d.pipe.DrawImage",
	nullptr,
	nullptr,
	_XRDrawImage_MethodInfo_
};

$Object* allocate$XRDrawImage($Class* clazz) {
	return $of($alloc(XRDrawImage));
}

void XRDrawImage::init$() {
	$DrawImage::init$();
}

void XRDrawImage::renderImageXform($SunGraphics2D* sg, $Image* img, $AffineTransform* tx, int32_t interpType, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgColor) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, dstData, $nc(sg)->surfaceData);
	$var($SurfaceData, srcData, $nc(dstData)->getSourceSurfaceData(img, $SunGraphics2D::TRANSFORM_GENERIC, sg->imageComp, bgColor));
	if ($instanceOf($AlphaComposite, sg->composite)) {
		int32_t compRule = $nc(($cast($AlphaComposite, sg->composite)))->getRule();
		float extraAlpha = $nc(($cast($AlphaComposite, sg->composite)))->getAlpha();
		bool var$0 = srcData != nullptr && !isBgOperation(srcData, bgColor) && interpType <= $AffineTransformOp::TYPE_BILINEAR;
		if (var$0) {
			bool var$1 = $XRUtils::isMaskEvaluated($XRUtils::j2dAlphaCompToXR(compRule));
			var$0 = (var$1 || ($XRUtils::isTransformQuadrantRotated(tx)) && extraAlpha == 1.0f);
		}
		if (var$0) {
			$var($SurfaceType, srcType, $nc(srcData)->getSurfaceType());
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

XRDrawImage::XRDrawImage() {
}

$Class* XRDrawImage::load$($String* name, bool initialize) {
	$loadClass(XRDrawImage, name, initialize, &_XRDrawImage_ClassInfo_, allocate$XRDrawImage);
	return class$;
}

$Class* XRDrawImage::class$ = nullptr;

		} // xr
	} // java2d
} // sun