#include <sun/print/PathGraphics.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Paint.h>
#include <java/awt/Polygon.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphVector.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/font/TextLayout.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Arc2D$Float.h>
#include <java/awt/geom/Arc2D.h>
#include <java/awt/geom/Ellipse2D$Float.h>
#include <java/awt/geom/Ellipse2D.h>
#include <java/awt/geom/Line2D$Float.h>
#include <java/awt/geom/Line2D.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/geom/RoundRectangle2D$Float.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/SinglePixelPackedSampleModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterJob.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/util/Hashtable.h>
#include <java/util/Map.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <sun/awt/image/ToolkitImage.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/Font2D.h>
#include <sun/font/Font2DHandle.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/PhysicalFont.h>
#include <sun/print/ProxyGraphics2D.h>
#include <sun/print/RasterPrinterJob.h>
#include <jcpp.h>

#undef BITMASK
#undef FLAG_HAS_POSITION_ADJUSTMENTS
#undef HI_SURROGATE_START
#undef INVISIBLE_GLYPH_ID
#undef LO_SURROGATE_END
#undef OPAQUE
#undef OPEN
#undef PIE
#undef SRC
#undef SRC_OVER
#undef TRACKING
#undef TYPE_INT_ARGB
#undef TYPE_INT_ARGB_PRE
#undef TYPE_QUADRANT_ROTATION
#undef TYPE_TRANSLATION
#undef TYPE_UNIFORM_SCALE
#undef WIND_EVEN_ODD

using $charArray2 = $Array<char16_t, 2>;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $Font = ::java::awt::Font;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Paint = ::java::awt::Paint;
using $Polygon = ::java::awt::Polygon;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $TextLayout = ::java::awt::font::TextLayout;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Arc2D = ::java::awt::geom::Arc2D;
using $Arc2D$Float = ::java::awt::geom::Arc2D$Float;
using $Ellipse2D = ::java::awt::geom::Ellipse2D;
using $Ellipse2D$Float = ::java::awt::geom::Ellipse2D$Float;
using $Line2D = ::java::awt::geom::Line2D;
using $Line2D$Float = ::java::awt::geom::Line2D$Float;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $RoundRectangle2D = ::java::awt::geom::RoundRectangle2D;
using $RoundRectangle2D$Float = ::java::awt::geom::RoundRectangle2D$Float;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $AssertionError = ::java::lang::AssertionError;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Number = ::java::lang::Number;
using $SoftReference = ::java::lang::ref::SoftReference;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $Hashtable = ::java::util::Hashtable;
using $Map = ::java::util::Map;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;
using $ToolkitImage = ::sun::awt::image::ToolkitImage;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $CompositeFont = ::sun::font::CompositeFont;
using $Font2D = ::sun::font::Font2D;
using $Font2DHandle = ::sun::font::Font2DHandle;
using $FontUtilities = ::sun::font::FontUtilities;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $ProxyGraphics2D = ::sun::print::ProxyGraphics2D;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;

namespace sun {
	namespace print {

$FieldInfo _PathGraphics_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PathGraphics, $assertionsDisabled)},
	{"mPainter", "Ljava/awt/print/Printable;", nullptr, $PRIVATE, $field(PathGraphics, mPainter)},
	{"mPageFormat", "Ljava/awt/print/PageFormat;", nullptr, $PRIVATE, $field(PathGraphics, mPageFormat)},
	{"mPageIndex", "I", nullptr, $PRIVATE, $field(PathGraphics, mPageIndex)},
	{"mCanRedraw", "Z", nullptr, $PRIVATE, $field(PathGraphics, mCanRedraw)},
	{"printingGlyphVector", "Z", nullptr, $PROTECTED, $field(PathGraphics, printingGlyphVector)},
	{"fontMapRef", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<Ljava/util/Hashtable<Lsun/font/Font2DHandle;Ljava/lang/Object;>;>;", $PROTECTED | $STATIC, $staticField(PathGraphics, fontMapRef)},
	{}
};

$MethodInfo _PathGraphics_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Graphics2D;Ljava/awt/print/PrinterJob;Ljava/awt/print/Printable;Ljava/awt/print/PageFormat;IZ)V", nullptr, $PROTECTED, $method(static_cast<void(PathGraphics::*)($Graphics2D*,$PrinterJob*,$Printable*,$PageFormat*,int32_t,bool)>(&PathGraphics::init$))},
	{"canDoRedraws", "()Z", nullptr, $PUBLIC},
	{"canDrawStringToWidth", "()Z", nullptr, $PROTECTED},
	{"clearRect", "(IIII)V", nullptr, $PUBLIC},
	{"deviceClip", "(Ljava/awt/geom/PathIterator;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"deviceDrawLine", "(IIIILjava/awt/Color;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"deviceFill", "(Ljava/awt/geom/PathIterator;Ljava/awt/Color;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"deviceFillRect", "(IIIILjava/awt/Color;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"deviceFrameRect", "(IIIILjava/awt/Color;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"draw", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"drawArc", "(IIIIII)V", nullptr, $PUBLIC},
	{"drawBitmaskImage", "(Ljava/awt/image/BufferedImage;Ljava/awt/geom/AffineTransform;Ljava/awt/Color;IIII)Z", nullptr, $PROTECTED},
	{"drawGlyphVector", "(Ljava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IIIILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IIIIIIIILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IIIIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;Ljava/awt/geom/AffineTransform;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;II)V", nullptr, $PUBLIC},
	{"drawImageToPlatform", "(Ljava/awt/Image;Ljava/awt/geom/AffineTransform;Ljava/awt/Color;IIIIZ)Z", nullptr, $PROTECTED | $ABSTRACT},
	{"drawLine", "(IIII)V", nullptr, $PUBLIC},
	{"drawOval", "(IIII)V", nullptr, $PUBLIC},
	{"drawPolygon", "([I[II)V", nullptr, $PUBLIC},
	{"drawPolygon", "(Ljava/awt/Polygon;)V", nullptr, $PUBLIC},
	{"drawPolyline", "([I[II)V", nullptr, $PUBLIC},
	{"drawRect", "(IIII)V", nullptr, $PUBLIC},
	{"drawRenderedImage", "(Ljava/awt/image/RenderedImage;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{"drawRoundRect", "(IIIIII)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/lang/String;FF)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/lang/String;FFLjava/awt/Font;Ljava/awt/font/FontRenderContext;F)V", nullptr, $PROTECTED},
	{"drawString", "(Ljava/text/AttributedCharacterIterator;II)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/text/AttributedCharacterIterator;FF)V", nullptr, $PUBLIC},
	{"fill", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"fill", "(Ljava/awt/Shape;Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"fillArc", "(IIIIII)V", nullptr, $PUBLIC},
	{"fillOval", "(IIII)V", nullptr, $PUBLIC},
	{"fillPolygon", "([I[II)V", nullptr, $PUBLIC},
	{"fillPolygon", "(Ljava/awt/Polygon;)V", nullptr, $PUBLIC},
	{"fillRect", "(IIII)V", nullptr, $PUBLIC},
	{"fillRoundRect", "(IIIIII)V", nullptr, $PUBLIC},
	{"getBufferedImage", "(Ljava/awt/Image;)Ljava/awt/image/BufferedImage;", nullptr, $PROTECTED},
	{"getGlyphToCharMapForFont", "(Lsun/font/Font2D;)[C", nullptr, $PRIVATE | $STATIC, $method(static_cast<$chars*(*)($Font2D*)>(&PathGraphics::getGlyphToCharMapForFont))},
	{"getPageFormat", "()Ljava/awt/print/PageFormat;", nullptr, $PROTECTED},
	{"getPageIndex", "()I", nullptr, $PROTECTED},
	{"getPrintable", "()Ljava/awt/print/Printable;", nullptr, $PROTECTED},
	{"hasTransparentPixels", "(Ljava/awt/image/BufferedImage;)Z", nullptr, $PROTECTED},
	{"isBitmaskTransparency", "(Ljava/awt/image/BufferedImage;)Z", nullptr, $PROTECTED},
	{"isCompositing", "(Ljava/awt/Composite;)Z", nullptr, $PROTECTED},
	{"platformFontCount", "(Ljava/awt/Font;Ljava/lang/String;)I", nullptr, $PROTECTED},
	{"printGlyphVector", "(Ljava/awt/font/GlyphVector;FF)Z", nullptr, $PROTECTED},
	{"printedSimpleGlyphVector", "(Ljava/awt/font/GlyphVector;FF)Z", nullptr, 0},
	{"redrawRegion", "(Ljava/awt/geom/Rectangle2D;DDLjava/awt/Shape;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.print.PrinterException"},
	{"samePositions", "(Ljava/awt/font/GlyphVector;[I[I[F)Z", nullptr, $PRIVATE, $method(static_cast<bool(PathGraphics::*)($GlyphVector*,$ints*,$ints*,$floats*)>(&PathGraphics::samePositions))},
	{}
};

$ClassInfo _PathGraphics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.print.PathGraphics",
	"sun.print.ProxyGraphics2D",
	nullptr,
	_PathGraphics_FieldInfo_,
	_PathGraphics_MethodInfo_
};

$Object* allocate$PathGraphics($Class* clazz) {
	return $of($alloc(PathGraphics));
}

bool PathGraphics::$assertionsDisabled = false;
$SoftReference* PathGraphics::fontMapRef = nullptr;

void PathGraphics::init$($Graphics2D* graphics, $PrinterJob* printerJob, $Printable* painter, $PageFormat* pageFormat, int32_t pageIndex, bool canRedraw) {
	$ProxyGraphics2D::init$(graphics, printerJob);
	$set(this, mPainter, painter);
	$set(this, mPageFormat, pageFormat);
	this->mPageIndex = pageIndex;
	this->mCanRedraw = canRedraw;
}

$Printable* PathGraphics::getPrintable() {
	return this->mPainter;
}

$PageFormat* PathGraphics::getPageFormat() {
	return this->mPageFormat;
}

int32_t PathGraphics::getPageIndex() {
	return this->mPageIndex;
}

bool PathGraphics::canDoRedraws() {
	return this->mCanRedraw;
}

void PathGraphics::drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$var($Paint, paint, getPaint());
	try {
		$var($AffineTransform, deviceTransform, getTransform());
		if (getClip() != nullptr) {
			deviceClip($($nc($(getClip()))->getPathIterator(deviceTransform)));
		}
		deviceDrawLine(x1, y1, x2, y2, $cast($Color, paint));
	} catch ($ClassCastException&) {
		$var($ClassCastException, e, $catch());
		$throwNew($IllegalArgumentException, "Expected a Color instance"_s);
	}
}

void PathGraphics::drawRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Paint, paint, getPaint());
	try {
		$var($AffineTransform, deviceTransform, getTransform());
		if (getClip() != nullptr) {
			deviceClip($($nc($(getClip()))->getPathIterator(deviceTransform)));
		}
		deviceFrameRect(x, y, width, height, $cast($Color, paint));
	} catch ($ClassCastException&) {
		$var($ClassCastException, e, $catch());
		$throwNew($IllegalArgumentException, "Expected a Color instance"_s);
	}
}

void PathGraphics::fillRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Paint, paint, getPaint());
	try {
		$var($AffineTransform, deviceTransform, getTransform());
		if (getClip() != nullptr) {
			deviceClip($($nc($(getClip()))->getPathIterator(deviceTransform)));
		}
		deviceFillRect(x, y, width, height, $cast($Color, paint));
	} catch ($ClassCastException&) {
		$var($ClassCastException, e, $catch());
		$throwNew($IllegalArgumentException, "Expected a Color instance"_s);
	}
}

void PathGraphics::clearRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Shape, var$0, static_cast<$Shape*>($new($Rectangle2D$Float, (float)x, (float)y, (float)width, (float)height)));
	fill(var$0, $(getBackground()));
}

void PathGraphics::drawRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	draw($$new($RoundRectangle2D$Float, (float)x, (float)y, (float)width, (float)height, (float)arcWidth, (float)arcHeight));
}

void PathGraphics::fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	fill($$new($RoundRectangle2D$Float, (float)x, (float)y, (float)width, (float)height, (float)arcWidth, (float)arcHeight));
}

void PathGraphics::drawOval(int32_t x, int32_t y, int32_t width, int32_t height) {
	draw($$new($Ellipse2D$Float, (float)x, (float)y, (float)width, (float)height));
}

void PathGraphics::fillOval(int32_t x, int32_t y, int32_t width, int32_t height) {
	fill($$new($Ellipse2D$Float, (float)x, (float)y, (float)width, (float)height));
}

void PathGraphics::drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	draw($$new($Arc2D$Float, (float)x, (float)y, (float)width, (float)height, (float)startAngle, (float)arcAngle, $Arc2D::OPEN));
}

void PathGraphics::fillArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	fill($$new($Arc2D$Float, (float)x, (float)y, (float)width, (float)height, (float)startAngle, (float)arcAngle, $Arc2D::PIE));
}

void PathGraphics::drawPolyline($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	if (nPoints == 2) {
		draw($$new($Line2D$Float, (float)$nc(xPoints)->get(0), (float)$nc(yPoints)->get(0), (float)xPoints->get(1), (float)yPoints->get(1)));
	} else if (nPoints > 2) {
		$var($Path2D, path, $new($Path2D$Float, $Path2D::WIND_EVEN_ODD, nPoints));
		path->moveTo((double)$nc(xPoints)->get(0), (double)$nc(yPoints)->get(0));
		for (int32_t i = 1; i < nPoints; ++i) {
			path->lineTo((double)$nc(xPoints)->get(i), (double)$nc(yPoints)->get(i));
		}
		draw(path);
	}
}

void PathGraphics::drawPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	draw($$new($Polygon, xPoints, yPoints, nPoints));
}

void PathGraphics::drawPolygon($Polygon* p) {
	draw(p);
}

void PathGraphics::fillPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	fill($$new($Polygon, xPoints, yPoints, nPoints));
}

void PathGraphics::fillPolygon($Polygon* p) {
	fill(p);
}

void PathGraphics::drawString($String* str, int32_t x, int32_t y) {
	drawString(str, (float)x, (float)y);
}

void PathGraphics::drawString($String* str, float x, float y) {
	if ($nc(str)->length() == 0) {
		return;
	}
	$var($String, var$0, str);
	$var($Font, var$1, getFont());
	$var($TextLayout, layout, $new($TextLayout, var$0, var$1, $(getFontRenderContext())));
	layout->draw(this, x, y);
}

void PathGraphics::drawString($String* str, float x, float y, $Font* font, $FontRenderContext* frc, float w) {
	$var($TextLayout, layout, $new($TextLayout, str, font, frc));
	$var($Shape, textShape, layout->getOutline($($AffineTransform::getTranslateInstance(x, y))));
	fill(textShape);
}

void PathGraphics::drawString($AttributedCharacterIterator* iterator, int32_t x, int32_t y) {
	drawString(iterator, (float)x, (float)y);
}

void PathGraphics::drawString($AttributedCharacterIterator* iterator, float x, float y) {
	if (iterator == nullptr) {
		$throwNew($NullPointerException, "attributedcharacteriterator is null"_s);
	}
	$var($TextLayout, layout, $new($TextLayout, iterator, $(getFontRenderContext())));
	layout->draw(this, x, y);
}

void PathGraphics::drawGlyphVector($GlyphVector* g, float x, float y) {
	if (this->printingGlyphVector) {
		if (!PathGraphics::$assertionsDisabled && ! !this->printingGlyphVector) {
			$throwNew($AssertionError);
		}
		fill($($nc(g)->getOutline(x, y)));
		return;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->printingGlyphVector = true;
			$init($RasterPrinterJob);
			if ($RasterPrinterJob::shapeTextProp || !printedSimpleGlyphVector(g, x, y)) {
				fill($($nc(g)->getOutline(x, y)));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this->printingGlyphVector = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t PathGraphics::platformFontCount($Font* font, $String* str) {
	return 0;
}

bool PathGraphics::printGlyphVector($GlyphVector* gv, float x, float y) {
	return false;
}

bool PathGraphics::printedSimpleGlyphVector($GlyphVector* g, float x, float y) {
	int32_t flags = $nc(g)->getLayoutFlags();
	if (flags != 0 && flags != $GlyphVector::FLAG_HAS_POSITION_ADJUSTMENTS) {
		return printGlyphVector(g, x, y);
	}
	$var($Font, font, g->getFont());
	$var($Font2D, font2D, $FontUtilities::getFont2D(font));
	if ($nc($nc(font2D)->handle)->font2D != font2D) {
		return false;
	}
	$var($Hashtable, fontMap, nullptr);
	$synchronized(PathGraphics::class$) {
		$assign(fontMap, $cast($Hashtable, $nc(PathGraphics::fontMapRef)->get()));
		if (fontMap == nullptr) {
			$assign(fontMap, $new($Hashtable));
			$assignStatic(PathGraphics::fontMapRef, $new($SoftReference, fontMap));
		}
	}
	int32_t numGlyphs = g->getNumGlyphs();
	$var($ints, glyphCodes, g->getGlyphCodes(0, numGlyphs, nullptr));
	$var($chars, glyphToCharMap, nullptr);
	$var($charArray2, mapArray, nullptr);
	$var($CompositeFont, cf, nullptr);
	$synchronized(fontMap) {
		if ($instanceOf($CompositeFont, font2D)) {
			$assign(cf, $cast($CompositeFont, font2D));
			int32_t numSlots = $nc(cf)->getNumSlots();
			$assign(mapArray, $cast($charArray2, $nc(fontMap)->get($nc(font2D)->handle)));
			if (mapArray == nullptr) {
				$assign(mapArray, $new($charArray2, numSlots));
				fontMap->put($nc(font2D)->handle, mapArray);
			}
			for (int32_t i = 0; i < numGlyphs; ++i) {
				int32_t slot = (int32_t)((uint32_t)$nc(glyphCodes)->get(i) >> 24);
				if (slot >= numSlots) {
					return false;
				}
				if ($nc(mapArray)->get(slot) == nullptr) {
					$var($Font2D, slotFont, cf->getSlotFont(slot));
					$var($chars, map, $cast($chars, fontMap->get($nc(slotFont)->handle)));
					if (map == nullptr) {
						$assign(map, getGlyphToCharMapForFont(slotFont));
					}
					mapArray->set(slot, map);
				}
			}
		} else {
			$assign(glyphToCharMap, $cast($chars, $nc(fontMap)->get($nc(font2D)->handle)));
			if (glyphToCharMap == nullptr) {
				$assign(glyphToCharMap, getGlyphToCharMapForFont(font2D));
				fontMap->put($nc(font2D)->handle, glyphToCharMap);
			}
		}
	}
	$var($chars, chars, $new($chars, numGlyphs));
	if (cf != nullptr) {
		for (int32_t i = 0; i < numGlyphs; ++i) {
			int32_t gc = $nc(glyphCodes)->get(i);
			$var($chars, map, $nc(mapArray)->get((int32_t)((uint32_t)gc >> 24)));
			gc = (int32_t)(gc & (uint32_t)0x00FFFFFF);
			if (map == nullptr) {
				return false;
			}
			char16_t ch = 0;
			if (gc == $CharToGlyphMapper::INVISIBLE_GLYPH_ID) {
				ch = u'\n';
			} else if (gc < 0 || gc >= $nc(map)->length) {
				return false;
			} else {
				ch = map->get(gc);
			}
			if (ch != $CharToGlyphMapper::INVISIBLE_GLYPH_ID) {
				chars->set(i, ch);
			} else {
				return false;
			}
		}
	} else {
		for (int32_t i = 0; i < numGlyphs; ++i) {
			int32_t gc = $nc(glyphCodes)->get(i);
			char16_t ch = 0;
			if (gc == $CharToGlyphMapper::INVISIBLE_GLYPH_ID) {
				ch = u'\n';
			} else if (gc < 0 || gc >= $nc(glyphToCharMap)->length) {
				return false;
			} else {
				ch = glyphToCharMap->get(gc);
			}
			if (ch != $CharToGlyphMapper::INVISIBLE_GLYPH_ID) {
				chars->set(i, ch);
			} else {
				return false;
			}
		}
	}
	$var($FontRenderContext, gvFrc, g->getFontRenderContext());
	$var($GlyphVector, gv2, $nc(font)->createGlyphVector(gvFrc, chars));
	if ($nc(gv2)->getNumGlyphs() != numGlyphs) {
		return printGlyphVector(g, x, y);
	}
	$var($ints, glyphCodes2, $nc(gv2)->getGlyphCodes(0, numGlyphs, nullptr));
	for (int32_t i = 0; i < numGlyphs; ++i) {
		if ($nc(glyphCodes)->get(i) != $nc(glyphCodes2)->get(i)) {
			return printGlyphVector(g, x, y);
		}
	}
	$var($FontRenderContext, g2dFrc, getFontRenderContext());
	bool compatibleFRC = $nc(gvFrc)->equals(g2dFrc);
	bool var$0 = !compatibleFRC;
	if (var$0) {
		bool var$1 = gvFrc->usesFractionalMetrics();
		var$0 = var$1 == $nc(g2dFrc)->usesFractionalMetrics();
	}
	if (var$0) {
		$var($AffineTransform, gvAT, gvFrc->getTransform());
		$var($AffineTransform, g2dAT, getTransform());
		$var($doubles, gvMatrix, $new($doubles, 4));
		$var($doubles, g2dMatrix, $new($doubles, 4));
		$nc(gvAT)->getMatrix(gvMatrix);
		$nc(g2dAT)->getMatrix(g2dMatrix);
		compatibleFRC = true;
		for (int32_t i = 0; i < 4; ++i) {
			if (gvMatrix->get(i) != g2dMatrix->get(i)) {
				compatibleFRC = false;
				break;
			}
		}
	}
	$var($String, str, $new($String, chars, 0, numGlyphs));
	int32_t numFonts = platformFontCount(font, str);
	if (numFonts == 0) {
		return false;
	}
	$var($floats, positions, g->getGlyphPositions(0, numGlyphs, nullptr));
	bool noPositionAdjustments = (((int32_t)(flags & (uint32_t)$GlyphVector::FLAG_HAS_POSITION_ADJUSTMENTS)) == 0) || samePositions(gv2, glyphCodes2, glyphCodes, positions);
	$var($Point2D, gvAdvancePt, g->getGlyphPosition(numGlyphs));
	float gvAdvanceX = (float)$nc(gvAdvancePt)->getX();
	bool layoutAffectsAdvance = false;
	if (font->hasLayoutAttributes() && this->printingGlyphVector && noPositionAdjustments) {
		$var($Map, map, font->getAttributes());
		$init($TextAttribute);
		$var($Object, o, $nc(map)->get($TextAttribute::TRACKING));
		bool tracking = o != nullptr && ($instanceOf($Number, o)) && ($nc(($cast($Number, o)))->floatValue() != 0.0f);
		if (tracking) {
			noPositionAdjustments = false;
		} else {
			$var($Rectangle2D, bounds, font->getStringBounds(str, gvFrc));
			float strAdvanceX = (float)$nc(bounds)->getWidth();
			if ($Math::abs(strAdvanceX - gvAdvanceX) > 1.0E-5) {
				layoutAffectsAdvance = true;
			}
		}
	}
	if (compatibleFRC && noPositionAdjustments && !layoutAffectsAdvance) {
		drawString(str, x, y, font, gvFrc, 0.0f);
		return true;
	}
	if (numFonts == 1 && canDrawStringToWidth() && noPositionAdjustments) {
		drawString(str, x, y, font, gvFrc, gvAdvanceX);
		return true;
	}
	if ($FontUtilities::isComplexText(chars, 0, chars->length)) {
		return printGlyphVector(g, x, y);
	}
	if (numGlyphs > 10 && printGlyphVector(g, x, y)) {
		return true;
	}
	for (int32_t i = 0; i < numGlyphs; ++i) {
		$var($String, s, $new($String, chars, i, 1));
		drawString(s, x + $nc(positions)->get(i * 2), y + positions->get(i * 2 + 1), font, gvFrc, 0.0f);
	}
	return true;
}

bool PathGraphics::samePositions($GlyphVector* gv, $ints* gvcodes, $ints* origCodes, $floats* origPositions) {
	int32_t numGlyphs = $nc(gv)->getNumGlyphs();
	$var($floats, gvpos, gv->getGlyphPositions(0, numGlyphs, nullptr));
	if (numGlyphs != $nc(gvcodes)->length || $nc(origCodes)->length != $nc(gvcodes)->length || $nc(origPositions)->length != $nc(gvpos)->length) {
		return false;
	}
	for (int32_t i = 0; i < numGlyphs; ++i) {
		if ($nc(gvcodes)->get(i) != $nc(origCodes)->get(i) || $nc(gvpos)->get(i) != $nc(origPositions)->get(i)) {
			return false;
		}
	}
	return true;
}

bool PathGraphics::canDrawStringToWidth() {
	return false;
}

$chars* PathGraphics::getGlyphToCharMapForFont($Font2D* font2D) {
	$init(PathGraphics);
	int32_t numGlyphs = $nc(font2D)->getNumGlyphs();
	int32_t missingGlyph = font2D->getMissingGlyphCode();
	$var($chars, glyphToCharMap, $new($chars, numGlyphs));
	int32_t glyph = 0;
	for (int32_t i = 0; i < numGlyphs; ++i) {
		glyphToCharMap->set(i, (char16_t)$CharToGlyphMapper::INVISIBLE_GLYPH_ID);
	}
	for (char16_t c = (char16_t)0; c < 0x0000FFFF; ++c) {
		if (c >= $CharToGlyphMapper::HI_SURROGATE_START && c <= $CharToGlyphMapper::LO_SURROGATE_END) {
			continue;
		}
		glyph = font2D->charToGlyph(c);
		if (glyph != missingGlyph && glyph >= 0 && glyph < numGlyphs && (glyphToCharMap->get(glyph) == $CharToGlyphMapper::INVISIBLE_GLYPH_ID)) {
			glyphToCharMap->set(glyph, c);
		}
	}
	return glyphToCharMap;
}

void PathGraphics::draw($Shape* s) {
	fill($($nc($(getStroke()))->createStrokedShape(s)));
}

void PathGraphics::fill($Shape* s) {
	$var($Paint, paint, getPaint());
	try {
		fill(s, $cast($Color, paint));
	} catch ($ClassCastException&) {
		$var($ClassCastException, e, $catch());
		$throwNew($IllegalArgumentException, "Expected a Color instance"_s);
	}
}

void PathGraphics::fill($Shape* s, $Color* color) {
	$var($AffineTransform, deviceTransform, getTransform());
	if (getClip() != nullptr) {
		deviceClip($($nc($(getClip()))->getPathIterator(deviceTransform)));
	}
	deviceFill($($nc(s)->getPathIterator(deviceTransform)), color);
}

$BufferedImage* PathGraphics::getBufferedImage($Image* img) {
	if ($instanceOf($BufferedImage, img)) {
		return $cast($BufferedImage, img);
	} else if ($instanceOf($ToolkitImage, img)) {
		return $nc(($cast($ToolkitImage, img)))->getBufferedImage();
	} else if ($instanceOf($VolatileImage, img)) {
		return $nc(($cast($VolatileImage, img)))->getSnapshot();
	} else {
		return nullptr;
	}
}

bool PathGraphics::hasTransparentPixels($BufferedImage* bufferedImage) {
	$var($ColorModel, colorModel, $nc(bufferedImage)->getColorModel());
	bool hasTransparency = colorModel == nullptr ? true : $nc(colorModel)->getTransparency() != $ColorModel::OPAQUE;
	if (hasTransparency && bufferedImage != nullptr) {
		bool var$0 = bufferedImage->getType() == $BufferedImage::TYPE_INT_ARGB;
		if (var$0 || bufferedImage->getType() == $BufferedImage::TYPE_INT_ARGB_PRE) {
			$var($DataBuffer, db, $nc($(bufferedImage->getRaster()))->getDataBuffer());
			$var($SampleModel, sm, $nc($(bufferedImage->getRaster()))->getSampleModel());
			if ($instanceOf($DataBufferInt, db) && $instanceOf($SinglePixelPackedSampleModel, sm)) {
				$var($SinglePixelPackedSampleModel, psm, $cast($SinglePixelPackedSampleModel, sm));
				$var($ints, int_data, $SunWritableRaster::stealData($cast($DataBufferInt, db), 0));
				int32_t x = bufferedImage->getMinX();
				int32_t y = bufferedImage->getMinY();
				int32_t w = bufferedImage->getWidth();
				int32_t h = bufferedImage->getHeight();
				int32_t stride = $nc(psm)->getScanlineStride();
				bool hastranspixel = false;
				for (int32_t j = y; j < y + h; ++j) {
					int32_t yoff = j * stride;
					for (int32_t i = x; i < x + w; ++i) {
						if (((int32_t)($nc(int_data)->get(yoff + i) & (uint32_t)(int32_t)0xFF000000)) != (int32_t)0xFF000000) {
							hastranspixel = true;
							break;
						}
					}
					if (hastranspixel) {
						break;
					}
				}
				if (hastranspixel == false) {
					hasTransparency = false;
				}
			}
		}
	}
	return hasTransparency;
}

bool PathGraphics::isBitmaskTransparency($BufferedImage* bufferedImage) {
	$var($ColorModel, colorModel, $nc(bufferedImage)->getColorModel());
	return (colorModel != nullptr && colorModel->getTransparency() == $ColorModel::BITMASK);
}

bool PathGraphics::drawBitmaskImage($BufferedImage* bufferedImage, $AffineTransform* xform, $Color* bgcolor, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight) {
	$var($ColorModel, colorModel, $nc(bufferedImage)->getColorModel());
	$var($IndexColorModel, icm, nullptr);
	$var($ints, pixels, nullptr);
	if (!($instanceOf($IndexColorModel, colorModel))) {
		return false;
	} else {
		$assign(icm, $cast($IndexColorModel, colorModel));
	}
	if ($nc(colorModel)->getTransparency() != $ColorModel::BITMASK) {
		return false;
	}
	if (bgcolor != nullptr && bgcolor->getAlpha() < 128) {
		return false;
	}
	if (((int32_t)($nc(xform)->getType() & (uint32_t)~(($AffineTransform::TYPE_UNIFORM_SCALE | $AffineTransform::TYPE_TRANSLATION) | $AffineTransform::TYPE_QUADRANT_ROTATION))) != 0) {
		return false;
	}
	if (((int32_t)($nc($(getTransform()))->getType() & (uint32_t)~(($AffineTransform::TYPE_UNIFORM_SCALE | $AffineTransform::TYPE_TRANSLATION) | $AffineTransform::TYPE_QUADRANT_ROTATION))) != 0) {
		return false;
	}
	$var($BufferedImage, subImage, nullptr);
	$var($Raster, raster, bufferedImage->getRaster());
	int32_t transpixel = $nc(icm)->getTransparentPixel();
	$var($bytes, alphas, $new($bytes, icm->getMapSize()));
	icm->getAlphas(alphas);
	if (transpixel >= 0) {
		alphas->set(transpixel, (int8_t)0);
	}
	int32_t rw = $nc(raster)->getWidth();
	int32_t rh = raster->getHeight();
	if (srcX > rw || srcY > rh) {
		return false;
	}
	int32_t right = 0;
	int32_t bottom = 0;
	int32_t wid = 0;
	int32_t hgt = 0;
	if (srcX + srcWidth > rw) {
		right = rw;
		wid = right - srcX;
	} else {
		right = srcX + srcWidth;
		wid = srcWidth;
	}
	if (srcY + srcHeight > rh) {
		bottom = rh;
		hgt = bottom - srcY;
	} else {
		bottom = srcY + srcHeight;
		hgt = srcHeight;
	}
	$assign(pixels, $new($ints, wid));
	for (int32_t j = srcY; j < bottom; ++j) {
		int32_t startx = -1;
		raster->getPixels(srcX, j, wid, 1, pixels);
		for (int32_t i = srcX; i < right; ++i) {
			if (alphas->get(pixels->get(i - srcX)) == 0) {
				if (startx >= 0) {
					$assign(subImage, bufferedImage->getSubimage(startx, j, i - startx, 1));
					$nc(xform)->translate((double)startx, (double)j);
					drawImageToPlatform(subImage, xform, bgcolor, 0, 0, i - startx, 1, true);
					xform->translate((double)(-startx), (double)(-j));
					startx = -1;
				}
			} else if (startx < 0) {
				startx = i;
			}
		}
		if (startx >= 0) {
			$assign(subImage, bufferedImage->getSubimage(startx, j, right - startx, 1));
			$nc(xform)->translate((double)startx, (double)j);
			drawImageToPlatform(subImage, xform, bgcolor, 0, 0, right - startx, 1, true);
			xform->translate((double)(-startx), (double)(-j));
		}
	}
	return true;
}

bool PathGraphics::drawImage($Image* img, int32_t x, int32_t y, $ImageObserver* observer) {
	return drawImage(img, x, y, nullptr, observer);
}

bool PathGraphics::drawImage($Image* img, int32_t x, int32_t y, int32_t width, int32_t height, $ImageObserver* observer) {
	return drawImage(img, x, y, width, height, nullptr, observer);
}

bool PathGraphics::drawImage($Image* img, int32_t x, int32_t y, $Color* bgcolor, $ImageObserver* observer) {
	if (img == nullptr) {
		return true;
	}
	bool result = false;
	int32_t srcWidth = $nc(img)->getWidth(nullptr);
	int32_t srcHeight = img->getHeight(nullptr);
	if (srcWidth < 0 || srcHeight < 0) {
		result = false;
	} else {
		result = drawImage(img, x, y, srcWidth, srcHeight, bgcolor, observer);
	}
	return result;
}

bool PathGraphics::drawImage($Image* img, int32_t x, int32_t y, int32_t width, int32_t height, $Color* bgcolor, $ImageObserver* observer) {
	if (img == nullptr) {
		return true;
	}
	bool result = false;
	int32_t srcWidth = $nc(img)->getWidth(nullptr);
	int32_t srcHeight = img->getHeight(nullptr);
	if (srcWidth < 0 || srcHeight < 0) {
		result = false;
	} else {
		result = drawImage(img, x, y, x + width, y + height, 0, 0, srcWidth, srcHeight, observer);
	}
	return result;
}

bool PathGraphics::drawImage($Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $ImageObserver* observer) {
	return drawImage(img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, nullptr, observer);
}

bool PathGraphics::drawImage($Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgcolor, $ImageObserver* observer) {
	if (img == nullptr) {
		return true;
	}
	int32_t imgWidth = $nc(img)->getWidth(nullptr);
	int32_t imgHeight = img->getHeight(nullptr);
	if (imgWidth < 0 || imgHeight < 0) {
		return true;
	}
	int32_t srcWidth = sx2 - sx1;
	int32_t srcHeight = sy2 - sy1;
	float scalex = (float)(dx2 - dx1) / srcWidth;
	float scaley = (float)(dy2 - dy1) / srcHeight;
	$var($AffineTransform, xForm, $new($AffineTransform, scalex, (float)0, (float)0, scaley, dx1 - (sx1 * scalex), dy1 - (sy1 * scaley)));
	int32_t tmp = 0;
	if (sx2 < sx1) {
		tmp = sx1;
		sx1 = sx2;
		sx2 = tmp;
	}
	if (sy2 < sy1) {
		tmp = sy1;
		sy1 = sy2;
		sy2 = tmp;
	}
	if (sx1 < 0) {
		sx1 = 0;
	} else if (sx1 > imgWidth) {
		sx1 = imgWidth;
	}
	if (sx2 < 0) {
		sx2 = 0;
	} else if (sx2 > imgWidth) {
		sx2 = imgWidth;
	}
	if (sy1 < 0) {
		sy1 = 0;
	} else if (sy1 > imgHeight) {
		sy1 = imgHeight;
	}
	if (sy2 < 0) {
		sy2 = 0;
	} else if (sy2 > imgHeight) {
		sy2 = imgHeight;
	}
	srcWidth = sx2 - sx1;
	srcHeight = sy2 - sy1;
	if (srcWidth <= 0 || srcHeight <= 0) {
		return true;
	}
	return drawImageToPlatform(img, xForm, bgcolor, sx1, sy1, srcWidth, srcHeight, false);
}

bool PathGraphics::drawImage($Image* img, $AffineTransform* xform, $ImageObserver* obs) {
	if (img == nullptr) {
		return true;
	}
	bool result = false;
	int32_t srcWidth = $nc(img)->getWidth(nullptr);
	int32_t srcHeight = img->getHeight(nullptr);
	if (srcWidth < 0 || srcHeight < 0) {
		result = false;
	} else {
		result = drawImageToPlatform(img, xform, nullptr, 0, 0, srcWidth, srcHeight, false);
	}
	return result;
}

void PathGraphics::drawImage($BufferedImage* img$renamed, $BufferedImageOp* op, int32_t x, int32_t y) {
	$var($BufferedImage, img, img$renamed);
	if (img == nullptr) {
		return;
	}
	int32_t srcWidth = $nc(img)->getWidth(nullptr);
	int32_t srcHeight = img->getHeight(nullptr);
	if (op != nullptr) {
		$assign(img, op->filter(img, nullptr));
	}
	if (srcWidth <= 0 || srcHeight <= 0) {
		return;
	} else {
		$var($AffineTransform, xform, $new($AffineTransform, 1.0f, 0.0f, 0.0f, 1.0f, (float)x, (float)y));
		drawImageToPlatform(img, xform, nullptr, 0, 0, srcWidth, srcHeight, false);
	}
}

void PathGraphics::drawRenderedImage($RenderedImage* img, $AffineTransform* xform) {
	if (img == nullptr) {
		return;
	}
	$var($BufferedImage, bufferedImage, nullptr);
	int32_t srcWidth = $nc(img)->getWidth();
	int32_t srcHeight = img->getHeight();
	if (srcWidth <= 0 || srcHeight <= 0) {
		return;
	}
	if ($instanceOf($BufferedImage, img)) {
		$assign(bufferedImage, $cast($BufferedImage, img));
	} else {
		$assign(bufferedImage, $new($BufferedImage, srcWidth, srcHeight, $BufferedImage::TYPE_INT_ARGB));
		$var($Graphics2D, imageGraphics, bufferedImage->createGraphics());
		$nc(imageGraphics)->drawRenderedImage(img, xform);
	}
	drawImageToPlatform(bufferedImage, xform, nullptr, 0, 0, srcWidth, srcHeight, false);
}

bool PathGraphics::isCompositing($Composite* composite) {
	bool isCompositing = false;
	if ($instanceOf($AlphaComposite, composite)) {
		$var($AlphaComposite, alphaComposite, $cast($AlphaComposite, composite));
		float alpha = $nc(alphaComposite)->getAlpha();
		int32_t rule = alphaComposite->getRule();
		if (alpha != 1.0 || (rule != $AlphaComposite::SRC && rule != $AlphaComposite::SRC_OVER)) {
			isCompositing = true;
		}
	} else {
		isCompositing = true;
	}
	return isCompositing;
}

void clinit$PathGraphics($Class* class$) {
	PathGraphics::$assertionsDisabled = !PathGraphics::class$->desiredAssertionStatus();
	$assignStatic(PathGraphics::fontMapRef, $new($SoftReference, nullptr));
}

PathGraphics::PathGraphics() {
}

$Class* PathGraphics::load$($String* name, bool initialize) {
	$loadClass(PathGraphics, name, initialize, &_PathGraphics_ClassInfo_, clinit$PathGraphics, allocate$PathGraphics);
	return class$;
}

$Class* PathGraphics::class$ = nullptr;

	} // print
} // sun