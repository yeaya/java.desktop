#include <java/awt/font/TextLine.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphJustificationInfo.h>
#include <java/awt/font/GraphicAttribute.h>
#include <java/awt/font/LineMetrics.h>
#include <java/awt/font/StyledParagraph.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/font/TextJustifier.h>
#include <java/awt/font/TextLine$1.h>
#include <java/awt/font/TextLine$2.h>
#include <java/awt/font/TextLine$3.h>
#include <java/awt/font/TextLine$4.h>
#include <java/awt/font/TextLine$Function.h>
#include <java/awt/font/TextLine$TextLineMetrics.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/Point2D$Double.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/Bidi.h>
#include <java/text/CharacterIterator.h>
#include <java/util/Map.h>
#include <sun/font/AttributeValues.h>
#include <sun/font/BidiUtils.h>
#include <sun/font/CodePointIterator.h>
#include <sun/font/CoreMetrics.h>
#include <sun/font/Decoration.h>
#include <sun/font/ExtendedTextLabel.h>
#include <sun/font/FontResolver.h>
#include <sun/font/GraphicComponent.h>
#include <sun/font/LayoutPathImpl$EmptyPath.h>
#include <sun/font/LayoutPathImpl$SegmentPath.h>
#include <sun/font/LayoutPathImpl$SegmentPathBuilder.h>
#include <sun/font/LayoutPathImpl.h>
#include <sun/font/TextLabelFactory.h>
#include <sun/font/TextLineComponent.h>
#include <jcpp.h>

#undef BLACK
#undef CHAR_REPLACEMENT
#undef DIRECTION_DEFAULT_LEFT_TO_RIGHT
#undef DONE
#undef FAMILY
#undef FONT
#undef MARGIN
#undef MAX_VALUE
#undef MIN_VALUE
#undef TYPE_INT_ARGB
#undef TYPE_TRANSLATION
#undef WHITE
#undef WIND_NON_ZERO

using $GlyphJustificationInfoArray = $Array<::java::awt::font::GlyphJustificationInfo>;
using $TextLineComponentArray = $Array<::sun::font::TextLineComponent>;
using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphJustificationInfo = ::java::awt::font::GlyphJustificationInfo;
using $GraphicAttribute = ::java::awt::font::GraphicAttribute;
using $LayoutPath = ::java::awt::font::LayoutPath;
using $LineMetrics = ::java::awt::font::LineMetrics;
using $StyledParagraph = ::java::awt::font::StyledParagraph;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $TextJustifier = ::java::awt::font::TextJustifier;
using $TextLine$1 = ::java::awt::font::TextLine$1;
using $TextLine$2 = ::java::awt::font::TextLine$2;
using $TextLine$3 = ::java::awt::font::TextLine$3;
using $TextLine$4 = ::java::awt::font::TextLine$4;
using $TextLine$Function = ::java::awt::font::TextLine$Function;
using $TextLine$TextLineMetrics = ::java::awt::font::TextLine$TextLineMetrics;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $Bidi = ::java::text::Bidi;
using $CharacterIterator = ::java::text::CharacterIterator;
using $Map = ::java::util::Map;
using $AttributeValues = ::sun::font::AttributeValues;
using $BidiUtils = ::sun::font::BidiUtils;
using $CodePointIterator = ::sun::font::CodePointIterator;
using $CoreMetrics = ::sun::font::CoreMetrics;
using $Decoration = ::sun::font::Decoration;
using $ExtendedTextLabel = ::sun::font::ExtendedTextLabel;
using $FontResolver = ::sun::font::FontResolver;
using $GraphicComponent = ::sun::font::GraphicComponent;
using $LayoutPathImpl = ::sun::font::LayoutPathImpl;
using $LayoutPathImpl$EmptyPath = ::sun::font::LayoutPathImpl$EmptyPath;
using $LayoutPathImpl$SegmentPath = ::sun::font::LayoutPathImpl$SegmentPath;
using $LayoutPathImpl$SegmentPathBuilder = ::sun::font::LayoutPathImpl$SegmentPathBuilder;
using $TextLabelFactory = ::sun::font::TextLabelFactory;
using $TextLineComponent = ::sun::font::TextLineComponent;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _TextLine_FieldInfo_[] = {
	{"fComponents", "[Lsun/font/TextLineComponent;", nullptr, $PRIVATE, $field(TextLine, fComponents)},
	{"fBaselineOffsets", "[F", nullptr, $PRIVATE, $field(TextLine, fBaselineOffsets)},
	{"fComponentVisualOrder", "[I", nullptr, $PRIVATE, $field(TextLine, fComponentVisualOrder)},
	{"locs", "[F", nullptr, $PRIVATE, $field(TextLine, locs)},
	{"fChars", "[C", nullptr, $PRIVATE, $field(TextLine, fChars)},
	{"fCharsStart", "I", nullptr, $PRIVATE, $field(TextLine, fCharsStart)},
	{"fCharsLimit", "I", nullptr, $PRIVATE, $field(TextLine, fCharsLimit)},
	{"fCharVisualOrder", "[I", nullptr, $PRIVATE, $field(TextLine, fCharVisualOrder)},
	{"fCharLogicalOrder", "[I", nullptr, $PRIVATE, $field(TextLine, fCharLogicalOrder)},
	{"fCharLevels", "[B", nullptr, $PRIVATE, $field(TextLine, fCharLevels)},
	{"fIsDirectionLTR", "Z", nullptr, $PRIVATE, $field(TextLine, fIsDirectionLTR)},
	{"lp", "Lsun/font/LayoutPathImpl;", nullptr, $PRIVATE, $field(TextLine, lp)},
	{"isSimple", "Z", nullptr, $PRIVATE, $field(TextLine, isSimple)},
	{"pixelBounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(TextLine, pixelBounds)},
	{"frc", "Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE, $field(TextLine, frc)},
	{"fMetrics", "Ljava/awt/font/TextLine$TextLineMetrics;", nullptr, $PRIVATE, $field(TextLine, fMetrics)},
	{"fgPosAdvF", "Ljava/awt/font/TextLine$Function;", nullptr, $PRIVATE | $STATIC, $staticField(TextLine, fgPosAdvF)},
	{"fgAdvanceF", "Ljava/awt/font/TextLine$Function;", nullptr, $PRIVATE | $STATIC, $staticField(TextLine, fgAdvanceF)},
	{"fgXPositionF", "Ljava/awt/font/TextLine$Function;", nullptr, $PRIVATE | $STATIC, $staticField(TextLine, fgXPositionF)},
	{"fgYPositionF", "Ljava/awt/font/TextLine$Function;", nullptr, $PRIVATE | $STATIC, $staticField(TextLine, fgYPositionF)},
	{}
};

$MethodInfo _TextLine_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/font/FontRenderContext;[Lsun/font/TextLineComponent;[F[CII[I[BZ)V", nullptr, $PUBLIC, $method(static_cast<void(TextLine::*)($FontRenderContext*,$TextLineComponentArray*,$floats*,$chars*,int32_t,int32_t,$ints*,$bytes*,bool)>(&TextLine::init$))},
	{"advanceToFirstFont", "(Ljava/text/AttributedCharacterIterator;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($AttributedCharacterIterator*)>(&TextLine::advanceToFirstFont))},
	{"applyFunctionAtIndex", "(ILjava/awt/font/TextLine$Function;)F", nullptr, $PRIVATE, $method(static_cast<float(TextLine::*)(int32_t,$TextLine$Function*)>(&TextLine::applyFunctionAtIndex))},
	{"caretAtOffsetIsValid", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(TextLine::*)(int32_t)>(&TextLine::caretAtOffsetIsValid))},
	{"characterCount", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(TextLine::*)()>(&TextLine::characterCount))},
	{"checkCtorArgs", "()V", nullptr, $PRIVATE, $method(static_cast<void(TextLine::*)()>(&TextLine::checkCtorArgs))},
	{"computeComponentOrder", "([Lsun/font/TextLineComponent;[I)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($TextLineComponentArray*,$ints*)>(&TextLine::computeComponentOrder))},
	{"computePixelBounds", "(Ljava/awt/image/BufferedImage;)Ljava/awt/Rectangle;", nullptr, $STATIC, $method(static_cast<$Rectangle*(*)($BufferedImage*)>(&TextLine::computePixelBounds))},
	{"createComponentsOnRun", "(II[C[I[BLsun/font/TextLabelFactory;Ljava/awt/Font;Lsun/font/CoreMetrics;Ljava/awt/font/FontRenderContext;Lsun/font/Decoration;[Lsun/font/TextLineComponent;I)[Lsun/font/TextLineComponent;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TextLineComponentArray*(*)(int32_t,int32_t,$chars*,$ints*,$bytes*,$TextLabelFactory*,$Font*,$CoreMetrics*,$FontRenderContext*,$Decoration*,$TextLineComponentArray*,int32_t)>(&TextLine::createComponentsOnRun))},
	{"createLineFromText", "([CLjava/awt/font/StyledParagraph;Lsun/font/TextLabelFactory;Z[F)Ljava/awt/font/TextLine;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TextLine*(*)($chars*,$StyledParagraph*,$TextLabelFactory*,bool,$floats*)>(&TextLine::createLineFromText))},
	{"draw", "(Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC, $method(static_cast<void(TextLine::*)($Graphics2D*,float,float)>(&TextLine::draw))},
	{"expandArray", "([Lsun/font/TextLineComponent;)[Lsun/font/TextLineComponent;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$TextLineComponentArray*(*)($TextLineComponentArray*)>(&TextLine::expandArray))},
	{"fastCreateTextLine", "(Ljava/awt/font/FontRenderContext;[CLjava/awt/Font;Lsun/font/CoreMetrics;Ljava/util/Map;)Ljava/awt/font/TextLine;", "(Ljava/awt/font/FontRenderContext;[CLjava/awt/Font;Lsun/font/CoreMetrics;Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;)Ljava/awt/font/TextLine;", $PUBLIC | $STATIC, $method(static_cast<TextLine*(*)($FontRenderContext*,$chars*,$Font*,$CoreMetrics*,$Map*)>(&TextLine::fastCreateTextLine))},
	{"firstVisualChunk", "([I[BII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ints*,$bytes*,int32_t,int32_t)>(&TextLine::firstVisualChunk))},
	{"getAdvanceBetween", "([Lsun/font/TextLineComponent;II)F", nullptr, $PUBLIC | $STATIC, $method(static_cast<float(*)($TextLineComponentArray*,int32_t,int32_t)>(&TextLine::getAdvanceBetween))},
	{"getCharAdvance", "(I)F", nullptr, $PUBLIC, $method(static_cast<float(TextLine::*)(int32_t)>(&TextLine::getCharAdvance))},
	{"getCharAngle", "(I)F", nullptr, $PUBLIC, $method(static_cast<float(TextLine::*)(int32_t)>(&TextLine::getCharAngle))},
	{"getCharAscent", "(I)F", nullptr, $PUBLIC, $method(static_cast<float(TextLine::*)(int32_t)>(&TextLine::getCharAscent))},
	{"getCharBounds", "(I)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $method(static_cast<$Rectangle2D*(TextLine::*)(int32_t)>(&TextLine::getCharBounds))},
	{"getCharDescent", "(I)F", nullptr, $PUBLIC, $method(static_cast<float(TextLine::*)(int32_t)>(&TextLine::getCharDescent))},
	{"getCharLevel", "(I)B", nullptr, $PUBLIC, $method(static_cast<int8_t(TextLine::*)(int32_t)>(&TextLine::getCharLevel))},
	{"getCharLinePosition", "(I)F", nullptr, $PUBLIC, $method(static_cast<float(TextLine::*)(int32_t)>(&TextLine::getCharLinePosition))},
	{"getCharLinePosition", "(IZ)F", nullptr, $PUBLIC, $method(static_cast<float(TextLine::*)(int32_t,bool)>(&TextLine::getCharLinePosition))},
	{"getCharShift", "(I)F", nullptr, $PUBLIC, $method(static_cast<float(TextLine::*)(int32_t)>(&TextLine::getCharShift))},
	{"getCharType", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(TextLine::*)(int32_t)>(&TextLine::getCharType))},
	{"getCharXPosition", "(I)F", nullptr, $PUBLIC, $method(static_cast<float(TextLine::*)(int32_t)>(&TextLine::getCharXPosition))},
	{"getCharYPosition", "(I)F", nullptr, $PUBLIC, $method(static_cast<float(TextLine::*)(int32_t)>(&TextLine::getCharYPosition))},
	{"getComponentLogicalIndex", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TextLine::*)(int32_t)>(&TextLine::getComponentLogicalIndex))},
	{"getComponentShift", "(I)F", nullptr, $PRIVATE, $method(static_cast<float(TextLine::*)(int32_t)>(&TextLine::getComponentShift))},
	{"getComponentVisualIndex", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TextLine::*)(int32_t)>(&TextLine::getComponentVisualIndex))},
	{"getComponents", "(Ljava/awt/font/StyledParagraph;[CII[I[BLsun/font/TextLabelFactory;)[Lsun/font/TextLineComponent;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TextLineComponentArray*(*)($StyledParagraph*,$chars*,int32_t,int32_t,$ints*,$bytes*,$TextLabelFactory*)>(&TextLine::getComponents))},
	{"getCoreMetricsAt", "(I)Lsun/font/CoreMetrics;", nullptr, $PUBLIC, $method(static_cast<$CoreMetrics*(TextLine::*)(int32_t)>(&TextLine::getCoreMetricsAt))},
	{"getFontAtCurrentPos", "(Ljava/text/AttributedCharacterIterator;)Ljava/awt/Font;", nullptr, $STATIC, $method(static_cast<$Font*(*)($AttributedCharacterIterator*)>(&TextLine::getFontAtCurrentPos))},
	{"getItalicBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $method(static_cast<$Rectangle2D*(TextLine::*)()>(&TextLine::getItalicBounds))},
	{"getJustifiedLine", "(FFII)Ljava/awt/font/TextLine;", nullptr, $PUBLIC, $method(static_cast<TextLine*(TextLine::*)(float,float,int32_t,int32_t)>(&TextLine::getJustifiedLine))},
	{"getLayoutPath", "()Lsun/font/LayoutPathImpl;", nullptr, 0, $method(static_cast<$LayoutPathImpl*(TextLine::*)()>(&TextLine::getLayoutPath))},
	{"getMetrics", "()Ljava/awt/font/TextLine$TextLineMetrics;", nullptr, $PUBLIC, $method(static_cast<$TextLine$TextLineMetrics*(TextLine::*)()>(&TextLine::getMetrics))},
	{"getNormalizedOffsets", "([FB)[F", nullptr, $STATIC, $method(static_cast<$floats*(*)($floats*,int8_t)>(&TextLine::getNormalizedOffsets))},
	{"getOutline", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/Shape;", nullptr, $PUBLIC, $method(static_cast<$Shape*(TextLine::*)($AffineTransform*)>(&TextLine::getOutline))},
	{"getPixelBounds", "(Ljava/awt/font/FontRenderContext;FF)Ljava/awt/Rectangle;", nullptr, $PUBLIC, $method(static_cast<$Rectangle*(TextLine::*)($FontRenderContext*,float,float)>(&TextLine::getPixelBounds))},
	{"getVisualBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $method(static_cast<$Rectangle2D*(TextLine::*)()>(&TextLine::getVisualBounds))},
	{"init", "()V", nullptr, $PRIVATE, $method(static_cast<void(TextLine::*)()>(&TextLine::init))},
	{"isCharLTR", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(TextLine::*)(int32_t)>(&TextLine::isCharLTR))},
	{"isCharSpace", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(TextLine::*)(int32_t)>(&TextLine::isCharSpace))},
	{"isCharWhitespace", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(TextLine::*)(int32_t)>(&TextLine::isCharWhitespace))},
	{"isDirectionLTR", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(TextLine::*)()>(&TextLine::isDirectionLTR))},
	{"logicalToVisual", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(TextLine::*)(int32_t)>(&TextLine::logicalToVisual))},
	{"standardCreateTextLine", "(Ljava/awt/font/FontRenderContext;Ljava/text/AttributedCharacterIterator;[C[F)Ljava/awt/font/TextLine;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TextLine*(*)($FontRenderContext*,$AttributedCharacterIterator*,$chars*,$floats*)>(&TextLine::standardCreateTextLine))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"visualToLogical", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(TextLine::*)(int32_t)>(&TextLine::visualToLogical))},
	{}
};

$InnerClassInfo _TextLine_InnerClassesInfo_[] = {
	{"java.awt.font.TextLine$Function", "java.awt.font.TextLine", "Function", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.awt.font.TextLine$TextLineMetrics", "java.awt.font.TextLine", "TextLineMetrics", $STATIC | $FINAL},
	{"java.awt.font.TextLine$4", nullptr, nullptr, 0},
	{"java.awt.font.TextLine$3", nullptr, nullptr, 0},
	{"java.awt.font.TextLine$2", nullptr, nullptr, 0},
	{"java.awt.font.TextLine$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TextLine_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.font.TextLine",
	"java.lang.Object",
	nullptr,
	_TextLine_FieldInfo_,
	_TextLine_MethodInfo_,
	nullptr,
	nullptr,
	_TextLine_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.font.TextLine$Function,java.awt.font.TextLine$TextLineMetrics,java.awt.font.TextLine$4,java.awt.font.TextLine$3,java.awt.font.TextLine$2,java.awt.font.TextLine$1"
};

$Object* allocate$TextLine($Class* clazz) {
	return $of($alloc(TextLine));
}

$TextLine$Function* TextLine::fgPosAdvF = nullptr;
$TextLine$Function* TextLine::fgAdvanceF = nullptr;
$TextLine$Function* TextLine::fgXPositionF = nullptr;
$TextLine$Function* TextLine::fgYPositionF = nullptr;

void TextLine::init$($FontRenderContext* frc, $TextLineComponentArray* components, $floats* baselineOffsets, $chars* chars, int32_t charsStart, int32_t charsLimit, $ints* charLogicalOrder, $bytes* charLevels, bool isDirectionLTR) {
	$set(this, fMetrics, nullptr);
	$var($ints, componentVisualOrder, computeComponentOrder(components, charLogicalOrder));
	$set(this, frc, frc);
	$set(this, fComponents, components);
	$set(this, fBaselineOffsets, baselineOffsets);
	$set(this, fComponentVisualOrder, componentVisualOrder);
	$set(this, fChars, chars);
	this->fCharsStart = charsStart;
	this->fCharsLimit = charsLimit;
	$set(this, fCharLogicalOrder, charLogicalOrder);
	$set(this, fCharLevels, charLevels);
	this->fIsDirectionLTR = isDirectionLTR;
	checkCtorArgs();
	init();
}

void TextLine::checkCtorArgs() {
	int32_t checkCharCount = 0;
	for (int32_t i = 0; i < $nc(this->fComponents)->length; ++i) {
		checkCharCount += $nc($nc(this->fComponents)->get(i))->getNumCharacters();
	}
	if (checkCharCount != this->characterCount()) {
		$throwNew($IllegalArgumentException, "Invalid TextLine!  char count is different from sum of char counts of components."_s);
	}
}

void TextLine::init() {
	float ascent = (float)0;
	float descent = (float)0;
	float leading = (float)0;
	float advance = (float)0;
	float maxGraphicHeight = (float)0;
	float maxGraphicHeightWithLeading = (float)0;
	$var($TextLineComponent, tlc, nullptr);
	bool fitTopAndBottomGraphics = false;
	this->isSimple = true;
	for (int32_t i = 0; i < $nc(this->fComponents)->length; ++i) {
		$assign(tlc, $nc(this->fComponents)->get(i));
		this->isSimple &= $nc(tlc)->isSimple();
		$var($CoreMetrics, cm, tlc->getCoreMetrics());
		int8_t baseline = (int8_t)$nc(cm)->baselineIndex;
		if (baseline >= 0) {
			float baselineOffset = $nc(this->fBaselineOffsets)->get(baseline);
			ascent = $Math::max(ascent, -baselineOffset + cm->ascent);
			float gd = baselineOffset + cm->descent;
			descent = $Math::max(descent, gd);
			leading = $Math::max(leading, gd + cm->leading);
		} else {
			fitTopAndBottomGraphics = true;
			float graphicHeight = cm->ascent + cm->descent;
			float graphicHeightWithLeading = graphicHeight + cm->leading;
			maxGraphicHeight = $Math::max(maxGraphicHeight, graphicHeight);
			maxGraphicHeightWithLeading = $Math::max(maxGraphicHeightWithLeading, graphicHeightWithLeading);
		}
	}
	if (fitTopAndBottomGraphics) {
		if (maxGraphicHeight > ascent + descent) {
			descent = maxGraphicHeight - ascent;
		}
		if (maxGraphicHeightWithLeading > ascent + leading) {
			leading = maxGraphicHeightWithLeading - ascent;
		}
	}
	leading -= descent;
	if (fitTopAndBottomGraphics) {
		$set(this, fBaselineOffsets, $new($floats, {
			$nc(this->fBaselineOffsets)->get(0),
			$nc(this->fBaselineOffsets)->get(1),
			$nc(this->fBaselineOffsets)->get(2),
			descent,
			-ascent
		}));
	}
	float x = (float)0;
	float y = (float)0;
	$var($CoreMetrics, pcm, nullptr);
	bool needPath = false;
	$set(this, locs, $new($floats, $nc(this->fComponents)->length * 2 + 2));
	{
		int32_t i = 0;
		int32_t n = 0;
		for (; i < $nc(this->fComponents)->length; ++i, n += 2) {
			$assign(tlc, $nc(this->fComponents)->get(getComponentLogicalIndex(i)));
			$var($CoreMetrics, cm, $nc(tlc)->getCoreMetrics());
			if ((pcm != nullptr) && (pcm->italicAngle != 0 || $nc(cm)->italicAngle != 0) && ($nc(pcm)->italicAngle != cm->italicAngle || $nc(pcm)->baselineIndex != $nc(cm)->baselineIndex || $nc(pcm)->ssOffset != $nc(cm)->ssOffset)) {
				float pb = pcm->effectiveBaselineOffset(this->fBaselineOffsets);
				float pa = pb - pcm->ascent;
				float pd = pb + pcm->descent;
				float cb = cm->effectiveBaselineOffset(this->fBaselineOffsets);
				float ca = cb - cm->ascent;
				float cd = cb + cm->descent;
				float a = $Math::max(pa, ca);
				float d = $Math::min(pd, cd);
				float pax = pcm->italicAngle * (pb - a);
				float pdx = pcm->italicAngle * (pb - d);
				float cax = cm->italicAngle * (cb - a);
				float cdx = cm->italicAngle * (cb - d);
				float dax = pax - cax;
				float ddx = pdx - cdx;
				float dx = $Math::max(dax, ddx);
				x += dx;
				y = cb;
			} else {
				y = cm->effectiveBaselineOffset(this->fBaselineOffsets);
			}
			$nc(this->locs)->set(n, x);
			$nc(this->locs)->set(n + 1, y);
			x += tlc->getAdvance();
			$assign(pcm, cm);
			needPath |= tlc->getBaselineTransform() != nullptr;
		}
	}
	if ($nc(pcm)->italicAngle != 0) {
		float pb = pcm->effectiveBaselineOffset(this->fBaselineOffsets);
		float pa = pb - pcm->ascent;
		float pd = pb + pcm->descent;
		pb += pcm->ssOffset;
		float d = 0.0;
		if (pcm->italicAngle > 0) {
			d = pb + pcm->ascent;
		} else {
			d = pb - pcm->descent;
		}
		d *= pcm->italicAngle;
		x += d;
	}
	$nc(this->locs)->set($nc(this->locs)->length - 2, x);
	advance = x;
	$set(this, fMetrics, $new($TextLine$TextLineMetrics, ascent, descent, leading, advance));
	if (needPath) {
		this->isSimple = false;
		$var($Point2D$Double, pt, $new($Point2D$Double));
		double tx = (double)0;
		double ty = (double)0;
		$var($LayoutPathImpl$SegmentPathBuilder, builder, $new($LayoutPathImpl$SegmentPathBuilder));
		builder->moveTo($nc(this->locs)->get(0), (double)0);
		{
			int32_t i = 0;
			int32_t n = 0;
			for (; i < $nc(this->fComponents)->length; ++i, n += 2) {
				$assign(tlc, $nc(this->fComponents)->get(getComponentLogicalIndex(i)));
				$var($AffineTransform, at, $nc(tlc)->getBaselineTransform());
				if (at != nullptr && (((int32_t)(at->getType() & (uint32_t)$AffineTransform::TYPE_TRANSLATION)) != 0)) {
					double dx = at->getTranslateX();
					double dy = at->getTranslateY();
					builder->moveTo(tx += dx, ty += dy);
				}
				pt->x = $nc(this->locs)->get(n + 2) - $nc(this->locs)->get(n);
				pt->y = (double)0;
				if (at != nullptr) {
					at->deltaTransform(pt, pt);
				}
				builder->lineTo(tx += pt->x, ty += pt->y);
			}
		}
		$set(this, lp, builder->complete());
		if (this->lp == nullptr) {
			$assign(tlc, $nc(this->fComponents)->get(getComponentLogicalIndex(0)));
			$var($AffineTransform, at, $nc(tlc)->getBaselineTransform());
			if (at != nullptr) {
				$set(this, lp, $new($LayoutPathImpl$EmptyPath, at));
			}
		}
	}
}

$Rectangle* TextLine::getPixelBounds($FontRenderContext* frc$renamed, float x, float y) {
	$var($FontRenderContext, frc, frc$renamed);
	$var($Rectangle, result, nullptr);
	if (frc != nullptr && frc->equals(this->frc)) {
		$assign(frc, nullptr);
	}
	int32_t ix = $cast(int32_t, $Math::floor(x));
	int32_t iy = $cast(int32_t, $Math::floor(y));
	float rx = x - ix;
	float ry = y - iy;
	bool canCache = frc == nullptr && rx == 0 && ry == 0;
	if (canCache && this->pixelBounds != nullptr) {
		$assign(result, $new($Rectangle, this->pixelBounds));
		result->x += ix;
		result->y += iy;
		return result;
	}
	if (this->isSimple) {
		{
			int32_t i = 0;
			int32_t n = 0;
			for (; i < $nc(this->fComponents)->length; ++i, n += 2) {
				$var($TextLineComponent, tlc, $nc(this->fComponents)->get(getComponentLogicalIndex(i)));
				$var($Rectangle, pb, $nc(tlc)->getPixelBounds(frc, $nc(this->locs)->get(n) + rx, $nc(this->locs)->get(n + 1) + ry));
				if (!$nc(pb)->isEmpty()) {
					if (result == nullptr) {
						$assign(result, pb);
					} else {
						$nc(result)->add(pb);
					}
				}
			}
		}
		if (result == nullptr) {
			$assign(result, $new($Rectangle, 0, 0, 0, 0));
		}
	} else {
		int32_t MARGIN = 3;
		$var($Rectangle2D, r2d, getVisualBounds());
		if (this->lp != nullptr) {
			$assign(r2d, $nc($($nc(this->lp)->mapShape(r2d)))->getBounds());
		}
		$var($Rectangle, bounds, $nc(r2d)->getBounds());
		$var($BufferedImage, im, $new($BufferedImage, $nc(bounds)->width + MARGIN * 2, bounds->height + MARGIN * 2, $BufferedImage::TYPE_INT_ARGB));
		$var($Graphics2D, g2d, im->createGraphics());
		$init($Color);
		$nc(g2d)->setColor($Color::WHITE);
		int32_t var$0 = im->getWidth();
		g2d->fillRect(0, 0, var$0, im->getHeight());
		g2d->setColor($Color::BLACK);
		draw(g2d, rx + MARGIN - $nc(bounds)->x, ry + MARGIN - bounds->y);
		$assign(result, computePixelBounds(im));
		$nc(result)->x -= MARGIN - $nc(bounds)->x;
		result->y -= MARGIN - bounds->y;
	}
	if (canCache) {
		$set(this, pixelBounds, $new($Rectangle, result));
	}
	$nc(result)->x += ix;
	result->y += iy;
	return result;
}

$Rectangle* TextLine::computePixelBounds($BufferedImage* im) {
	$init(TextLine);
	int32_t w = $nc(im)->getWidth();
	int32_t h = im->getHeight();
	int32_t l = -1;
	int32_t t = -1;
	int32_t r = w;
	int32_t b = h;
	{
		$var($ints, buf, $new($ints, w));
		bool loop$break = false;
		while (++t < h) {
			im->getRGB(0, t, buf->length, 1, buf, 0, w);
			for (int32_t i = 0; i < buf->length; ++i) {
				if (buf->get(i) != -1) {
					loop$break = true;
					break;
				}
			}
			if (loop$break) {
				break;
			}
		}
	}
	{
		$var($ints, buf, $new($ints, w));
		bool loop$break = false;
		while (--b > t) {
			im->getRGB(0, b, buf->length, 1, buf, 0, w);
			for (int32_t i = 0; i < buf->length; ++i) {
				if (buf->get(i) != -1) {
					loop$break = true;
					break;
				}
			}
			if (loop$break) {
				break;
			}
		}
		++b;
	}
	{
		bool loop$break = false;
		while (++l < r) {
			for (int32_t i = t; i < b; ++i) {
				int32_t v = im->getRGB(l, i);
				if (v != -1) {
					loop$break = true;
					break;
				}
			}
			if (loop$break) {
				break;
			}
		}
	}
	{
		bool loop$break = false;
		while (--r > l) {
			for (int32_t i = t; i < b; ++i) {
				int32_t v = im->getRGB(r, i);
				if (v != -1) {
					loop$break = true;
					break;
				}
			}
			if (loop$break) {
				break;
			}
		}
		++r;
	}
	return $new($Rectangle, l, t, r - l, b - t);
}

int32_t TextLine::characterCount() {
	return this->fCharsLimit - this->fCharsStart;
}

bool TextLine::isDirectionLTR() {
	return this->fIsDirectionLTR;
}

$TextLine$TextLineMetrics* TextLine::getMetrics() {
	return this->fMetrics;
}

int32_t TextLine::visualToLogical(int32_t visualIndex) {
	if (this->fCharLogicalOrder == nullptr) {
		return visualIndex;
	}
	if (this->fCharVisualOrder == nullptr) {
		$set(this, fCharVisualOrder, $BidiUtils::createInverseMap(this->fCharLogicalOrder));
	}
	return $nc(this->fCharVisualOrder)->get(visualIndex);
}

int32_t TextLine::logicalToVisual(int32_t logicalIndex) {
	return (this->fCharLogicalOrder == nullptr) ? logicalIndex : $nc(this->fCharLogicalOrder)->get(logicalIndex);
}

int8_t TextLine::getCharLevel(int32_t logicalIndex) {
	return this->fCharLevels == nullptr ? (int8_t)0 : $nc(this->fCharLevels)->get(logicalIndex);
}

bool TextLine::isCharLTR(int32_t logicalIndex) {
	return ((int32_t)(getCharLevel(logicalIndex) & (uint32_t)1)) == 0;
}

int32_t TextLine::getCharType(int32_t logicalIndex) {
	return $Character::getType($nc(this->fChars)->get(logicalIndex + this->fCharsStart));
}

bool TextLine::isCharSpace(int32_t logicalIndex) {
	return $Character::isSpaceChar($nc(this->fChars)->get(logicalIndex + this->fCharsStart));
}

bool TextLine::isCharWhitespace(int32_t logicalIndex) {
	return $Character::isWhitespace($nc(this->fChars)->get(logicalIndex + this->fCharsStart));
}

float TextLine::getCharAngle(int32_t logicalIndex) {
	return $nc($(getCoreMetricsAt(logicalIndex)))->italicAngle;
}

$CoreMetrics* TextLine::getCoreMetricsAt(int32_t logicalIndex) {
	if (logicalIndex < 0) {
		$throwNew($IllegalArgumentException, "Negative logicalIndex."_s);
	}
	if (logicalIndex > this->fCharsLimit - this->fCharsStart) {
		$throwNew($IllegalArgumentException, "logicalIndex too large."_s);
	}
	int32_t currentTlc = 0;
	int32_t tlcStart = 0;
	int32_t tlcLimit = 0;
	do {
		tlcLimit += $nc($nc(this->fComponents)->get(currentTlc))->getNumCharacters();
		if (tlcLimit > logicalIndex) {
			break;
		}
		++currentTlc;
		tlcStart = tlcLimit;
	} while (currentTlc < $nc(this->fComponents)->length);
	return $nc($nc(this->fComponents)->get(currentTlc))->getCoreMetrics();
}

float TextLine::getCharAscent(int32_t logicalIndex) {
	return $nc($(getCoreMetricsAt(logicalIndex)))->ascent;
}

float TextLine::getCharDescent(int32_t logicalIndex) {
	return $nc($(getCoreMetricsAt(logicalIndex)))->descent;
}

float TextLine::getCharShift(int32_t logicalIndex) {
	return $nc($(getCoreMetricsAt(logicalIndex)))->ssOffset;
}

float TextLine::applyFunctionAtIndex(int32_t logicalIndex, $TextLine$Function* f) {
	if (logicalIndex < 0) {
		$throwNew($IllegalArgumentException, "Negative logicalIndex."_s);
	}
	int32_t tlcStart = 0;
	for (int32_t i = 0; i < $nc(this->fComponents)->length; ++i) {
		int32_t tlcLimit = tlcStart + $nc($nc(this->fComponents)->get(i))->getNumCharacters();
		if (tlcLimit > logicalIndex) {
			return $nc(f)->computeFunction(this, i, logicalIndex - tlcStart);
		} else {
			tlcStart = tlcLimit;
		}
	}
	$throwNew($IllegalArgumentException, "logicalIndex too large."_s);
}

float TextLine::getCharAdvance(int32_t logicalIndex) {
	return applyFunctionAtIndex(logicalIndex, TextLine::fgAdvanceF);
}

float TextLine::getCharXPosition(int32_t logicalIndex) {
	return applyFunctionAtIndex(logicalIndex, TextLine::fgXPositionF);
}

float TextLine::getCharYPosition(int32_t logicalIndex) {
	return applyFunctionAtIndex(logicalIndex, TextLine::fgYPositionF);
}

float TextLine::getCharLinePosition(int32_t logicalIndex) {
	return getCharXPosition(logicalIndex);
}

float TextLine::getCharLinePosition(int32_t logicalIndex, bool leading) {
	$var($TextLine$Function, f, isCharLTR(logicalIndex) == leading ? TextLine::fgXPositionF : TextLine::fgPosAdvF);
	return applyFunctionAtIndex(logicalIndex, f);
}

bool TextLine::caretAtOffsetIsValid(int32_t offset) {
	if (offset < 0) {
		$throwNew($IllegalArgumentException, "Negative offset."_s);
	}
	int32_t tlcStart = 0;
	for (int32_t i = 0; i < $nc(this->fComponents)->length; ++i) {
		int32_t tlcLimit = tlcStart + $nc($nc(this->fComponents)->get(i))->getNumCharacters();
		if (tlcLimit > offset) {
			return $nc($nc(this->fComponents)->get(i))->caretAtOffsetIsValid(offset - tlcStart);
		} else {
			tlcStart = tlcLimit;
		}
	}
	$throwNew($IllegalArgumentException, "logicalIndex too large."_s);
}

int32_t TextLine::getComponentLogicalIndex(int32_t vi) {
	if (this->fComponentVisualOrder == nullptr) {
		return vi;
	}
	return $nc(this->fComponentVisualOrder)->get(vi);
}

int32_t TextLine::getComponentVisualIndex(int32_t li) {
	if (this->fComponentVisualOrder == nullptr) {
		return li;
	}
	for (int32_t i = 0; i < $nc(this->fComponentVisualOrder)->length; ++i) {
		if ($nc(this->fComponentVisualOrder)->get(i) == li) {
			return i;
		}
	}
	$throwNew($IndexOutOfBoundsException, $$str({"bad component index: "_s, $$str(li)}));
}

$Rectangle2D* TextLine::getCharBounds(int32_t logicalIndex) {
	if (logicalIndex < 0) {
		$throwNew($IllegalArgumentException, "Negative logicalIndex."_s);
	}
	int32_t tlcStart = 0;
	for (int32_t i = 0; i < $nc(this->fComponents)->length; ++i) {
		int32_t tlcLimit = tlcStart + $nc($nc(this->fComponents)->get(i))->getNumCharacters();
		if (tlcLimit > logicalIndex) {
			$var($TextLineComponent, tlc, $nc(this->fComponents)->get(i));
			int32_t indexInTlc = logicalIndex - tlcStart;
			$var($Rectangle2D, chBounds, $nc(tlc)->getCharVisualBounds(indexInTlc));
			int32_t vi = getComponentVisualIndex(i);
			double var$0 = chBounds->getX() + $nc(this->locs)->get(vi * 2);
			double var$1 = chBounds->getY() + $nc(this->locs)->get(vi * 2 + 1);
			double var$2 = chBounds->getWidth();
			$nc(chBounds)->setRect(var$0, var$1, var$2, chBounds->getHeight());
			return chBounds;
		} else {
			tlcStart = tlcLimit;
		}
	}
	$throwNew($IllegalArgumentException, "logicalIndex too large."_s);
}

float TextLine::getComponentShift(int32_t index) {
	$var($CoreMetrics, cm, $nc($nc(this->fComponents)->get(index))->getCoreMetrics());
	return $nc(cm)->effectiveBaselineOffset(this->fBaselineOffsets);
}

void TextLine::draw($Graphics2D* g2, float x, float y) {
	if (this->lp == nullptr) {
		{
			int32_t i = 0;
			int32_t n = 0;
			for (; i < $nc(this->fComponents)->length; ++i, n += 2) {
				$var($TextLineComponent, tlc, $nc(this->fComponents)->get(getComponentLogicalIndex(i)));
				$nc(tlc)->draw(g2, $nc(this->locs)->get(n) + x, $nc(this->locs)->get(n + 1) + y);
			}
		}
	} else {
		$var($AffineTransform, oldTx, $nc(g2)->getTransform());
		$var($Point2D$Float, pt, $new($Point2D$Float));
		{
			int32_t i = 0;
			int32_t n = 0;
			for (; i < $nc(this->fComponents)->length; ++i, n += 2) {
				$var($TextLineComponent, tlc, $nc(this->fComponents)->get(getComponentLogicalIndex(i)));
				$nc(this->lp)->pathToPoint($nc(this->locs)->get(n), $nc(this->locs)->get(n + 1), false, pt);
				pt->x += x;
				pt->y += y;
				$var($AffineTransform, at, $nc(tlc)->getBaselineTransform());
				if (at != nullptr) {
					double var$0 = pt->x - at->getTranslateX();
					g2->translate(var$0, pt->y - at->getTranslateY());
					g2->transform(at);
					tlc->draw(g2, (float)0, (float)0);
					g2->setTransform(oldTx);
				} else {
					tlc->draw(g2, pt->x, pt->y);
				}
			}
		}
	}
}

$Rectangle2D* TextLine::getVisualBounds() {
	$var($Rectangle2D, result, nullptr);
	{
		int32_t i = 0;
		int32_t n = 0;
		for (; i < $nc(this->fComponents)->length; ++i, n += 2) {
			$var($TextLineComponent, tlc, $nc(this->fComponents)->get(getComponentLogicalIndex(i)));
			$var($Rectangle2D, r, $nc(tlc)->getVisualBounds());
			$var($Point2D$Float, pt, $new($Point2D$Float, $nc(this->locs)->get(n), $nc(this->locs)->get(n + 1)));
			if (this->lp == nullptr) {
				double var$0 = r->getMinX() + pt->x;
				double var$1 = r->getMinY() + pt->y;
				double var$2 = r->getWidth();
				$nc(r)->setRect(var$0, var$1, var$2, r->getHeight());
			} else {
				$nc(this->lp)->pathToPoint(pt, false, pt);
				$var($AffineTransform, at, tlc->getBaselineTransform());
				if (at != nullptr) {
					double var$3 = pt->x - at->getTranslateX();
					$var($AffineTransform, tx, $AffineTransform::getTranslateInstance(var$3, pt->y - at->getTranslateY()));
					$nc(tx)->concatenate(at);
					$assign(r, $nc($(tx->createTransformedShape(r)))->getBounds2D());
				} else {
					double var$4 = r->getMinX() + pt->x;
					double var$5 = r->getMinY() + pt->y;
					double var$6 = r->getWidth();
					$nc(r)->setRect(var$4, var$5, var$6, r->getHeight());
				}
			}
			if (result == nullptr) {
				$assign(result, r);
			} else {
				$nc(result)->add(r);
			}
		}
	}
	if (result == nullptr) {
		$init($Float);
		$assign(result, $new($Rectangle2D$Float, $Float::MAX_VALUE, $Float::MAX_VALUE, $Float::MIN_VALUE, $Float::MIN_VALUE));
	}
	return result;
}

$Rectangle2D* TextLine::getItalicBounds() {
	$init($Float);
	float left = $Float::MAX_VALUE;
	float right = -$Float::MAX_VALUE;
	float top = $Float::MAX_VALUE;
	float bottom = -$Float::MAX_VALUE;
	{
		int32_t i = 0;
		int32_t n = 0;
		for (; i < $nc(this->fComponents)->length; ++i, n += 2) {
			$var($TextLineComponent, tlc, $nc(this->fComponents)->get(getComponentLogicalIndex(i)));
			$var($Rectangle2D, tlcBounds, $nc(tlc)->getItalicBounds());
			float x = $nc(this->locs)->get(n);
			float y = $nc(this->locs)->get(n + 1);
			left = $Math::min(left, x + (float)$nc(tlcBounds)->getX());
			right = $Math::max(right, x + (float)$nc(tlcBounds)->getMaxX());
			top = $Math::min(top, y + (float)$nc(tlcBounds)->getY());
			bottom = $Math::max(bottom, y + (float)$nc(tlcBounds)->getMaxY());
		}
	}
	return $new($Rectangle2D$Float, left, top, right - left, bottom - top);
}

$Shape* TextLine::getOutline($AffineTransform* tx) {
	$var($GeneralPath, dstShape, $new($GeneralPath, $GeneralPath::WIND_NON_ZERO));
	{
		int32_t i = 0;
		int32_t n = 0;
		for (; i < $nc(this->fComponents)->length; ++i, n += 2) {
			$var($TextLineComponent, tlc, $nc(this->fComponents)->get(getComponentLogicalIndex(i)));
			dstShape->append($($nc(tlc)->getOutline($nc(this->locs)->get(n), $nc(this->locs)->get(n + 1))), false);
		}
	}
	if (tx != nullptr) {
		dstShape->transform(tx);
	}
	return dstShape;
}

$String* TextLine::toString() {
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(this->fComponents)->length; ++i) {
		buf->append($of($nc(this->fComponents)->get(i)));
	}
	return buf->toString();
}

TextLine* TextLine::fastCreateTextLine($FontRenderContext* frc, $chars* chars, $Font* font, $CoreMetrics* lm, $Map* attributes) {
	$init(TextLine);
	bool isDirectionLTR = true;
	$var($bytes, levels, nullptr);
	$var($ints, charsLtoV, nullptr);
	$var($Bidi, bidi, nullptr);
	int32_t characterCount = $nc(chars)->length;
	bool requiresBidi = false;
	$var($bytes, embs, nullptr);
	$var($AttributeValues, values, nullptr);
	if (attributes != nullptr) {
		$assign(values, $AttributeValues::fromMap(attributes));
		if ($nc(values)->getRunDirection() >= 0) {
			isDirectionLTR = values->getRunDirection() == 0;
			requiresBidi = !isDirectionLTR;
		}
		if ($nc(values)->getBidiEmbedding() != 0) {
			requiresBidi = true;
			int8_t level = (int8_t)values->getBidiEmbedding();
			$assign(embs, $new($bytes, characterCount));
			for (int32_t i = 0; i < embs->length; ++i) {
				embs->set(i, level);
			}
		}
	}
	if (!requiresBidi) {
		requiresBidi = $Bidi::requiresBidi(chars, 0, chars->length);
	}
	if (requiresBidi) {
		int32_t bidiflags = values == nullptr ? $Bidi::DIRECTION_DEFAULT_LEFT_TO_RIGHT : $nc(values)->getRunDirection();
		$assign(bidi, $new($Bidi, chars, 0, embs, 0, chars->length, bidiflags));
		if (!bidi->isLeftToRight()) {
			$assign(levels, $BidiUtils::getLevels(bidi));
			$var($ints, charsVtoL, $BidiUtils::createVisualToLogicalMap(levels));
			$assign(charsLtoV, $BidiUtils::createInverseMap(charsVtoL));
			isDirectionLTR = bidi->baseIsLeftToRight();
		}
	}
	$var($Decoration, decorator, $Decoration::getDecoration(values));
	int32_t layoutFlags = 0;
	$var($TextLabelFactory, factory, $new($TextLabelFactory, frc, chars, bidi, layoutFlags));
	$var($TextLineComponentArray, components, $new($TextLineComponentArray, 1));
	$assign(components, createComponentsOnRun(0, chars->length, chars, charsLtoV, levels, factory, font, lm, frc, decorator, components, 0));
	int32_t numComponents = $nc(components)->length;
	while (components->get(numComponents - 1) == nullptr) {
		numComponents -= 1;
	}
	if (numComponents != components->length) {
		$var($TextLineComponentArray, temp, $new($TextLineComponentArray, numComponents));
		$System::arraycopy(components, 0, temp, 0, numComponents);
		$assign(components, temp);
	}
	return $new(TextLine, frc, components, $nc(lm)->baselineOffsets, chars, 0, chars->length, charsLtoV, levels, isDirectionLTR);
}

$TextLineComponentArray* TextLine::expandArray($TextLineComponentArray* orig) {
	$init(TextLine);
	$var($TextLineComponentArray, newComponents, $new($TextLineComponentArray, $nc(orig)->length + 8));
	$System::arraycopy(orig, 0, newComponents, 0, orig->length);
	return newComponents;
}

$TextLineComponentArray* TextLine::createComponentsOnRun(int32_t runStart, int32_t runLimit, $chars* chars, $ints* charsLtoV, $bytes* levels, $TextLabelFactory* factory, $Font* font, $CoreMetrics* cm$renamed, $FontRenderContext* frc, $Decoration* decorator, $TextLineComponentArray* components$renamed, int32_t numComponents) {
	$init(TextLine);
	$var($TextLineComponentArray, components, components$renamed);
	$var($CoreMetrics, cm, cm$renamed);
	int32_t pos = runStart;
	do {
		int32_t chunkLimit = firstVisualChunk(charsLtoV, levels, pos, runLimit);
		do {
			int32_t startPos = pos;
			int32_t lmCount = 0;
			if (cm == nullptr) {
				$var($LineMetrics, lineMetrics, $nc(font)->getLineMetrics(chars, startPos, chunkLimit, frc));
				$assign(cm, $CoreMetrics::get(lineMetrics));
				lmCount = $nc(lineMetrics)->getNumChars();
			} else {
				lmCount = (chunkLimit - startPos);
			}
			$var($TextLineComponent, nextComponent, $nc(factory)->createExtended(font, cm, decorator, startPos, startPos + lmCount));
			++numComponents;
			if (numComponents >= $nc(components)->length) {
				$assign(components, expandArray(components));
			}
			$nc(components)->set(numComponents - 1, nextComponent);
			pos += lmCount;
		} while (pos < chunkLimit);
	} while (pos < runLimit);
	return components;
}

$TextLineComponentArray* TextLine::getComponents($StyledParagraph* styledParagraph, $chars* chars, int32_t textStart, int32_t textLimit, $ints* charsLtoV, $bytes* levels, $TextLabelFactory* factory) {
	$init(TextLine);
	$var($FontRenderContext, frc, $nc(factory)->getFontRenderContext());
	int32_t numComponents = 0;
	$var($TextLineComponentArray, tempComponents, $new($TextLineComponentArray, 1));
	int32_t pos = textStart;
	do {
		int32_t runLimit = $Math::min($nc(styledParagraph)->getRunLimit(pos), textLimit);
		$var($Decoration, decorator, $nc(styledParagraph)->getDecorationAt(pos));
		$var($Object, graphicOrFont, styledParagraph->getFontOrGraphicAt(pos));
		if ($instanceOf($GraphicAttribute, graphicOrFont)) {
			$var($AffineTransform, baseRot, nullptr);
			$var($GraphicAttribute, graphicAttribute, $cast($GraphicAttribute, graphicOrFont));
			do {
				int32_t chunkLimit = firstVisualChunk(charsLtoV, levels, pos, runLimit);
				$var($GraphicComponent, nextGraphic, $new($GraphicComponent, graphicAttribute, decorator, charsLtoV, levels, pos, chunkLimit, baseRot));
				pos = chunkLimit;
				++numComponents;
				if (numComponents >= tempComponents->length) {
					$assign(tempComponents, expandArray(tempComponents));
				}
				tempComponents->set(numComponents - 1, nextGraphic);
			} while (pos < runLimit);
		} else {
			$var($Font, font, $cast($Font, graphicOrFont));
			$assign(tempComponents, createComponentsOnRun(pos, runLimit, chars, charsLtoV, levels, factory, font, nullptr, frc, decorator, tempComponents, numComponents));
			pos = runLimit;
			numComponents = $nc(tempComponents)->length;
			while (tempComponents->get(numComponents - 1) == nullptr) {
				numComponents -= 1;
			}
		}
	} while (pos < textLimit);
	$var($TextLineComponentArray, components, nullptr);
	if (tempComponents->length == numComponents) {
		$assign(components, tempComponents);
	} else {
		$assign(components, $new($TextLineComponentArray, numComponents));
		$System::arraycopy(tempComponents, 0, components, 0, numComponents);
	}
	return components;
}

TextLine* TextLine::createLineFromText($chars* chars, $StyledParagraph* styledParagraph, $TextLabelFactory* factory, bool isDirectionLTR, $floats* baselineOffsets) {
	$init(TextLine);
	$nc(factory)->setLineContext(0, $nc(chars)->length);
	$var($Bidi, lineBidi, factory->getLineBidi());
	$var($ints, charsLtoV, nullptr);
	$var($bytes, levels, nullptr);
	if (lineBidi != nullptr) {
		$assign(levels, $BidiUtils::getLevels(lineBidi));
		$var($ints, charsVtoL, $BidiUtils::createVisualToLogicalMap(levels));
		$assign(charsLtoV, $BidiUtils::createInverseMap(charsVtoL));
	}
	$var($TextLineComponentArray, components, getComponents(styledParagraph, chars, 0, $nc(chars)->length, charsLtoV, levels, factory));
	return $new(TextLine, $(factory->getFontRenderContext()), components, baselineOffsets, chars, 0, $nc(chars)->length, charsLtoV, levels, isDirectionLTR);
}

$ints* TextLine::computeComponentOrder($TextLineComponentArray* components, $ints* charsLtoV) {
	$init(TextLine);
	$var($ints, componentOrder, nullptr);
	if (charsLtoV != nullptr && $nc(components)->length > 1) {
		$assign(componentOrder, $new($ints, components->length));
		int32_t gStart = 0;
		for (int32_t i = 0; i < components->length; ++i) {
			componentOrder->set(i, charsLtoV->get(gStart));
			gStart += $nc(components->get(i))->getNumCharacters();
		}
		$assign(componentOrder, $BidiUtils::createContiguousOrder(componentOrder));
		$assign(componentOrder, $BidiUtils::createInverseMap(componentOrder));
	}
	return componentOrder;
}

TextLine* TextLine::standardCreateTextLine($FontRenderContext* frc, $AttributedCharacterIterator* text, $chars* chars, $floats* baselineOffsets) {
	$init(TextLine);
	$var($StyledParagraph, styledParagraph, $new($StyledParagraph, text, chars));
	$var($Bidi, bidi, $new($Bidi, text));
	if (bidi->isLeftToRight()) {
		$assign(bidi, nullptr);
	}
	int32_t layoutFlags = 0;
	$var($TextLabelFactory, factory, $new($TextLabelFactory, frc, chars, bidi, layoutFlags));
	bool isDirectionLTR = true;
	if (bidi != nullptr) {
		isDirectionLTR = bidi->baseIsLeftToRight();
	}
	return createLineFromText(chars, styledParagraph, factory, isDirectionLTR, baselineOffsets);
}

bool TextLine::advanceToFirstFont($AttributedCharacterIterator* aci) {
	$init(TextLine);
	for (char16_t ch = $nc(aci)->first(); ch != $CharacterIterator::DONE; ch = aci->setIndex(aci->getRunLimit())) {
		$init($TextAttribute);
		if (aci->getAttribute($TextAttribute::CHAR_REPLACEMENT) == nullptr) {
			return true;
		}
	}
	return false;
}

$floats* TextLine::getNormalizedOffsets($floats* baselineOffsets$renamed, int8_t baseline) {
	$init(TextLine);
	$var($floats, baselineOffsets, baselineOffsets$renamed);
	if ($nc(baselineOffsets)->get(baseline) != 0) {
		float base = baselineOffsets->get(baseline);
		$var($floats, temp, $new($floats, baselineOffsets->length));
		for (int32_t i = 0; i < temp->length; ++i) {
			temp->set(i, baselineOffsets->get(i) - base);
		}
		$assign(baselineOffsets, temp);
	}
	return baselineOffsets;
}

$Font* TextLine::getFontAtCurrentPos($AttributedCharacterIterator* aci) {
	$init(TextLine);
	$init($TextAttribute);
	$var($Object, value, $nc(aci)->getAttribute($TextAttribute::FONT));
	if (value != nullptr) {
		return $cast($Font, value);
	}
	if (aci->getAttribute($TextAttribute::FAMILY) != nullptr) {
		return $Font::getFont($(aci->getAttributes()));
	}
	int32_t ch = $nc($($CodePointIterator::create(static_cast<$CharacterIterator*>(aci))))->next();
	if (ch != $CodePointIterator::DONE) {
		$var($FontResolver, resolver, $FontResolver::getInstance());
		int32_t var$0 = resolver->getFontIndex(ch);
		return $nc(resolver)->getFont(var$0, $(aci->getAttributes()));
	}
	return nullptr;
}

int32_t TextLine::firstVisualChunk($ints* order, $bytes* direction, int32_t start, int32_t limit) {
	$init(TextLine);
	if (order != nullptr && direction != nullptr) {
		int8_t dir = direction->get(start);
		while (true) {
			bool var$0 = ++start < limit;
			if (!(var$0 && direction->get(start) == dir)) {
				break;
			}
			{
			}
		}
		return start;
	}
	return limit;
}

TextLine* TextLine::getJustifiedLine(float justificationWidth, float justifyRatio, int32_t justStart, int32_t justLimit) {
	$var($TextLineComponentArray, newComponents, $new($TextLineComponentArray, $nc(this->fComponents)->length));
	$System::arraycopy(this->fComponents, 0, newComponents, 0, $nc(this->fComponents)->length);
	float leftHang = (float)0;
	float adv = (float)0;
	float justifyDelta = (float)0;
	bool rejustify = false;
	do {
		adv = getAdvanceBetween(newComponents, 0, characterCount());
		float justifyAdvance = getAdvanceBetween(newComponents, justStart, justLimit);
		justifyDelta = (justificationWidth - justifyAdvance) * justifyRatio;
		$var($ints, infoPositions, $new($ints, newComponents->length));
		int32_t infoCount = 0;
		for (int32_t visIndex = 0; visIndex < newComponents->length; ++visIndex) {
			int32_t logIndex = getComponentLogicalIndex(visIndex);
			infoPositions->set(logIndex, infoCount);
			infoCount += $nc(newComponents->get(logIndex))->getNumJustificationInfos();
		}
		$var($GlyphJustificationInfoArray, infos, $new($GlyphJustificationInfoArray, infoCount));
		int32_t compStart = 0;
		for (int32_t i = 0; i < newComponents->length; ++i) {
			$var($TextLineComponent, comp, newComponents->get(i));
			int32_t compLength = $nc(comp)->getNumCharacters();
			int32_t compLimit = compStart + compLength;
			if (compLimit > justStart) {
				int32_t rangeMin = $Math::max(0, justStart - compStart);
				int32_t rangeMax = $Math::min(compLength, justLimit - compStart);
				comp->getJustificationInfos(infos, infoPositions->get(i), rangeMin, rangeMax);
				if (compLimit >= justLimit) {
					break;
				}
			}
		}
		int32_t infoStart = 0;
		int32_t infoLimit = infoCount;
		while (infoStart < infoLimit && infos->get(infoStart) == nullptr) {
			++infoStart;
		}
		while (infoLimit > infoStart && infos->get(infoLimit - 1) == nullptr) {
			--infoLimit;
		}
		$var($TextJustifier, justifier, $new($TextJustifier, infos, infoStart, infoLimit));
		$var($floats, deltas, justifier->justify(justifyDelta));
		bool canRejustify = rejustify == false;
		bool wantRejustify = false;
		$var($booleans, flags, $new($booleans, 1));
		compStart = 0;
		for (int32_t i = 0; i < newComponents->length; ++i) {
			$var($TextLineComponent, comp, newComponents->get(i));
			int32_t compLength = $nc(comp)->getNumCharacters();
			int32_t compLimit = compStart + compLength;
			if (compLimit > justStart) {
				int32_t rangeMin = $Math::max(0, justStart - compStart);
				int32_t rangeMax = $Math::min(compLength, justLimit - compStart);
				newComponents->set(i, $(comp->applyJustificationDeltas(deltas, infoPositions->get(i) * 2, flags)));
				wantRejustify |= flags->get(0);
				if (compLimit >= justLimit) {
					break;
				}
			}
		}
		rejustify = wantRejustify && !rejustify;
	} while (rejustify);
	return $new(TextLine, this->frc, newComponents, this->fBaselineOffsets, this->fChars, this->fCharsStart, this->fCharsLimit, this->fCharLogicalOrder, this->fCharLevels, this->fIsDirectionLTR);
}

float TextLine::getAdvanceBetween($TextLineComponentArray* components, int32_t start, int32_t limit) {
	$init(TextLine);
	float advance = (float)0;
	int32_t tlcStart = 0;
	for (int32_t i = 0; i < $nc(components)->length; ++i) {
		$var($TextLineComponent, comp, components->get(i));
		int32_t tlcLength = $nc(comp)->getNumCharacters();
		int32_t tlcLimit = tlcStart + tlcLength;
		if (tlcLimit > start) {
			int32_t measureStart = $Math::max(0, start - tlcStart);
			int32_t measureLimit = $Math::min(tlcLength, limit - tlcStart);
			advance += comp->getAdvanceBetween(measureStart, measureLimit);
			if (tlcLimit >= limit) {
				break;
			}
		}
		tlcStart = tlcLimit;
	}
	return advance;
}

$LayoutPathImpl* TextLine::getLayoutPath() {
	return this->lp;
}

void clinit$TextLine($Class* class$) {
	$assignStatic(TextLine::fgPosAdvF, $new($TextLine$1));
	$assignStatic(TextLine::fgAdvanceF, $new($TextLine$2));
	$assignStatic(TextLine::fgXPositionF, $new($TextLine$3));
	$assignStatic(TextLine::fgYPositionF, $new($TextLine$4));
}

TextLine::TextLine() {
}

$Class* TextLine::load$($String* name, bool initialize) {
	$loadClass(TextLine, name, initialize, &_TextLine_ClassInfo_, clinit$TextLine, allocate$TextLine);
	return class$;
}

$Class* TextLine::class$ = nullptr;

		} // font
	} // awt
} // java