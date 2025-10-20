#include <sun/java2d/pipe/DrawImage.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/image/AffineTransformOp.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/SunHints.h>
#include <sun/awt/image/BytePackedRaster.h>
#include <sun/awt/image/ImageRepresentation.h>
#include <sun/awt/image/SurfaceManager.h>
#include <sun/awt/image/ToolkitImage.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/BlitBg.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/MaskBlit.h>
#include <sun/java2d/loops/ScaledBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformHelper.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef ABORT
#undef COMP_ALPHA
#undef ERROR
#undef INTVAL_RENDER_QUALITY
#undef MAX_TX_ERROR
#undef MAX_VALUE
#undef MIN_VALUE
#undef OPAQUE
#undef TRANSFORM_ANY_TRANSLATE
#undef TRANSFORM_GENERIC
#undef TRANSFORM_INT_TRANSLATE
#undef TRANSFORM_ISIDENT
#undef TRANSFORM_TRANSLATESCALE
#undef TYPE_BYTE
#undef TYPE_FLIP
#undef TYPE_GENERAL_TRANSFORM
#undef TYPE_IDENTITY
#undef TYPE_INT_ARGB
#undef TYPE_INT_ARGB_PRE
#undef TYPE_INT_RGB
#undef TYPE_MASK_ROTATION
#undef TYPE_NEAREST_NEIGHBOR
#undef TYPE_TRANSLATION

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $AffineTransformOp = ::java::awt::image::AffineTransformOp;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SunHints = ::sun::awt::SunHints;
using $BytePackedRaster = ::sun::awt::image::BytePackedRaster;
using $ImageRepresentation = ::sun::awt::image::ImageRepresentation;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $ToolkitImage = ::sun::awt::image::ToolkitImage;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $BlitBg = ::sun::java2d::loops::BlitBg;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $MaskBlit = ::sun::java2d::loops::MaskBlit;
using $ScaledBlit = ::sun::java2d::loops::ScaledBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $TransformHelper = ::sun::java2d::loops::TransformHelper;
using $DrawImagePipe = ::sun::java2d::pipe::DrawImagePipe;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _DrawImage_FieldInfo_[] = {
	{"MAX_TX_ERROR", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DrawImage, MAX_TX_ERROR)},
	{}
};

$MethodInfo _DrawImage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DrawImage::*)()>(&DrawImage::init$))},
	{"blitSurfaceData", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/pipe/Region;Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;IIIIIILjava/awt/Color;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($SunGraphics2D*,$Region*,$SurfaceData*,$SurfaceData*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,$Color*)>(&DrawImage::blitSurfaceData))},
	{"closeToInteger", "(ID)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t,double)>(&DrawImage::closeToInteger))},
	{"copyImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IILjava/awt/Color;)Z", nullptr, $PUBLIC},
	{"copyImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIIIILjava/awt/Color;)Z", nullptr, $PUBLIC},
	{"copyImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"copyImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"getBufferedImage", "(Ljava/awt/Image;)Ljava/awt/image/BufferedImage;", nullptr, $PROTECTED},
	{"getTransformColorModel", "(Lsun/java2d/SunGraphics2D;Ljava/awt/image/BufferedImage;Ljava/awt/geom/AffineTransform;)Ljava/awt/image/ColorModel;", nullptr, $PRIVATE, $method(static_cast<$ColorModel*(DrawImage::*)($SunGraphics2D*,$BufferedImage*,$AffineTransform*)>(&DrawImage::getTransformColorModel))},
	{"imageReady", "(Lsun/awt/image/ToolkitImage;Ljava/awt/image/ImageObserver;)Z", nullptr, $PROTECTED | $STATIC, $method(static_cast<bool(*)($ToolkitImage*,$ImageObserver*)>(&DrawImage::imageReady))},
	{"isBgOperation", "(Lsun/java2d/SurfaceData;Ljava/awt/Color;)Z", nullptr, $PROTECTED | $STATIC, $method(static_cast<bool(*)($SurfaceData*,$Color*)>(&DrawImage::isBgOperation))},
	{"isSimpleTranslate", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($SunGraphics2D*)>(&DrawImage::isSimpleTranslate))},
	{"makeBufferedImage", "(Ljava/awt/Image;Ljava/awt/Color;IIIII)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $method(static_cast<$BufferedImage*(DrawImage::*)($Image*,$Color*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&DrawImage::makeBufferedImage))},
	{"renderImageCopy", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;Ljava/awt/Color;IIIIII)Z", nullptr, $PROTECTED},
	{"renderImageScale", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;Ljava/awt/Color;IIIIIDDDD)Z", nullptr, $PROTECTED},
	{"renderImageXform", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;Ljava/awt/geom/AffineTransform;IIIIILjava/awt/Color;)V", nullptr, $PROTECTED},
	{"scaleImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIILjava/awt/Color;)Z", nullptr, $PUBLIC},
	{"scaleImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIIIIIILjava/awt/Color;)Z", nullptr, $PUBLIC},
	{"scaleImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"scaleImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"scaleSurfaceData", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/pipe/Region;Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;IIIIDDDD)Z", nullptr, $PROTECTED},
	{"transformImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IILjava/awt/geom/AffineTransform;I)V", nullptr, $PROTECTED},
	{"transformImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;Ljava/awt/geom/AffineTransform;IIIIILjava/awt/Color;)V", nullptr, $PROTECTED},
	{"transformImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;Ljava/awt/geom/AffineTransform;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"transformImage", "(Lsun/java2d/SunGraphics2D;Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;II)V", nullptr, $PUBLIC},
	{"tryCopyOrScale", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Image;IIIILjava/awt/Color;I[D)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _DrawImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.DrawImage",
	"java.lang.Object",
	"sun.java2d.pipe.DrawImagePipe",
	_DrawImage_FieldInfo_,
	_DrawImage_MethodInfo_
};

$Object* allocate$DrawImage($Class* clazz) {
	return $of($alloc(DrawImage));
}


double DrawImage::MAX_TX_ERROR = 0.0;

void DrawImage::init$() {
}

bool DrawImage::copyImage($SunGraphics2D* sg, $Image* img, int32_t x, int32_t y, $Color* bgColor) {
	int32_t imgw = $nc(img)->getWidth(nullptr);
	int32_t imgh = img->getHeight(nullptr);
	if (isSimpleTranslate(sg)) {
		return renderImageCopy(sg, img, bgColor, x + $nc(sg)->transX, y + sg->transY, 0, 0, imgw, imgh);
	}
	$var($AffineTransform, atfm, $nc(sg)->transform$);
	if ((x | y) != 0) {
		$assign(atfm, $new($AffineTransform, atfm));
		atfm->translate((double)x, (double)y);
	}
	transformImage(sg, img, atfm, sg->interpolationType, 0, 0, imgw, imgh, bgColor);
	return true;
}

bool DrawImage::copyImage($SunGraphics2D* sg, $Image* img, int32_t dx, int32_t dy, int32_t sx, int32_t sy, int32_t w, int32_t h, $Color* bgColor) {
	if (isSimpleTranslate(sg)) {
		return renderImageCopy(sg, img, bgColor, dx + $nc(sg)->transX, dy + sg->transY, sx, sy, w, h);
	}
	scaleImage(sg, img, dx, dy, (dx + w), (dy + h), sx, sy, (sx + w), (sy + h), bgColor);
	return true;
}

bool DrawImage::scaleImage($SunGraphics2D* sg, $Image* img, int32_t x, int32_t y, int32_t width, int32_t height, $Color* bgColor) {
	int32_t imgw = $nc(img)->getWidth(nullptr);
	int32_t imgh = img->getHeight(nullptr);
	if ((width > 0) && (height > 0) && isSimpleTranslate(sg)) {
		double dx1 = (double)(x + $nc(sg)->transX);
		double dy1 = (double)(y + sg->transY);
		double dx2 = dx1 + width;
		double dy2 = dy1 + height;
		if (renderImageScale(sg, img, bgColor, sg->interpolationType, 0, 0, imgw, imgh, dx1, dy1, dx2, dy2)) {
			return true;
		}
	}
	$var($AffineTransform, atfm, $nc(sg)->transform$);
	if ((x | y) != 0 || width != imgw || height != imgh) {
		$assign(atfm, $new($AffineTransform, atfm));
		atfm->translate((double)x, (double)y);
		atfm->scale(((double)width) / imgw, ((double)height) / imgh);
	}
	transformImage(sg, img, atfm, sg->interpolationType, 0, 0, imgw, imgh, bgColor);
	return true;
}

void DrawImage::transformImage($SunGraphics2D* sg, $Image* img, int32_t x, int32_t y, $AffineTransform* extraAT, int32_t interpType) {
	$useLocalCurrentObjectStackCache();
	int32_t txtype = $nc(extraAT)->getType();
	int32_t imgw = $nc(img)->getWidth(nullptr);
	int32_t imgh = img->getHeight(nullptr);
	bool checkfinalxform = false;
	if ($nc(sg)->transformState <= $SunGraphics2D::TRANSFORM_ANY_TRANSLATE && (txtype == $AffineTransform::TYPE_IDENTITY || txtype == $AffineTransform::TYPE_TRANSLATION)) {
		double tx = extraAT->getTranslateX();
		double ty = extraAT->getTranslateY();
		tx += $nc($nc(sg)->transform$)->getTranslateX();
		ty += $nc(sg->transform$)->getTranslateY();
		int32_t itx = $cast(int32_t, $Math::floor(tx + 0.5));
		int32_t ity = $cast(int32_t, $Math::floor(ty + 0.5));
		bool var$0 = interpType == $AffineTransformOp::TYPE_NEAREST_NEIGHBOR;
		if (!var$0) {
			bool var$1 = closeToInteger(itx, tx);
			var$0 = (var$1 && closeToInteger(ity, ty));
		}
		if (var$0) {
			renderImageCopy(sg, img, nullptr, x + itx, y + ity, 0, 0, imgw, imgh);
			return;
		}
		checkfinalxform = false;
	} else if ($nc(sg)->transformState <= $SunGraphics2D::TRANSFORM_TRANSLATESCALE && (((int32_t)(txtype & (uint32_t)(($AffineTransform::TYPE_FLIP | $AffineTransform::TYPE_MASK_ROTATION) | $AffineTransform::TYPE_GENERAL_TRANSFORM))) == 0)) {
		$var($doubles, coords, $new($doubles, {
			(double)0,
			(double)0,
			(double)imgw,
			(double)imgh
		}));
		extraAT->transform(coords, 0, coords, 0, 2);
		(*coords)[0] += x;
		(*coords)[1] += y;
		(*coords)[2] += x;
		(*coords)[3] += y;
		$nc(sg->transform$)->transform(coords, 0, coords, 0, 2);
		if (tryCopyOrScale(sg, img, 0, 0, imgw, imgh, nullptr, interpType, coords)) {
			return;
		}
		checkfinalxform = false;
	} else {
		checkfinalxform = true;
	}
	$var($AffineTransform, tx, $new($AffineTransform, $nc(sg)->transform$));
	tx->translate((double)x, (double)y);
	tx->concatenate(extraAT);
	if (checkfinalxform) {
		transformImage(sg, img, tx, interpType, 0, 0, imgw, imgh, nullptr);
	} else {
		renderImageXform(sg, img, tx, interpType, 0, 0, imgw, imgh, nullptr);
	}
}

void DrawImage::transformImage($SunGraphics2D* sg, $Image* img, $AffineTransform* tx, int32_t interpType, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgColor) {
	$var($doubles, coords, $new($doubles, 6));
	coords->set(2, (double)(sx2 - sx1));
	coords->set(3, coords->set(5, (double)(sy2 - sy1)));
	$nc(tx)->transform(coords, 0, coords, 0, 3);
	bool var$1 = $Math::abs(coords->get(0) - coords->get(4)) < DrawImage::MAX_TX_ERROR;
	bool var$0 = var$1 && $Math::abs(coords->get(3) - coords->get(5)) < DrawImage::MAX_TX_ERROR;
	if (var$0 && tryCopyOrScale(sg, img, sx1, sy1, sx2, sy2, bgColor, interpType, coords)) {
		return;
	}
	renderImageXform(sg, img, tx, interpType, sx1, sy1, sx2, sy2, bgColor);
}

bool DrawImage::tryCopyOrScale($SunGraphics2D* sg, $Image* img, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgColor, int32_t interpType, $doubles* coords) {
	double dx1 = $nc(coords)->get(0);
	double dy1 = coords->get(1);
	double dx2 = coords->get(2);
	double dy2 = coords->get(3);
	double dw = dx2 - dx1;
	double dh = dy2 - dy1;
	if (dx1 < $Integer::MIN_VALUE || dx1 > $Integer::MAX_VALUE || dy1 < $Integer::MIN_VALUE || dy1 > $Integer::MAX_VALUE || dx2 < $Integer::MIN_VALUE || dx2 > $Integer::MAX_VALUE || dy2 < $Integer::MIN_VALUE || dy2 > $Integer::MAX_VALUE) {
		return false;
	}
	bool var$0 = closeToInteger(sx2 - sx1, dw);
	if (var$0 && closeToInteger(sy2 - sy1, dh)) {
		int32_t idx = $cast(int32_t, $Math::floor(dx1 + 0.5));
		int32_t idy = $cast(int32_t, $Math::floor(dy1 + 0.5));
		bool var$1 = interpType == $AffineTransformOp::TYPE_NEAREST_NEIGHBOR;
		if (!var$1) {
			bool var$2 = closeToInteger(idx, dx1);
			var$1 = (var$2 && closeToInteger(idy, dy1));
		}
		if (var$1) {
			renderImageCopy(sg, img, bgColor, idx, idy, sx1, sy1, sx2 - sx1, sy2 - sy1);
			return true;
		}
	}
	if (dw > 0 && dh > 0) {
		if (renderImageScale(sg, img, bgColor, interpType, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2)) {
			return true;
		}
	}
	return false;
}

$BufferedImage* DrawImage::makeBufferedImage($Image* img, $Color* bgColor, int32_t type, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2) {
	$useLocalCurrentObjectStackCache();
	int32_t width = sx2 - sx1;
	int32_t height = sy2 - sy1;
	$var($BufferedImage, bimg, $new($BufferedImage, width, height, type));
	$var($SunGraphics2D, g2d, $cast($SunGraphics2D, bimg->createGraphics()));
	$init($AlphaComposite);
	$nc(g2d)->setComposite($AlphaComposite::Src);
	bimg->setAccelerationPriority((float)0);
	if (bgColor != nullptr) {
		g2d->setColor(bgColor);
		g2d->fillRect(0, 0, width, height);
		g2d->setComposite($AlphaComposite::SrcOver);
	}
	g2d->copyImage(img, 0, 0, sx1, sy1, width, height, nullptr, nullptr);
	g2d->dispose();
	return bimg;
}

void DrawImage::renderImageXform($SunGraphics2D* sg, $Image* img$renamed, $AffineTransform* tx, int32_t interpType, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgColor) {
	$useLocalCurrentObjectStackCache();
	$var($Image, img, img$renamed);
	$var($AffineTransform, itx, nullptr);
	try {
		$assign(itx, $nc(tx)->createInverse());
	} catch ($NoninvertibleTransformException&) {
		$var($NoninvertibleTransformException, ignored, $catch());
		return;
	}
	$var($doubles, coords, $new($doubles, 8));
	coords->set(2, coords->set(6, (double)(sx2 - sx1)));
	coords->set(5, coords->set(7, (double)(sy2 - sy1)));
	$nc(tx)->transform(coords, 0, coords, 0, 4);
	double ddx1 = 0.0;
	double ddy1 = 0.0;
	double ddx2 = 0.0;
	double ddy2 = 0.0;
	ddx1 = (ddx2 = coords->get(0));
	ddy1 = (ddy2 = coords->get(1));
	for (int32_t i = 2; i < coords->length; i += 2) {
		double d = coords->get(i);
		if (ddx1 > d) {
			ddx1 = d;
		} else if (ddx2 < d) {
			ddx2 = d;
		}
		d = coords->get(i + 1);
		if (ddy1 > d) {
			ddy1 = d;
		} else if (ddy2 < d) {
			ddy2 = d;
		}
	}
	$var($Region, clip, $nc(sg)->getCompClip());
	int32_t var$0 = $cast(int32_t, $Math::floor(ddx1));
	int32_t dx1 = $Math::max(var$0, $nc(clip)->getLoX());
	int32_t var$1 = $cast(int32_t, $Math::floor(ddy1));
	int32_t dy1 = $Math::max(var$1, $nc(clip)->getLoY());
	int32_t var$2 = $cast(int32_t, $Math::ceil(ddx2));
	int32_t dx2 = $Math::min(var$2, $nc(clip)->getHiX());
	int32_t var$3 = $cast(int32_t, $Math::ceil(ddy2));
	int32_t dy2 = $Math::min(var$3, $nc(clip)->getHiY());
	if (dx2 <= dx1 || dy2 <= dy1) {
		return;
	}
	$var($SurfaceData, dstData, sg->surfaceData);
	$var($SurfaceData, srcData, $nc(dstData)->getSourceSurfaceData(img, $SunGraphics2D::TRANSFORM_GENERIC, sg->imageComp, bgColor));
	if (srcData == nullptr) {
		$assign(img, getBufferedImage(img));
		$assign(srcData, dstData->getSourceSurfaceData(img, $SunGraphics2D::TRANSFORM_GENERIC, sg->imageComp, bgColor));
		if (srcData == nullptr) {
			return;
		}
	}
	if (isBgOperation(srcData, bgColor)) {
		int32_t bgAlpha = $nc(bgColor)->getAlpha();
		int32_t type = ((bgAlpha == 255) ? $BufferedImage::TYPE_INT_RGB : $BufferedImage::TYPE_INT_ARGB);
		$assign(img, makeBufferedImage(img, bgColor, type, sx1, sy1, sx2, sy2));
		sx2 -= sx1;
		sy2 -= sy1;
		sx1 = (sy1 = 0);
		$assign(srcData, dstData->getSourceSurfaceData(img, $SunGraphics2D::TRANSFORM_GENERIC, sg->imageComp, bgColor));
	}
	$var($SurfaceType, srcType, $nc(srcData)->getSurfaceType());
	$var($TransformHelper, helper, $TransformHelper::getFromCache(srcType));
	if (helper == nullptr) {
		int32_t type = ((srcData->getTransparency() == $Transparency::OPAQUE) ? $BufferedImage::TYPE_INT_RGB : $BufferedImage::TYPE_INT_ARGB);
		$assign(img, makeBufferedImage(img, nullptr, type, sx1, sy1, sx2, sy2));
		sx2 -= sx1;
		sy2 -= sy1;
		sx1 = (sy1 = 0);
		$assign(srcData, dstData->getSourceSurfaceData(img, $SunGraphics2D::TRANSFORM_GENERIC, sg->imageComp, nullptr));
		$assign(srcType, $nc(srcData)->getSurfaceType());
		$assign(helper, $TransformHelper::getFromCache(srcType));
	}
	$var($SurfaceType, dstType, dstData->getSurfaceType());
	if (sg->compositeState <= $SunGraphics2D::COMP_ALPHA) {
		$init($SurfaceType);
		$var($MaskBlit, maskblit, $MaskBlit::getFromCache($SurfaceType::IntArgbPre, sg->imageComp, dstType));
		if ($nc(maskblit)->getNativePrim() != 0) {
			$nc(helper)->Transform(maskblit, srcData, dstData, sg->composite, clip, itx, interpType, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2, nullptr, 0, 0);
			return;
		}
	}
	int32_t w = dx2 - dx1;
	int32_t h = dy2 - dy1;
	$var($BufferedImage, tmpimg, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($SurfaceData, tmpData, $SurfaceData::getPrimarySurfaceData(tmpimg));
	$var($SurfaceType, tmpType, $nc(tmpData)->getSurfaceType());
	$init($SurfaceType);
	$init($CompositeType);
	$var($MaskBlit, tmpmaskblit, $MaskBlit::getFromCache($SurfaceType::IntArgbPre, $CompositeType::SrcNoEa, tmpType));
	$var($ints, edges, $new($ints, h * 2 + 2));
	$init($AlphaComposite);
	$nc(helper)->Transform(tmpmaskblit, srcData, tmpData, $AlphaComposite::Src, nullptr, itx, interpType, sx1, sy1, sx2, sy2, 0, 0, w, h, edges, dx1, dy1);
	$var($Region, region, $Region::getInstance(dx1, dy1, dx2, dy2, edges));
	$assign(clip, $nc(clip)->getIntersection(region));
	$var($Blit, blit, $Blit::getFromCache(tmpType, sg->imageComp, dstType));
	$nc(blit)->Blit$(tmpData, dstData, sg->composite, clip, 0, 0, dx1, dy1, w, h);
}

bool DrawImage::renderImageCopy($SunGraphics2D* sg, $Image* img, $Color* bgColor, int32_t dx, int32_t dy, int32_t sx, int32_t sy, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, clip, $nc(sg)->getCompClip());
	$var($SurfaceData, dstData, sg->surfaceData);
	int32_t attempts = 0;
	while (true) {
		$var($SurfaceData, srcData, $nc(dstData)->getSourceSurfaceData(img, $SunGraphics2D::TRANSFORM_ISIDENT, sg->imageComp, bgColor));
		if (srcData == nullptr) {
			return false;
		}
		try {
			blitSurfaceData(sg, clip, srcData, dstData, sx, sy, dx, dy, w, h, bgColor);
			return true;
		} catch ($NullPointerException&) {
			$var($NullPointerException, e, $catch());
			bool var$0 = $SurfaceData::isNull(dstData);
			if (!(var$0 || $SurfaceData::isNull(srcData))) {
				$throw(e);
			}
			return false;
		} catch ($InvalidPipeException&) {
			$var($InvalidPipeException, e, $catch());
			++attempts;
			$assign(clip, sg->getCompClip());
			$assign(dstData, sg->surfaceData);
			bool var$1 = $SurfaceData::isNull(dstData);
			if (var$1 || $SurfaceData::isNull(srcData) || (attempts > 1)) {
				return false;
			}
		}
	}
	$shouldNotReachHere();
}

bool DrawImage::renderImageScale($SunGraphics2D* sg, $Image* img, $Color* bgColor, int32_t interpType, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) {
	$useLocalCurrentObjectStackCache();
	if (interpType != $AffineTransformOp::TYPE_NEAREST_NEIGHBOR) {
		return false;
	}
	$var($Region, clip, $nc(sg)->getCompClip());
	$var($SurfaceData, dstData, sg->surfaceData);
	int32_t attempts = 0;
	while (true) {
		$var($SurfaceData, srcData, $nc(dstData)->getSourceSurfaceData(img, $SunGraphics2D::TRANSFORM_TRANSLATESCALE, sg->imageComp, bgColor));
		if (srcData == nullptr || isBgOperation(srcData, bgColor)) {
			return false;
		}
		try {
			$var($SurfaceType, srcType, $nc(srcData)->getSurfaceType());
			$var($SurfaceType, dstType, dstData->getSurfaceType());
			return scaleSurfaceData(sg, clip, srcData, dstData, srcType, dstType, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2);
		} catch ($NullPointerException&) {
			$var($NullPointerException, e, $catch());
			if (!$SurfaceData::isNull(dstData)) {
				$throw(e);
			}
			return false;
		} catch ($InvalidPipeException&) {
			$var($InvalidPipeException, e, $catch());
			++attempts;
			$assign(clip, sg->getCompClip());
			$assign(dstData, sg->surfaceData);
			bool var$0 = $SurfaceData::isNull(dstData);
			if (var$0 || $SurfaceData::isNull(srcData) || (attempts > 1)) {
				return false;
			}
		}
	}
	$shouldNotReachHere();
}

bool DrawImage::scaleImage($SunGraphics2D* sg, $Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgColor) {
	int32_t srcW = 0;
	int32_t srcH = 0;
	int32_t dstW = 0;
	int32_t dstH = 0;
	int32_t srcX = 0;
	int32_t srcY = 0;
	int32_t dstX = 0;
	int32_t dstY = 0;
	bool srcWidthFlip = false;
	bool srcHeightFlip = false;
	bool dstWidthFlip = false;
	bool dstHeightFlip = false;
	if (sx2 > sx1) {
		srcW = sx2 - sx1;
		srcX = sx1;
	} else {
		srcWidthFlip = true;
		srcW = sx1 - sx2;
		srcX = sx2;
	}
	if (sy2 > sy1) {
		srcH = sy2 - sy1;
		srcY = sy1;
	} else {
		srcHeightFlip = true;
		srcH = sy1 - sy2;
		srcY = sy2;
	}
	if (dx2 > dx1) {
		dstW = dx2 - dx1;
		dstX = dx1;
	} else {
		dstW = dx1 - dx2;
		dstWidthFlip = true;
		dstX = dx2;
	}
	if (dy2 > dy1) {
		dstH = dy2 - dy1;
		dstY = dy1;
	} else {
		dstH = dy1 - dy2;
		dstHeightFlip = true;
		dstY = dy2;
	}
	if (srcW <= 0 || srcH <= 0) {
		return true;
	}
	if ((srcWidthFlip == dstWidthFlip) && (srcHeightFlip == dstHeightFlip) && isSimpleTranslate(sg)) {
		double ddx1 = (double)(dstX + $nc(sg)->transX);
		double ddy1 = (double)(dstY + sg->transY);
		double ddx2 = ddx1 + dstW;
		double ddy2 = ddy1 + dstH;
		if (renderImageScale(sg, img, bgColor, sg->interpolationType, srcX, srcY, srcX + srcW, srcY + srcH, ddx1, ddy1, ddx2, ddy2)) {
			return true;
		}
	}
	$var($AffineTransform, atfm, $new($AffineTransform, $nc(sg)->transform$));
	atfm->translate((double)dx1, (double)dy1);
	double m00 = (double)(dx2 - dx1) / (sx2 - sx1);
	double m11 = (double)(dy2 - dy1) / (sy2 - sy1);
	atfm->scale(m00, m11);
	atfm->translate((double)(srcX - sx1), (double)(srcY - sy1));
	double scaleX = $SurfaceManager::getImageScaleX(img);
	double scaleY = $SurfaceManager::getImageScaleY(img);
	int32_t imgW = $cast(int32_t, $Math::ceil($nc(img)->getWidth(nullptr) * scaleX));
	int32_t imgH = $cast(int32_t, $Math::ceil($nc(img)->getHeight(nullptr) * scaleY));
	srcW += srcX;
	srcH += srcY;
	if (srcW > imgW) {
		srcW = imgW;
	}
	if (srcH > imgH) {
		srcH = imgH;
	}
	if (srcX < 0) {
		atfm->translate((double)(-srcX), (double)0);
		srcX = 0;
	}
	if (srcY < 0) {
		atfm->translate((double)0, (double)(-srcY));
		srcY = 0;
	}
	if (srcX >= srcW || srcY >= srcH) {
		return true;
	}
	transformImage(sg, img, atfm, $nc(sg)->interpolationType, srcX, srcY, srcW, srcH, bgColor);
	return true;
}

bool DrawImage::closeToInteger(int32_t i, double d) {
	$init(DrawImage);
	return ($Math::abs(d - i) < DrawImage::MAX_TX_ERROR);
}

bool DrawImage::isSimpleTranslate($SunGraphics2D* sg) {
	$init(DrawImage);
	int32_t ts = $nc(sg)->transformState;
	if (ts <= $SunGraphics2D::TRANSFORM_INT_TRANSLATE) {
		return true;
	}
	if (ts >= $SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
		return false;
	}
	if (sg->interpolationType == $AffineTransformOp::TYPE_NEAREST_NEIGHBOR) {
		return true;
	}
	return false;
}

bool DrawImage::isBgOperation($SurfaceData* srcData, $Color* bgColor) {
	$init(DrawImage);
	return ((srcData == nullptr) || ((bgColor != nullptr) && ($nc(srcData)->getTransparency() != $Transparency::OPAQUE)));
}

$BufferedImage* DrawImage::getBufferedImage($Image* img) {
	if ($instanceOf($BufferedImage, img)) {
		return $cast($BufferedImage, img);
	}
	return $nc(($cast($VolatileImage, img)))->getSnapshot();
}

$ColorModel* DrawImage::getTransformColorModel($SunGraphics2D* sg, $BufferedImage* bImg, $AffineTransform* tx) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, cm, $nc(bImg)->getColorModel());
	$var($ColorModel, dstCM, cm);
	if ($nc(tx)->isIdentity()) {
		return dstCM;
	}
	int32_t type = $nc(tx)->getType();
	bool needTrans = (((int32_t)(type & (uint32_t)($AffineTransform::TYPE_MASK_ROTATION | $AffineTransform::TYPE_GENERAL_TRANSFORM))) != 0);
	if (!needTrans && type != $AffineTransform::TYPE_TRANSLATION && type != $AffineTransform::TYPE_IDENTITY) {
		$var($doubles, mtx, $new($doubles, 4));
		tx->getMatrix(mtx);
		needTrans = (mtx->get(0) != $cast(int32_t, mtx->get(0)) || mtx->get(3) != $cast(int32_t, mtx->get(3)));
	}
	if ($nc(sg)->renderHint != $SunHints::INTVAL_RENDER_QUALITY) {
		if ($instanceOf($IndexColorModel, cm)) {
			$var($Raster, raster, bImg->getRaster());
			$var($IndexColorModel, icm, $cast($IndexColorModel, cm));
			if (needTrans && $nc(cm)->getTransparency() == $Transparency::OPAQUE) {
				if ($instanceOf($BytePackedRaster, raster)) {
					$assign(dstCM, $ColorModel::getRGBdefault());
				} else {
					$var($doubles, matrix, $new($doubles, 6));
					tx->getMatrix(matrix);
					if (matrix->get(1) == 0.0 && matrix->get(2) == 0.0 && matrix->get(4) == 0.0 && matrix->get(5) == 0.0) {
					} else {
						int32_t mapSize = $nc(icm)->getMapSize();
						if (mapSize < 256) {
							$var($ints, cmap, $new($ints, mapSize + 1));
							icm->getRGBs(cmap);
							cmap->set(mapSize, 0);
							$assign(dstCM, $new($IndexColorModel, icm->getPixelSize(), mapSize + 1, cmap, 0, true, mapSize, $DataBuffer::TYPE_BYTE));
						} else {
							$assign(dstCM, $ColorModel::getRGBdefault());
						}
					}
				}
			}
		} else if (needTrans && $nc(cm)->getTransparency() == $Transparency::OPAQUE) {
			$assign(dstCM, $ColorModel::getRGBdefault());
		}
	} else if ($instanceOf($IndexColorModel, cm) || (needTrans && $nc(cm)->getTransparency() == $Transparency::OPAQUE)) {
		$assign(dstCM, $ColorModel::getRGBdefault());
	}
	return dstCM;
}

void DrawImage::blitSurfaceData($SunGraphics2D* sg, $Region* clip, $SurfaceData* srcData, $SurfaceData* dstData, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h, $Color* bgColor) {
	$init(DrawImage);
	$useLocalCurrentObjectStackCache();
	$var($CompositeType, comp, $nc(sg)->imageComp);
	$init($CompositeType);
	bool var$0 = $nc($CompositeType::SrcOverNoEa)->equals(comp);
	if (var$0) {
		bool var$1 = $nc(srcData)->getTransparency() == $Transparency::OPAQUE;
		var$0 = (var$1 || (bgColor != nullptr && bgColor->getTransparency() == $Transparency::OPAQUE));
	}
	if (var$0) {
		$assign(comp, $CompositeType::SrcNoEa);
	}
	if (srcData == dstData && sx == dx && sy == dy && $nc($CompositeType::SrcNoEa)->equals(comp)) {
		return;
	}
	$var($Rectangle, dst, $$new($Rectangle, dx, dy, w, h)->intersection($($nc(dstData)->getBounds())));
	if ($nc(dst)->isEmpty()) {
		return;
	}
	sx += $nc(dst)->x - dx;
	sy += dst->y - dy;
	$var($SurfaceType, srcType, $nc(srcData)->getSurfaceType());
	$var($SurfaceType, dstType, $nc(dstData)->getSurfaceType());
	if (!isBgOperation(srcData, bgColor)) {
		$var($Blit, blit, $Blit::getFromCache(srcType, comp, dstType));
		$nc(blit)->Blit$(srcData, dstData, sg->composite, clip, sx, sy, dst->x, dst->y, dst->width, dst->height);
	} else {
		$var($BlitBg, blit, $BlitBg::getFromCache(srcType, comp, dstType));
		$nc(blit)->BlitBg$(srcData, dstData, sg->composite, clip, $nc(bgColor)->getRGB(), sx, sy, dst->x, dst->y, dst->width, dst->height);
	}
}

bool DrawImage::scaleSurfaceData($SunGraphics2D* sg, $Region* clipRegion, $SurfaceData* srcData, $SurfaceData* dstData, $SurfaceType* srcType, $SurfaceType* dstType, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) {
	$useLocalCurrentObjectStackCache();
	$var($CompositeType, comp, $nc(sg)->imageComp);
	$init($CompositeType);
	bool var$0 = $nc($CompositeType::SrcOverNoEa)->equals(comp);
	if (var$0 && ($nc(srcData)->getTransparency() == $Transparency::OPAQUE)) {
		$assign(comp, $CompositeType::SrcNoEa);
	}
	$var($ScaledBlit, blit, $ScaledBlit::getFromCache(srcType, comp, dstType));
	if (blit != nullptr) {
		blit->Scale(srcData, dstData, sg->composite, clipRegion, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2);
		return true;
	}
	return false;
}

bool DrawImage::imageReady($ToolkitImage* sunimg, $ImageObserver* observer) {
	$init(DrawImage);
	if ($nc(sunimg)->hasError()) {
		if (observer != nullptr) {
			observer->imageUpdate(sunimg, $ImageObserver::ERROR | $ImageObserver::ABORT, -1, -1, -1, -1);
		}
		return false;
	}
	return true;
}

bool DrawImage::copyImage($SunGraphics2D* sg, $Image* img, int32_t x, int32_t y, $Color* bgColor, $ImageObserver* observer) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($ToolkitImage, img))) {
		return copyImage(sg, img, x, y, bgColor);
	} else {
		$var($ToolkitImage, sunimg, $cast($ToolkitImage, img));
		if (!imageReady(sunimg, observer)) {
			return false;
		}
		$var($ImageRepresentation, ir, $nc(sunimg)->getImageRep());
		return $nc(ir)->drawToBufImage(sg, sunimg, x, y, bgColor, observer);
	}
}

bool DrawImage::copyImage($SunGraphics2D* sg, $Image* img, int32_t dx, int32_t dy, int32_t sx, int32_t sy, int32_t w, int32_t h, $Color* bgColor, $ImageObserver* observer) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($ToolkitImage, img))) {
		return copyImage(sg, img, dx, dy, sx, sy, w, h, bgColor);
	} else {
		$var($ToolkitImage, sunimg, $cast($ToolkitImage, img));
		if (!imageReady(sunimg, observer)) {
			return false;
		}
		$var($ImageRepresentation, ir, $nc(sunimg)->getImageRep());
		return $nc(ir)->drawToBufImage(sg, sunimg, dx, dy, (dx + w), (dy + h), sx, sy, (sx + w), (sy + h), bgColor, observer);
	}
}

bool DrawImage::scaleImage($SunGraphics2D* sg, $Image* img, int32_t x, int32_t y, int32_t width, int32_t height, $Color* bgColor, $ImageObserver* observer) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($ToolkitImage, img))) {
		return scaleImage(sg, img, x, y, width, height, bgColor);
	} else {
		$var($ToolkitImage, sunimg, $cast($ToolkitImage, img));
		if (!imageReady(sunimg, observer)) {
			return false;
		}
		$var($ImageRepresentation, ir, $nc(sunimg)->getImageRep());
		return $nc(ir)->drawToBufImage(sg, sunimg, x, y, width, height, bgColor, observer);
	}
}

bool DrawImage::scaleImage($SunGraphics2D* sg, $Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgColor, $ImageObserver* observer) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($ToolkitImage, img))) {
		return scaleImage(sg, img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgColor);
	} else {
		$var($ToolkitImage, sunimg, $cast($ToolkitImage, img));
		if (!imageReady(sunimg, observer)) {
			return false;
		}
		$var($ImageRepresentation, ir, $nc(sunimg)->getImageRep());
		return $nc(ir)->drawToBufImage(sg, sunimg, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgColor, observer);
	}
}

bool DrawImage::transformImage($SunGraphics2D* sg, $Image* img, $AffineTransform* atfm, $ImageObserver* observer) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($ToolkitImage, img))) {
		transformImage(sg, img, 0, 0, atfm, $nc(sg)->interpolationType);
		return true;
	} else {
		$var($ToolkitImage, sunimg, $cast($ToolkitImage, img));
		if (!imageReady(sunimg, observer)) {
			return false;
		}
		$var($ImageRepresentation, ir, $nc(sunimg)->getImageRep());
		return $nc(ir)->drawToBufImage(sg, sunimg, atfm, observer);
	}
}

void DrawImage::transformImage($SunGraphics2D* sg, $BufferedImage* img$renamed, $BufferedImageOp* op, int32_t x, int32_t y) {
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
		} else {
			$assign(img, op->filter(img, nullptr));
		}
	}
	copyImage(sg, img, x, y, nullptr);
}

DrawImage::DrawImage() {
}

void clinit$DrawImage($Class* class$) {
	DrawImage::MAX_TX_ERROR = 1.0E-4;
}

$Class* DrawImage::load$($String* name, bool initialize) {
	$loadClass(DrawImage, name, initialize, &_DrawImage_ClassInfo_, clinit$DrawImage, allocate$DrawImage);
	return class$;
}

$Class* DrawImage::class$ = nullptr;

		} // pipe
	} // java2d
} // sun