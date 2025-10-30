#include <java/awt/font/TextLayout.h>

#include <java/awt/Font.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GraphicAttribute.h>
#include <java/awt/font/LayoutPath.h>
#include <java/awt/font/LineMetrics.h>
#include <java/awt/font/NumericShaper.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/font/TextLayout$CaretPolicy.h>
#include <java/awt/font/TextLine$TextLineMetrics.h>
#include <java/awt/font/TextLine.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Error.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/AttributedString.h>
#include <java/text/CharacterIterator.h>
#include <java/util/Map.h>
#include <sun/font/AttributeValues.h>
#include <sun/font/CodePointIterator.h>
#include <sun/font/CoreMetrics.h>
#include <sun/font/FontResolver.h>
#include <sun/font/GraphicComponent.h>
#include <sun/font/LayoutPathImpl.h>
#include <jcpp.h>

#undef ALREADY_JUSTIFIED
#undef BOTTOM_ALIGNMENT
#undef CHAR_REPLACEMENT
#undef DEFAULT_CARET_POLICY
#undef DONE
#undef FAMILY
#undef FONT
#undef MAX_VALUE
#undef ROMAN_BASELINE
#undef TOP_ALIGNMENT
#undef WIND_EVEN_ODD
#undef WIND_NON_ZERO

using $ShapeArray = $Array<::java::awt::Shape>;
using $Font = ::java::awt::Font;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GraphicAttribute = ::java::awt::font::GraphicAttribute;
using $LayoutPath = ::java::awt::font::LayoutPath;
using $LineMetrics = ::java::awt::font::LineMetrics;
using $NumericShaper = ::java::awt::font::NumericShaper;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $TextLayout$CaretPolicy = ::java::awt::font::TextLayout$CaretPolicy;
using $TextLine = ::java::awt::font::TextLine;
using $TextLine$TextLineMetrics = ::java::awt::font::TextLine$TextLineMetrics;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $AttributedString = ::java::text::AttributedString;
using $CharacterIterator = ::java::text::CharacterIterator;
using $Map = ::java::util::Map;
using $AttributeValues = ::sun::font::AttributeValues;
using $CodePointIterator = ::sun::font::CodePointIterator;
using $CoreMetrics = ::sun::font::CoreMetrics;
using $FontResolver = ::sun::font::FontResolver;
using $GraphicComponent = ::sun::font::GraphicComponent;
using $LayoutPathImpl = ::sun::font::LayoutPathImpl;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _TextLayout_FieldInfo_[] = {
	{"characterCount", "I", nullptr, $PRIVATE, $field(TextLayout, characterCount)},
	{"isVerticalLine", "Z", nullptr, $PRIVATE, $field(TextLayout, isVerticalLine)},
	{"baseline", "B", nullptr, $PRIVATE, $field(TextLayout, baseline)},
	{"baselineOffsets", "[F", nullptr, $PRIVATE, $field(TextLayout, baselineOffsets)},
	{"textLine", "Ljava/awt/font/TextLine;", nullptr, $PRIVATE, $field(TextLayout, textLine)},
	{"lineMetrics", "Ljava/awt/font/TextLine$TextLineMetrics;", nullptr, $PRIVATE, $field(TextLayout, lineMetrics)},
	{"visibleAdvance", "F", nullptr, $PRIVATE, $field(TextLayout, visibleAdvance)},
	{"cacheIsValid", "Z", nullptr, $PRIVATE, $field(TextLayout, cacheIsValid)},
	{"justifyRatio", "F", nullptr, $PRIVATE, $field(TextLayout, justifyRatio)},
	{"ALREADY_JUSTIFIED", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TextLayout, ALREADY_JUSTIFIED)},
	{"dx", "F", nullptr, $PRIVATE | $STATIC, $staticField(TextLayout, dx)},
	{"dy", "F", nullptr, $PRIVATE | $STATIC, $staticField(TextLayout, dy)},
	{"naturalBounds", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(TextLayout, naturalBounds)},
	{"boundsRect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(TextLayout, boundsRect)},
	{"caretsInLigaturesAreAllowed", "Z", nullptr, $PRIVATE, $field(TextLayout, caretsInLigaturesAreAllowed)},
	{"DEFAULT_CARET_POLICY", "Ljava/awt/font/TextLayout$CaretPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TextLayout, DEFAULT_CARET_POLICY)},
	{}
};

$MethodInfo _TextLayout_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/awt/Font;Ljava/awt/font/FontRenderContext;)V", nullptr, $PUBLIC, $method(static_cast<void(TextLayout::*)($String*,$Font*,$FontRenderContext*)>(&TextLayout::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/util/Map;Ljava/awt/font/FontRenderContext;)V", "(Ljava/lang/String;Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;Ljava/awt/font/FontRenderContext;)V", $PUBLIC, $method(static_cast<void(TextLayout::*)($String*,$Map*,$FontRenderContext*)>(&TextLayout::init$))},
	{"<init>", "(Ljava/text/AttributedCharacterIterator;Ljava/awt/font/FontRenderContext;)V", nullptr, $PUBLIC, $method(static_cast<void(TextLayout::*)($AttributedCharacterIterator*,$FontRenderContext*)>(&TextLayout::init$))},
	{"<init>", "(Ljava/awt/font/TextLine;B[FF)V", nullptr, 0, $method(static_cast<void(TextLayout::*)($TextLine*,int8_t,$floats*,float)>(&TextLayout::init$))},
	{"boundingShape", "([D[D)Ljava/awt/geom/GeneralPath;", nullptr, $PRIVATE, $method(static_cast<$GeneralPath*(TextLayout::*)($doubles*,$doubles*)>(&TextLayout::boundingShape))},
	{"buildCache", "()V", nullptr, $PRIVATE, $method(static_cast<void(TextLayout::*)()>(&TextLayout::buildCache))},
	{"caretBoundingShape", "(IILjava/awt/geom/Rectangle2D;)Ljava/awt/geom/GeneralPath;", nullptr, $PRIVATE, $method(static_cast<$GeneralPath*(TextLayout::*)(int32_t,int32_t,$Rectangle2D*)>(&TextLayout::caretBoundingShape))},
	{"caretIsValid", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(TextLayout::*)(int32_t)>(&TextLayout::caretIsValid))},
	{"caretToHit", "(I)Ljava/awt/font/TextHitInfo;", nullptr, $PRIVATE, $method(static_cast<$TextHitInfo*(TextLayout::*)(int32_t)>(&TextLayout::caretToHit))},
	{"caretToPointDistance", "([FFF)F", nullptr, $PRIVATE, $method(static_cast<float(TextLayout::*)($floats*,float,float)>(&TextLayout::caretToPointDistance))},
	{"checkTextHit", "(Ljava/awt/font/TextHitInfo;)V", nullptr, $PRIVATE, $method(static_cast<void(TextLayout::*)($TextHitInfo*)>(&TextLayout::checkTextHit))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"draw", "(Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC, $method(static_cast<void(TextLayout::*)($Graphics2D*,float,float)>(&TextLayout::draw))},
	{"ensureCache", "()V", nullptr, $PRIVATE, $method(static_cast<void(TextLayout::*)()>(&TextLayout::ensureCache))},
	{"equals", "(Ljava/awt/font/TextLayout;)Z", nullptr, $PUBLIC, $method(static_cast<bool(TextLayout::*)(TextLayout*)>(&TextLayout::equals))},
	{"fastInit", "([CLjava/awt/Font;Ljava/util/Map;Ljava/awt/font/FontRenderContext;)V", "([CLjava/awt/Font;Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;Ljava/awt/font/FontRenderContext;)V", $PRIVATE, $method(static_cast<void(TextLayout::*)($chars*,$Font*,$Map*,$FontRenderContext*)>(&TextLayout::fastInit))},
	{"getAdvance", "()F", nullptr, $PUBLIC, $method(static_cast<float(TextLayout::*)()>(&TextLayout::getAdvance))},
	{"getAscent", "()F", nullptr, $PUBLIC, $method(static_cast<float(TextLayout::*)()>(&TextLayout::getAscent))},
	{"getBaseline", "()B", nullptr, $PUBLIC, $method(static_cast<int8_t(TextLayout::*)()>(&TextLayout::getBaseline))},
	{"getBaselineFromGraphic", "(Ljava/awt/font/GraphicAttribute;)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($GraphicAttribute*)>(&TextLayout::getBaselineFromGraphic))},
	{"getBaselineOffsets", "()[F", nullptr, $PUBLIC, $method(static_cast<$floats*(TextLayout::*)()>(&TextLayout::getBaselineOffsets))},
	{"getBlackBoxBounds", "(II)Ljava/awt/Shape;", nullptr, $PUBLIC, $method(static_cast<$Shape*(TextLayout::*)(int32_t,int32_t)>(&TextLayout::getBlackBoxBounds))},
	{"getBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, $method(static_cast<$Rectangle2D*(TextLayout::*)()>(&TextLayout::getBounds))},
	{"getCaretInfo", "(ILjava/awt/geom/Rectangle2D;[F)[F", nullptr, $PRIVATE, $method(static_cast<$floats*(TextLayout::*)(int32_t,$Rectangle2D*,$floats*)>(&TextLayout::getCaretInfo))},
	{"getCaretInfo", "(Ljava/awt/font/TextHitInfo;Ljava/awt/geom/Rectangle2D;)[F", nullptr, $PUBLIC, $method(static_cast<$floats*(TextLayout::*)($TextHitInfo*,$Rectangle2D*)>(&TextLayout::getCaretInfo))},
	{"getCaretInfo", "(Ljava/awt/font/TextHitInfo;)[F", nullptr, $PUBLIC, $method(static_cast<$floats*(TextLayout::*)($TextHitInfo*)>(&TextLayout::getCaretInfo))},
	{"getCaretInfoTestInternal", "(Ljava/awt/font/TextHitInfo;Ljava/awt/geom/Rectangle2D;)[F", nullptr, $PRIVATE, $method(static_cast<$floats*(TextLayout::*)($TextHitInfo*,$Rectangle2D*)>(&TextLayout::getCaretInfoTestInternal))},
	{"getCaretPath", "(Ljava/awt/font/TextHitInfo;Ljava/awt/geom/Rectangle2D;)[D", nullptr, $PRIVATE, $method(static_cast<$doubles*(TextLayout::*)($TextHitInfo*,$Rectangle2D*)>(&TextLayout::getCaretPath))},
	{"getCaretPath", "(ILjava/awt/geom/Rectangle2D;Z)[D", nullptr, $PRIVATE, $method(static_cast<$doubles*(TextLayout::*)(int32_t,$Rectangle2D*,bool)>(&TextLayout::getCaretPath))},
	{"getCaretShape", "(Ljava/awt/font/TextHitInfo;Ljava/awt/geom/Rectangle2D;)Ljava/awt/Shape;", nullptr, $PUBLIC, $method(static_cast<$Shape*(TextLayout::*)($TextHitInfo*,$Rectangle2D*)>(&TextLayout::getCaretShape))},
	{"getCaretShape", "(Ljava/awt/font/TextHitInfo;)Ljava/awt/Shape;", nullptr, $PUBLIC, $method(static_cast<$Shape*(TextLayout::*)($TextHitInfo*)>(&TextLayout::getCaretShape))},
	{"getCaretShapes", "(ILjava/awt/geom/Rectangle2D;Ljava/awt/font/TextLayout$CaretPolicy;)[Ljava/awt/Shape;", nullptr, $PUBLIC, $method(static_cast<$ShapeArray*(TextLayout::*)(int32_t,$Rectangle2D*,$TextLayout$CaretPolicy*)>(&TextLayout::getCaretShapes))},
	{"getCaretShapes", "(ILjava/awt/geom/Rectangle2D;)[Ljava/awt/Shape;", nullptr, $PUBLIC, $method(static_cast<$ShapeArray*(TextLayout::*)(int32_t,$Rectangle2D*)>(&TextLayout::getCaretShapes))},
	{"getCaretShapes", "(I)[Ljava/awt/Shape;", nullptr, $PUBLIC, $method(static_cast<$ShapeArray*(TextLayout::*)(int32_t)>(&TextLayout::getCaretShapes))},
	{"getCharacterCount", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(TextLayout::*)()>(&TextLayout::getCharacterCount))},
	{"getCharacterLevel", "(I)B", nullptr, $PUBLIC, $method(static_cast<int8_t(TextLayout::*)(int32_t)>(&TextLayout::getCharacterLevel))},
	{"getDescent", "()F", nullptr, $PUBLIC, $method(static_cast<float(TextLayout::*)()>(&TextLayout::getDescent))},
	{"getJustifiedLayout", "(F)Ljava/awt/font/TextLayout;", nullptr, $PUBLIC, $method(static_cast<TextLayout*(TextLayout::*)(float)>(&TextLayout::getJustifiedLayout))},
	{"getLayoutPath", "()Ljava/awt/font/LayoutPath;", nullptr, $PUBLIC, $method(static_cast<$LayoutPath*(TextLayout::*)()>(&TextLayout::getLayoutPath))},
	{"getLeading", "()F", nullptr, $PUBLIC, $method(static_cast<float(TextLayout::*)()>(&TextLayout::getLeading))},
	{"getLogicalHighlightShape", "(IILjava/awt/geom/Rectangle2D;)Ljava/awt/Shape;", nullptr, $PUBLIC, $method(static_cast<$Shape*(TextLayout::*)(int32_t,int32_t,$Rectangle2D*)>(&TextLayout::getLogicalHighlightShape))},
	{"getLogicalHighlightShape", "(II)Ljava/awt/Shape;", nullptr, $PUBLIC, $method(static_cast<$Shape*(TextLayout::*)(int32_t,int32_t)>(&TextLayout::getLogicalHighlightShape))},
	{"getLogicalRangesForVisualSelection", "(Ljava/awt/font/TextHitInfo;Ljava/awt/font/TextHitInfo;)[I", nullptr, $PUBLIC, $method(static_cast<$ints*(TextLayout::*)($TextHitInfo*,$TextHitInfo*)>(&TextLayout::getLogicalRangesForVisualSelection))},
	{"getNaturalBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(TextLayout::*)()>(&TextLayout::getNaturalBounds))},
	{"getNextLeftHit", "(Ljava/awt/font/TextHitInfo;)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC, $method(static_cast<$TextHitInfo*(TextLayout::*)($TextHitInfo*)>(&TextLayout::getNextLeftHit))},
	{"getNextLeftHit", "(ILjava/awt/font/TextLayout$CaretPolicy;)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC, $method(static_cast<$TextHitInfo*(TextLayout::*)(int32_t,$TextLayout$CaretPolicy*)>(&TextLayout::getNextLeftHit))},
	{"getNextLeftHit", "(I)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC, $method(static_cast<$TextHitInfo*(TextLayout::*)(int32_t)>(&TextLayout::getNextLeftHit))},
	{"getNextRightHit", "(Ljava/awt/font/TextHitInfo;)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC, $method(static_cast<$TextHitInfo*(TextLayout::*)($TextHitInfo*)>(&TextLayout::getNextRightHit))},
	{"getNextRightHit", "(ILjava/awt/font/TextLayout$CaretPolicy;)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC, $method(static_cast<$TextHitInfo*(TextLayout::*)(int32_t,$TextLayout$CaretPolicy*)>(&TextLayout::getNextRightHit))},
	{"getNextRightHit", "(I)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC, $method(static_cast<$TextHitInfo*(TextLayout::*)(int32_t)>(&TextLayout::getNextRightHit))},
	{"getOutline", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/Shape;", nullptr, $PUBLIC, $method(static_cast<$Shape*(TextLayout::*)($AffineTransform*)>(&TextLayout::getOutline))},
	{"getPixelBounds", "(Ljava/awt/font/FontRenderContext;FF)Ljava/awt/Rectangle;", nullptr, $PUBLIC, $method(static_cast<$Rectangle*(TextLayout::*)($FontRenderContext*,float,float)>(&TextLayout::getPixelBounds))},
	{"getStrongHit", "(Ljava/awt/font/TextHitInfo;Ljava/awt/font/TextHitInfo;)Ljava/awt/font/TextHitInfo;", nullptr, $PRIVATE, $method(static_cast<$TextHitInfo*(TextLayout::*)($TextHitInfo*,$TextHitInfo*)>(&TextLayout::getStrongHit))},
	{"getTextLineForTesting", "()Ljava/awt/font/TextLine;", nullptr, 0, $method(static_cast<$TextLine*(TextLayout::*)()>(&TextLayout::getTextLineForTesting))},
	{"getVisibleAdvance", "()F", nullptr, $PUBLIC, $method(static_cast<float(TextLayout::*)()>(&TextLayout::getVisibleAdvance))},
	{"getVisualHighlightShape", "(Ljava/awt/font/TextHitInfo;Ljava/awt/font/TextHitInfo;Ljava/awt/geom/Rectangle2D;)Ljava/awt/Shape;", nullptr, $PUBLIC, $method(static_cast<$Shape*(TextLayout::*)($TextHitInfo*,$TextHitInfo*,$Rectangle2D*)>(&TextLayout::getVisualHighlightShape))},
	{"getVisualHighlightShape", "(Ljava/awt/font/TextHitInfo;Ljava/awt/font/TextHitInfo;)Ljava/awt/Shape;", nullptr, $PUBLIC, $method(static_cast<$Shape*(TextLayout::*)($TextHitInfo*,$TextHitInfo*)>(&TextLayout::getVisualHighlightShape))},
	{"getVisualOtherHit", "(Ljava/awt/font/TextHitInfo;)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC, $method(static_cast<$TextHitInfo*(TextLayout::*)($TextHitInfo*)>(&TextLayout::getVisualOtherHit))},
	{"handleJustify", "(F)V", nullptr, $PROTECTED, $method(static_cast<void(TextLayout::*)(float)>(&TextLayout::handleJustify))},
	{"hitTestChar", "(FFLjava/awt/geom/Rectangle2D;)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC, $method(static_cast<$TextHitInfo*(TextLayout::*)(float,float,$Rectangle2D*)>(&TextLayout::hitTestChar))},
	{"hitTestChar", "(FF)Ljava/awt/font/TextHitInfo;", nullptr, $PUBLIC, $method(static_cast<$TextHitInfo*(TextLayout::*)(float,float)>(&TextLayout::hitTestChar))},
	{"hitToCaret", "(Ljava/awt/font/TextHitInfo;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TextLayout::*)($TextHitInfo*)>(&TextLayout::hitToCaret))},
	{"hitToPoint", "(Ljava/awt/font/TextHitInfo;Ljava/awt/geom/Point2D;)V", nullptr, $PUBLIC, $method(static_cast<void(TextLayout::*)($TextHitInfo*,$Point2D*)>(&TextLayout::hitToPoint))},
	{"isLeftToRight", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(TextLayout::*)()>(&TextLayout::isLeftToRight))},
	{"isVertical", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(TextLayout::*)()>(&TextLayout::isVertical))},
	{"leftShape", "(Ljava/awt/geom/Rectangle2D;)Ljava/awt/geom/GeneralPath;", nullptr, $PRIVATE, $method(static_cast<$GeneralPath*(TextLayout::*)($Rectangle2D*)>(&TextLayout::leftShape))},
	{"paragraphInit", "(BLsun/font/CoreMetrics;Ljava/util/Map;[C)V", "(BLsun/font/CoreMetrics;Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;[C)V", $PRIVATE, $method(static_cast<void(TextLayout::*)(int8_t,$CoreMetrics*,$Map*,$chars*)>(&TextLayout::paragraphInit))},
	{"pathToShape", "([DZLsun/font/LayoutPathImpl;)Ljava/awt/geom/GeneralPath;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$GeneralPath*(*)($doubles*,bool,$LayoutPathImpl*)>(&TextLayout::pathToShape))},
	{"rightShape", "(Ljava/awt/geom/Rectangle2D;)Ljava/awt/geom/GeneralPath;", nullptr, $PRIVATE, $method(static_cast<$GeneralPath*(TextLayout::*)($Rectangle2D*)>(&TextLayout::rightShape))},
	{"sameBaselineUpTo", "(Ljava/awt/Font;[CII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Font*,$chars*,int32_t,int32_t)>(&TextLayout::sameBaselineUpTo))},
	{"singleFont", "([CIILjava/util/Map;)Ljava/awt/Font;", "([CIILjava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;)Ljava/awt/Font;", $PRIVATE | $STATIC, $method(static_cast<$Font*(*)($chars*,int32_t,int32_t,$Map*)>(&TextLayout::singleFont))},
	{"standardInit", "(Ljava/text/AttributedCharacterIterator;[CLjava/awt/font/FontRenderContext;)V", nullptr, $PRIVATE, $method(static_cast<void(TextLayout::*)($AttributedCharacterIterator*,$chars*,$FontRenderContext*)>(&TextLayout::standardInit))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TextLayout_InnerClassesInfo_[] = {
	{"java.awt.font.TextLayout$CaretPolicy", "java.awt.font.TextLayout", "CaretPolicy", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TextLayout_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.font.TextLayout",
	"java.lang.Object",
	"java.lang.Cloneable",
	_TextLayout_FieldInfo_,
	_TextLayout_MethodInfo_,
	nullptr,
	nullptr,
	_TextLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.font.TextLayout$CaretPolicy"
};

$Object* allocate$TextLayout($Class* clazz) {
	return $of($alloc(TextLayout));
}

float TextLayout::ALREADY_JUSTIFIED = 0.0;
float TextLayout::dx = 0.0;
float TextLayout::dy = 0.0;
$TextLayout$CaretPolicy* TextLayout::DEFAULT_CARET_POLICY = nullptr;

void TextLayout::init$($String* string, $Font* font, $FontRenderContext* frc) {
	$useLocalCurrentObjectStackCache();
	this->isVerticalLine = false;
	$set(this, lineMetrics, nullptr);
	this->cacheIsValid = false;
	$set(this, naturalBounds, nullptr);
	$set(this, boundsRect, nullptr);
	this->caretsInLigaturesAreAllowed = false;
	if (font == nullptr) {
		$throwNew($IllegalArgumentException, "Null font passed to TextLayout constructor."_s);
	}
	if (string == nullptr) {
		$throwNew($IllegalArgumentException, "Null string passed to TextLayout constructor."_s);
	}
	if ($nc(string)->length() == 0) {
		$throwNew($IllegalArgumentException, "Zero length string passed to TextLayout constructor."_s);
	}
	$var($Map, attributes, nullptr);
	if ($nc(font)->hasLayoutAttributes()) {
		$assign(attributes, font->getAttributes());
	}
	$var($chars, text, $nc(string)->toCharArray());
	if (sameBaselineUpTo(font, text, 0, text->length) == text->length) {
		fastInit(text, font, attributes, frc);
	} else {
		$var($AttributedString, as, attributes == nullptr ? $new($AttributedString, string) : $new($AttributedString, string, attributes));
		$init($TextAttribute);
		$nc(as)->addAttribute($TextAttribute::FONT, font);
		standardInit($(as->getIterator()), text, frc);
	}
}

void TextLayout::init$($String* string, $Map* attributes, $FontRenderContext* frc) {
	$useLocalCurrentObjectStackCache();
	this->isVerticalLine = false;
	$set(this, lineMetrics, nullptr);
	this->cacheIsValid = false;
	$set(this, naturalBounds, nullptr);
	$set(this, boundsRect, nullptr);
	this->caretsInLigaturesAreAllowed = false;
	if (string == nullptr) {
		$throwNew($IllegalArgumentException, "Null string passed to TextLayout constructor."_s);
	}
	if (attributes == nullptr) {
		$throwNew($IllegalArgumentException, "Null map passed to TextLayout constructor."_s);
	}
	if ($nc(string)->length() == 0) {
		$throwNew($IllegalArgumentException, "Zero length string passed to TextLayout constructor."_s);
	}
	$var($chars, text, $nc(string)->toCharArray());
	$var($Font, font, singleFont(text, 0, text->length, attributes));
	if (font != nullptr) {
		fastInit(text, font, attributes, frc);
	} else {
		$var($AttributedString, as, $new($AttributedString, string, attributes));
		standardInit($(as->getIterator()), text, frc);
	}
}

$Font* TextLayout::singleFont($chars* text, int32_t start, int32_t limit, $Map* attributes) {
	$init(TextLayout);
	$useLocalCurrentObjectStackCache();
	$init($TextAttribute);
	if ($nc(attributes)->get($TextAttribute::CHAR_REPLACEMENT) != nullptr) {
		return nullptr;
	}
	$var($Font, font, nullptr);
	try {
		$assign(font, $cast($Font, $nc(attributes)->get($TextAttribute::FONT)));
	} catch ($ClassCastException& e) {
	}
	if (font == nullptr) {
		if ($nc(attributes)->get($TextAttribute::FAMILY) != nullptr) {
			$assign(font, $Font::getFont(attributes));
			if ($nc(font)->canDisplayUpTo(text, start, limit) != -1) {
				return nullptr;
			}
		} else {
			$var($FontResolver, resolver, $FontResolver::getInstance());
			$var($CodePointIterator, iter, $CodePointIterator::create(text, start, limit));
			int32_t fontIndex = $nc(resolver)->nextFontRunIndex(iter);
			if ($nc(iter)->charIndex() == limit) {
				$assign(font, resolver->getFont(fontIndex, attributes));
			}
		}
	}
	if (sameBaselineUpTo(font, text, start, limit) != limit) {
		return nullptr;
	}
	return font;
}

void TextLayout::init$($AttributedCharacterIterator* text, $FontRenderContext* frc) {
	$useLocalCurrentObjectStackCache();
	this->isVerticalLine = false;
	$set(this, lineMetrics, nullptr);
	this->cacheIsValid = false;
	$set(this, naturalBounds, nullptr);
	$set(this, boundsRect, nullptr);
	this->caretsInLigaturesAreAllowed = false;
	if (text == nullptr) {
		$throwNew($IllegalArgumentException, "Null iterator passed to TextLayout constructor."_s);
	}
	int32_t start = $nc(text)->getBeginIndex();
	int32_t limit = text->getEndIndex();
	if (start == limit) {
		$throwNew($IllegalArgumentException, "Zero length iterator passed to TextLayout constructor."_s);
	}
	int32_t len = limit - start;
	text->first();
	$var($chars, chars, $new($chars, len));
	int32_t n = 0;
	for (char16_t c = text->first(); c != $CharacterIterator::DONE; c = text->next()) {
		chars->set(n++, c);
	}
	text->first();
	if (text->getRunLimit() == limit) {
		$var($Map, attributes, text->getAttributes());
		$var($Font, font, singleFont(chars, 0, len, attributes));
		if (font != nullptr) {
			fastInit(chars, font, attributes, frc);
			return;
		}
	}
	standardInit(text, chars, frc);
}

void TextLayout::init$($TextLine* textLine, int8_t baseline, $floats* baselineOffsets, float justifyRatio) {
	this->isVerticalLine = false;
	$set(this, lineMetrics, nullptr);
	this->cacheIsValid = false;
	$set(this, naturalBounds, nullptr);
	$set(this, boundsRect, nullptr);
	this->caretsInLigaturesAreAllowed = false;
	this->characterCount = $nc(textLine)->characterCount();
	this->baseline = baseline;
	$set(this, baselineOffsets, baselineOffsets);
	$set(this, textLine, textLine);
	this->justifyRatio = justifyRatio;
}

void TextLayout::paragraphInit(int8_t aBaseline, $CoreMetrics* lm, $Map* paragraphAttrs, $chars* text) {
	this->baseline = aBaseline;
	$set(this, baselineOffsets, $TextLine::getNormalizedOffsets($nc(lm)->baselineOffsets, this->baseline));
	this->justifyRatio = $AttributeValues::getJustification(paragraphAttrs);
	$var($NumericShaper, shaper, $AttributeValues::getNumericShaping(paragraphAttrs));
	if (shaper != nullptr) {
		shaper->shape(text, 0, $nc(text)->length);
	}
}

void TextLayout::fastInit($chars* chars, $Font* font, $Map* attrs, $FontRenderContext* frc) {
	$useLocalCurrentObjectStackCache();
	this->isVerticalLine = false;
	$var($LineMetrics, lm, $nc(font)->getLineMetrics(chars, 0, $nc(chars)->length, frc));
	$var($CoreMetrics, cm, $CoreMetrics::get(lm));
	int8_t glyphBaseline = (int8_t)$nc(cm)->baselineIndex;
	if (attrs == nullptr) {
		this->baseline = glyphBaseline;
		$set(this, baselineOffsets, cm->baselineOffsets);
		this->justifyRatio = 1.0f;
	} else {
		paragraphInit(glyphBaseline, cm, attrs, chars);
	}
	this->characterCount = $nc(chars)->length;
	$set(this, textLine, $TextLine::fastCreateTextLine(frc, chars, font, cm, attrs));
}

void TextLayout::standardInit($AttributedCharacterIterator* text, $chars* chars, $FontRenderContext* frc) {
	$useLocalCurrentObjectStackCache();
	this->characterCount = $nc(chars)->length;
	{
		$var($Map, paragraphAttrs, $nc(text)->getAttributes());
		bool haveFont = $TextLine::advanceToFirstFont(text);
		if (haveFont) {
			$var($Font, defaultFont, $TextLine::getFontAtCurrentPos(text));
			int32_t var$0 = text->getIndex();
			int32_t charsStart = var$0 - text->getBeginIndex();
			$var($LineMetrics, lm, $nc(defaultFont)->getLineMetrics(chars, charsStart, charsStart + 1, frc));
			$var($CoreMetrics, cm, $CoreMetrics::get(lm));
			paragraphInit((int8_t)$nc(cm)->baselineIndex, cm, paragraphAttrs, chars);
		} else {
			$init($TextAttribute);
			$var($GraphicAttribute, graphic, $cast($GraphicAttribute, $nc(paragraphAttrs)->get($TextAttribute::CHAR_REPLACEMENT)));
			int8_t defaultBaseline = getBaselineFromGraphic(graphic);
			$var($CoreMetrics, cm, $GraphicComponent::createCoreMetrics(graphic));
			paragraphInit(defaultBaseline, cm, paragraphAttrs, chars);
		}
	}
	$set(this, textLine, $TextLine::standardCreateTextLine(frc, text, chars, this->baselineOffsets));
}

void TextLayout::ensureCache() {
	if (!this->cacheIsValid) {
		buildCache();
	}
}

void TextLayout::buildCache() {
	$set(this, lineMetrics, $nc(this->textLine)->getMetrics());
	if ($nc(this->textLine)->isDirectionLTR()) {
		int32_t lastNonSpace = this->characterCount - 1;
		while (lastNonSpace != -1) {
			int32_t logIndex = $nc(this->textLine)->visualToLogical(lastNonSpace);
			if (!$nc(this->textLine)->isCharSpace(logIndex)) {
				break;
			} else {
				--lastNonSpace;
			}
		}
		if (lastNonSpace == this->characterCount - 1) {
			this->visibleAdvance = $nc(this->lineMetrics)->advance;
		} else if (lastNonSpace == -1) {
			this->visibleAdvance = (float)0;
		} else {
			int32_t logIndex = $nc(this->textLine)->visualToLogical(lastNonSpace);
			float var$0 = $nc(this->textLine)->getCharLinePosition(logIndex);
			this->visibleAdvance = var$0 + $nc(this->textLine)->getCharAdvance(logIndex);
		}
	} else {
		int32_t leftmostNonSpace = 0;
		while (leftmostNonSpace != this->characterCount) {
			int32_t logIndex = $nc(this->textLine)->visualToLogical(leftmostNonSpace);
			if (!$nc(this->textLine)->isCharSpace(logIndex)) {
				break;
			} else {
				++leftmostNonSpace;
			}
		}
		if (leftmostNonSpace == this->characterCount) {
			this->visibleAdvance = (float)0;
		} else if (leftmostNonSpace == 0) {
			this->visibleAdvance = $nc(this->lineMetrics)->advance;
		} else {
			int32_t logIndex = $nc(this->textLine)->visualToLogical(leftmostNonSpace);
			float pos = $nc(this->textLine)->getCharLinePosition(logIndex);
			this->visibleAdvance = $nc(this->lineMetrics)->advance - pos;
		}
	}
	$set(this, naturalBounds, nullptr);
	$set(this, boundsRect, nullptr);
	this->cacheIsValid = true;
}

$Rectangle2D* TextLayout::getNaturalBounds() {
	ensureCache();
	if (this->naturalBounds == nullptr) {
		$set(this, naturalBounds, $nc(this->textLine)->getItalicBounds());
	}
	return this->naturalBounds;
}

$Object* TextLayout::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void TextLayout::checkTextHit($TextHitInfo* hit) {
	if (hit == nullptr) {
		$throwNew($IllegalArgumentException, "TextHitInfo is null."_s);
	}
	bool var$0 = $nc(hit)->getInsertionIndex() < 0;
	if (var$0 || $nc(hit)->getInsertionIndex() > this->characterCount) {
		$throwNew($IllegalArgumentException, "TextHitInfo is out of range"_s);
	}
}

TextLayout* TextLayout::getJustifiedLayout(float justificationWidth) {
	if (justificationWidth <= 0) {
		$throwNew($IllegalArgumentException, "justificationWidth <= 0 passed to TextLayout.getJustifiedLayout()"_s);
	}
	if (this->justifyRatio == TextLayout::ALREADY_JUSTIFIED) {
		$throwNew($Error, "Can\'t justify again."_s);
	}
	ensureCache();
	int32_t limit = this->characterCount;
	while (limit > 0 && $nc(this->textLine)->isCharWhitespace(limit - 1)) {
		--limit;
	}
	$var($TextLine, newLine, $nc(this->textLine)->getJustifiedLine(justificationWidth, this->justifyRatio, 0, limit));
	if (newLine != nullptr) {
		return $new(TextLayout, newLine, this->baseline, this->baselineOffsets, TextLayout::ALREADY_JUSTIFIED);
	}
	return this;
}

void TextLayout::handleJustify(float justificationWidth) {
}

int8_t TextLayout::getBaseline() {
	return this->baseline;
}

$floats* TextLayout::getBaselineOffsets() {
	$var($floats, offsets, $new($floats, $nc(this->baselineOffsets)->length));
	$System::arraycopy(this->baselineOffsets, 0, offsets, 0, offsets->length);
	return offsets;
}

float TextLayout::getAdvance() {
	ensureCache();
	return $nc(this->lineMetrics)->advance;
}

float TextLayout::getVisibleAdvance() {
	ensureCache();
	return this->visibleAdvance;
}

float TextLayout::getAscent() {
	ensureCache();
	return $nc(this->lineMetrics)->ascent;
}

float TextLayout::getDescent() {
	ensureCache();
	return $nc(this->lineMetrics)->descent;
}

float TextLayout::getLeading() {
	ensureCache();
	return $nc(this->lineMetrics)->leading;
}

$Rectangle2D* TextLayout::getBounds() {
	$useLocalCurrentObjectStackCache();
	ensureCache();
	if (this->boundsRect == nullptr) {
		$var($Rectangle2D, vb, $nc(this->textLine)->getVisualBounds());
		if (TextLayout::dx != 0 || TextLayout::dy != 0) {
			double var$0 = vb->getX() - TextLayout::dx;
			double var$1 = vb->getY() - TextLayout::dy;
			double var$2 = vb->getWidth();
			$nc(vb)->setRect(var$0, var$1, var$2, vb->getHeight());
		}
		$set(this, boundsRect, vb);
	}
	$var($Rectangle2D, bounds, $new($Rectangle2D$Float));
	bounds->setRect(this->boundsRect);
	return bounds;
}

$Rectangle* TextLayout::getPixelBounds($FontRenderContext* frc, float x, float y) {
	return $nc(this->textLine)->getPixelBounds(frc, x, y);
}

bool TextLayout::isLeftToRight() {
	return $nc(this->textLine)->isDirectionLTR();
}

bool TextLayout::isVertical() {
	return this->isVerticalLine;
}

int32_t TextLayout::getCharacterCount() {
	return this->characterCount;
}

$floats* TextLayout::getCaretInfo(int32_t caret, $Rectangle2D* bounds, $floats* info$renamed) {
	$var($floats, info, info$renamed);
	float top1X = 0.0;
	float top2X = 0.0;
	float bottom1X = 0.0;
	float bottom2X = 0.0;
	if (caret == 0 || caret == this->characterCount) {
		float pos = 0.0;
		int32_t logIndex = 0;
		if (caret == this->characterCount) {
			logIndex = $nc(this->textLine)->visualToLogical(this->characterCount - 1);
			float var$0 = $nc(this->textLine)->getCharLinePosition(logIndex);
			pos = var$0 + $nc(this->textLine)->getCharAdvance(logIndex);
		} else {
			logIndex = $nc(this->textLine)->visualToLogical(caret);
			pos = $nc(this->textLine)->getCharLinePosition(logIndex);
		}
		float angle = $nc(this->textLine)->getCharAngle(logIndex);
		float shift = $nc(this->textLine)->getCharShift(logIndex);
		pos += angle * shift;
		top1X = (top2X = pos + angle * $nc(this->textLine)->getCharAscent(logIndex));
		bottom1X = (bottom2X = pos - angle * $nc(this->textLine)->getCharDescent(logIndex));
	} else {
		{
			int32_t logIndex = $nc(this->textLine)->visualToLogical(caret - 1);
			float angle1 = $nc(this->textLine)->getCharAngle(logIndex);
			float var$1 = $nc(this->textLine)->getCharLinePosition(logIndex);
			float pos1 = var$1 + $nc(this->textLine)->getCharAdvance(logIndex);
			if (angle1 != 0) {
				pos1 += angle1 * $nc(this->textLine)->getCharShift(logIndex);
				top1X = pos1 + angle1 * $nc(this->textLine)->getCharAscent(logIndex);
				bottom1X = pos1 - angle1 * $nc(this->textLine)->getCharDescent(logIndex);
			} else {
				top1X = (bottom1X = pos1);
			}
		}
		{
			int32_t logIndex = $nc(this->textLine)->visualToLogical(caret);
			float angle2 = $nc(this->textLine)->getCharAngle(logIndex);
			float pos2 = $nc(this->textLine)->getCharLinePosition(logIndex);
			if (angle2 != 0) {
				pos2 += angle2 * $nc(this->textLine)->getCharShift(logIndex);
				top2X = pos2 + angle2 * $nc(this->textLine)->getCharAscent(logIndex);
				bottom2X = pos2 - angle2 * $nc(this->textLine)->getCharDescent(logIndex);
			} else {
				top2X = (bottom2X = pos2);
			}
		}
	}
	float topX = (top1X + top2X) / 2;
	float bottomX = (bottom1X + bottom2X) / 2;
	if (info == nullptr) {
		$assign(info, $new($floats, 2));
	}
	if (this->isVerticalLine) {
		$nc(info)->set(1, (float)((topX - bottomX) / $nc(bounds)->getWidth()));
		info->set(0, (float)(topX + (info->get(1) * bounds->getX())));
	} else {
		$nc(info)->set(1, (float)((topX - bottomX) / $nc(bounds)->getHeight()));
		info->set(0, (float)(bottomX + (info->get(1) * bounds->getMaxY())));
	}
	return info;
}

$floats* TextLayout::getCaretInfo($TextHitInfo* hit, $Rectangle2D* bounds) {
	ensureCache();
	checkTextHit(hit);
	return getCaretInfoTestInternal(hit, bounds);
}

$floats* TextLayout::getCaretInfoTestInternal($TextHitInfo* hit, $Rectangle2D* bounds) {
	$useLocalCurrentObjectStackCache();
	ensureCache();
	checkTextHit(hit);
	$var($floats, info, $new($floats, 6));
	getCaretInfo(hitToCaret(hit), bounds, info);
	double iangle = 0.0;
	double ixbase = 0.0;
	double p1x = 0.0;
	double p1y = 0.0;
	double p2x = 0.0;
	double p2y = 0.0;
	int32_t charix = $nc(hit)->getCharIndex();
	bool lead = hit->isLeadingEdge();
	bool ltr = $nc(this->textLine)->isDirectionLTR();
	bool horiz = !isVertical();
	if (charix == -1 || charix == this->characterCount) {
		$var($TextLine$TextLineMetrics, m, $nc(this->textLine)->getMetrics());
		bool low = ltr == (charix == -1);
		iangle = (double)0;
		if (horiz) {
			p1x = (p2x = low ? (float)0 : $nc(m)->advance);
			p1y = -m->ascent;
			p2y = m->descent;
		} else {
			p1y = (p2y = low ? (float)0 : $nc(m)->advance);
			p1x = m->descent;
			p2x = m->ascent;
		}
	} else {
		$var($CoreMetrics, thiscm, $nc(this->textLine)->getCoreMetricsAt(charix));
		iangle = $nc(thiscm)->italicAngle;
		ixbase = $nc(this->textLine)->getCharLinePosition(charix, lead);
		if (thiscm->baselineIndex < 0) {
			$var($TextLine$TextLineMetrics, m, $nc(this->textLine)->getMetrics());
			if (horiz) {
				p1x = (p2x = ixbase);
				if (thiscm->baselineIndex == $GraphicAttribute::TOP_ALIGNMENT) {
					p1y = -$nc(m)->ascent;
					p2y = p1y + thiscm->height;
				} else {
					p2y = $nc(m)->descent;
					p1y = p2y - thiscm->height;
				}
			} else {
				p1y = (p2y = ixbase);
				p1x = $nc(m)->descent;
				p2x = m->ascent;
			}
		} else {
			float bo = $nc(this->baselineOffsets)->get(thiscm->baselineIndex);
			if (horiz) {
				ixbase += iangle * thiscm->ssOffset;
				p1x = ixbase + iangle * thiscm->ascent;
				p2x = ixbase - iangle * thiscm->descent;
				p1y = bo - thiscm->ascent;
				p2y = bo + thiscm->descent;
			} else {
				ixbase -= iangle * thiscm->ssOffset;
				p1y = ixbase + iangle * thiscm->ascent;
				p2y = ixbase - iangle * thiscm->descent;
				p1x = bo + thiscm->ascent;
				p2x = bo + thiscm->descent;
			}
		}
	}
	info->set(2, (float)p1x);
	info->set(3, (float)p1y);
	info->set(4, (float)p2x);
	info->set(5, (float)p2y);
	return info;
}

$floats* TextLayout::getCaretInfo($TextHitInfo* hit) {
	return getCaretInfo(hit, $(getNaturalBounds()));
}

int32_t TextLayout::hitToCaret($TextHitInfo* hit) {
	int32_t hitIndex = $nc(hit)->getCharIndex();
	if (hitIndex < 0) {
		return $nc(this->textLine)->isDirectionLTR() ? 0 : this->characterCount;
	} else if (hitIndex >= this->characterCount) {
		return $nc(this->textLine)->isDirectionLTR() ? this->characterCount : 0;
	}
	int32_t visIndex = $nc(this->textLine)->logicalToVisual(hitIndex);
	bool var$0 = hit->isLeadingEdge();
	if (var$0 != $nc(this->textLine)->isCharLTR(hitIndex)) {
		++visIndex;
	}
	return visIndex;
}

$TextHitInfo* TextLayout::caretToHit(int32_t caret) {
	if (caret == 0 || caret == this->characterCount) {
		if ((caret == this->characterCount) == $nc(this->textLine)->isDirectionLTR()) {
			return $TextHitInfo::leading(this->characterCount);
		} else {
			return $TextHitInfo::trailing(-1);
		}
	} else {
		int32_t charIndex = $nc(this->textLine)->visualToLogical(caret);
		bool leading = $nc(this->textLine)->isCharLTR(charIndex);
		return leading ? $TextHitInfo::leading(charIndex) : $TextHitInfo::trailing(charIndex);
	}
}

bool TextLayout::caretIsValid(int32_t caret) {
	if (caret == this->characterCount || caret == 0) {
		return true;
	}
	int32_t offset = $nc(this->textLine)->visualToLogical(caret);
	if (!$nc(this->textLine)->isCharLTR(offset)) {
		offset = $nc(this->textLine)->visualToLogical(caret - 1);
		if ($nc(this->textLine)->isCharLTR(offset)) {
			return true;
		}
	}
	return $nc(this->textLine)->caretAtOffsetIsValid(offset);
}

$TextHitInfo* TextLayout::getNextRightHit($TextHitInfo* hit) {
	ensureCache();
	checkTextHit(hit);
	int32_t caret = hitToCaret(hit);
	if (caret == this->characterCount) {
		return nullptr;
	}
	do {
		++caret;
	} while (!caretIsValid(caret));
	return caretToHit(caret);
}

$TextHitInfo* TextLayout::getNextRightHit(int32_t offset, $TextLayout$CaretPolicy* policy) {
	$useLocalCurrentObjectStackCache();
	if (offset < 0 || offset > this->characterCount) {
		$throwNew($IllegalArgumentException, "Offset out of bounds in TextLayout.getNextRightHit()"_s);
	}
	if (policy == nullptr) {
		$throwNew($IllegalArgumentException, "Null CaretPolicy passed to TextLayout.getNextRightHit()"_s);
	}
	$var($TextHitInfo, hit1, $TextHitInfo::afterOffset(offset));
	$var($TextHitInfo, hit2, $nc(hit1)->getOtherHit());
	$var($TextHitInfo, nextHit, getNextRightHit($($nc(policy)->getStrongCaret(hit1, hit2, this))));
	if (nextHit != nullptr) {
		$var($TextHitInfo, otherHit, getVisualOtherHit(nextHit));
		return $nc(policy)->getStrongCaret(otherHit, nextHit, this);
	} else {
		return nullptr;
	}
}

$TextHitInfo* TextLayout::getNextRightHit(int32_t offset) {
	return getNextRightHit(offset, TextLayout::DEFAULT_CARET_POLICY);
}

$TextHitInfo* TextLayout::getNextLeftHit($TextHitInfo* hit) {
	ensureCache();
	checkTextHit(hit);
	int32_t caret = hitToCaret(hit);
	if (caret == 0) {
		return nullptr;
	}
	do {
		--caret;
	} while (!caretIsValid(caret));
	return caretToHit(caret);
}

$TextHitInfo* TextLayout::getNextLeftHit(int32_t offset, $TextLayout$CaretPolicy* policy) {
	$useLocalCurrentObjectStackCache();
	if (policy == nullptr) {
		$throwNew($IllegalArgumentException, "Null CaretPolicy passed to TextLayout.getNextLeftHit()"_s);
	}
	if (offset < 0 || offset > this->characterCount) {
		$throwNew($IllegalArgumentException, "Offset out of bounds in TextLayout.getNextLeftHit()"_s);
	}
	$var($TextHitInfo, hit1, $TextHitInfo::afterOffset(offset));
	$var($TextHitInfo, hit2, $nc(hit1)->getOtherHit());
	$var($TextHitInfo, nextHit, getNextLeftHit($($nc(policy)->getStrongCaret(hit1, hit2, this))));
	if (nextHit != nullptr) {
		$var($TextHitInfo, otherHit, getVisualOtherHit(nextHit));
		return $nc(policy)->getStrongCaret(otherHit, nextHit, this);
	} else {
		return nullptr;
	}
}

$TextHitInfo* TextLayout::getNextLeftHit(int32_t offset) {
	return getNextLeftHit(offset, TextLayout::DEFAULT_CARET_POLICY);
}

$TextHitInfo* TextLayout::getVisualOtherHit($TextHitInfo* hit) {
	ensureCache();
	checkTextHit(hit);
	int32_t hitCharIndex = $nc(hit)->getCharIndex();
	int32_t charIndex = 0;
	bool leading = false;
	if (hitCharIndex == -1 || hitCharIndex == this->characterCount) {
		int32_t visIndex = 0;
		if ($nc(this->textLine)->isDirectionLTR() == (hitCharIndex == -1)) {
			visIndex = 0;
		} else {
			visIndex = this->characterCount - 1;
		}
		charIndex = $nc(this->textLine)->visualToLogical(visIndex);
		if ($nc(this->textLine)->isDirectionLTR() == (hitCharIndex == -1)) {
			leading = $nc(this->textLine)->isCharLTR(charIndex);
		} else {
			leading = !$nc(this->textLine)->isCharLTR(charIndex);
		}
	} else {
		int32_t visIndex = $nc(this->textLine)->logicalToVisual(hitCharIndex);
		bool movedToRight = false;
		bool var$0 = $nc(this->textLine)->isCharLTR(hitCharIndex);
		if (var$0 == hit->isLeadingEdge()) {
			--visIndex;
			movedToRight = false;
		} else {
			++visIndex;
			movedToRight = true;
		}
		if (visIndex > -1 && visIndex < this->characterCount) {
			charIndex = $nc(this->textLine)->visualToLogical(visIndex);
			leading = movedToRight == $nc(this->textLine)->isCharLTR(charIndex);
		} else {
			charIndex = (movedToRight == $nc(this->textLine)->isDirectionLTR()) ? this->characterCount : -1;
			leading = charIndex == this->characterCount;
		}
	}
	return leading ? $TextHitInfo::leading(charIndex) : $TextHitInfo::trailing(charIndex);
}

$doubles* TextLayout::getCaretPath($TextHitInfo* hit, $Rectangle2D* bounds) {
	$var($floats, info, getCaretInfo(hit, bounds));
	return $new($doubles, {
		(double)$nc(info)->get(2),
		(double)info->get(3),
		(double)info->get(4),
		(double)info->get(5)
	});
}

$doubles* TextLayout::getCaretPath(int32_t caret, $Rectangle2D* bounds, bool clipToBounds) {
	$var($floats, info, getCaretInfo(caret, bounds, nullptr));
	double pos = $nc(info)->get(0);
	double slope = info->get(1);
	double x0 = 0.0;
	double y0 = 0.0;
	double x1 = 0.0;
	double y1 = 0.0;
	double x2 = -3141.59;
	double y2 = -2.7;
	double left = $nc(bounds)->getX();
	double right = left + bounds->getWidth();
	double top = bounds->getY();
	double bottom = top + bounds->getHeight();
	bool threePoints = false;
	if (this->isVerticalLine) {
		if (slope >= 0) {
			x0 = left;
			x1 = right;
		} else {
			x1 = left;
			x0 = right;
		}
		y0 = pos + x0 * slope;
		y1 = pos + x1 * slope;
		if (clipToBounds) {
			if (y0 < top) {
				if (slope <= 0 || y1 <= top) {
					y0 = (y1 = top);
				} else {
					threePoints = true;
					y0 = top;
					y2 = top;
					x2 = x1 + (top - y1) / slope;
					if (y1 > bottom) {
						y1 = bottom;
					}
				}
			} else if (y1 > bottom) {
				if (slope >= 0 || y0 >= bottom) {
					y0 = (y1 = bottom);
				} else {
					threePoints = true;
					y1 = bottom;
					y2 = bottom;
					x2 = x0 + (bottom - x1) / slope;
				}
			}
		}
	} else {
		if (slope >= 0) {
			y0 = bottom;
			y1 = top;
		} else {
			y1 = bottom;
			y0 = top;
		}
		x0 = pos - y0 * slope;
		x1 = pos - y1 * slope;
		if (clipToBounds) {
			if (x0 < left) {
				if (slope <= 0 || x1 <= left) {
					x0 = (x1 = left);
				} else {
					threePoints = true;
					x0 = left;
					x2 = left;
					y2 = y1 - (left - x1) / slope;
					if (x1 > right) {
						x1 = right;
					}
				}
			} else if (x1 > right) {
				if (slope >= 0 || x0 >= right) {
					x0 = (x1 = right);
				} else {
					threePoints = true;
					x1 = right;
					x2 = right;
					y2 = y0 - (right - x0) / slope;
				}
			}
		}
	}
	return threePoints ? $new($doubles, {
		x0,
		y0,
		x2,
		y2,
		x1,
		y1
	}) : $new($doubles, {
		x0,
		y0,
		x1,
		y1
	});
}

$GeneralPath* TextLayout::pathToShape($doubles* path, bool close, $LayoutPathImpl* lp) {
	$init(TextLayout);
	$var($GeneralPath, result, $new($GeneralPath, $GeneralPath::WIND_EVEN_ODD, $nc(path)->length));
	result->moveTo((float)$nc(path)->get(0), (float)path->get(1));
	for (int32_t i = 2; i < $nc(path)->length; i += 2) {
		result->lineTo((float)path->get(i), (float)path->get(i + 1));
	}
	if (close) {
		result->closePath();
	}
	if (lp != nullptr) {
		$assign(result, $cast($GeneralPath, lp->mapShape(result)));
	}
	return result;
}

$Shape* TextLayout::getCaretShape($TextHitInfo* hit, $Rectangle2D* bounds) {
	$useLocalCurrentObjectStackCache();
	ensureCache();
	checkTextHit(hit);
	if (bounds == nullptr) {
		$throwNew($IllegalArgumentException, "Null Rectangle2D passed to TextLayout.getCaret()"_s);
	}
	$var($doubles, var$0, getCaretPath(hit, bounds));
	return pathToShape(var$0, false, $($nc(this->textLine)->getLayoutPath()));
}

$Shape* TextLayout::getCaretShape($TextHitInfo* hit) {
	return getCaretShape(hit, $(getNaturalBounds()));
}

$TextHitInfo* TextLayout::getStrongHit($TextHitInfo* hit1, $TextHitInfo* hit2) {
	int8_t hit1Level = getCharacterLevel($nc(hit1)->getCharIndex());
	int8_t hit2Level = getCharacterLevel($nc(hit2)->getCharIndex());
	if (hit1Level == hit2Level) {
		bool var$0 = $nc(hit2)->isLeadingEdge();
		if (var$0 && !$nc(hit1)->isLeadingEdge()) {
			return hit2;
		} else {
			return hit1;
		}
	} else {
		return (hit1Level < hit2Level) ? hit1 : hit2;
	}
}

int8_t TextLayout::getCharacterLevel(int32_t index) {
	if (index < -1 || index > this->characterCount) {
		$throwNew($IllegalArgumentException, "Index is out of range in getCharacterLevel."_s);
	}
	ensureCache();
	if (index == -1 || index == this->characterCount) {
		return (int8_t)($nc(this->textLine)->isDirectionLTR() ? 0 : 1);
	}
	return $nc(this->textLine)->getCharLevel(index);
}

$ShapeArray* TextLayout::getCaretShapes(int32_t offset, $Rectangle2D* bounds, $TextLayout$CaretPolicy* policy) {
	$useLocalCurrentObjectStackCache();
	ensureCache();
	if (offset < 0 || offset > this->characterCount) {
		$throwNew($IllegalArgumentException, "Offset out of bounds in TextLayout.getCaretShapes()"_s);
	}
	if (bounds == nullptr) {
		$throwNew($IllegalArgumentException, "Null Rectangle2D passed to TextLayout.getCaretShapes()"_s);
	}
	if (policy == nullptr) {
		$throwNew($IllegalArgumentException, "Null CaretPolicy passed to TextLayout.getCaretShapes()"_s);
	}
	$var($ShapeArray, result, $new($ShapeArray, 2));
	$var($TextHitInfo, hit, $TextHitInfo::afterOffset(offset));
	int32_t hitCaret = hitToCaret(hit);
	$var($LayoutPathImpl, lp, $nc(this->textLine)->getLayoutPath());
	$var($Shape, hitShape, pathToShape($(getCaretPath(hit, bounds)), false, lp));
	$var($TextHitInfo, otherHit, $nc(hit)->getOtherHit());
	int32_t otherCaret = hitToCaret(otherHit);
	if (hitCaret == otherCaret) {
		result->set(0, hitShape);
	} else {
		$var($Shape, otherShape, pathToShape($(getCaretPath(otherHit, bounds)), false, lp));
		$var($TextHitInfo, strongHit, $nc(policy)->getStrongCaret(hit, otherHit, this));
		bool hitIsStrong = $nc(strongHit)->equals(hit);
		if (hitIsStrong) {
			result->set(0, hitShape);
			result->set(1, otherShape);
		} else {
			result->set(0, otherShape);
			result->set(1, hitShape);
		}
	}
	return result;
}

$ShapeArray* TextLayout::getCaretShapes(int32_t offset, $Rectangle2D* bounds) {
	return getCaretShapes(offset, bounds, TextLayout::DEFAULT_CARET_POLICY);
}

$ShapeArray* TextLayout::getCaretShapes(int32_t offset) {
	return getCaretShapes(offset, $(getNaturalBounds()), TextLayout::DEFAULT_CARET_POLICY);
}

$GeneralPath* TextLayout::boundingShape($doubles* path0, $doubles* path1) {
	$var($GeneralPath, result, pathToShape(path0, false, nullptr));
	bool sameDirection = false;
	if (this->isVerticalLine) {
		sameDirection = ($nc(path0)->get(1) > path0->get(path0->length - 1)) == ($nc(path1)->get(1) > path1->get(path1->length - 1));
	} else {
		sameDirection = ($nc(path0)->get(0) > path0->get(path0->length - 2)) == ($nc(path1)->get(0) > path1->get(path1->length - 2));
	}
	int32_t start = 0;
	int32_t limit = 0;
	int32_t increment = 0;
	if (sameDirection) {
		start = $nc(path1)->length - 2;
		limit = -2;
		increment = -2;
	} else {
		start = 0;
		limit = $nc(path1)->length;
		increment = 2;
	}
	for (int32_t i = start; i != limit; i += increment) {
		$nc(result)->lineTo((float)$nc(path1)->get(i), (float)path1->get(i + 1));
	}
	$nc(result)->closePath();
	return result;
}

$GeneralPath* TextLayout::caretBoundingShape(int32_t caret0, int32_t caret1, $Rectangle2D* bounds) {
	$useLocalCurrentObjectStackCache();
	if (caret0 > caret1) {
		int32_t temp = caret0;
		caret0 = caret1;
		caret1 = temp;
	}
	$var($doubles, var$0, getCaretPath(caret0, bounds, true));
	return boundingShape(var$0, $(getCaretPath(caret1, bounds, true)));
}

$GeneralPath* TextLayout::leftShape($Rectangle2D* bounds) {
	$useLocalCurrentObjectStackCache();
	$var($doubles, path0, nullptr);
	if (this->isVerticalLine) {
		double var$0 = bounds->getX();
		$assign(path0, $new($doubles, {
			$nc(bounds)->getX(),
			bounds->getY(),
			var$0 + bounds->getWidth(),
			bounds->getY()
		}));
	} else {
		double var$1 = bounds->getY();
		$assign(path0, $new($doubles, {
			$nc(bounds)->getX(),
			var$1 + bounds->getHeight(),
			bounds->getX(),
			bounds->getY()
		}));
	}
	$var($doubles, path1, getCaretPath(0, bounds, true));
	return boundingShape(path0, path1);
}

$GeneralPath* TextLayout::rightShape($Rectangle2D* bounds) {
	$useLocalCurrentObjectStackCache();
	$var($doubles, path1, nullptr);
	if (this->isVerticalLine) {
		double var$0 = bounds->getY();
		double var$1 = bounds->getX();
		double var$2 = bounds->getY();
		$assign(path1, $new($doubles, {
			$nc(bounds)->getX(),
			var$0 + bounds->getHeight(),
			var$1 + bounds->getWidth(),
			var$2 + bounds->getHeight()
		}));
	} else {
		double var$3 = $nc(bounds)->getX();
		double var$4 = bounds->getY();
		double var$5 = bounds->getX();
		$assign(path1, $new($doubles, {
			var$3 + bounds->getWidth(),
			var$4 + bounds->getHeight(),
			var$5 + bounds->getWidth(),
			bounds->getY()
		}));
	}
	$var($doubles, path0, getCaretPath(this->characterCount, bounds, true));
	return boundingShape(path0, path1);
}

$ints* TextLayout::getLogicalRangesForVisualSelection($TextHitInfo* firstEndpoint, $TextHitInfo* secondEndpoint) {
	$useLocalCurrentObjectStackCache();
	ensureCache();
	checkTextHit(firstEndpoint);
	checkTextHit(secondEndpoint);
	$var($booleans, included, $new($booleans, this->characterCount));
	int32_t startIndex = hitToCaret(firstEndpoint);
	int32_t limitIndex = hitToCaret(secondEndpoint);
	if (startIndex > limitIndex) {
		int32_t t = startIndex;
		startIndex = limitIndex;
		limitIndex = t;
	}
	if (startIndex < limitIndex) {
		int32_t visIndex = startIndex;
		while (visIndex < limitIndex) {
			included->set($nc(this->textLine)->visualToLogical(visIndex), true);
			++visIndex;
		}
	}
	int32_t count = 0;
	bool inrun = false;
	for (int32_t i = 0; i < this->characterCount; ++i) {
		if (included->get(i) != inrun) {
			inrun = !inrun;
			if (inrun) {
				++count;
			}
		}
	}
	$var($ints, ranges, $new($ints, count * 2));
	count = 0;
	inrun = false;
	for (int32_t i = 0; i < this->characterCount; ++i) {
		if (included->get(i) != inrun) {
			ranges->set(count++, i);
			inrun = !inrun;
		}
	}
	if (inrun) {
		ranges->set(count++, this->characterCount);
	}
	return ranges;
}

$Shape* TextLayout::getVisualHighlightShape($TextHitInfo* firstEndpoint, $TextHitInfo* secondEndpoint, $Rectangle2D* bounds) {
	$useLocalCurrentObjectStackCache();
	ensureCache();
	checkTextHit(firstEndpoint);
	checkTextHit(secondEndpoint);
	if (bounds == nullptr) {
		$throwNew($IllegalArgumentException, "Null Rectangle2D passed to TextLayout.getVisualHighlightShape()"_s);
	}
	$var($GeneralPath, result, $new($GeneralPath, $GeneralPath::WIND_EVEN_ODD));
	int32_t firstCaret = hitToCaret(firstEndpoint);
	int32_t secondCaret = hitToCaret(secondEndpoint);
	result->append($(static_cast<$Shape*>(caretBoundingShape(firstCaret, secondCaret, bounds))), false);
	if (firstCaret == 0 || secondCaret == 0) {
		$var($GeneralPath, ls, leftShape(bounds));
		if (!$nc($($nc(ls)->getBounds()))->isEmpty()) {
			result->append(static_cast<$Shape*>(ls), false);
		}
	}
	if (firstCaret == this->characterCount || secondCaret == this->characterCount) {
		$var($GeneralPath, rs, rightShape(bounds));
		if (!$nc($($nc(rs)->getBounds()))->isEmpty()) {
			result->append(static_cast<$Shape*>(rs), false);
		}
	}
	$var($LayoutPathImpl, lp, $nc(this->textLine)->getLayoutPath());
	if (lp != nullptr) {
		$assign(result, $cast($GeneralPath, lp->mapShape(result)));
	}
	return result;
}

$Shape* TextLayout::getVisualHighlightShape($TextHitInfo* firstEndpoint, $TextHitInfo* secondEndpoint) {
	return getVisualHighlightShape(firstEndpoint, secondEndpoint, $(getNaturalBounds()));
}

$Shape* TextLayout::getLogicalHighlightShape(int32_t firstEndpoint, int32_t secondEndpoint, $Rectangle2D* bounds) {
	$useLocalCurrentObjectStackCache();
	if (bounds == nullptr) {
		$throwNew($IllegalArgumentException, "Null Rectangle2D passed to TextLayout.getLogicalHighlightShape()"_s);
	}
	ensureCache();
	if (firstEndpoint > secondEndpoint) {
		int32_t t = firstEndpoint;
		firstEndpoint = secondEndpoint;
		secondEndpoint = t;
	}
	if (firstEndpoint < 0 || secondEndpoint > this->characterCount) {
		$throwNew($IllegalArgumentException, "Range is invalid in TextLayout.getLogicalHighlightShape()"_s);
	}
	$var($GeneralPath, result, $new($GeneralPath, $GeneralPath::WIND_EVEN_ODD));
	$var($ints, carets, $new($ints, 10));
	int32_t count = 0;
	if (firstEndpoint < secondEndpoint) {
		int32_t logIndex = firstEndpoint;
		do {
			carets->set(count++, hitToCaret($($TextHitInfo::leading(logIndex))));
			bool ltr = $nc(this->textLine)->isCharLTR(logIndex);
			do {
				++logIndex;
			} while (logIndex < secondEndpoint && $nc(this->textLine)->isCharLTR(logIndex) == ltr);
			int32_t hitCh = logIndex;
			carets->set(count++, hitToCaret($($TextHitInfo::trailing(hitCh - 1))));
			if (count == carets->length) {
				$var($ints, temp, $new($ints, carets->length + 10));
				$System::arraycopy(carets, 0, temp, 0, count);
				$assign(carets, temp);
			}
		} while (logIndex < secondEndpoint);
	} else {
		count = 2;
		carets->set(0, carets->set(1, hitToCaret($($TextHitInfo::leading(firstEndpoint)))));
	}
	for (int32_t i = 0; i < count; i += 2) {
		result->append($(static_cast<$Shape*>(caretBoundingShape(carets->get(i), carets->get(i + 1), bounds))), false);
	}
	if (firstEndpoint != secondEndpoint) {
		bool var$0 = ($nc(this->textLine)->isDirectionLTR() && firstEndpoint == 0);
		if (var$0 || (!$nc(this->textLine)->isDirectionLTR() && secondEndpoint == this->characterCount)) {
			$var($GeneralPath, ls, leftShape(bounds));
			if (!$nc($($nc(ls)->getBounds()))->isEmpty()) {
				result->append(static_cast<$Shape*>(ls), false);
			}
		}
		bool var$1 = ($nc(this->textLine)->isDirectionLTR() && secondEndpoint == this->characterCount);
		if (var$1 || (!$nc(this->textLine)->isDirectionLTR() && firstEndpoint == 0)) {
			$var($GeneralPath, rs, rightShape(bounds));
			if (!$nc($($nc(rs)->getBounds()))->isEmpty()) {
				result->append(static_cast<$Shape*>(rs), false);
			}
		}
	}
	$var($LayoutPathImpl, lp, $nc(this->textLine)->getLayoutPath());
	if (lp != nullptr) {
		$assign(result, $cast($GeneralPath, lp->mapShape(result)));
	}
	return result;
}

$Shape* TextLayout::getLogicalHighlightShape(int32_t firstEndpoint, int32_t secondEndpoint) {
	return getLogicalHighlightShape(firstEndpoint, secondEndpoint, $(getNaturalBounds()));
}

$Shape* TextLayout::getBlackBoxBounds(int32_t firstEndpoint, int32_t secondEndpoint) {
	$useLocalCurrentObjectStackCache();
	ensureCache();
	if (firstEndpoint > secondEndpoint) {
		int32_t t = firstEndpoint;
		firstEndpoint = secondEndpoint;
		secondEndpoint = t;
	}
	if (firstEndpoint < 0 || secondEndpoint > this->characterCount) {
		$throwNew($IllegalArgumentException, "Invalid range passed to TextLayout.getBlackBoxBounds()"_s);
	}
	$var($GeneralPath, result, $new($GeneralPath, $GeneralPath::WIND_NON_ZERO));
	if (firstEndpoint < this->characterCount) {
		for (int32_t logIndex = firstEndpoint; logIndex < secondEndpoint; ++logIndex) {
			$var($Rectangle2D, r, $nc(this->textLine)->getCharBounds(logIndex));
			if (!$nc(r)->isEmpty()) {
				result->append(static_cast<$Shape*>(r), false);
			}
		}
	}
	if (TextLayout::dx != 0 || TextLayout::dy != 0) {
		$var($AffineTransform, tx, $AffineTransform::getTranslateInstance(TextLayout::dx, TextLayout::dy));
		$assign(result, $cast($GeneralPath, $nc(tx)->createTransformedShape(result)));
	}
	$var($LayoutPathImpl, lp, $nc(this->textLine)->getLayoutPath());
	if (lp != nullptr) {
		$assign(result, $cast($GeneralPath, lp->mapShape(result)));
	}
	return result;
}

float TextLayout::caretToPointDistance($floats* caretInfo, float x, float y) {
	float lineDistance = this->isVerticalLine ? y : x;
	float distanceOffBaseline = this->isVerticalLine ? -x : y;
	return lineDistance - $nc(caretInfo)->get(0) + (distanceOffBaseline * caretInfo->get(1));
}

$TextHitInfo* TextLayout::hitTestChar(float x, float y, $Rectangle2D* bounds) {
	$useLocalCurrentObjectStackCache();
	$var($LayoutPathImpl, lp, $nc(this->textLine)->getLayoutPath());
	bool prev = false;
	if (lp != nullptr) {
		$var($Point2D$Float, pt, $new($Point2D$Float, x, y));
		prev = lp->pointToPath(pt, pt);
		x = pt->x;
		y = pt->y;
	}
	if (isVertical()) {
		if (y < $nc(bounds)->getMinY()) {
			return $TextHitInfo::leading(0);
		} else if (y >= bounds->getMaxY()) {
			return $TextHitInfo::trailing(this->characterCount - 1);
		}
	} else if (x < $nc(bounds)->getMinX()) {
		return isLeftToRight() ? $TextHitInfo::leading(0) : $TextHitInfo::trailing(this->characterCount - 1);
	} else if (x >= bounds->getMaxX()) {
		return isLeftToRight() ? $TextHitInfo::trailing(this->characterCount - 1) : $TextHitInfo::leading(0);
	}
	$init($Double);
	double distance = $Double::MAX_VALUE;
	int32_t index = 0;
	int32_t trail = -1;
	$var($CoreMetrics, lcm, nullptr);
	float icx = (float)0;
	float icy = (float)0;
	float ia = (float)0;
	float cy = (float)0;
	float dya = (float)0;
	float ydsq = (float)0;
	for (int32_t i = 0; i < this->characterCount; ++i) {
		if (!$nc(this->textLine)->caretAtOffsetIsValid(i)) {
			continue;
		}
		if (trail == -1) {
			trail = i;
		}
		$var($CoreMetrics, cm, $nc(this->textLine)->getCoreMetricsAt(i));
		if (cm != lcm) {
			$assign(lcm, cm);
			if ($nc(cm)->baselineIndex == $GraphicAttribute::TOP_ALIGNMENT) {
				cy = -($nc($($nc(this->textLine)->getMetrics()))->ascent - cm->ascent) + cm->ssOffset;
			} else if (cm->baselineIndex == $GraphicAttribute::BOTTOM_ALIGNMENT) {
				cy = $nc($($nc(this->textLine)->getMetrics()))->descent - cm->descent + cm->ssOffset;
			} else {
				cy = cm->effectiveBaselineOffset(this->baselineOffsets) + cm->ssOffset;
			}
			float dy = ($nc(cm)->descent - cm->ascent) / 2 - cy;
			dya = dy * cm->italicAngle;
			cy += dy;
			ydsq = (cy - y) * (cy - y);
		}
		float cx = $nc(this->textLine)->getCharXPosition(i);
		float ca = $nc(this->textLine)->getCharAdvance(i);
		float dx = ca / 2;
		cx += dx - dya;
		double nd = $Math::sqrt(4 * (cx - x) * (cx - x) + ydsq);
		if (nd < distance) {
			distance = nd;
			index = i;
			trail = -1;
			icx = cx;
			icy = cy;
			ia = $nc(cm)->italicAngle;
		}
	}
	bool left = x < icx - (y - icy) * ia;
	bool leading = $nc(this->textLine)->isCharLTR(index) == left;
	if (trail == -1) {
		trail = this->characterCount;
	}
	$var($TextHitInfo, result, leading ? $TextHitInfo::leading(index) : $TextHitInfo::trailing(trail - 1));
	return result;
}

$TextHitInfo* TextLayout::hitTestChar(float x, float y) {
	return hitTestChar(x, y, $(getNaturalBounds()));
}

bool TextLayout::equals(TextLayout* rhs) {
	return equals($of(rhs));
}

$String* TextLayout::toString() {
	ensureCache();
	return $nc(this->textLine)->toString();
}

void TextLayout::draw($Graphics2D* g2, float x, float y) {
	if (g2 == nullptr) {
		$throwNew($IllegalArgumentException, "Null Graphics2D passed to TextLayout.draw()"_s);
	}
	$nc(this->textLine)->draw(g2, x - TextLayout::dx, y - TextLayout::dy);
}

$TextLine* TextLayout::getTextLineForTesting() {
	return this->textLine;
}

int32_t TextLayout::sameBaselineUpTo($Font* font, $chars* text, int32_t start, int32_t limit) {
	$init(TextLayout);
	return limit;
}

int8_t TextLayout::getBaselineFromGraphic($GraphicAttribute* graphic) {
	$init(TextLayout);
	int8_t alignment = (int8_t)$nc(graphic)->getAlignment();
	if (alignment == $GraphicAttribute::BOTTOM_ALIGNMENT || alignment == $GraphicAttribute::TOP_ALIGNMENT) {
		return (int8_t)$GraphicAttribute::ROMAN_BASELINE;
	} else {
		return alignment;
	}
}

$Shape* TextLayout::getOutline($AffineTransform* tx) {
	$useLocalCurrentObjectStackCache();
	ensureCache();
	$var($Shape, result, $nc(this->textLine)->getOutline(tx));
	$var($LayoutPathImpl, lp, $nc(this->textLine)->getLayoutPath());
	if (lp != nullptr) {
		$assign(result, lp->mapShape(result));
	}
	return result;
}

$LayoutPath* TextLayout::getLayoutPath() {
	return $nc(this->textLine)->getLayoutPath();
}

void TextLayout::hitToPoint($TextHitInfo* hit, $Point2D* point) {
	$useLocalCurrentObjectStackCache();
	if (hit == nullptr || point == nullptr) {
		$throwNew($NullPointerException, $$str({(hit == nullptr ? "hit"_s : "point"_s), " can\'t be null"_s}));
	}
	ensureCache();
	checkTextHit(hit);
	float adv = (float)0;
	float off = (float)0;
	int32_t ix = $nc(hit)->getCharIndex();
	bool leading = hit->isLeadingEdge();
	bool ltr = false;
	if (ix == -1 || ix == $nc(this->textLine)->characterCount()) {
		ltr = $nc(this->textLine)->isDirectionLTR();
		adv = (ltr == (ix == -1)) ? (float)0 : $nc(this->lineMetrics)->advance;
	} else {
		ltr = $nc(this->textLine)->isCharLTR(ix);
		adv = $nc(this->textLine)->getCharLinePosition(ix, leading);
		off = $nc(this->textLine)->getCharYPosition(ix);
	}
	$nc(point)->setLocation(adv, off);
	$var($LayoutPath, lp, $nc(this->textLine)->getLayoutPath());
	if (lp != nullptr) {
		lp->pathToPoint(point, ltr != leading, point);
	}
}

void clinit$TextLayout($Class* class$) {
	TextLayout::ALREADY_JUSTIFIED = -53.9f;
	$assignStatic(TextLayout::DEFAULT_CARET_POLICY, $new($TextLayout$CaretPolicy));
}

TextLayout::TextLayout() {
}

$Class* TextLayout::load$($String* name, bool initialize) {
	$loadClass(TextLayout, name, initialize, &_TextLayout_ClassInfo_, clinit$TextLayout, allocate$TextLayout);
	return class$;
}

$Class* TextLayout::class$ = nullptr;

		} // font
	} // awt
} // java