#include <sun/java2d/xr/XRPaints$XRTexture.h>

#include <java/awt/Color.h>
#include <java/awt/Image.h>
#include <java/awt/Paint.h>
#include <java/awt/TexturePaint.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/InternalError.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/Surface.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/xr/XRCompositeManager.h>
#include <sun/java2d/xr/XRPaints.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef TRANSFORM_ISIDENT

using $Color = ::java::awt::Color;
using $Image = ::java::awt::Image;
using $Paint = ::java::awt::Paint;
using $TexturePaint = ::java::awt::TexturePaint;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $Surface = ::sun::java2d::Surface;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $XRCompositeManager = ::sun::java2d::xr::XRCompositeManager;
using $XRPaints = ::sun::java2d::xr::XRPaints;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

$MethodInfo _XRPaints$XRTexture_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XRPaints$XRTexture::*)()>(&XRPaints$XRTexture::init$))},
	{"getAccSrcSurface", "(Lsun/java2d/xr/XRSurfaceData;Ljava/awt/image/BufferedImage;)Lsun/java2d/xr/XRSurfaceData;", nullptr, $PRIVATE, $method(static_cast<$XRSurfaceData*(XRPaints$XRTexture::*)($XRSurfaceData*,$BufferedImage*)>(&XRPaints$XRTexture::getAccSrcSurface))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0},
	{"setXRPaint", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Paint;)V", nullptr, 0},
	{}
};

$InnerClassInfo _XRPaints$XRTexture_InnerClassesInfo_[] = {
	{"sun.java2d.xr.XRPaints$XRTexture", "sun.java2d.xr.XRPaints", "XRTexture", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XRPaints$XRTexture_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.xr.XRPaints$XRTexture",
	"sun.java2d.xr.XRPaints",
	nullptr,
	nullptr,
	_XRPaints$XRTexture_MethodInfo_,
	nullptr,
	nullptr,
	_XRPaints$XRTexture_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.xr.XRPaints"
};

$Object* allocate$XRPaints$XRTexture($Class* clazz) {
	return $of($alloc(XRPaints$XRTexture));
}

void XRPaints$XRTexture::init$() {
	$XRPaints::init$();
}

$XRSurfaceData* XRPaints$XRTexture::getAccSrcSurface($XRSurfaceData* dstData, $BufferedImage* bi) {
	$init($CompositeType);
	$var($SurfaceData, srcData, $nc(dstData)->getSourceSurfaceData(bi, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
	if (!($instanceOf($XRSurfaceData, srcData))) {
		$assign(srcData, dstData->getSourceSurfaceData(bi, $SunGraphics2D::TRANSFORM_ISIDENT, $CompositeType::SrcOver, nullptr));
		if (!($instanceOf($XRSurfaceData, srcData))) {
			$throwNew($InternalError, "Surface not cachable"_s);
		}
	}
	return $cast($XRSurfaceData, srcData);
}

bool XRPaints$XRTexture::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($TexturePaint, paint, $cast($TexturePaint, $nc(sg2d)->paint));
	$var($BufferedImage, bi, $nc(paint)->getImage());
	$var($XRSurfaceData, dstData, $cast($XRSurfaceData, sg2d->getDestSurface()));
	return getAccSrcSurface(dstData, bi) != nullptr;
}

void XRPaints$XRTexture::setXRPaint($SunGraphics2D* sg2d, $Paint* pt) {
	$useLocalCurrentObjectStackCache();
	$var($TexturePaint, paint, $cast($TexturePaint, pt));
	$var($BufferedImage, bi, $nc(paint)->getImage());
	$var($Rectangle2D, anchor, paint->getAnchorRect());
	$var($XRSurfaceData, dstData, $cast($XRSurfaceData, $nc(sg2d)->surfaceData));
	$var($XRSurfaceData, srcData, getAccSrcSurface(dstData, bi));
	$var($AffineTransform, at, $new($AffineTransform));
	double var$0 = $nc(anchor)->getX();
	at->translate(var$0, anchor->getY());
	double var$2 = $nc(anchor)->getWidth();
	double var$1 = var$2 / ((double)$nc(bi)->getWidth());
	double var$3 = anchor->getHeight();
	at->scale(var$1, var$3 / ((double)bi->getHeight()));
	try {
		at->invert();
	} catch ($NoninvertibleTransformException& ex) {
		at->setToIdentity();
	}
	$nc(srcData)->setStaticSrcTx(at);
	srcData->validateAsSource(at, $XRUtils::RepeatNormal, $XRUtils::ATransOpToXRQuality(sg2d->interpolationType));
	$init($XRPaints);
	$nc($XRPaints::xrCompMan)->setTexturePaint(srcData);
}

XRPaints$XRTexture::XRPaints$XRTexture() {
}

$Class* XRPaints$XRTexture::load$($String* name, bool initialize) {
	$loadClass(XRPaints$XRTexture, name, initialize, &_XRPaints$XRTexture_ClassInfo_, allocate$XRPaints$XRTexture);
	return class$;
}

$Class* XRPaints$XRTexture::class$ = nullptr;

		} // xr
	} // java2d
} // sun