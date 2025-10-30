#include <sun/java2d/d3d/D3DBufImgOps.h>

#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
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
#include <sun/java2d/d3d/D3DBlitLoops.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/pipe/BufferedBufImgOps.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef COMP_ALPHA
#undef TEXTURE
#undef TRANSFORM_ISIDENT
#undef TYPE_BICUBIC

using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Image = ::java::awt::Image;
using $AffineTransform = ::java::awt::geom::AffineTransform;
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
using $D3DBlitLoops = ::sun::java2d::d3d::D3DBlitLoops;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $BufferedBufImgOps = ::sun::java2d::pipe::BufferedBufImgOps;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DBufImgOps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(D3DBufImgOps::*)()>(&D3DBufImgOps::init$))},
	{"renderImageWithOp", "(Lsun/java2d/SunGraphics2D;Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;II)Z", nullptr, $STATIC, $method(static_cast<bool(*)($SunGraphics2D*,$BufferedImage*,$BufferedImageOp*,int32_t,int32_t)>(&D3DBufImgOps::renderImageWithOp))},
	{}
};

$ClassInfo _D3DBufImgOps_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DBufImgOps",
	"sun.java2d.pipe.BufferedBufImgOps",
	nullptr,
	nullptr,
	_D3DBufImgOps_MethodInfo_
};

$Object* allocate$D3DBufImgOps($Class* clazz) {
	return $of($alloc(D3DBufImgOps));
}

void D3DBufImgOps::init$() {
	$BufferedBufImgOps::init$();
}

bool D3DBufImgOps::renderImageWithOp($SunGraphics2D* sg, $BufferedImage* img, $BufferedImageOp* biop, int32_t x, int32_t y) {
	$init(D3DBufImgOps);
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
	if (!($instanceOf($D3DSurfaceData, dstData)) || (sg->interpolationType == $AffineTransformOp::TYPE_BICUBIC) || (sg->compositeState > $SunGraphics2D::COMP_ALPHA)) {
		return false;
	}
	$init($CompositeType);
	$var($SurfaceData, srcData, $nc(dstData)->getSourceSurfaceData(img, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
	if (!($instanceOf($D3DSurfaceData, srcData))) {
		$assign(srcData, dstData->getSourceSurfaceData(img, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
		if (!($instanceOf($D3DSurfaceData, srcData))) {
			return false;
		}
	}
	$var($D3DSurfaceData, d3dSrc, $cast($D3DSurfaceData, srcData));
	$var($D3DGraphicsDevice, gd, $cast($D3DGraphicsDevice, $nc($($nc(d3dSrc)->getDeviceConfiguration()))->getDevice()));
	bool var$0 = d3dSrc->getType() != $D3DSurfaceData::TEXTURE;
	if (var$0 || !$nc(gd)->isCapPresent(0x00010000)) {
		return false;
	}
	int32_t sw = $nc(img)->getWidth();
	int32_t sh = img->getHeight();
	$D3DBlitLoops::IsoBlit(srcData, dstData, img, biop, sg->composite, $(sg->getCompClip()), sg->transform$, sg->interpolationType, 0, 0, sw, sh, (double)x, (double)y, (double)(x + sw), (double)(y + sh), true);
	return true;
}

D3DBufImgOps::D3DBufImgOps() {
}

$Class* D3DBufImgOps::load$($String* name, bool initialize) {
	$loadClass(D3DBufImgOps, name, initialize, &_D3DBufImgOps_ClassInfo_, allocate$D3DBufImgOps);
	return class$;
}

$Class* D3DBufImgOps::class$ = nullptr;

		} // d3d
	} // java2d
} // sun