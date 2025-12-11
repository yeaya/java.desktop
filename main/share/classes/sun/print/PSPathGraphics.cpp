#include <sun/print/PSPathGraphics.h>

#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Paint.h>
#include <java/awt/Shape.h>
#include <java/awt/Transparency.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/TextLayout.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Area.h>
#include <java/awt/geom/Line2D$Float.h>
#include <java/awt/geom/Line2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Paper.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterJob.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Math.h>
#include <sun/awt/image/ByteComponentRaster.h>
#include <sun/print/PSPrinterJob.h>
#include <sun/print/PathGraphics.h>
#include <sun/print/ProxyGraphics2D.h>
#include <sun/print/RasterPrinterJob.h>
#include <jcpp.h>

#undef DEFAULT_USER_RES
#undef OPAQUE
#undef TYPE_3BYTE_BGR
#undef TYPE_GENERAL_ROTATION
#undef TYPE_GENERAL_TRANSFORM
#undef TYPE_TRANSLATION

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Paint = ::java::awt::Paint;
using $Shape = ::java::awt::Shape;
using $Transparency = ::java::awt::Transparency;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $TextLayout = ::java::awt::font::TextLayout;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Area = ::java::awt::geom::Area;
using $Line2D = ::java::awt::geom::Line2D;
using $Line2D$Float = ::java::awt::geom::Line2D$Float;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteComponentRaster = ::sun::awt::image::ByteComponentRaster;
using $PSPrinterJob = ::sun::print::PSPrinterJob;
using $PathGraphics = ::sun::print::PathGraphics;
using $ProxyGraphics2D = ::sun::print::ProxyGraphics2D;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;

namespace sun {
	namespace print {

$FieldInfo _PSPathGraphics_FieldInfo_[] = {
	{"DEFAULT_USER_RES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PSPathGraphics, DEFAULT_USER_RES)},
	{}
};

$MethodInfo _PSPathGraphics_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Graphics2D;Ljava/awt/print/PrinterJob;Ljava/awt/print/Printable;Ljava/awt/print/PageFormat;IZ)V", nullptr, 0, $method(static_cast<void(PSPathGraphics::*)($Graphics2D*,$PrinterJob*,$Printable*,$PageFormat*,int32_t,bool)>(&PSPathGraphics::init$))},
	{"canDrawStringToWidth", "()Z", nullptr, $PROTECTED},
	{"create", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"deviceClip", "(Ljava/awt/geom/PathIterator;)V", nullptr, $PROTECTED},
	{"deviceDrawLine", "(IIIILjava/awt/Color;)V", nullptr, $PROTECTED},
	{"deviceFill", "(Ljava/awt/geom/PathIterator;Ljava/awt/Color;)V", nullptr, $PROTECTED},
	{"deviceFillRect", "(IIIILjava/awt/Color;)V", nullptr, $PROTECTED},
	{"deviceFrameRect", "(IIIILjava/awt/Color;)V", nullptr, $PROTECTED},
	{"drawImageToPlatform", "(Ljava/awt/Image;Ljava/awt/geom/AffineTransform;Ljava/awt/Color;IIIIZ)Z", nullptr, $PROTECTED},
	{"drawString", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/lang/String;FF)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/lang/String;FFLjava/awt/Font;Ljava/awt/font/FontRenderContext;F)V", nullptr, $PROTECTED},
	{"fill", "(Ljava/awt/Shape;Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"platformFontCount", "(Ljava/awt/Font;Ljava/lang/String;)I", nullptr, $PROTECTED},
	{"redrawRegion", "(Ljava/awt/geom/Rectangle2D;DDLjava/awt/Shape;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, nullptr, "java.awt.print.PrinterException"},
	{}
};

$ClassInfo _PSPathGraphics_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.PSPathGraphics",
	"sun.print.PathGraphics",
	nullptr,
	_PSPathGraphics_FieldInfo_,
	_PSPathGraphics_MethodInfo_
};

$Object* allocate$PSPathGraphics($Class* clazz) {
	return $of($alloc(PSPathGraphics));
}

void PSPathGraphics::init$($Graphics2D* graphics, $PrinterJob* printerJob, $Printable* painter, $PageFormat* pageFormat, int32_t pageIndex, bool canRedraw) {
	$PathGraphics::init$(graphics, printerJob, painter, pageFormat, pageIndex, canRedraw);
}

$Graphics* PSPathGraphics::create() {
	$useLocalCurrentObjectStackCache();
	$var($Graphics2D, var$0, $cast($Graphics2D, $nc($(getDelegate()))->create()));
	$var($PrinterJob, var$1, getPrinterJob());
	$var($Printable, var$2, getPrintable());
	$var($PageFormat, var$3, getPageFormat());
	int32_t var$4 = getPageIndex();
	return $new(PSPathGraphics, var$0, var$1, var$2, var$3, var$4, canDoRedraws());
}

void PSPathGraphics::fill($Shape* s, $Color* color) {
	$useLocalCurrentObjectStackCache();
	deviceFill($($nc(s)->getPathIterator($$new($AffineTransform))), color);
}

void PSPathGraphics::drawString($String* str, int32_t x, int32_t y) {
	drawString(str, (float)x, (float)y);
}

void PSPathGraphics::drawString($String* str, float x, float y) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, str);
	float var$1 = x;
	float var$2 = y;
	$var($Font, var$3, getFont());
	drawString(var$0, var$1, var$2, var$3, $(getFontRenderContext()), 0.0f);
}

bool PSPathGraphics::canDrawStringToWidth() {
	return true;
}

int32_t PSPathGraphics::platformFontCount($Font* font, $String* str) {
	$var($PSPrinterJob, psPrinterJob, $cast($PSPrinterJob, getPrinterJob()));
	return $nc(psPrinterJob)->platformFontCount(font, str);
}

void PSPathGraphics::drawString($String* str, float x, float y, $Font* font, $FontRenderContext* frc, float w) {
	$useLocalCurrentObjectStackCache();
	if ($nc(str)->length() == 0) {
		return;
	}
	if ($nc(font)->hasLayoutAttributes() && !this->printingGlyphVector) {
		$var($TextLayout, layout, $new($TextLayout, str, font, frc));
		layout->draw(this, x, y);
		return;
	}
	$var($Font, oldFont, getFont());
	if (!$nc(oldFont)->equals(font)) {
		setFont(font);
	} else {
		$assign(oldFont, nullptr);
	}
	bool drawnWithPS = false;
	float translateX = 0.0f;
	float translateY = 0.0f;
	bool fontisTransformed = $nc($(getFont()))->isTransformed();
	if (fontisTransformed) {
		$var($AffineTransform, fontTx, $nc($(getFont()))->getTransform());
		int32_t transformType = $nc(fontTx)->getType();
		if (transformType == $AffineTransform::TYPE_TRANSLATION) {
			translateX = (float)(fontTx->getTranslateX());
			translateY = (float)(fontTx->getTranslateY());
			if ($Math::abs(translateX) < 1.0E-5) {
				translateX = 0.0f;
			}
			if ($Math::abs(translateY) < 1.0E-5) {
				translateY = 0.0f;
			}
			fontisTransformed = false;
		}
	}
	bool directToPS = !fontisTransformed;
	$init($PSPrinterJob);
	if (!$PSPrinterJob::shapeTextProp && directToPS) {
		$var($PSPrinterJob, psPrinterJob, $cast($PSPrinterJob, getPrinterJob()));
		if ($nc(psPrinterJob)->setFont($(getFont()))) {
			try {
				psPrinterJob->setColor($cast($Color, $(getPaint())));
			} catch ($ClassCastException& e) {
				if (oldFont != nullptr) {
					setFont(oldFont);
				}
				$throwNew($IllegalArgumentException, "Expected a Color instance"_s);
			}
			psPrinterJob->setTransform($(getTransform()));
			psPrinterJob->setClip($(getClip()));
			drawnWithPS = psPrinterJob->textOut(this, str, x + translateX, y + translateY, font, frc, w);
		}
	}
	if (drawnWithPS == false) {
		if (oldFont != nullptr) {
			setFont(oldFont);
			$assign(oldFont, nullptr);
		}
		$PathGraphics::drawString(str, x, y, font, frc, w);
	}
	if (oldFont != nullptr) {
		setFont(oldFont);
	}
}

bool PSPathGraphics::drawImageToPlatform($Image* image, $AffineTransform* xform$renamed, $Color* bgcolor$renamed, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, bool handlingTransparency) {
	$useLocalCurrentObjectStackCache();
	$var($Color, bgcolor, bgcolor$renamed);
	$var($AffineTransform, xform, xform$renamed);
	$var($BufferedImage, img, getBufferedImage(image));
	if (img == nullptr) {
		return true;
	}
	$var($PSPrinterJob, psPrinterJob, $cast($PSPrinterJob, getPrinterJob()));
	$var($AffineTransform, fullTransform, getTransform());
	if (xform == nullptr) {
		$assign(xform, $new($AffineTransform));
	}
	$nc(fullTransform)->concatenate(xform);
	$var($doubles, fullMatrix, $new($doubles, 6));
	fullTransform->getMatrix(fullMatrix);
	$var($Point2D$Float, unitVectorX, $new($Point2D$Float, (float)1, (float)0));
	$var($Point2D$Float, unitVectorY, $new($Point2D$Float, (float)0, (float)1));
	fullTransform->deltaTransform(unitVectorX, unitVectorX);
	fullTransform->deltaTransform(unitVectorY, unitVectorY);
	$var($Point2D$Float, origin, $new($Point2D$Float, (float)0, (float)0));
	double scaleX = unitVectorX->distance(origin);
	double scaleY = unitVectorY->distance(origin);
	double devResX = $nc(psPrinterJob)->getXRes();
	double devResY = psPrinterJob->getYRes();
	double devScaleX = $div(devResX, PSPathGraphics::DEFAULT_USER_RES);
	double devScaleY = $div(devResY, PSPathGraphics::DEFAULT_USER_RES);
	int32_t transformType = fullTransform->getType();
	bool clampScale = (((int32_t)(transformType & (uint32_t)($AffineTransform::TYPE_GENERAL_ROTATION | $AffineTransform::TYPE_GENERAL_TRANSFORM))) != 0);
	if (clampScale) {
		if (scaleX > devScaleX) {
			scaleX = devScaleX;
		}
		if (scaleY > devScaleY) {
			scaleY = devScaleY;
		}
	}
	if (scaleX != 0 && scaleY != 0) {
		$var($AffineTransform, rotTransform, $new($AffineTransform, fullMatrix->get(0) / scaleX, fullMatrix->get(1) / scaleY, fullMatrix->get(2) / scaleX, fullMatrix->get(3) / scaleY, fullMatrix->get(4) / scaleX, fullMatrix->get(5) / scaleY));
		$var($Rectangle2D$Float, srcRect, $new($Rectangle2D$Float, (float)srcX, (float)srcY, (float)srcWidth, (float)srcHeight));
		$var($Shape, rotShape, rotTransform->createTransformedShape(srcRect));
		$var($Rectangle2D, rotBounds, $nc(rotShape)->getBounds2D());
		double var$0 = rotBounds->getX();
		double var$1 = rotBounds->getY();
		double var$2 = rotBounds->getWidth() + 0.001;
		$nc(rotBounds)->setRect(var$0, var$1, var$2, rotBounds->getHeight() + 0.001);
		int32_t boundsWidth = $cast(int32_t, rotBounds->getWidth());
		int32_t boundsHeight = $cast(int32_t, rotBounds->getHeight());
		if (boundsWidth > 0 && boundsHeight > 0) {
			bool drawOpaque = true;
			if (isCompositing($(getComposite()))) {
				drawOpaque = false;
			} else if (!handlingTransparency && hasTransparentPixels(img)) {
				drawOpaque = false;
				if (isBitmaskTransparency(img)) {
					if (bgcolor == nullptr) {
						if (drawBitmaskImage(img, xform, bgcolor, srcX, srcY, srcWidth, srcHeight)) {
							return true;
						}
					} else if ($nc(bgcolor)->getTransparency() == $Transparency::OPAQUE) {
						drawOpaque = true;
					}
				}
				if (!canDoRedraws()) {
					drawOpaque = true;
				}
			} else {
				$assign(bgcolor, nullptr);
			}
			bool var$4 = srcX + srcWidth > $nc(img)->getWidth(nullptr);
			bool var$3 = (var$4 || srcY + srcHeight > $nc(img)->getHeight(nullptr));
			if (var$3 && canDoRedraws()) {
				drawOpaque = false;
			}
			if (drawOpaque == false) {
				fullTransform->getMatrix(fullMatrix);
				$var($AffineTransform, tx, $new($AffineTransform, fullMatrix->get(0) / devScaleX, fullMatrix->get(1) / devScaleY, fullMatrix->get(2) / devScaleX, fullMatrix->get(3) / devScaleY, fullMatrix->get(4) / devScaleX, fullMatrix->get(5) / devScaleY));
				$var($Rectangle2D$Float, rect, $new($Rectangle2D$Float, (float)srcX, (float)srcY, (float)srcWidth, (float)srcHeight));
				$var($Shape, shape, fullTransform->createTransformedShape(rect));
				$var($Rectangle2D, region, $nc(shape)->getBounds2D());
				double var$5 = region->getX();
				double var$6 = region->getY();
				double var$7 = region->getWidth() + 0.001;
				$nc(region)->setRect(var$5, var$6, var$7, region->getHeight() + 0.001);
				int32_t w = $cast(int32_t, region->getWidth());
				int32_t h = $cast(int32_t, region->getHeight());
				int32_t nbytes = w * h * 3;
				int32_t maxBytes = 8 * 1024 * 1024;
				double origDpi = (devResX < devResY) ? devResX : devResY;
				int32_t dpi = $cast(int32_t, origDpi);
				double scaleFactor = (double)1;
				double maxSFX = w / (double)boundsWidth;
				double maxSFY = h / (double)boundsHeight;
				double maxSF = (maxSFX > maxSFY) ? maxSFY : maxSFX;
				int32_t minDpi = $cast(int32_t, (dpi / maxSF));
				if (minDpi < PSPathGraphics::DEFAULT_USER_RES) {
					minDpi = PSPathGraphics::DEFAULT_USER_RES;
				}
				while (nbytes > maxBytes && dpi > minDpi) {
					scaleFactor *= 2;
					dpi /= 2;
					nbytes /= 4;
				}
				if (dpi < minDpi) {
					scaleFactor = (origDpi / minDpi);
				}
				double var$8 = region->getX() / scaleFactor;
				double var$9 = region->getY() / scaleFactor;
				double var$10 = region->getWidth() / scaleFactor;
				region->setRect(var$8, var$9, var$10, region->getHeight() / scaleFactor);
				$var($AffineTransform, var$11, getTransform());
				psPrinterJob->saveState(var$11, $(getClip()), region, scaleFactor, scaleFactor);
				return true;
			} else {
				int32_t var$12 = $cast(int32_t, rotBounds->getWidth());
				$var($BufferedImage, deepImage, $new($BufferedImage, var$12, $cast(int32_t, rotBounds->getHeight()), $BufferedImage::TYPE_3BYTE_BGR));
				$var($Graphics2D, imageGraphics, deepImage->createGraphics());
				int32_t var$13 = deepImage->getWidth();
				$nc(imageGraphics)->clipRect(0, 0, var$13, deepImage->getHeight());
				double var$14 = -rotBounds->getX();
				imageGraphics->translate(var$14, -rotBounds->getY());
				imageGraphics->transform(rotTransform);
				if (bgcolor == nullptr) {
					$init($Color);
					$assign(bgcolor, $Color::white);
				}
				imageGraphics->drawImage(img, srcX, srcY, srcX + srcWidth, srcY + srcHeight, srcX, srcY, srcX + srcWidth, srcY + srcHeight, bgcolor, nullptr);
				$var($Shape, holdClip, getClip());
				$var($Shape, oldClip, $nc($(getTransform()))->createTransformedShape(holdClip));
				$var($AffineTransform, sat, $AffineTransform::getScaleInstance(scaleX, scaleY));
				$var($Shape, imgClip, $nc(sat)->createTransformedShape(rotShape));
				$var($Area, imgArea, $new($Area, imgClip));
				$var($Area, oldArea, $new($Area, oldClip));
				imgArea->intersect(oldArea);
				psPrinterJob->setClip(imgArea);
				float var$15 = (float)(rotBounds->getX() * scaleX);
				float var$16 = (float)(rotBounds->getY() * scaleY);
				float var$17 = (float)(rotBounds->getWidth() * scaleX);
				$var($Rectangle2D$Float, scaledBounds, $new($Rectangle2D$Float, var$15, var$16, var$17, (float)(rotBounds->getHeight() * scaleY)));
				$var($ByteComponentRaster, tile, $cast($ByteComponentRaster, deepImage->getRaster()));
				$var($bytes, var$18, $nc(tile)->getDataStorage());
				float var$19 = scaledBounds->x;
				float var$20 = scaledBounds->y;
				float var$21 = (float)$Math::rint(scaledBounds->width + 0.5);
				float var$22 = (float)$Math::rint(scaledBounds->height + 0.5);
				float var$23 = (float)deepImage->getWidth();
				float var$24 = (float)deepImage->getHeight();
				int32_t var$25 = deepImage->getWidth();
				psPrinterJob->drawImageBGR(var$18, var$19, var$20, var$21, var$22, 0.0f, 0.0f, var$23, var$24, var$25, deepImage->getHeight());
				psPrinterJob->setClip($($nc($(getTransform()))->createTransformedShape(holdClip)));
				imageGraphics->dispose();
			}
		}
	}
	return true;
}

void PSPathGraphics::redrawRegion($Rectangle2D* region, double scaleX, double scaleY, $Shape* savedClip, $AffineTransform* savedTransform) {
	$useLocalCurrentObjectStackCache();
	$var($PSPrinterJob, psPrinterJob, $cast($PSPrinterJob, getPrinterJob()));
	$var($Printable, painter, getPrintable());
	$var($PageFormat, pageFormat, getPageFormat());
	int32_t pageIndex = getPageIndex();
	int32_t var$0 = $cast(int32_t, $nc(region)->getWidth());
	$var($BufferedImage, deepImage, $new($BufferedImage, var$0, $cast(int32_t, region->getHeight()), $BufferedImage::TYPE_3BYTE_BGR));
	$var($Graphics2D, g, deepImage->createGraphics());
	$var($ProxyGraphics2D, proxy, $new($ProxyGraphics2D, g, psPrinterJob));
	$init($Color);
	proxy->setColor($Color::white);
	int32_t var$1 = deepImage->getWidth();
	proxy->fillRect(0, 0, var$1, deepImage->getHeight());
	int32_t var$2 = deepImage->getWidth();
	proxy->clipRect(0, 0, var$2, deepImage->getHeight());
	double var$3 = -$nc(region)->getX();
	proxy->translate(var$3, -region->getY());
	float sourceResX = (float)($nc(psPrinterJob)->getXRes() / scaleX);
	float sourceResY = (float)(psPrinterJob->getYRes() / scaleY);
	proxy->scale($div(sourceResX, PSPathGraphics::DEFAULT_USER_RES), $div(sourceResY, PSPathGraphics::DEFAULT_USER_RES));
	double var$5 = -psPrinterJob->getPhysicalPrintableX($($nc(pageFormat)->getPaper()));
	double var$4 = var$5 / psPrinterJob->getXRes() * PSPathGraphics::DEFAULT_USER_RES;
	double var$6 = -psPrinterJob->getPhysicalPrintableY($($nc(pageFormat)->getPaper()));
	proxy->translate(var$4, var$6 / psPrinterJob->getYRes() * PSPathGraphics::DEFAULT_USER_RES);
	proxy->transform($$new($AffineTransform, $($nc($(getPageFormat()))->getMatrix())));
	proxy->setPaint($Color::black);
	$nc(painter)->print(proxy, pageFormat, pageIndex);
	$nc(g)->dispose();
	psPrinterJob->setClip($($nc(savedTransform)->createTransformedShape(savedClip)));
	float var$7 = (float)($nc(region)->getX() * scaleX);
	float var$8 = (float)(region->getY() * scaleY);
	float var$9 = (float)(region->getWidth() * scaleX);
	$var($Rectangle2D$Float, scaledBounds, $new($Rectangle2D$Float, var$7, var$8, var$9, (float)(region->getHeight() * scaleY)));
	$var($ByteComponentRaster, tile, $cast($ByteComponentRaster, deepImage->getRaster()));
	$var($bytes, var$10, $nc(tile)->getDataStorage());
	float var$11 = scaledBounds->x;
	float var$12 = scaledBounds->y;
	float var$13 = scaledBounds->width;
	float var$14 = scaledBounds->height;
	float var$15 = (float)deepImage->getWidth();
	float var$16 = (float)deepImage->getHeight();
	int32_t var$17 = deepImage->getWidth();
	psPrinterJob->drawImageBGR(var$10, var$11, var$12, var$13, var$14, 0.0f, 0.0f, var$15, var$16, var$17, deepImage->getHeight());
}

void PSPathGraphics::deviceFill($PathIterator* pathIter, $Color* color) {
	$useLocalCurrentObjectStackCache();
	$var($PSPrinterJob, psPrinterJob, $cast($PSPrinterJob, getPrinterJob()));
	$var($PathIterator, var$0, pathIter);
	$var($Color, var$1, color);
	$var($AffineTransform, var$2, getTransform());
	$nc(psPrinterJob)->deviceFill(var$0, var$1, var$2, $(getClip()));
}

void PSPathGraphics::deviceFrameRect(int32_t x, int32_t y, int32_t width, int32_t height, $Color* color) {
	draw($$new($Rectangle2D$Float, (float)x, (float)y, (float)width, (float)height));
}

void PSPathGraphics::deviceDrawLine(int32_t xBegin, int32_t yBegin, int32_t xEnd, int32_t yEnd, $Color* color) {
	draw($$new($Line2D$Float, (float)xBegin, (float)yBegin, (float)xEnd, (float)yEnd));
}

void PSPathGraphics::deviceFillRect(int32_t x, int32_t y, int32_t width, int32_t height, $Color* color) {
	fill($$new($Rectangle2D$Float, (float)x, (float)y, (float)width, (float)height));
}

void PSPathGraphics::deviceClip($PathIterator* pathIter) {
}

PSPathGraphics::PSPathGraphics() {
}

$Class* PSPathGraphics::load$($String* name, bool initialize) {
	$loadClass(PSPathGraphics, name, initialize, &_PSPathGraphics_ClassInfo_, allocate$PSPathGraphics);
	return class$;
}

$Class* PSPathGraphics::class$ = nullptr;

	} // print
} // sun