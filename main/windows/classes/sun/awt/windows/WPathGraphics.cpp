#include <sun/awt/windows/WPathGraphics.h>

#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Paint.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/Transparency.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphVector.h>
#include <java/awt/font/TextLayout.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Line2D$Float.h>
#include <java/awt/geom/Line2D.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D$Double.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/MultiPixelPackedSampleModel.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Paper.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterJob.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Math.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Arrays.h>
#include <java/util/Locale.h>
#include <sun/awt/image/ByteComponentRaster.h>
#include <sun/awt/image/BytePackedRaster.h>
#include <sun/awt/windows/WPrinterJob.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/FileFont.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/TrueTypeFont.h>
#include <sun/print/PathGraphics.h>
#include <sun/print/ProxyGraphics2D.h>
#include <sun/print/RasterPrinterJob.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef CAP_ROUND
#undef CAP_SQUARE
#undef DEFAULT_USER_RES
#undef FLAG_HAS_TRANSFORMS
#undef INVISIBLE_GLYPHS
#undef JOIN_MITER
#undef LANDSCAPE
#undef MAX_THINLINE_INCHES
#undef MIN_DEVICE_LINEWIDTH
#undef OPAQUE
#undef POLYFILL_ALTERNATE
#undef POLYFILL_WINDING
#undef REVERSE_LANDSCAPE
#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_MOVETO
#undef SEG_QUADTO
#undef TYPE_3BYTE_BGR
#undef TYPE_BYTE
#undef TYPE_BYTE_BINARY
#undef TYPE_BYTE_INDEXED
#undef TYPE_FLIP
#undef TYPE_GENERAL_ROTATION
#undef TYPE_GENERAL_TRANSFORM
#undef WIND_EVEN_ODD

using $BasicStroke = ::java::awt::BasicStroke;
using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Paint = ::java::awt::Paint;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $Transparency = ::java::awt::Transparency;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $TextLayout = ::java::awt::font::TextLayout;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Line2D = ::java::awt::geom::Line2D;
using $Line2D$Float = ::java::awt::geom::Line2D$Float;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $MultiPixelPackedSampleModel = ::java::awt::image::MultiPixelPackedSampleModel;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Arrays = ::java::util::Arrays;
using $Locale = ::java::util::Locale;
using $ByteComponentRaster = ::sun::awt::image::ByteComponentRaster;
using $BytePackedRaster = ::sun::awt::image::BytePackedRaster;
using $WPrinterJob = ::sun::awt::windows::WPrinterJob;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $CompositeFont = ::sun::font::CompositeFont;
using $FileFont = ::sun::font::FileFont;
using $Font2D = ::sun::font::Font2D;
using $FontUtilities = ::sun::font::FontUtilities;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $TrueTypeFont = ::sun::font::TrueTypeFont;
using $PathGraphics = ::sun::print::PathGraphics;
using $ProxyGraphics2D = ::sun::print::ProxyGraphics2D;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WPathGraphics_FieldInfo_[] = {
	{"DEFAULT_USER_RES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WPathGraphics, DEFAULT_USER_RES)},
	{"MIN_DEVICE_LINEWIDTH", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WPathGraphics, MIN_DEVICE_LINEWIDTH)},
	{"MAX_THINLINE_INCHES", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WPathGraphics, MAX_THINLINE_INCHES)},
	{"precisionScale", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WPathGraphics, precisionScale)},
	{"useGDITextLayout", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WPathGraphics, useGDITextLayout)},
	{"preferGDITextLayout", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WPathGraphics, preferGDITextLayout)},
	{}
};

$MethodInfo _WPathGraphics_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Graphics2D;Ljava/awt/print/PrinterJob;Ljava/awt/print/Printable;Ljava/awt/print/PageFormat;IZ)V", nullptr, 0, $method(static_cast<void(WPathGraphics::*)($Graphics2D*,$PrinterJob*,$Printable*,$PageFormat*,int32_t,bool)>(&WPathGraphics::init$))},
	{"convertToWPath", "(Ljava/awt/geom/PathIterator;)V", nullptr, $PRIVATE, $method(static_cast<void(WPathGraphics::*)($PathIterator*)>(&WPathGraphics::convertToWPath))},
	{"create", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"deviceClip", "(Ljava/awt/geom/PathIterator;)V", nullptr, $PROTECTED},
	{"deviceDrawLine", "(IIIILjava/awt/Color;)V", nullptr, $PROTECTED},
	{"deviceFill", "(Ljava/awt/geom/PathIterator;Ljava/awt/Color;)V", nullptr, $PROTECTED},
	{"deviceFillRect", "(IIIILjava/awt/Color;)V", nullptr, $PROTECTED},
	{"deviceFrameRect", "(IIIILjava/awt/Color;)V", nullptr, $PROTECTED},
	{"draw", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"drawImageToPlatform", "(Ljava/awt/Image;Ljava/awt/geom/AffineTransform;Ljava/awt/Color;IIIIZ)Z", nullptr, $PROTECTED},
	{"drawString", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/lang/String;FF)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/lang/String;FFLjava/awt/Font;Ljava/awt/font/FontRenderContext;F)V", nullptr, $PUBLIC},
	{"getAngle", "(Ljava/awt/geom/Point2D$Double;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(WPathGraphics::*)($Point2D$Double*)>(&WPathGraphics::getAngle))},
	{"getAwScale", "(DD)F", nullptr, $PRIVATE, $method(static_cast<float(WPathGraphics::*)(double,double)>(&WPathGraphics::getAwScale))},
	{"isXP", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&WPathGraphics::isXP))},
	{"okGDIMetrics", "(Ljava/lang/String;Ljava/awt/Font;Ljava/awt/font/FontRenderContext;D)Z", nullptr, $PRIVATE, $method(static_cast<bool(WPathGraphics::*)($String*,$Font*,$FontRenderContext*,double)>(&WPathGraphics::okGDIMetrics))},
	{"platformFontCount", "(Ljava/awt/Font;Ljava/lang/String;)I", nullptr, $PROTECTED},
	{"precisionScaleUp", "([FI)V", nullptr, $PRIVATE, $method(static_cast<void(WPathGraphics::*)($floats*,int32_t)>(&WPathGraphics::precisionScaleUp))},
	{"printGlyphVector", "(Ljava/awt/font/GlyphVector;FF)Z", nullptr, $PROTECTED},
	{"redrawRegion", "(Ljava/awt/geom/Rectangle2D;DDLjava/awt/Shape;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, nullptr, "java.awt.print.PrinterException"},
	{"strNeedsTextLayout", "(Ljava/lang/String;Ljava/awt/Font;)Z", nullptr, $PRIVATE, $method(static_cast<bool(WPathGraphics::*)($String*,$Font*)>(&WPathGraphics::strNeedsTextLayout))},
	{"textOut", "(Ljava/lang/String;Ljava/awt/Font;Lsun/font/PhysicalFont;Ljava/awt/font/FontRenderContext;FIFDDFFFFF)V", nullptr, $PRIVATE, $method(static_cast<void(WPathGraphics::*)($String*,$Font*,$PhysicalFont*,$FontRenderContext*,float,int32_t,float,double,double,float,float,float,float,float)>(&WPathGraphics::textOut))},
	{}
};

$ClassInfo _WPathGraphics_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WPathGraphics",
	"sun.print.PathGraphics",
	nullptr,
	_WPathGraphics_FieldInfo_,
	_WPathGraphics_MethodInfo_
};

$Object* allocate$WPathGraphics($Class* clazz) {
	return $of($alloc(WPathGraphics));
}

float WPathGraphics::MIN_DEVICE_LINEWIDTH = 0.0;
float WPathGraphics::MAX_THINLINE_INCHES = 0.0;
float WPathGraphics::precisionScale = 0.0;
bool WPathGraphics::useGDITextLayout = false;
bool WPathGraphics::preferGDITextLayout = false;

void WPathGraphics::init$($Graphics2D* graphics, $PrinterJob* printerJob, $Printable* painter, $PageFormat* pageFormat, int32_t pageIndex, bool canRedraw) {
	$PathGraphics::init$(graphics, printerJob, painter, pageFormat, pageIndex, canRedraw);
}

$Graphics* WPathGraphics::create() {
	$useLocalCurrentObjectStackCache();
	$var($Graphics2D, var$0, $cast($Graphics2D, $nc($(getDelegate()))->create()));
	$var($PrinterJob, var$1, getPrinterJob());
	$var($Printable, var$2, getPrintable());
	$var($PageFormat, var$3, getPageFormat());
	int32_t var$4 = getPageIndex();
	return $new(WPathGraphics, var$0, var$1, var$2, var$3, var$4, canDoRedraws());
}

void WPathGraphics::draw($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Stroke, stroke, getStroke());
	if ($instanceOf($BasicStroke, stroke)) {
		$var($BasicStroke, lineStroke, nullptr);
		$var($BasicStroke, minLineStroke, nullptr);
		float deviceLineWidth = 0.0;
		float lineWidth = 0.0;
		$var($AffineTransform, deviceTransform, nullptr);
		$var($Point2D$Float, penSize, nullptr);
		$assign(lineStroke, $cast($BasicStroke, stroke));
		lineWidth = $nc(lineStroke)->getLineWidth();
		$assign(penSize, $new($Point2D$Float, lineWidth, lineWidth));
		$assign(deviceTransform, getTransform());
		$nc(deviceTransform)->deltaTransform(penSize, penSize);
		float var$0 = $Math::abs(penSize->x);
		deviceLineWidth = $Math::min(var$0, $Math::abs(penSize->y));
		if (deviceLineWidth < WPathGraphics::MIN_DEVICE_LINEWIDTH) {
			$var($Point2D$Float, minPenSize, $new($Point2D$Float, WPathGraphics::MIN_DEVICE_LINEWIDTH, WPathGraphics::MIN_DEVICE_LINEWIDTH));
			try {
				$var($AffineTransform, inverse, nullptr);
				float minLineWidth = 0.0;
				$assign(inverse, deviceTransform->createInverse());
				$nc(inverse)->deltaTransform(minPenSize, minPenSize);
				float var$1 = $Math::abs(minPenSize->x);
				minLineWidth = $Math::max(var$1, $Math::abs(minPenSize->y));
				float var$2 = minLineWidth;
				int32_t var$3 = lineStroke->getEndCap();
				int32_t var$4 = lineStroke->getLineJoin();
				float var$5 = lineStroke->getMiterLimit();
				$var($floats, var$6, lineStroke->getDashArray());
				$assign(minLineStroke, $new($BasicStroke, var$2, var$3, var$4, var$5, var$6, lineStroke->getDashPhase()));
				setStroke(minLineStroke);
			} catch ($NoninvertibleTransformException& e) {
			}
		}
		$PathGraphics::draw(s);
		if (minLineStroke != nullptr) {
			setStroke(lineStroke);
		}
	} else {
		$PathGraphics::draw(s);
	}
}

void WPathGraphics::drawString($String* str, int32_t x, int32_t y) {
	drawString(str, (float)x, (float)y);
}

void WPathGraphics::drawString($String* str, float x, float y) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, str);
	float var$1 = x;
	float var$2 = y;
	$var($Font, var$3, getFont());
	drawString(var$0, var$1, var$2, var$3, $(getFontRenderContext()), 0.0f);
}

int32_t WPathGraphics::platformFontCount($Font* font, $String* str) {
	$useLocalCurrentObjectStackCache();
	$var($AffineTransform, deviceTransform, getTransform());
	$var($AffineTransform, fontTransform, $new($AffineTransform, deviceTransform));
	fontTransform->concatenate($($nc($(getFont()))->getTransform()));
	int32_t transformType = fontTransform->getType();
	bool directToGDI = ((transformType != $AffineTransform::TYPE_GENERAL_TRANSFORM) && (((int32_t)(transformType & (uint32_t)$AffineTransform::TYPE_FLIP)) == 0));
	if (!directToGDI) {
		return 0;
	}
	$var($Font2D, font2D, $FontUtilities::getFont2D(font));
	if ($instanceOf($CompositeFont, font2D) || $instanceOf($TrueTypeFont, font2D)) {
		return 1;
	} else {
		return 0;
	}
}

bool WPathGraphics::isXP() {
	$init(WPathGraphics);
	$useLocalCurrentObjectStackCache();
	$var($String, osVersion, $System::getProperty("os.version"_s));
	if (osVersion != nullptr) {
		$var($Float, version, $Float::valueOf(osVersion));
		return ($nc(version)->floatValue() >= 5.1f);
	} else {
		return false;
	}
}

bool WPathGraphics::strNeedsTextLayout($String* str, $Font* font) {
	$var($chars, chars, $nc(str)->toCharArray());
	bool isComplex = $FontUtilities::isComplexText(chars, 0, chars->length);
	if (!isComplex) {
		return false;
	} else if (!WPathGraphics::useGDITextLayout) {
		return true;
	} else {
		bool var$2 = WPathGraphics::preferGDITextLayout;
		if (!var$2) {
			bool var$3 = isXP();
			var$2 = (var$3 && $FontUtilities::textLayoutIsCompatible(font));
		}
		if (var$2) {
			return false;
		} else {
			return true;
		}
	}
}

int32_t WPathGraphics::getAngle($Point2D$Double* pt) {
	double angle = $Math::toDegrees($Math::atan2($nc(pt)->y, pt->x));
	if (angle < 0.0) {
		angle += 360.0;
	}
	if (angle != 0.0) {
		angle = 360.0 - angle;
	}
	return (int32_t)$Math::round(angle * 10.0);
}

float WPathGraphics::getAwScale(double scaleFactorX, double scaleFactorY) {
	float awScale = (float)(scaleFactorX / scaleFactorY);
	if (awScale > 0.999f && awScale < 1.001f) {
		awScale = 1.0f;
	}
	return awScale;
}

void WPathGraphics::drawString($String* str, float x, float y, $Font* font, $FontRenderContext* frc, float targetW) {
	$useLocalCurrentObjectStackCache();
	if ($nc(str)->length() == 0) {
		return;
	}
	$init($WPrinterJob);
	if ($WPrinterJob::shapeTextProp) {
		$PathGraphics::drawString(str, x, y, font, frc, targetW);
		return;
	}
	bool layoutNeeded = strNeedsTextLayout(str, font);
	if (($nc(font)->hasLayoutAttributes() || layoutNeeded) && !this->printingGlyphVector) {
		$var($TextLayout, layout, $new($TextLayout, str, font, frc));
		layout->draw(this, x, y);
		return;
	} else if (layoutNeeded) {
		$PathGraphics::drawString(str, x, y, font, frc, targetW);
		return;
	}
	$var($AffineTransform, deviceTransform, getTransform());
	$var($AffineTransform, fontTransform, $new($AffineTransform, deviceTransform));
	fontTransform->concatenate($($nc(font)->getTransform()));
	int32_t transformType = fontTransform->getType();
	bool directToGDI = ((transformType != $AffineTransform::TYPE_GENERAL_TRANSFORM) && (((int32_t)(transformType & (uint32_t)$AffineTransform::TYPE_FLIP)) == 0));
	$var($WPrinterJob, wPrinterJob, $cast($WPrinterJob, getPrinterJob()));
	try {
		$nc(wPrinterJob)->setTextColor($cast($Color, $(getPaint())));
	} catch ($ClassCastException& e) {
		directToGDI = false;
	}
	if (!directToGDI) {
		$PathGraphics::drawString(str, x, y, font, frc, targetW);
		return;
	}
	$var($Point2D$Float, userpos, $new($Point2D$Float, x, y));
	$var($Point2D$Float, devpos, $new($Point2D$Float));
	if ($nc(font)->isTransformed()) {
		$var($AffineTransform, fontTx, font->getTransform());
		float translateX = (float)($nc(fontTx)->getTranslateX());
		float translateY = (float)(fontTx->getTranslateY());
		if ($Math::abs(translateX) < 1.0E-5) {
			translateX = 0.0f;
		}
		if ($Math::abs(translateY) < 1.0E-5) {
			translateY = 0.0f;
		}
		userpos->x += translateX;
		userpos->y += translateY;
	}
	$nc(deviceTransform)->transform(userpos, devpos);
	if (getClip() != nullptr) {
		deviceClip($($nc($(getClip()))->getPathIterator(deviceTransform)));
	}
	float fontSize = $nc(font)->getSize2D();
	double devResX = $nc(wPrinterJob)->getXRes();
	double devResY = wPrinterJob->getYRes();
	double fontDevScaleY = $div(devResY, WPathGraphics::DEFAULT_USER_RES);
	int32_t orient = $nc($(getPageFormat()))->getOrientation();
	if (orient == $PageFormat::LANDSCAPE || orient == $PageFormat::REVERSE_LANDSCAPE) {
		double tmp = devResX;
		devResX = devResY;
		devResY = tmp;
	}
	double devScaleX = $div(devResX, WPathGraphics::DEFAULT_USER_RES);
	double devScaleY = $div(devResY, WPathGraphics::DEFAULT_USER_RES);
	fontTransform->scale(1.0 / devScaleX, 1.0 / devScaleY);
	$var($Point2D$Double, pty, $new($Point2D$Double, 0.0, 1.0));
	fontTransform->deltaTransform(pty, pty);
	double scaleFactorY = $Math::sqrt(pty->x * pty->x + pty->y * pty->y);
	float scaledFontSizeY = (float)(fontSize * scaleFactorY * fontDevScaleY);
	$var($Point2D$Double, ptx, $new($Point2D$Double, 1.0, 0.0));
	fontTransform->deltaTransform(ptx, ptx);
	double scaleFactorX = $Math::sqrt(ptx->x * ptx->x + ptx->y * ptx->y);
	float awScale = getAwScale(scaleFactorX, scaleFactorY);
	int32_t iangle = getAngle(ptx);
	$assign(ptx, $new($Point2D$Double, 1.0, 0.0));
	deviceTransform->deltaTransform(ptx, ptx);
	double advanceScaleX = $Math::sqrt(ptx->x * ptx->x + ptx->y * ptx->y);
	$assign(pty, $new($Point2D$Double, 0.0, 1.0));
	deviceTransform->deltaTransform(pty, pty);
	double advanceScaleY = $Math::sqrt(pty->x * pty->x + pty->y * pty->y);
	$var($Font2D, font2D, $FontUtilities::getFont2D(font));
	if ($instanceOf($TrueTypeFont, font2D)) {
		textOut(str, font, $cast($TrueTypeFont, font2D), frc, scaledFontSizeY, iangle, awScale, advanceScaleX, advanceScaleY, x, y, devpos->x, devpos->y, targetW);
	} else if ($instanceOf($CompositeFont, font2D)) {
		$var($CompositeFont, compFont, $cast($CompositeFont, font2D));
		float userx = x;
		float usery = y;
		float devx = devpos->x;
		float devy = devpos->y;
		$var($chars, chars, $nc(str)->toCharArray());
		int32_t len = chars->length;
		$var($ints, glyphs, $new($ints, len));
		$nc($($nc(compFont)->getMapper()))->charsToGlyphs(len, chars, glyphs);
		int32_t startChar = 0;
		int32_t endChar = 0;
		int32_t slot = 0;
		while (endChar < len) {
			startChar = endChar;
			slot = (int32_t)((uint32_t)glyphs->get(startChar) >> 24);
			while (endChar < len && (((int32_t)((uint32_t)glyphs->get(endChar) >> 24)) == slot)) {
				++endChar;
			}
			$var($String, substr, $new($String, chars, startChar, endChar - startChar));
			$var($PhysicalFont, slotFont, compFont->getSlotFont(slot));
			textOut(substr, font, slotFont, frc, scaledFontSizeY, iangle, awScale, advanceScaleX, advanceScaleY, userx, usery, devx, devy, 0.0f);
			$var($Rectangle2D, bds, font->getStringBounds(substr, frc));
			float xAdvance = (float)$nc(bds)->getWidth();
			userx += xAdvance;
			userpos->x += xAdvance;
			deviceTransform->transform(userpos, devpos);
			devx = devpos->x;
			devy = devpos->y;
		}
	} else {
		$PathGraphics::drawString(str, x, y, font, frc, targetW);
	}
}

bool WPathGraphics::printGlyphVector($GlyphVector* gv, float x, float y) {
	$useLocalCurrentObjectStackCache();
	if (((int32_t)($nc(gv)->getLayoutFlags() & (uint32_t)$GlyphVector::FLAG_HAS_TRANSFORMS)) != 0) {
		return false;
	}
	if ($nc(gv)->getNumGlyphs() == 0) {
		return true;
	}
	$var($AffineTransform, deviceTransform, getTransform());
	$var($AffineTransform, fontTransform, $new($AffineTransform, deviceTransform));
	$var($Font, font, $nc(gv)->getFont());
	fontTransform->concatenate($($nc(font)->getTransform()));
	int32_t transformType = fontTransform->getType();
	bool directToGDI = ((transformType != $AffineTransform::TYPE_GENERAL_TRANSFORM) && (((int32_t)(transformType & (uint32_t)$AffineTransform::TYPE_FLIP)) == 0));
	$var($WPrinterJob, wPrinterJob, $cast($WPrinterJob, getPrinterJob()));
	try {
		$nc(wPrinterJob)->setTextColor($cast($Color, $(getPaint())));
	} catch ($ClassCastException& e) {
		directToGDI = false;
	}
	$init($WPrinterJob);
	if ($WPrinterJob::shapeTextProp || !directToGDI) {
		return false;
	}
	$var($Point2D$Float, userpos, $new($Point2D$Float, x, y));
	$var($Point2D, g0pos, gv->getGlyphPosition(0));
	userpos->x += (float)$nc(g0pos)->getX();
	userpos->y += (float)g0pos->getY();
	$var($Point2D$Float, devpos, $new($Point2D$Float));
	if ($nc(font)->isTransformed()) {
		$var($AffineTransform, fontTx, font->getTransform());
		float translateX = (float)($nc(fontTx)->getTranslateX());
		float translateY = (float)(fontTx->getTranslateY());
		if ($Math::abs(translateX) < 1.0E-5) {
			translateX = 0.0f;
		}
		if ($Math::abs(translateY) < 1.0E-5) {
			translateY = 0.0f;
		}
		userpos->x += translateX;
		userpos->y += translateY;
	}
	$nc(deviceTransform)->transform(userpos, devpos);
	if (getClip() != nullptr) {
		deviceClip($($nc($(getClip()))->getPathIterator(deviceTransform)));
	}
	float fontSize = $nc(font)->getSize2D();
	double devResX = $nc(wPrinterJob)->getXRes();
	double devResY = wPrinterJob->getYRes();
	double fontDevScaleY = $div(devResY, WPathGraphics::DEFAULT_USER_RES);
	int32_t orient = $nc($(getPageFormat()))->getOrientation();
	if (orient == $PageFormat::LANDSCAPE || orient == $PageFormat::REVERSE_LANDSCAPE) {
		double tmp = devResX;
		devResX = devResY;
		devResY = tmp;
	}
	double devScaleX = $div(devResX, WPathGraphics::DEFAULT_USER_RES);
	double devScaleY = $div(devResY, WPathGraphics::DEFAULT_USER_RES);
	fontTransform->scale(1.0 / devScaleX, 1.0 / devScaleY);
	$var($Point2D$Double, pty, $new($Point2D$Double, 0.0, 1.0));
	fontTransform->deltaTransform(pty, pty);
	double scaleFactorY = $Math::sqrt(pty->x * pty->x + pty->y * pty->y);
	float scaledFontSizeY = (float)(fontSize * scaleFactorY * fontDevScaleY);
	$var($Point2D$Double, ptx, $new($Point2D$Double, 1.0, 0.0));
	fontTransform->deltaTransform(ptx, ptx);
	double scaleFactorX = $Math::sqrt(ptx->x * ptx->x + ptx->y * ptx->y);
	float awScale = getAwScale(scaleFactorX, scaleFactorY);
	int32_t iangle = getAngle(ptx);
	$assign(ptx, $new($Point2D$Double, 1.0, 0.0));
	deviceTransform->deltaTransform(ptx, ptx);
	double advanceScaleX = $Math::sqrt(ptx->x * ptx->x + ptx->y * ptx->y);
	$assign(pty, $new($Point2D$Double, 0.0, 1.0));
	deviceTransform->deltaTransform(pty, pty);
	double advanceScaleY = $Math::sqrt(pty->x * pty->x + pty->y * pty->y);
	int32_t numGlyphs = gv->getNumGlyphs();
	$var($ints, glyphCodes, gv->getGlyphCodes(0, numGlyphs, nullptr));
	$var($floats, glyphPos, gv->getGlyphPositions(0, numGlyphs, nullptr));
	int32_t invisibleGlyphCnt = 0;
	for (int32_t gc = 0; gc < numGlyphs; ++gc) {
		if (((int32_t)($nc(glyphCodes)->get(gc) & (uint32_t)0x0000FFFF)) >= $CharToGlyphMapper::INVISIBLE_GLYPHS) {
			++invisibleGlyphCnt;
		}
	}
	if (invisibleGlyphCnt > 0) {
		int32_t visibleGlyphCnt = numGlyphs - invisibleGlyphCnt;
		$var($ints, visibleGlyphCodes, $new($ints, visibleGlyphCnt));
		$var($floats, visiblePositions, $new($floats, visibleGlyphCnt * 2));
		int32_t index = 0;
		for (int32_t i = 0; i < numGlyphs; ++i) {
			if (((int32_t)($nc(glyphCodes)->get(i) & (uint32_t)0x0000FFFF)) < $CharToGlyphMapper::INVISIBLE_GLYPHS) {
				visibleGlyphCodes->set(index, glyphCodes->get(i));
				visiblePositions->set(index * 2, $nc(glyphPos)->get(i * 2));
				visiblePositions->set(index * 2 + 1, glyphPos->get(i * 2 + 1));
				++index;
			}
		}
		numGlyphs = visibleGlyphCnt;
		$assign(glyphCodes, visibleGlyphCodes);
		$assign(glyphPos, visiblePositions);
	}
	$var($AffineTransform, advanceTransform, $AffineTransform::getScaleInstance(advanceScaleX, advanceScaleY));
	$var($floats, glyphAdvPos, $new($floats, $nc(glyphPos)->length));
	$nc(advanceTransform)->transform(glyphPos, 0, glyphAdvPos, 0, glyphPos->length / 2);
	$var($Font2D, font2D, $FontUtilities::getFont2D(font));
	if ($instanceOf($TrueTypeFont, font2D)) {
		$var($String, family, $nc(font2D)->getFamilyName(nullptr));
		int32_t var$0 = font->getStyle();
		int32_t style = var$0 | font2D->getStyle();
		if (!wPrinterJob->setFont(family, scaledFontSizeY, style, iangle, awScale)) {
			return false;
		}
		wPrinterJob->glyphsOut(glyphCodes, devpos->x, devpos->y, glyphAdvPos);
	} else if ($instanceOf($CompositeFont, font2D)) {
		$var($CompositeFont, compFont, $cast($CompositeFont, font2D));
		float userx = x;
		float usery = y;
		float devx = devpos->x;
		float devy = devpos->y;
		int32_t start = 0;
		int32_t end = 0;
		int32_t slot = 0;
		while (end < numGlyphs) {
			start = end;
			slot = (int32_t)((uint32_t)$nc(glyphCodes)->get(start) >> 24);
			while (end < numGlyphs && (((int32_t)((uint32_t)glyphCodes->get(end) >> 24)) == slot)) {
				++end;
			}
			$var($PhysicalFont, slotFont, $nc(compFont)->getSlotFont(slot));
			if (!($instanceOf($TrueTypeFont, slotFont))) {
				return false;
			}
			$var($String, family, $nc(slotFont)->getFamilyName(nullptr));
			int32_t var$1 = font->getStyle();
			int32_t style = var$1 | slotFont->getStyle();
			if (!wPrinterJob->setFont(family, scaledFontSizeY, style, iangle, awScale)) {
				return false;
			}
			$var($ints, glyphs, $Arrays::copyOfRange(glyphCodes, start, end));
			$var($floats, posns, $Arrays::copyOfRange(glyphAdvPos, start * 2, end * 2));
			if (start != 0) {
				$var($Point2D$Float, p, $new($Point2D$Float, x + glyphPos->get(start * 2), y + glyphPos->get(start * 2 + 1)));
				deviceTransform->transform(p, p);
				devx = p->x;
				devy = p->y;
			}
			wPrinterJob->glyphsOut(glyphs, devx, devy, posns);
		}
	} else {
		return false;
	}
	return true;
}

void WPathGraphics::textOut($String* str$renamed, $Font* font, $PhysicalFont* font2D, $FontRenderContext* frc, float deviceSize, int32_t rotation, float awScale, double scaleFactorX, double scaleFactorY, float userx, float usery, float devx, float devy, float targetW) {
	$useLocalCurrentObjectStackCache();
	$var($String, str, str$renamed);
	$var($String, family, $nc(font2D)->getFamilyName(nullptr));
	int32_t var$0 = $nc(font)->getStyle();
	int32_t style = var$0 | font2D->getStyle();
	$var($WPrinterJob, wPrinterJob, $cast($WPrinterJob, getPrinterJob()));
	bool setFont = $nc(wPrinterJob)->setFont(family, deviceSize, style, rotation, awScale);
	if (!setFont) {
		$PathGraphics::drawString(str, userx, usery, font, frc, targetW);
		return;
	}
	$var($floats, glyphPos, nullptr);
	if (!okGDIMetrics(str, font, frc, scaleFactorX)) {
		$assign(str, wPrinterJob->removeControlChars(str));
		$var($chars, chars, $nc(str)->toCharArray());
		int32_t len = chars->length;
		$var($GlyphVector, gv, nullptr);
		if (!$FontUtilities::isComplexText(chars, 0, len)) {
			$assign(gv, font->createGlyphVector(frc, str));
		}
		if (gv == nullptr) {
			$PathGraphics::drawString(str, userx, usery, font, frc, targetW);
			return;
		}
		$assign(glyphPos, $nc(gv)->getGlyphPositions(0, len, nullptr));
		$var($Point2D, gvAdvPt, gv->getGlyphPosition(gv->getNumGlyphs()));
		$var($AffineTransform, advanceTransform, $AffineTransform::getScaleInstance(scaleFactorX, scaleFactorY));
		$var($floats, glyphAdvPos, $new($floats, $nc(glyphPos)->length));
		$nc(advanceTransform)->transform(glyphPos, 0, glyphAdvPos, 0, glyphPos->length / 2);
		$assign(glyphPos, glyphAdvPos);
	}
	wPrinterJob->textOut(str, devx, devy, glyphPos);
}

bool WPathGraphics::okGDIMetrics($String* str, $Font* font, $FontRenderContext* frc, double scaleX) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bds, $nc(font)->getStringBounds(str, frc));
	double jdkAdvance = $nc(bds)->getWidth();
	jdkAdvance = (double)$Math::round(jdkAdvance * scaleX);
	int32_t gdiAdvance = $nc(($cast($WPrinterJob, $(getPrinterJob()))))->getGDIAdvance(str);
	if (jdkAdvance > 0 && gdiAdvance > 0) {
		double diff = $Math::abs(gdiAdvance - jdkAdvance);
		double ratio = gdiAdvance / jdkAdvance;
		if (ratio < 1) {
			ratio = 1 / ratio;
		}
		return diff <= 1 || ratio < 1.01;
	}
	return true;
}

bool WPathGraphics::drawImageToPlatform($Image* image, $AffineTransform* xform$renamed, $Color* bgcolor$renamed, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, bool handlingTransparency) {
	$useLocalCurrentObjectStackCache();
	$var($Color, bgcolor, bgcolor$renamed);
	$var($AffineTransform, xform, xform$renamed);
	$var($BufferedImage, img, getBufferedImage(image));
	if (img == nullptr) {
		return true;
	}
	$var($WPrinterJob, wPrinterJob, $cast($WPrinterJob, getPrinterJob()));
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
	double devResX = $nc(wPrinterJob)->getXRes();
	double devResY = wPrinterJob->getYRes();
	double devScaleX = $div(devResX, WPathGraphics::DEFAULT_USER_RES);
	double devScaleY = $div(devResY, WPathGraphics::DEFAULT_USER_RES);
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
				if (minDpi < WPathGraphics::DEFAULT_USER_RES) {
					minDpi = WPathGraphics::DEFAULT_USER_RES;
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
				wPrinterJob->saveState(var$11, $(getClip()), region, scaleFactor, scaleFactor);
				return true;
			} else {
				int32_t dibType = $BufferedImage::TYPE_3BYTE_BGR;
				$var($IndexColorModel, icm, nullptr);
				$var($ColorModel, cm, $nc(img)->getColorModel());
				int32_t imgType = img->getType();
				if ($instanceOf($IndexColorModel, cm) && $nc(cm)->getPixelSize() <= 8 && (imgType == $BufferedImage::TYPE_BYTE_BINARY || imgType == $BufferedImage::TYPE_BYTE_INDEXED)) {
					$assign(icm, $cast($IndexColorModel, cm));
					dibType = imgType;
					if (imgType == $BufferedImage::TYPE_BYTE_BINARY && $nc(cm)->getPixelSize() == 2) {
						$var($ints, rgbs, $new($ints, 16));
						$nc(icm)->getRGBs(rgbs);
						bool transparent = icm->getTransparency() != $Transparency::OPAQUE;
						int32_t transpixel = icm->getTransparentPixel();
						$assign(icm, $new($IndexColorModel, 4, 16, rgbs, 0, transparent, transpixel, $DataBuffer::TYPE_BYTE));
					}
				}
				int32_t iw = $cast(int32_t, rotBounds->getWidth());
				int32_t ih = $cast(int32_t, rotBounds->getHeight());
				$var($BufferedImage, deepImage, nullptr);
				bool newImage = true;
				if (newImage) {
					if (icm == nullptr) {
						$assign(deepImage, $new($BufferedImage, iw, ih, dibType));
					} else {
						$assign(deepImage, $new($BufferedImage, iw, ih, dibType, icm));
					}
					$var($Graphics2D, imageGraphics, $nc(deepImage)->createGraphics());
					int32_t var$12 = deepImage->getWidth();
					$nc(imageGraphics)->clipRect(0, 0, var$12, deepImage->getHeight());
					double var$13 = -rotBounds->getX();
					imageGraphics->translate(var$13, -rotBounds->getY());
					imageGraphics->transform(rotTransform);
					if (bgcolor == nullptr) {
						$init($Color);
						$assign(bgcolor, $Color::white);
					}
					imageGraphics->drawImage(img, srcX, srcY, srcX + srcWidth, srcY + srcHeight, srcX, srcY, srcX + srcWidth, srcY + srcHeight, bgcolor, nullptr);
					imageGraphics->dispose();
				} else {
					$assign(deepImage, img);
				}
				float var$14 = (float)(rotBounds->getX() * scaleX);
				float var$15 = (float)(rotBounds->getY() * scaleY);
				float var$16 = (float)(rotBounds->getWidth() * scaleX);
				$var($Rectangle2D$Float, scaledBounds, $new($Rectangle2D$Float, var$14, var$15, var$16, (float)(rotBounds->getHeight() * scaleY)));
				$var($WritableRaster, raster, $nc(deepImage)->getRaster());
				$var($bytes, data, nullptr);
				if ($instanceOf($ByteComponentRaster, raster)) {
					$assign(data, $nc(($cast($ByteComponentRaster, raster)))->getDataStorage());
				} else if ($instanceOf($BytePackedRaster, raster)) {
					$assign(data, $nc(($cast($BytePackedRaster, raster)))->getDataStorage());
				} else {
					return false;
				}
				int32_t bitsPerPixel = 24;
				$var($SampleModel, sm, deepImage->getSampleModel());
				if ($instanceOf($ComponentSampleModel, sm)) {
					$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, sm));
					bitsPerPixel = $nc(csm)->getPixelStride() * 8;
				} else if ($instanceOf($MultiPixelPackedSampleModel, sm)) {
					$var($MultiPixelPackedSampleModel, mppsm, $cast($MultiPixelPackedSampleModel, sm));
					bitsPerPixel = $nc(mppsm)->getPixelBitStride();
				} else if (icm != nullptr) {
					int32_t diw = deepImage->getWidth();
					int32_t dih = deepImage->getHeight();
					if (diw > 0 && dih > 0) {
						bitsPerPixel = $div($div($nc(data)->length * 8, diw), dih);
					}
				}
				$var($Shape, holdClip, getClip());
				clip($($nc(xform)->createTransformedShape(srcRect)));
				deviceClip($($nc($(getClip()))->getPathIterator($(getTransform()))));
				$var($bytes, var$17, data);
				float var$18 = scaledBounds->x;
				float var$19 = scaledBounds->y;
				float var$20 = (float)$Math::rint(scaledBounds->width + 0.5);
				float var$21 = (float)$Math::rint(scaledBounds->height + 0.5);
				float var$22 = (float)deepImage->getWidth();
				wPrinterJob->drawDIBImage(var$17, var$18, var$19, var$20, var$21, 0.0f, 0.0f, var$22, (float)deepImage->getHeight(), bitsPerPixel, icm);
				setClip(holdClip);
			}
		}
	}
	return true;
}

void WPathGraphics::redrawRegion($Rectangle2D* region, double scaleX, double scaleY, $Shape* savedClip, $AffineTransform* savedTransform) {
	$useLocalCurrentObjectStackCache();
	$var($WPrinterJob, wPrinterJob, $cast($WPrinterJob, getPrinterJob()));
	$var($Printable, painter, getPrintable());
	$var($PageFormat, pageFormat, getPageFormat());
	int32_t pageIndex = getPageIndex();
	int32_t var$0 = $cast(int32_t, $nc(region)->getWidth());
	$var($BufferedImage, deepImage, $new($BufferedImage, var$0, $cast(int32_t, region->getHeight()), $BufferedImage::TYPE_3BYTE_BGR));
	$var($Graphics2D, g, deepImage->createGraphics());
	$var($ProxyGraphics2D, proxy, $new($ProxyGraphics2D, g, wPrinterJob));
	$init($Color);
	proxy->setColor($Color::white);
	int32_t var$1 = deepImage->getWidth();
	proxy->fillRect(0, 0, var$1, deepImage->getHeight());
	int32_t var$2 = deepImage->getWidth();
	proxy->clipRect(0, 0, var$2, deepImage->getHeight());
	double var$3 = -$nc(region)->getX();
	proxy->translate(var$3, -region->getY());
	float sourceResX = (float)($nc(wPrinterJob)->getXRes() / scaleX);
	float sourceResY = (float)(wPrinterJob->getYRes() / scaleY);
	proxy->scale($div(sourceResX, WPathGraphics::DEFAULT_USER_RES), $div(sourceResY, WPathGraphics::DEFAULT_USER_RES));
	double var$5 = -wPrinterJob->getPhysicalPrintableX($($nc(pageFormat)->getPaper()));
	double var$4 = var$5 / wPrinterJob->getXRes() * WPathGraphics::DEFAULT_USER_RES;
	double var$6 = -wPrinterJob->getPhysicalPrintableY($($nc(pageFormat)->getPaper()));
	proxy->translate(var$4, var$6 / wPrinterJob->getYRes() * WPathGraphics::DEFAULT_USER_RES);
	proxy->transform($$new($AffineTransform, $($nc($(getPageFormat()))->getMatrix())));
	proxy->setPaint($Color::black);
	$nc(painter)->print(proxy, pageFormat, pageIndex);
	$nc(g)->dispose();
	if (savedClip != nullptr) {
		deviceClip($(savedClip->getPathIterator(savedTransform)));
	}
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
	wPrinterJob->drawImage3ByteBGR(var$10, var$11, var$12, var$13, var$14, 0.0f, 0.0f, var$15, (float)deepImage->getHeight());
}

void WPathGraphics::deviceFill($PathIterator* pathIter, $Color* color) {
	$var($WPrinterJob, wPrinterJob, $cast($WPrinterJob, getPrinterJob()));
	convertToWPath(pathIter);
	$nc(wPrinterJob)->selectSolidBrush(color);
	wPrinterJob->fillPath();
}

void WPathGraphics::deviceClip($PathIterator* pathIter) {
	$var($WPrinterJob, wPrinterJob, $cast($WPrinterJob, getPrinterJob()));
	convertToWPath(pathIter);
	$nc(wPrinterJob)->selectClipPath();
}

void WPathGraphics::deviceFrameRect(int32_t x, int32_t y, int32_t width, int32_t height, $Color* color) {
	$useLocalCurrentObjectStackCache();
	$var($AffineTransform, deviceTransform, getTransform());
	int32_t transformType = $nc(deviceTransform)->getType();
	bool usePath = (((int32_t)(transformType & (uint32_t)($AffineTransform::TYPE_GENERAL_ROTATION | $AffineTransform::TYPE_GENERAL_TRANSFORM))) != 0);
	if (usePath) {
		draw($$new($Rectangle2D$Float, (float)x, (float)y, (float)width, (float)height));
		return;
	}
	$var($Stroke, stroke, getStroke());
	if ($instanceOf($BasicStroke, stroke)) {
		$var($BasicStroke, lineStroke, $cast($BasicStroke, stroke));
		int32_t endCap = $nc(lineStroke)->getEndCap();
		int32_t lineJoin = lineStroke->getLineJoin();
		if ((endCap == $BasicStroke::CAP_SQUARE) && (lineJoin == $BasicStroke::JOIN_MITER) && (lineStroke->getMiterLimit() == 10.0f)) {
			float lineWidth = lineStroke->getLineWidth();
			$var($Point2D$Float, penSize, $new($Point2D$Float, lineWidth, lineWidth));
			deviceTransform->deltaTransform(penSize, penSize);
			float var$0 = $Math::abs(penSize->x);
			float deviceLineWidth = $Math::min(var$0, $Math::abs(penSize->y));
			$var($Point2D$Float, ul_pos, $new($Point2D$Float, (float)x, (float)y));
			deviceTransform->transform(ul_pos, ul_pos);
			$var($Point2D$Float, lr_pos, $new($Point2D$Float, (float)(x + width), (float)(y + height)));
			deviceTransform->transform(lr_pos, lr_pos);
			double var$1 = lr_pos->getX();
			float w = (float)(var$1 - ul_pos->getX());
			double var$2 = lr_pos->getY();
			float h = (float)(var$2 - ul_pos->getY());
			$var($WPrinterJob, wPrinterJob, $cast($WPrinterJob, getPrinterJob()));
			if ($nc(wPrinterJob)->selectStylePen(endCap, lineJoin, deviceLineWidth, color) == true) {
				float var$3 = (float)ul_pos->getX();
				wPrinterJob->frameRect(var$3, (float)ul_pos->getY(), w, h);
			} else {
				double var$4 = wPrinterJob->getXRes();
				double lowerRes = $Math::min(var$4, wPrinterJob->getYRes());
				if ((deviceLineWidth / lowerRes) < WPathGraphics::MAX_THINLINE_INCHES) {
					wPrinterJob->selectPen(deviceLineWidth, color);
					float var$5 = (float)ul_pos->getX();
					wPrinterJob->frameRect(var$5, (float)ul_pos->getY(), w, h);
				} else {
					draw($$new($Rectangle2D$Float, (float)x, (float)y, (float)width, (float)height));
				}
			}
		} else {
			draw($$new($Rectangle2D$Float, (float)x, (float)y, (float)width, (float)height));
		}
	}
}

void WPathGraphics::deviceFillRect(int32_t x, int32_t y, int32_t width, int32_t height, $Color* color) {
	$useLocalCurrentObjectStackCache();
	$var($AffineTransform, deviceTransform, getTransform());
	int32_t transformType = $nc(deviceTransform)->getType();
	bool usePath = (((int32_t)(transformType & (uint32_t)($AffineTransform::TYPE_GENERAL_ROTATION | $AffineTransform::TYPE_GENERAL_TRANSFORM))) != 0);
	if (usePath) {
		fill($$new($Rectangle2D$Float, (float)x, (float)y, (float)width, (float)height));
		return;
	}
	$var($Point2D$Float, tlc_pos, $new($Point2D$Float, (float)x, (float)y));
	deviceTransform->transform(tlc_pos, tlc_pos);
	$var($Point2D$Float, brc_pos, $new($Point2D$Float, (float)(x + width), (float)(y + height)));
	deviceTransform->transform(brc_pos, brc_pos);
	double var$0 = brc_pos->getX();
	float deviceWidth = (float)(var$0 - tlc_pos->getX());
	double var$1 = brc_pos->getY();
	float deviceHeight = (float)(var$1 - tlc_pos->getY());
	$var($WPrinterJob, wPrinterJob, $cast($WPrinterJob, getPrinterJob()));
	float var$2 = (float)tlc_pos->getX();
	$nc(wPrinterJob)->fillRect(var$2, (float)tlc_pos->getY(), deviceWidth, deviceHeight, color);
}

void WPathGraphics::deviceDrawLine(int32_t xBegin, int32_t yBegin, int32_t xEnd, int32_t yEnd, $Color* color) {
	$useLocalCurrentObjectStackCache();
	$var($Stroke, stroke, getStroke());
	if ($instanceOf($BasicStroke, stroke)) {
		$var($BasicStroke, lineStroke, $cast($BasicStroke, stroke));
		if ($nc(lineStroke)->getDashArray() != nullptr) {
			draw($$new($Line2D$Float, (float)xBegin, (float)yBegin, (float)xEnd, (float)yEnd));
			return;
		}
		float lineWidth = $nc(lineStroke)->getLineWidth();
		$var($Point2D$Float, penSize, $new($Point2D$Float, lineWidth, lineWidth));
		$var($AffineTransform, deviceTransform, getTransform());
		$nc(deviceTransform)->deltaTransform(penSize, penSize);
		float var$0 = $Math::abs(penSize->x);
		float deviceLineWidth = $Math::min(var$0, $Math::abs(penSize->y));
		$var($Point2D$Float, begin_pos, $new($Point2D$Float, (float)xBegin, (float)yBegin));
		deviceTransform->transform(begin_pos, begin_pos);
		$var($Point2D$Float, end_pos, $new($Point2D$Float, (float)xEnd, (float)yEnd));
		deviceTransform->transform(end_pos, end_pos);
		int32_t endCap = lineStroke->getEndCap();
		int32_t lineJoin = lineStroke->getLineJoin();
		double var$2 = end_pos->getX();
		bool var$1 = (var$2 == begin_pos->getX());
		if (var$1) {
			double var$3 = end_pos->getY();
			var$1 = (var$3 == begin_pos->getY());
		}
		if (var$1) {
			endCap = $BasicStroke::CAP_ROUND;
		}
		$var($WPrinterJob, wPrinterJob, $cast($WPrinterJob, getPrinterJob()));
		if ($nc(wPrinterJob)->selectStylePen(endCap, lineJoin, deviceLineWidth, color)) {
			float var$4 = (float)begin_pos->getX();
			wPrinterJob->moveTo(var$4, (float)begin_pos->getY());
			float var$5 = (float)end_pos->getX();
			wPrinterJob->lineTo(var$5, (float)end_pos->getY());
		} else {
			double var$6 = wPrinterJob->getXRes();
			double lowerRes = $Math::min(var$6, wPrinterJob->getYRes());
			if ((endCap == $BasicStroke::CAP_ROUND) || (((xBegin == xEnd) || (yBegin == yEnd)) && (deviceLineWidth / lowerRes < WPathGraphics::MAX_THINLINE_INCHES))) {
				wPrinterJob->selectPen(deviceLineWidth, color);
				float var$7 = (float)begin_pos->getX();
				wPrinterJob->moveTo(var$7, (float)begin_pos->getY());
				float var$8 = (float)end_pos->getX();
				wPrinterJob->lineTo(var$8, (float)end_pos->getY());
			} else {
				draw($$new($Line2D$Float, (float)xBegin, (float)yBegin, (float)xEnd, (float)yEnd));
			}
		}
	}
}

void WPathGraphics::precisionScaleUp($floats* values, int32_t size) {
	for (int32_t i = 0; i < size; ++i) {
		$nc(values)->set(i, values->get(i) * WPathGraphics::precisionScale);
	}
}

void WPathGraphics::convertToWPath($PathIterator* pathIter) {
	$useLocalCurrentObjectStackCache();
	$var($floats, segment, $new($floats, 6));
	int32_t segmentType = 0;
	$var($WPrinterJob, wPrinterJob, $cast($WPrinterJob, getPrinterJob()));
	int32_t polyFillRule = 0;
	if ($nc(pathIter)->getWindingRule() == $PathIterator::WIND_EVEN_ODD) {
		polyFillRule = $WPrinterJob::POLYFILL_ALTERNATE;
	} else {
		polyFillRule = $WPrinterJob::POLYFILL_WINDING;
	}
	$nc(wPrinterJob)->setPolyFillMode(polyFillRule);
	wPrinterJob->scaleTransform($div(1.0f, WPathGraphics::precisionScale));
	wPrinterJob->beginPath();
	while ($nc(pathIter)->isDone() == false) {
		segmentType = pathIter->currentSegment(segment);
		{
			int32_t lastX = 0;
			int32_t lastY = 0;
			float c1x = 0;
			float c1y = 0;
			float c2x = 0;
			float c2y = 0;
			switch (segmentType) {
			case $PathIterator::SEG_MOVETO:
				{
					precisionScaleUp(segment, 2);
					wPrinterJob->moveTo(segment->get(0), segment->get(1));
					break;
				}
			case $PathIterator::SEG_LINETO:
				{
					precisionScaleUp(segment, 2);
					wPrinterJob->lineTo(segment->get(0), segment->get(1));
					break;
				}
			case $PathIterator::SEG_QUADTO:
				{
					precisionScaleUp(segment, 4);
					lastX = wPrinterJob->getPenX();
					lastY = wPrinterJob->getPenY();
					c1x = lastX + (segment->get(0) - lastX) * 2 / 3;
					c1y = lastY + (segment->get(1) - lastY) * 2 / 3;
					c2x = segment->get(2) - (segment->get(2) - segment->get(0)) * 2 / 3;
					c2y = segment->get(3) - (segment->get(3) - segment->get(1)) * 2 / 3;
					wPrinterJob->polyBezierTo(c1x, c1y, c2x, c2y, segment->get(2), segment->get(3));
					break;
				}
			case $PathIterator::SEG_CUBICTO:
				{
					precisionScaleUp(segment, 6);
					wPrinterJob->polyBezierTo(segment->get(0), segment->get(1), segment->get(2), segment->get(3), segment->get(4), segment->get(5));
					break;
				}
			case $PathIterator::SEG_CLOSE:
				{
					wPrinterJob->closeFigure();
					break;
				}
			}
		}
		pathIter->next();
	}
	wPrinterJob->endPath();
	wPrinterJob->restoreTransform();
}

void clinit$WPathGraphics($Class* class$) {
	$useLocalCurrentObjectStackCache();
	WPathGraphics::MIN_DEVICE_LINEWIDTH = 1.2f;
	WPathGraphics::MAX_THINLINE_INCHES = 0.014f;
	WPathGraphics::precisionScale = 1000.0f;
	$beforeCallerSensitive();
	WPathGraphics::useGDITextLayout = true;
	WPathGraphics::preferGDITextLayout = false;
	{
		$var($String, textLayoutStr, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.print.enableGDITextLayout"_s)))));
		if (textLayoutStr != nullptr) {
			WPathGraphics::useGDITextLayout = $Boolean::getBoolean(textLayoutStr);
			if (!WPathGraphics::useGDITextLayout) {
				if (textLayoutStr->equalsIgnoreCase("prefer"_s)) {
					WPathGraphics::useGDITextLayout = true;
					WPathGraphics::preferGDITextLayout = true;
				}
			}
		}
	}
}

WPathGraphics::WPathGraphics() {
}

$Class* WPathGraphics::load$($String* name, bool initialize) {
	$loadClass(WPathGraphics, name, initialize, &_WPathGraphics_ClassInfo_, clinit$WPathGraphics, allocate$WPathGraphics);
	return class$;
}

$Class* WPathGraphics::class$ = nullptr;

		} // windows
	} // awt
} // sun