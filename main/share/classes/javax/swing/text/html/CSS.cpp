#include <javax/swing/text/html/CSS.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS$BackgroundImage.h>
#include <javax/swing/text/html/CSS$BackgroundPosition.h>
#include <javax/swing/text/html/CSS$BorderStyle.h>
#include <javax/swing/text/html/CSS$BorderWidthValue.h>
#include <javax/swing/text/html/CSS$ColorValue.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS$CssValueMapper.h>
#include <javax/swing/text/html/CSS$FontFamily.h>
#include <javax/swing/text/html/CSS$FontSize.h>
#include <javax/swing/text/html/CSS$FontWeight.h>
#include <javax/swing/text/html/CSS$LayoutIterator.h>
#include <javax/swing/text/html/CSS$LengthValue.h>
#include <javax/swing/text/html/CSS$ShorthandBackgroundParser.h>
#include <javax/swing/text/html/CSS$ShorthandBorderParser.h>
#include <javax/swing/text/html/CSS$ShorthandFontParser.h>
#include <javax/swing/text/html/CSS$ShorthandMarginParser.h>
#include <javax/swing/text/html/CSS$StringValue.h>
#include <javax/swing/text/html/CSS$Value.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTML.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef ALIGN
#undef ALL_BORDER_COLORS
#undef ALL_BORDER_STYLES
#undef ALL_BORDER_WIDTHS
#undef ALL_MARGINS
#undef ALL_PADDING
#undef BACKGROUND
#undef BACKGROUND_ATTACHMENT
#undef BACKGROUND_COLOR
#undef BACKGROUND_FIXED
#undef BACKGROUND_IMAGE
#undef BACKGROUND_NO_REPEAT
#undef BACKGROUND_POSITION
#undef BACKGROUND_REPEAT
#undef BACKGROUND_REPEAT_X
#undef BACKGROUND_REPEAT_Y
#undef BACKGROUND_SCROLL
#undef BASEFONT
#undef BGCOLOR
#undef BOLD
#undef BORDER
#undef BORDER_BOTTOM
#undef BORDER_BOTTOM_COLOR
#undef BORDER_BOTTOM_STYLE
#undef BORDER_BOTTOM_WIDTH
#undef BORDER_COLOR
#undef BORDER_LEFT
#undef BORDER_LEFT_COLOR
#undef BORDER_LEFT_STYLE
#undef BORDER_LEFT_WIDTH
#undef BORDER_RIGHT
#undef BORDER_RIGHT_COLOR
#undef BORDER_RIGHT_STYLE
#undef BORDER_RIGHT_WIDTH
#undef BORDER_SPACING
#undef BORDER_STYLE
#undef BORDER_TOP
#undef BORDER_TOP_COLOR
#undef BORDER_TOP_STYLE
#undef BORDER_TOP_WIDTH
#undef BORDER_WIDTH
#undef CAPTION
#undef CAPTION_SIDE
#undef CELLPADDING
#undef CELLSPACING
#undef CIRCLE
#undef CLEAR
#undef COLOR
#undef CSS
#undef DECIMAL
#undef DIALOG
#undef DISC
#undef FACE
#undef FLOAT
#undef FONT
#undef FONT_FAMILY
#undef FONT_SIZE
#undef FONT_STYLE
#undef FONT_WEIGHT
#undef HEIGHT
#undef HR
#undef HSPACE
#undef ITALIC
#undef LIST_STYLE_TYPE
#undef LOWER_ALPHA
#undef LOWER_ROMAN
#undef MARGIN
#undef MARGINHEIGHT
#undef MARGINWIDTH
#undef MARGIN_BOTTOM
#undef MARGIN_LEFT
#undef MARGIN_LEFT_LTR
#undef MARGIN_LEFT_RTL
#undef MARGIN_RIGHT
#undef MARGIN_RIGHT_LTR
#undef MARGIN_RIGHT_RTL
#undef MARGIN_TOP
#undef MAX_VALUE
#undef MONOSPACED
#undef NONE
#undef NOWRAP
#undef NULL_ATTRIBUTE_VALUE
#undef PADDING
#undef PADDING_BOTTOM
#undef PADDING_LEFT
#undef PADDING_RIGHT
#undef PADDING_TOP
#undef PLAIN
#undef SANS_SERIF
#undef SIZE
#undef SQUARE
#undef TABLE
#undef TD
#undef TEXT
#undef TEXT_ALIGN
#undef TEXT_DECORATION
#undef TEXT_INDENT
#undef TH
#undef TYPE
#undef UPPER_ALPHA
#undef UPPER_ROMAN
#undef VALIGN
#undef VERTICAL_ALIGN
#undef VSPACE
#undef WHITE_SPACE
#undef WIDTH

using $CSS$AttributeArray = $Array<::javax::swing::text::html::CSS$Attribute>;
using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;
using $View = ::javax::swing::text::View;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $CSS$BackgroundImage = ::javax::swing::text::html::CSS$BackgroundImage;
using $CSS$BackgroundPosition = ::javax::swing::text::html::CSS$BackgroundPosition;
using $CSS$BorderStyle = ::javax::swing::text::html::CSS$BorderStyle;
using $CSS$BorderWidthValue = ::javax::swing::text::html::CSS$BorderWidthValue;
using $CSS$ColorValue = ::javax::swing::text::html::CSS$ColorValue;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;
using $CSS$CssValueMapper = ::javax::swing::text::html::CSS$CssValueMapper;
using $CSS$FontFamily = ::javax::swing::text::html::CSS$FontFamily;
using $CSS$FontSize = ::javax::swing::text::html::CSS$FontSize;
using $CSS$FontWeight = ::javax::swing::text::html::CSS$FontWeight;
using $CSS$LayoutIterator = ::javax::swing::text::html::CSS$LayoutIterator;
using $CSS$LengthValue = ::javax::swing::text::html::CSS$LengthValue;
using $CSS$ShorthandBackgroundParser = ::javax::swing::text::html::CSS$ShorthandBackgroundParser;
using $CSS$ShorthandBorderParser = ::javax::swing::text::html::CSS$ShorthandBorderParser;
using $CSS$ShorthandFontParser = ::javax::swing::text::html::CSS$ShorthandFontParser;
using $CSS$ShorthandMarginParser = ::javax::swing::text::html::CSS$ShorthandMarginParser;
using $CSS$StringValue = ::javax::swing::text::html::CSS$StringValue;
using $CSS$Value = ::javax::swing::text::html::CSS$Value;
using $HTML = ::javax::swing::text::html::HTML;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSS_FieldInfo_[] = {
	{"attributeMap", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljavax/swing/text/html/CSS$Attribute;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CSS, attributeMap)},
	{"valueMap", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljavax/swing/text/html/CSS$Value;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CSS, valueMap)},
	{"htmlAttrToCssAttrMap", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljavax/swing/text/html/HTML$Attribute;[Ljavax/swing/text/html/CSS$Attribute;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CSS, htmlAttrToCssAttrMap)},
	{"styleConstantToCssMap", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Object;Ljavax/swing/text/html/CSS$Attribute;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CSS, styleConstantToCssMap)},
	{"htmlValueToCssValueMap", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljavax/swing/text/html/CSS$Value;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CSS, htmlValueToCssValueMap)},
	{"cssValueToInternalValueMap", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljavax/swing/text/html/CSS$Value;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CSS, cssValueToInternalValueMap)},
	{"valueConvertor", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE | $TRANSIENT, $field(CSS, valueConvertor)},
	{"baseFontSize", "I", nullptr, $PRIVATE, $field(CSS, baseFontSize)},
	{"styleSheet", "Ljavax/swing/text/html/StyleSheet;", nullptr, $PRIVATE | $TRANSIENT, $field(CSS, styleSheet)},
	{"baseFontSizeIndex", "I", nullptr, $STATIC, $staticField(CSS, baseFontSizeIndex)},
	{}
};

$MethodInfo _CSS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CSS::*)()>(&CSS::init$))},
	{"addInternalCSSValue", "(Ljavax/swing/text/MutableAttributeSet;Ljavax/swing/text/html/CSS$Attribute;Ljava/lang/String;)V", nullptr, 0},
	{"calculateTiledLayout", "(Ljavax/swing/text/html/CSS$LayoutIterator;I)V", nullptr, $STATIC, $method(static_cast<void(*)($CSS$LayoutIterator*,int32_t)>(&CSS::calculateTiledLayout))},
	{"calculateTiledRequirements", "(Ljavax/swing/text/html/CSS$LayoutIterator;Ljavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $STATIC, $method(static_cast<$SizeRequirements*(*)($CSS$LayoutIterator*,$SizeRequirements*)>(&CSS::calculateTiledRequirements))},
	{"colorToHex", "(Ljava/awt/Color;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($Color*)>(&CSS::colorToHex))},
	{"cssValueToStyleConstantsValue", "(Ljavax/swing/text/StyleConstants;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"getAllAttributeKeys", "()[Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CSS$AttributeArray*(*)()>(&CSS::getAllAttributeKeys))},
	{"getAttribute", "(Ljava/lang/String;)Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$CSS$Attribute*(*)($String*)>(&CSS::getAttribute))},
	{"getBaseFontSize", "()I", nullptr, 0},
	{"getColor", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/html/CSS$Attribute;)Ljava/awt/Color;", nullptr, 0},
	{"getColorComponent", "(Ljava/lang/String;[I)F", nullptr, $PRIVATE | $STATIC, $method(static_cast<float(*)($String*,$ints*)>(&CSS::getColorComponent))},
	{"getCssAlignAttribute", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PRIVATE, $method(static_cast<$CSS$Attribute*(CSS::*)($HTML$Tag*,$AttributeSet*)>(&CSS::getCssAlignAttribute))},
	{"getCssAttribute", "(Ljavax/swing/text/html/HTML$Attribute;)[Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PRIVATE, $method(static_cast<$CSS$AttributeArray*(CSS::*)($HTML$Attribute*)>(&CSS::getCssAttribute))},
	{"getCssValue", "(Ljavax/swing/text/html/CSS$Attribute;Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"getFont", "(Ljavax/swing/text/StyleContext;Ljavax/swing/text/AttributeSet;ILjavax/swing/text/html/StyleSheet;)Ljava/awt/Font;", nullptr, 0},
	{"getFontSize", "(Ljavax/swing/text/AttributeSet;ILjavax/swing/text/html/StyleSheet;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($AttributeSet*,int32_t,$StyleSheet*)>(&CSS::getFontSize))},
	{"getHTMLTag", "(Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/html/HTML$Tag;", nullptr, $PRIVATE, $method(static_cast<$HTML$Tag*(CSS::*)($AttributeSet*)>(&CSS::getHTMLTag))},
	{"getIndexOfSize", "(F[I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(float,$ints*)>(&CSS::getIndexOfSize))},
	{"getIndexOfSize", "(FLjavax/swing/text/html/StyleSheet;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(float,$StyleSheet*)>(&CSS::getIndexOfSize))},
	{"getInternalCSSValue", "(Ljavax/swing/text/html/CSS$Attribute;Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"getLength", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/html/CSS$Attribute;Ljavax/swing/text/html/StyleSheet;)F", nullptr, 0},
	{"getPointSize", "(Ljava/lang/String;Ljavax/swing/text/html/StyleSheet;)F", nullptr, 0},
	{"getPointSize", "(ILjavax/swing/text/html/StyleSheet;)F", nullptr, 0},
	{"getStyleSheet", "(Ljavax/swing/text/html/StyleSheet;)Ljavax/swing/text/html/StyleSheet;", nullptr, $PRIVATE, $method(static_cast<$StyleSheet*(CSS::*)($StyleSheet*)>(&CSS::getStyleSheet))},
	{"getTableBorder", "(Ljavax/swing/text/AttributeSet;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($AttributeSet*)>(&CSS::getTableBorder))},
	{"getURL", "(Ljava/net/URL;Ljava/lang/String;)Ljava/net/URL;", nullptr, $STATIC, $method(static_cast<$URL*(*)($URL*,$String*)>(&CSS::getURL))},
	{"getValue", "(Ljava/lang/String;)Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $method(static_cast<$CSS$Value*(*)($String*)>(&CSS::getValue))},
	{"hexToColor", "(Ljava/lang/String;)Ljava/awt/Color;", nullptr, $STATIC | $FINAL, $method(static_cast<$Color*(*)($String*)>(&CSS::hexToColor))},
	{"isFloater", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(CSS::*)($String*)>(&CSS::isFloater))},
	{"isHTMLFontTag", "(Ljavax/swing/text/html/HTML$Tag;)Z", nullptr, $PRIVATE, $method(static_cast<bool(CSS::*)($HTML$Tag*)>(&CSS::isHTMLFontTag))},
	{"parseRGB", "(Ljava/lang/String;)Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Color*(*)($String*)>(&CSS::parseRGB))},
	{"parseRGBA", "(Ljava/lang/String;)Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Color*(*)($String*)>(&CSS::parseRGBA))},
	{"parseStrings", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)($String*)>(&CSS::parseStrings))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CSS::*)($ObjectInputStream*)>(&CSS::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"setBaseFontSize", "(I)V", nullptr, 0},
	{"setBaseFontSize", "(Ljava/lang/String;)V", nullptr, 0},
	{"stringToColor", "(Ljava/lang/String;)Ljava/awt/Color;", nullptr, $STATIC, $method(static_cast<$Color*(*)($String*)>(&CSS::stringToColor))},
	{"styleConstantsKeyToCSSKey", "(Ljavax/swing/text/StyleConstants;)Ljavax/swing/text/html/CSS$Attribute;", nullptr, 0},
	{"styleConstantsValueToCSSValue", "(Ljavax/swing/text/StyleConstants;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"translateAttribute", "(Ljavax/swing/text/html/HTML$Attribute;Ljava/lang/String;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PRIVATE, $method(static_cast<void(CSS::*)($HTML$Attribute*,$String*,$MutableAttributeSet*)>(&CSS::translateAttribute))},
	{"translateAttributes", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/AttributeSet;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PRIVATE, $method(static_cast<void(CSS::*)($HTML$Tag*,$AttributeSet*,$MutableAttributeSet*)>(&CSS::translateAttributes))},
	{"translateEmbeddedAttributes", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PRIVATE, $method(static_cast<void(CSS::*)($AttributeSet*,$MutableAttributeSet*)>(&CSS::translateEmbeddedAttributes))},
	{"translateHTMLToCSS", "(Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/AttributeSet;", nullptr, 0},
	{"validTextAlignValue", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(CSS::*)($String*)>(&CSS::validTextAlignValue))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CSS::*)($ObjectOutputStream*)>(&CSS::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _CSS_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$LayoutIterator", "javax.swing.text.html.CSS", "LayoutIterator", $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.text.html.CSS$ShorthandBorderParser", "javax.swing.text.html.CSS", "ShorthandBorderParser", $STATIC},
	{"javax.swing.text.html.CSS$ShorthandMarginParser", "javax.swing.text.html.CSS", "ShorthandMarginParser", $STATIC},
	{"javax.swing.text.html.CSS$ShorthandBackgroundParser", "javax.swing.text.html.CSS", "ShorthandBackgroundParser", $STATIC},
	{"javax.swing.text.html.CSS$ShorthandFontParser", "javax.swing.text.html.CSS", "ShorthandFontParser", $STATIC},
	{"javax.swing.text.html.CSS$LengthUnit", "javax.swing.text.html.CSS", "LengthUnit", $STATIC},
	{"javax.swing.text.html.CSS$BackgroundImage", "javax.swing.text.html.CSS", "BackgroundImage", $STATIC},
	{"javax.swing.text.html.CSS$BackgroundPosition", "javax.swing.text.html.CSS", "BackgroundPosition", $STATIC},
	{"javax.swing.text.html.CSS$CssValueMapper", "javax.swing.text.html.CSS", "CssValueMapper", $STATIC},
	{"javax.swing.text.html.CSS$BorderWidthValue", "javax.swing.text.html.CSS", "BorderWidthValue", $STATIC},
	{"javax.swing.text.html.CSS$LengthValue", "javax.swing.text.html.CSS", "LengthValue", $STATIC},
	{"javax.swing.text.html.CSS$BorderStyle", "javax.swing.text.html.CSS", "BorderStyle", $STATIC},
	{"javax.swing.text.html.CSS$ColorValue", "javax.swing.text.html.CSS", "ColorValue", $STATIC},
	{"javax.swing.text.html.CSS$FontWeight", "javax.swing.text.html.CSS", "FontWeight", $STATIC},
	{"javax.swing.text.html.CSS$FontFamily", "javax.swing.text.html.CSS", "FontFamily", $STATIC},
	{"javax.swing.text.html.CSS$FontSize", "javax.swing.text.html.CSS", "FontSize", 0},
	{"javax.swing.text.html.CSS$StringValue", "javax.swing.text.html.CSS", "StringValue", $STATIC},
	{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
	{"javax.swing.text.html.CSS$Value", "javax.swing.text.html.CSS", "Value", $STATIC | $FINAL},
	{"javax.swing.text.html.CSS$Attribute", "javax.swing.text.html.CSS", "Attribute", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _CSS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.CSS",
	"java.lang.Object",
	"java.io.Serializable",
	_CSS_FieldInfo_,
	_CSS_MethodInfo_,
	nullptr,
	nullptr,
	_CSS_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS$LayoutIterator,javax.swing.text.html.CSS$ShorthandBorderParser,javax.swing.text.html.CSS$ShorthandMarginParser,javax.swing.text.html.CSS$ShorthandBackgroundParser,javax.swing.text.html.CSS$ShorthandFontParser,javax.swing.text.html.CSS$LengthUnit,javax.swing.text.html.CSS$BackgroundImage,javax.swing.text.html.CSS$BackgroundPosition,javax.swing.text.html.CSS$CssValueMapper,javax.swing.text.html.CSS$BorderWidthValue,javax.swing.text.html.CSS$LengthValue,javax.swing.text.html.CSS$BorderStyle,javax.swing.text.html.CSS$ColorValue,javax.swing.text.html.CSS$FontWeight,javax.swing.text.html.CSS$FontFamily,javax.swing.text.html.CSS$FontSize,javax.swing.text.html.CSS$StringValue,javax.swing.text.html.CSS$CssValue,javax.swing.text.html.CSS$Value,javax.swing.text.html.CSS$Attribute"
};

$Object* allocate$CSS($Class* clazz) {
	return $of($alloc(CSS));
}

$Hashtable* CSS::attributeMap = nullptr;
$Hashtable* CSS::valueMap = nullptr;
$Hashtable* CSS::htmlAttrToCssAttrMap = nullptr;
$Hashtable* CSS::styleConstantToCssMap = nullptr;
$Hashtable* CSS::htmlValueToCssValueMap = nullptr;
$Hashtable* CSS::cssValueToInternalValueMap = nullptr;
int32_t CSS::baseFontSizeIndex = 0;

void CSS::init$() {
	$useLocalCurrentObjectStackCache();
	$set(this, styleSheet, nullptr);
	this->baseFontSize = CSS::baseFontSizeIndex + 1;
	$set(this, valueConvertor, $new($Hashtable));
	$init($CSS$Attribute);
	$nc(this->valueConvertor)->put($CSS$Attribute::FONT_SIZE, $$new($CSS$FontSize, this));
	$nc(this->valueConvertor)->put($CSS$Attribute::FONT_FAMILY, $$new($CSS$FontFamily));
	$nc(this->valueConvertor)->put($CSS$Attribute::FONT_WEIGHT, $$new($CSS$FontWeight));
	$var($Object, bs, $new($CSS$BorderStyle));
	$nc(this->valueConvertor)->put($CSS$Attribute::BORDER_TOP_STYLE, bs);
	$nc(this->valueConvertor)->put($CSS$Attribute::BORDER_RIGHT_STYLE, bs);
	$nc(this->valueConvertor)->put($CSS$Attribute::BORDER_BOTTOM_STYLE, bs);
	$nc(this->valueConvertor)->put($CSS$Attribute::BORDER_LEFT_STYLE, bs);
	$var($Object, cv, $new($CSS$ColorValue));
	$nc(this->valueConvertor)->put($CSS$Attribute::COLOR, cv);
	$nc(this->valueConvertor)->put($CSS$Attribute::BACKGROUND_COLOR, cv);
	$nc(this->valueConvertor)->put($CSS$Attribute::BORDER_TOP_COLOR, cv);
	$nc(this->valueConvertor)->put($CSS$Attribute::BORDER_RIGHT_COLOR, cv);
	$nc(this->valueConvertor)->put($CSS$Attribute::BORDER_BOTTOM_COLOR, cv);
	$nc(this->valueConvertor)->put($CSS$Attribute::BORDER_LEFT_COLOR, cv);
	$var($Object, lv, $new($CSS$LengthValue));
	$nc(this->valueConvertor)->put($CSS$Attribute::MARGIN_TOP, lv);
	$nc(this->valueConvertor)->put($CSS$Attribute::MARGIN_BOTTOM, lv);
	$nc(this->valueConvertor)->put($CSS$Attribute::MARGIN_LEFT, lv);
	$nc(this->valueConvertor)->put($CSS$Attribute::MARGIN_LEFT_LTR, lv);
	$nc(this->valueConvertor)->put($CSS$Attribute::MARGIN_LEFT_RTL, lv);
	$nc(this->valueConvertor)->put($CSS$Attribute::MARGIN_RIGHT, lv);
	$nc(this->valueConvertor)->put($CSS$Attribute::MARGIN_RIGHT_LTR, lv);
	$nc(this->valueConvertor)->put($CSS$Attribute::MARGIN_RIGHT_RTL, lv);
	$nc(this->valueConvertor)->put($CSS$Attribute::PADDING_TOP, lv);
	$nc(this->valueConvertor)->put($CSS$Attribute::PADDING_BOTTOM, lv);
	$nc(this->valueConvertor)->put($CSS$Attribute::PADDING_LEFT, lv);
	$nc(this->valueConvertor)->put($CSS$Attribute::PADDING_RIGHT, lv);
	$var($Object, bv, $new($CSS$BorderWidthValue, nullptr, 0));
	$nc(this->valueConvertor)->put($CSS$Attribute::BORDER_TOP_WIDTH, bv);
	$nc(this->valueConvertor)->put($CSS$Attribute::BORDER_BOTTOM_WIDTH, bv);
	$nc(this->valueConvertor)->put($CSS$Attribute::BORDER_LEFT_WIDTH, bv);
	$nc(this->valueConvertor)->put($CSS$Attribute::BORDER_RIGHT_WIDTH, bv);
	$var($Object, nlv, $new($CSS$LengthValue, true));
	$nc(this->valueConvertor)->put($CSS$Attribute::TEXT_INDENT, nlv);
	$nc(this->valueConvertor)->put($CSS$Attribute::WIDTH, lv);
	$nc(this->valueConvertor)->put($CSS$Attribute::HEIGHT, lv);
	$nc(this->valueConvertor)->put($CSS$Attribute::BORDER_SPACING, lv);
	$var($Object, sv, $new($CSS$StringValue));
	$nc(this->valueConvertor)->put($CSS$Attribute::FONT_STYLE, sv);
	$nc(this->valueConvertor)->put($CSS$Attribute::TEXT_DECORATION, sv);
	$nc(this->valueConvertor)->put($CSS$Attribute::TEXT_ALIGN, sv);
	$nc(this->valueConvertor)->put($CSS$Attribute::VERTICAL_ALIGN, sv);
	$var($Object, valueMapper, $new($CSS$CssValueMapper));
	$nc(this->valueConvertor)->put($CSS$Attribute::LIST_STYLE_TYPE, valueMapper);
	$nc(this->valueConvertor)->put($CSS$Attribute::BACKGROUND_IMAGE, $$new($CSS$BackgroundImage));
	$nc(this->valueConvertor)->put($CSS$Attribute::BACKGROUND_POSITION, $$new($CSS$BackgroundPosition));
	$nc(this->valueConvertor)->put($CSS$Attribute::BACKGROUND_REPEAT, valueMapper);
	$nc(this->valueConvertor)->put($CSS$Attribute::BACKGROUND_ATTACHMENT, valueMapper);
	$var($Object, generic, $new($CSS$CssValue));
	int32_t n = $nc($CSS$Attribute::allAttributes)->length;
	for (int32_t i = 0; i < n; ++i) {
		$var($CSS$Attribute, key, $nc($CSS$Attribute::allAttributes)->get(i));
		if ($nc(this->valueConvertor)->get(key) == nullptr) {
			$nc(this->valueConvertor)->put(key, generic);
		}
	}
}

void CSS::setBaseFontSize(int32_t sz) {
	if (sz < 1) {
		this->baseFontSize = 0;
	} else if (sz > 7) {
		this->baseFontSize = 7;
	} else {
		this->baseFontSize = sz;
	}
}

void CSS::setBaseFontSize($String* size) {
	$useLocalCurrentObjectStackCache();
	int32_t relSize = 0;
	int32_t absSize = 0;
	int32_t diff = 0;
	if (size != nullptr) {
		if (size->startsWith("+"_s)) {
			relSize = $nc($($Integer::valueOf($(size->substring(1)))))->intValue();
			setBaseFontSize(this->baseFontSize + relSize);
		} else if (size->startsWith("-"_s)) {
			relSize = -$nc($($Integer::valueOf($(size->substring(1)))))->intValue();
			setBaseFontSize(this->baseFontSize + relSize);
		} else {
			setBaseFontSize($nc($($Integer::valueOf(size)))->intValue());
		}
	}
}

int32_t CSS::getBaseFontSize() {
	return this->baseFontSize;
}

void CSS::addInternalCSSValue($MutableAttributeSet* attr, $CSS$Attribute* key, $String* value) {
	$init($CSS$Attribute);
	if (key == $CSS$Attribute::FONT) {
		$CSS$ShorthandFontParser::parseShorthandFont(this, value, attr);
	} else {
		if (key == $CSS$Attribute::BACKGROUND) {
			$CSS$ShorthandBackgroundParser::parseShorthandBackground(this, value, attr);
		} else {
			if (key == $CSS$Attribute::MARGIN) {
				$CSS$ShorthandMarginParser::parseShorthandMargin(this, value, attr, $CSS$Attribute::ALL_MARGINS);
			} else {
				if (key == $CSS$Attribute::PADDING) {
					$CSS$ShorthandMarginParser::parseShorthandMargin(this, value, attr, $CSS$Attribute::ALL_PADDING);
				} else {
					if (key == $CSS$Attribute::BORDER_WIDTH) {
						$CSS$ShorthandMarginParser::parseShorthandMargin(this, value, attr, $CSS$Attribute::ALL_BORDER_WIDTHS);
					} else {
						if (key == $CSS$Attribute::BORDER_COLOR) {
							$CSS$ShorthandMarginParser::parseShorthandMargin(this, value, attr, $CSS$Attribute::ALL_BORDER_COLORS);
						} else {
							if (key == $CSS$Attribute::BORDER_STYLE) {
								$CSS$ShorthandMarginParser::parseShorthandMargin(this, value, attr, $CSS$Attribute::ALL_BORDER_STYLES);
							} else {
								if ((key == $CSS$Attribute::BORDER) || (key == $CSS$Attribute::BORDER_TOP) || (key == $CSS$Attribute::BORDER_RIGHT) || (key == $CSS$Attribute::BORDER_BOTTOM) || (key == $CSS$Attribute::BORDER_LEFT)) {
									$CSS$ShorthandBorderParser::parseShorthandBorder(attr, key, value);
								} else {
									$var($Object, iValue, getInternalCSSValue(key, value));
									if (iValue != nullptr) {
										$nc(attr)->addAttribute(key, iValue);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

$Object* CSS::getInternalCSSValue($CSS$Attribute* key, $String* value) {
	$useLocalCurrentObjectStackCache();
	$var($CSS$CssValue, conv, $cast($CSS$CssValue, $nc(this->valueConvertor)->get(key)));
	$var($Object, r, $nc(conv)->parseCssValue(value));
	return $of(r != nullptr ? r : conv->parseCssValue($($nc(key)->getDefaultValue())));
}

$CSS$Attribute* CSS::styleConstantsKeyToCSSKey($StyleConstants* sc) {
	return $cast($CSS$Attribute, $nc(CSS::styleConstantToCssMap)->get(sc));
}

$Object* CSS::styleConstantsValueToCSSValue($StyleConstants* sc, Object$* styleValue) {
	$useLocalCurrentObjectStackCache();
	$var($CSS$Attribute, cssKey, styleConstantsKeyToCSSKey(sc));
	if (cssKey != nullptr) {
		$var($CSS$CssValue, conv, $cast($CSS$CssValue, $nc(this->valueConvertor)->get(cssKey)));
		return $of($nc(conv)->fromStyleConstants(sc, styleValue));
	}
	return $of(nullptr);
}

$Object* CSS::cssValueToStyleConstantsValue($StyleConstants* key, Object$* value) {
	if ($instanceOf($CSS$CssValue, value)) {
		return $of($nc(($cast($CSS$CssValue, value)))->toStyleConstants(key, nullptr));
	}
	return $of(nullptr);
}

$Font* CSS::getFont($StyleContext* sc, $AttributeSet* a, int32_t defaultSize, $StyleSheet* ss$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($StyleSheet, ss, ss$renamed);
	$assign(ss, getStyleSheet(ss));
	int32_t size = getFontSize(a, defaultSize, ss);
	$init($CSS$Attribute);
	$var($CSS$StringValue, vAlignV, $cast($CSS$StringValue, $nc(a)->getAttribute($CSS$Attribute::VERTICAL_ALIGN)));
	if (vAlignV != nullptr) {
		$var($String, vAlign, vAlignV->toString());
		bool var$0 = ($nc(vAlign)->indexOf("sup"_s) >= 0);
		if (var$0 || ($nc(vAlign)->indexOf("sub"_s) >= 0)) {
			size -= 2;
		}
	}
	$var($CSS$FontFamily, familyValue, $cast($CSS$FontFamily, a->getAttribute($CSS$Attribute::FONT_FAMILY)));
	$init($Font);
	$var($String, family, (familyValue != nullptr) ? $nc(familyValue)->getValue() : $Font::SANS_SERIF);
	int32_t style = $Font::PLAIN;
	$var($CSS$FontWeight, weightValue, $cast($CSS$FontWeight, a->getAttribute($CSS$Attribute::FONT_WEIGHT)));
	if ((weightValue != nullptr) && (weightValue->getValue() > 400)) {
		style |= $Font::BOLD;
	}
	$var($Object, fs, a->getAttribute($CSS$Attribute::FONT_STYLE));
	if ((fs != nullptr) && ($nc($($of(fs)->toString()))->indexOf("italic"_s) >= 0)) {
		style |= $Font::ITALIC;
	}
	if ($nc(family)->equalsIgnoreCase("monospace"_s)) {
		$assign(family, $Font::MONOSPACED);
	}
	$var($Font, f, $nc(sc)->getFont(family, style, size));
	bool var$1 = f == nullptr;
	if (!var$1) {
		bool var$2 = $nc($($nc(f)->getFamily()))->equals($Font::DIALOG);
		var$1 = (var$2 && !$nc(family)->equalsIgnoreCase($Font::DIALOG));
	}
	if (var$1) {
		$assign(family, $Font::SANS_SERIF);
		$assign(f, sc->getFont(family, style, size));
	}
	return f;
}

int32_t CSS::getFontSize($AttributeSet* attr, int32_t defaultSize, $StyleSheet* ss) {
	$init(CSS);
	$init($CSS$Attribute);
	$var($CSS$FontSize, sizeValue, $cast($CSS$FontSize, $nc(attr)->getAttribute($CSS$Attribute::FONT_SIZE)));
	return (sizeValue != nullptr) ? $nc(sizeValue)->getValue(attr, ss) : defaultSize;
}

$Color* CSS::getColor($AttributeSet* a, $CSS$Attribute* key) {
	$var($CSS$ColorValue, cv, $cast($CSS$ColorValue, $nc(a)->getAttribute(key)));
	if (cv != nullptr) {
		return cv->getValue();
	}
	return nullptr;
}

float CSS::getPointSize($String* size, $StyleSheet* ss$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($StyleSheet, ss, ss$renamed);
	int32_t relSize = 0;
	int32_t absSize = 0;
	int32_t diff = 0;
	int32_t index = 0;
	$assign(ss, getStyleSheet(ss));
	if (size != nullptr) {
		if (size->startsWith("+"_s)) {
			relSize = $nc($($Integer::valueOf($(size->substring(1)))))->intValue();
			return getPointSize(this->baseFontSize + relSize, ss);
		} else if (size->startsWith("-"_s)) {
			relSize = -$nc($($Integer::valueOf($(size->substring(1)))))->intValue();
			return getPointSize(this->baseFontSize + relSize, ss);
		} else {
			absSize = $nc($($Integer::valueOf(size)))->intValue();
			return getPointSize(absSize, ss);
		}
	}
	return (float)0;
}

float CSS::getLength($AttributeSet* a, $CSS$Attribute* key, $StyleSheet* ss$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($StyleSheet, ss, ss$renamed);
	$assign(ss, getStyleSheet(ss));
	$var($CSS$LengthValue, lv, $cast($CSS$LengthValue, $nc(a)->getAttribute(key)));
	bool isW3CLengthUnits = (ss == nullptr) ? false : $nc(ss)->isW3CLengthUnits();
	float len = (lv != nullptr) ? $nc(lv)->getValue(isW3CLengthUnits) : (float)0;
	return len;
}

$AttributeSet* CSS::translateHTMLToCSS($AttributeSet* htmlAttrSet) {
	$useLocalCurrentObjectStackCache();
	$var($MutableAttributeSet, cssAttrSet, $new($SimpleAttributeSet));
	$var($Element, elem, $cast($Element, htmlAttrSet));
	$var($HTML$Tag, tag, getHTMLTag(htmlAttrSet));
	$init($HTML$Tag);
	if ((tag == $HTML$Tag::TD) || (tag == $HTML$Tag::TH)) {
		$var($AttributeSet, tableAttr, $nc($($nc($($nc(elem)->getParentElement()))->getParentElement()))->getAttributes());
		int32_t borderWidth = getTableBorder(tableAttr);
		if (borderWidth > 0) {
			$init($HTML$Attribute);
			translateAttribute($HTML$Attribute::BORDER, "1"_s, cssAttrSet);
		}
		$init($HTML$Attribute);
		$var($String, pad, $cast($String, $nc(tableAttr)->getAttribute($HTML$Attribute::CELLPADDING)));
		if (pad != nullptr) {
			$init($CSS$Attribute);
			$var($CSS$LengthValue, v, $cast($CSS$LengthValue, getInternalCSSValue($CSS$Attribute::PADDING_TOP, pad)));
			$nc(v)->span = (v->span < 0) ? (float)0 : v->span;
			cssAttrSet->addAttribute($CSS$Attribute::PADDING_TOP, v);
			cssAttrSet->addAttribute($CSS$Attribute::PADDING_BOTTOM, v);
			cssAttrSet->addAttribute($CSS$Attribute::PADDING_LEFT, v);
			cssAttrSet->addAttribute($CSS$Attribute::PADDING_RIGHT, v);
		}
	}
	if ($nc(elem)->isLeaf()) {
		translateEmbeddedAttributes(htmlAttrSet, cssAttrSet);
	} else {
		translateAttributes(tag, htmlAttrSet, cssAttrSet);
	}
	if (tag == $HTML$Tag::CAPTION) {
		$init($HTML$Attribute);
		$var($Object, v, $nc(htmlAttrSet)->getAttribute($HTML$Attribute::ALIGN));
		bool var$0 = (v != nullptr);
		if (var$0) {
			bool var$1 = $of(v)->equals("top"_s);
			var$0 = (var$1 || $of(v)->equals("bottom"_s));
		}
		if (var$0) {
			$init($CSS$Attribute);
			cssAttrSet->addAttribute($CSS$Attribute::CAPTION_SIDE, v);
			cssAttrSet->removeAttribute($CSS$Attribute::TEXT_ALIGN);
		} else {
			$assign(v, htmlAttrSet->getAttribute($HTML$Attribute::VALIGN));
			if (v != nullptr) {
				$init($CSS$Attribute);
				cssAttrSet->addAttribute($CSS$Attribute::CAPTION_SIDE, v);
			}
		}
	}
	return cssAttrSet;
}

int32_t CSS::getTableBorder($AttributeSet* tableAttr) {
	$init(CSS);
	$init($HTML$Attribute);
	$var($String, borderValue, $cast($String, $nc(tableAttr)->getAttribute($HTML$Attribute::BORDER)));
	$init($HTML);
	if (borderValue == $HTML::NULL_ATTRIBUTE_VALUE || ""_s->equals(borderValue)) {
		return 1;
	}
	try {
		return $Integer::parseInt(borderValue);
	} catch ($NumberFormatException& e) {
		return 0;
	}
	$shouldNotReachHere();
}

$CSS$AttributeArray* CSS::getAllAttributeKeys() {
	$init(CSS);
	$init($CSS$Attribute);
	$var($CSS$AttributeArray, keys, $new($CSS$AttributeArray, $nc($CSS$Attribute::allAttributes)->length));
	$System::arraycopy($CSS$Attribute::allAttributes, 0, keys, 0, $nc($CSS$Attribute::allAttributes)->length);
	return keys;
}

$CSS$Attribute* CSS::getAttribute($String* name) {
	$init(CSS);
	return $cast($CSS$Attribute, $nc(CSS::attributeMap)->get(name));
}

$CSS$Value* CSS::getValue($String* name) {
	$init(CSS);
	return $cast($CSS$Value, $nc(CSS::valueMap)->get(name));
}

$URL* CSS::getURL($URL* base, $String* cssString$renamed) {
	$init(CSS);
	$useLocalCurrentObjectStackCache();
	$var($String, cssString, cssString$renamed);
	if (cssString == nullptr) {
		return nullptr;
	}
	bool var$0 = $nc(cssString)->startsWith("url("_s);
	if (var$0 && cssString->endsWith(")"_s)) {
		$assign(cssString, cssString->substring(4, cssString->length() - 1));
	}
	try {
		$var($URL, url, $new($URL, cssString));
		if (url != nullptr) {
			return url;
		}
	} catch ($MalformedURLException& mue) {
	}
	if (base != nullptr) {
		try {
			$var($URL, url, $new($URL, base, cssString));
			return url;
		} catch ($MalformedURLException& muee) {
		}
	}
	return nullptr;
}

$String* CSS::colorToHex($Color* color) {
	$init(CSS);
	$useLocalCurrentObjectStackCache();
	$var($String, colorstr, "#"_s);
	$var($String, str, $Integer::toHexString($nc(color)->getRed()));
	if ($nc(str)->length() > 2) {
		$assign(str, str->substring(0, 2));
	} else if (str->length() < 2) {
		$plusAssign(colorstr, $$str({"0"_s, str}));
	} else {
		$plusAssign(colorstr, str);
	}
	$assign(str, $Integer::toHexString($nc(color)->getGreen()));
	if ($nc(str)->length() > 2) {
		$assign(str, str->substring(0, 2));
	} else if (str->length() < 2) {
		$plusAssign(colorstr, $$str({"0"_s, str}));
	} else {
		$plusAssign(colorstr, str);
	}
	$assign(str, $Integer::toHexString($nc(color)->getBlue()));
	if ($nc(str)->length() > 2) {
		$assign(str, str->substring(0, 2));
	} else if (str->length() < 2) {
		$plusAssign(colorstr, $$str({"0"_s, str}));
	} else {
		$plusAssign(colorstr, str);
	}
	return colorstr;
}

$Color* CSS::hexToColor($String* value) {
	$init(CSS);
	$useLocalCurrentObjectStackCache();
	$var($String, digits, nullptr);
	int32_t n = $nc(value)->length();
	if (value->startsWith("#"_s)) {
		$assign(digits, value->substring(1, $Math::min(value->length(), 7)));
	} else {
		$assign(digits, value);
	}
	if ($nc(digits)->length() == 3) {
		$var($String, r, digits->substring(0, 1));
		$var($String, g, digits->substring(1, 2));
		$var($String, b, digits->substring(2, 3));
		$assign(digits, $String::format("%s%s%s%s%s%s"_s, $$new($ObjectArray, {
			$of(r),
			$of(r),
			$of(g),
			$of(g),
			$of(b),
			$of(b)
		})));
	}
	$var($String, hstr, $str({"0x"_s, digits}));
	$var($Color, c, nullptr);
	try {
		$assign(c, $Color::decode(hstr));
	} catch ($NumberFormatException& nfe) {
		$assign(c, nullptr);
	}
	return c;
}

$Color* CSS::stringToColor($String* str) {
	$init(CSS);
	$var($Color, color, nullptr);
	if (str == nullptr) {
		return nullptr;
	}
	if ($nc(str)->length() == 0) {
		$init($Color);
		$assign(color, $Color::black);
	} else if (str->startsWith("rgb("_s)) {
		$assign(color, parseRGB(str));
	} else if (str->startsWith("rgba("_s)) {
		$assign(color, parseRGBA(str));
	} else if (str->charAt(0) == u'#') {
		$assign(color, hexToColor(str));
	} else if (str->equalsIgnoreCase("Black"_s)) {
		$assign(color, hexToColor("#000000"_s));
	} else if (str->equalsIgnoreCase("Silver"_s)) {
		$assign(color, hexToColor("#C0C0C0"_s));
	} else if (str->equalsIgnoreCase("Gray"_s)) {
		$assign(color, hexToColor("#808080"_s));
	} else if (str->equalsIgnoreCase("White"_s)) {
		$assign(color, hexToColor("#FFFFFF"_s));
	} else if (str->equalsIgnoreCase("Maroon"_s)) {
		$assign(color, hexToColor("#800000"_s));
	} else if (str->equalsIgnoreCase("Red"_s)) {
		$assign(color, hexToColor("#FF0000"_s));
	} else if (str->equalsIgnoreCase("Purple"_s)) {
		$assign(color, hexToColor("#800080"_s));
	} else if (str->equalsIgnoreCase("Fuchsia"_s)) {
		$assign(color, hexToColor("#FF00FF"_s));
	} else if (str->equalsIgnoreCase("Green"_s)) {
		$assign(color, hexToColor("#008000"_s));
	} else if (str->equalsIgnoreCase("Lime"_s)) {
		$assign(color, hexToColor("#00FF00"_s));
	} else if (str->equalsIgnoreCase("Olive"_s)) {
		$assign(color, hexToColor("#808000"_s));
	} else if (str->equalsIgnoreCase("Yellow"_s)) {
		$assign(color, hexToColor("#FFFF00"_s));
	} else if (str->equalsIgnoreCase("Navy"_s)) {
		$assign(color, hexToColor("#000080"_s));
	} else if (str->equalsIgnoreCase("Blue"_s)) {
		$assign(color, hexToColor("#0000FF"_s));
	} else if (str->equalsIgnoreCase("Teal"_s)) {
		$assign(color, hexToColor("#008080"_s));
	} else if (str->equalsIgnoreCase("Aqua"_s)) {
		$assign(color, hexToColor("#00FFFF"_s));
	} else if (str->equalsIgnoreCase("Orange"_s)) {
		$assign(color, hexToColor("#FF8000"_s));
	} else {
		$assign(color, hexToColor(str));
	}
	return color;
}

$Color* CSS::parseRGB($String* string) {
	$init(CSS);
	$var($ints, index, $new($ints, 1));
	index->set(0, 4);
	int32_t red = $cast(int32_t, getColorComponent(string, index));
	int32_t green = $cast(int32_t, getColorComponent(string, index));
	int32_t blue = $cast(int32_t, getColorComponent(string, index));
	return $new($Color, red, green, blue);
}

$Color* CSS::parseRGBA($String* string) {
	$init(CSS);
	$var($ints, index, $new($ints, 1));
	index->set(0, 4);
	float red = getColorComponent(string, index) / 255.0f;
	float green = getColorComponent(string, index) / 255.0f;
	float blue = getColorComponent(string, index) / 255.0f;
	float alpha = getColorComponent(string, index);
	return $new($Color, red, green, blue, alpha);
}

float CSS::getColorComponent($String* string, $ints* index) {
	$init(CSS);
	int32_t length = $nc(string)->length();
	char16_t aChar = 0;
	while (true) {
		bool var$0 = $nc(index)->get(0) < length && (aChar = string->charAt(index->get(0))) != u'-';
		if (!(var$0 && !$Character::isDigit(aChar) && aChar != u'.')) {
			break;
		}
		{
			++(*index)[0];
		}
	}
	int32_t start = $nc(index)->get(0);
	if (start < length && string->charAt(index->get(0)) == u'-') {
		++(*index)[0];
	}
	while (index->get(0) < length && $Character::isDigit(string->charAt(index->get(0)))) {
		++(*index)[0];
	}
	if (index->get(0) < length && string->charAt(index->get(0)) == u'.') {
		++(*index)[0];
		while (index->get(0) < length && $Character::isDigit(string->charAt(index->get(0)))) {
			++(*index)[0];
		}
	}
	if (start != index->get(0)) {
		try {
			float value = $Float::parseFloat($(string->substring(start, index->get(0))));
			if (index->get(0) < length && string->charAt(index->get(0)) == u'%') {
				++(*index)[0];
				value = value * 255.0f / 100.0f;
			}
			return $Math::min(255.0f, $Math::max((float)0, value));
		} catch ($NumberFormatException& nfe) {
		}
	}
	return (float)0;
}

int32_t CSS::getIndexOfSize(float pt, $ints* sizeMap) {
	$init(CSS);
	for (int32_t i = 0; i < $nc(sizeMap)->length; ++i) {
		if (pt <= sizeMap->get(i)) {
			return i + 1;
		}
	}
	return $nc(sizeMap)->length;
}

int32_t CSS::getIndexOfSize(float pt, $StyleSheet* ss) {
	$init(CSS);
	$init($StyleSheet);
	$var($ints, sizeMap, (ss != nullptr) ? $nc(ss)->getSizeMap() : $StyleSheet::sizeMapDefault);
	return getIndexOfSize(pt, sizeMap);
}

$StringArray* CSS::parseStrings($String* value) {
	$init(CSS);
	$useLocalCurrentObjectStackCache();
	int32_t current = 0;
	int32_t last = 0;
	int32_t length = (value == nullptr) ? 0 : $nc(value)->length();
	$var($Vector, temp, $new($Vector, 4));
	current = 0;
	while (current < length) {
		while (current < length && $Character::isWhitespace(value->charAt(current))) {
			++current;
		}
		last = current;
		int32_t inParentheses = 0;
		char16_t ch = 0;
		while (current < length && (!$Character::isWhitespace(ch = value->charAt(current)) || inParentheses > 0)) {
			if (ch == u'(') {
				++inParentheses;
			} else if (ch == u')') {
				--inParentheses;
			}
			++current;
		}
		if (last != current) {
			temp->addElement($(value->substring(last, current)));
		}
		++current;
	}
	$var($StringArray, retValue, $new($StringArray, temp->size()));
	temp->copyInto(retValue);
	return retValue;
}

float CSS::getPointSize(int32_t index, $StyleSheet* ss$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($StyleSheet, ss, ss$renamed);
	$assign(ss, getStyleSheet(ss));
	$init($StyleSheet);
	$var($ints, sizeMap, (ss != nullptr) ? $nc(ss)->getSizeMap() : $StyleSheet::sizeMapDefault);
	--index;
	if (index < 0) {
		return (float)$nc(sizeMap)->get(0);
	} else if (index > $nc(sizeMap)->length - 1) {
		return (float)sizeMap->get(sizeMap->length - 1);
	} else {
		return (float)sizeMap->get(index);
	}
}

void CSS::translateEmbeddedAttributes($AttributeSet* htmlAttrSet, $MutableAttributeSet* cssAttrSet) {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, keys, $nc(htmlAttrSet)->getAttributeNames());
	$init($StyleConstants);
	$init($HTML$Tag);
	if ($equals(htmlAttrSet->getAttribute($StyleConstants::NameAttribute), $HTML$Tag::HR)) {
		translateAttributes($HTML$Tag::HR, htmlAttrSet, cssAttrSet);
	}
	while ($nc(keys)->hasMoreElements()) {
		$var($Object, key, keys->nextElement());
		if ($instanceOf($HTML$Tag, key)) {
			$var($HTML$Tag, tag, $cast($HTML$Tag, key));
			$var($Object, o, htmlAttrSet->getAttribute(tag));
			if (o != nullptr && $instanceOf($AttributeSet, o)) {
				translateAttributes(tag, $cast($AttributeSet, o), cssAttrSet);
			}
		} else if ($instanceOf($CSS$Attribute, key)) {
			$nc(cssAttrSet)->addAttribute(key, $(htmlAttrSet->getAttribute(key)));
		}
	}
}

void CSS::translateAttributes($HTML$Tag* tag, $AttributeSet* htmlAttrSet, $MutableAttributeSet* cssAttrSet) {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, names, $nc(htmlAttrSet)->getAttributeNames());
	while ($nc(names)->hasMoreElements()) {
		$var($Object, name, names->nextElement());
		if ($instanceOf($HTML$Attribute, name)) {
			$var($HTML$Attribute, key, $cast($HTML$Attribute, name));
			$init($HTML$Attribute);
			if (key == $HTML$Attribute::ALIGN) {
				$var($String, htmlAttrValue, $cast($String, htmlAttrSet->getAttribute($HTML$Attribute::ALIGN)));
				if (htmlAttrValue != nullptr) {
					$var($CSS$Attribute, cssAttr, getCssAlignAttribute(tag, htmlAttrSet));
					if (cssAttr != nullptr) {
						$var($Object, o, getCssValue(cssAttr, htmlAttrValue));
						if (o != nullptr) {
							$nc(cssAttrSet)->addAttribute(cssAttr, o);
						}
					}
				}
			} else {
				if (key == $HTML$Attribute::SIZE && !isHTMLFontTag(tag)) {
				} else {
					$init($HTML$Tag);
					if (tag == $HTML$Tag::TABLE && key == $HTML$Attribute::BORDER) {
						int32_t borderWidth = getTableBorder(htmlAttrSet);
						if (borderWidth > 0) {
							translateAttribute($HTML$Attribute::BORDER, $($Integer::toString(borderWidth)), cssAttrSet);
						}
					} else {
						translateAttribute(key, $cast($String, $(htmlAttrSet->getAttribute(key))), cssAttrSet);
					}
				}
			}
		} else if ($instanceOf($CSS$Attribute, name)) {
			$nc(cssAttrSet)->addAttribute(name, $(htmlAttrSet->getAttribute(name)));
		}
	}
}

void CSS::translateAttribute($HTML$Attribute* key, $String* htmlAttrValue, $MutableAttributeSet* cssAttrSet) {
	$useLocalCurrentObjectStackCache();
	$var($CSS$AttributeArray, cssAttrList, getCssAttribute(key));
	if (cssAttrList == nullptr || htmlAttrValue == nullptr) {
		return;
	}
	{
		$var($CSS$AttributeArray, arr$, cssAttrList);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($CSS$Attribute, cssAttr, arr$->get(i$));
			{
				$var($Object, o, getCssValue(cssAttr, htmlAttrValue));
				if (o != nullptr) {
					$nc(cssAttrSet)->addAttribute(cssAttr, o);
				}
			}
		}
	}
}

$Object* CSS::getCssValue($CSS$Attribute* cssAttr, $String* htmlAttrValue) {
	$useLocalCurrentObjectStackCache();
	$var($CSS$CssValue, value, $cast($CSS$CssValue, $nc(this->valueConvertor)->get(cssAttr)));
	$var($Object, o, $nc(value)->parseHtmlValue(htmlAttrValue));
	return $of(o);
}

$CSS$AttributeArray* CSS::getCssAttribute($HTML$Attribute* hAttr) {
	return $cast($CSS$AttributeArray, $nc(CSS::htmlAttrToCssAttrMap)->get(hAttr));
}

$CSS$Attribute* CSS::getCssAlignAttribute($HTML$Tag* tag, $AttributeSet* htmlAttrSet) {
	$init($CSS$Attribute);
	return $CSS$Attribute::TEXT_ALIGN;
}

$HTML$Tag* CSS::getHTMLTag($AttributeSet* htmlAttrSet) {
	$useLocalCurrentObjectStackCache();
	$init($StyleConstants);
	$var($Object, o, $nc(htmlAttrSet)->getAttribute($StyleConstants::NameAttribute));
	if ($instanceOf($HTML$Tag, o)) {
		$var($HTML$Tag, tag, $cast($HTML$Tag, o));
		return tag;
	}
	return nullptr;
}

bool CSS::isHTMLFontTag($HTML$Tag* tag) {
	$init($HTML$Tag);
	return (tag != nullptr && ((tag == $HTML$Tag::FONT) || (tag == $HTML$Tag::BASEFONT)));
}

bool CSS::isFloater($String* alignValue) {
	bool var$0 = $nc(alignValue)->equals("left"_s);
	return (var$0 || $nc(alignValue)->equals("right"_s));
}

bool CSS::validTextAlignValue($String* alignValue) {
	bool var$0 = isFloater(alignValue);
	return (var$0 || $nc(alignValue)->equals("center"_s));
}

$SizeRequirements* CSS::calculateTiledRequirements($CSS$LayoutIterator* iter, $SizeRequirements* r$renamed) {
	$init(CSS);
	$var($SizeRequirements, r, r$renamed);
	int64_t minimum = 0;
	int64_t maximum = 0;
	int64_t preferred = 0;
	int32_t lastMargin = 0;
	int32_t totalSpacing = 0;
	int32_t n = $nc(iter)->getCount();
	for (int32_t i = 0; i < n; ++i) {
		iter->setIndex(i);
		int32_t margin0 = lastMargin;
		int32_t margin1 = $cast(int32_t, iter->getLeadingCollapseSpan());
		totalSpacing += $Math::max(margin0, margin1);
		preferred += $cast(int32_t, iter->getPreferredSpan((float)0));
		minimum += iter->getMinimumSpan((float)0);
		maximum += iter->getMaximumSpan((float)0);
		lastMargin = $cast(int32_t, iter->getTrailingCollapseSpan());
	}
	totalSpacing += lastMargin;
	totalSpacing += 2 * iter->getBorderWidth();
	minimum += totalSpacing;
	preferred += totalSpacing;
	maximum += totalSpacing;
	if (r == nullptr) {
		$assign(r, $new($SizeRequirements));
	}
	$nc(r)->minimum = (minimum > $Integer::MAX_VALUE) ? $Integer::MAX_VALUE : (int32_t)minimum;
	r->preferred = (preferred > $Integer::MAX_VALUE) ? $Integer::MAX_VALUE : (int32_t)preferred;
	r->maximum = (maximum > $Integer::MAX_VALUE) ? $Integer::MAX_VALUE : (int32_t)maximum;
	return r;
}

void CSS::calculateTiledLayout($CSS$LayoutIterator* iter, int32_t targetSpan) {
	$init(CSS);
	$useLocalCurrentObjectStackCache();
	int64_t preferred = 0;
	int64_t currentPreferred = 0;
	int32_t lastMargin = 0;
	int32_t totalSpacing = 0;
	int32_t n = $nc(iter)->getCount();
	int32_t adjustmentWeightsCount = $CSS$LayoutIterator::WorstAdjustmentWeight + 1;
	$var($longs, gain, $new($longs, adjustmentWeightsCount));
	$var($longs, loss, $new($longs, adjustmentWeightsCount));
	for (int32_t i = 0; i < adjustmentWeightsCount; ++i) {
		int32_t var$0 = i;
		gain->set(var$0, loss->set(i, 0));
	}
	for (int32_t i = 0; i < n; ++i) {
		iter->setIndex(i);
		int32_t margin0 = lastMargin;
		int32_t margin1 = $cast(int32_t, iter->getLeadingCollapseSpan());
		iter->setOffset($Math::max(margin0, margin1));
		totalSpacing += iter->getOffset();
		currentPreferred = $cast(int64_t, iter->getPreferredSpan((float)targetSpan));
		iter->setSpan((int32_t)currentPreferred);
		preferred += currentPreferred;
		(*gain)[iter->getAdjustmentWeight()] += $cast(int64_t, iter->getMaximumSpan((float)targetSpan)) - currentPreferred;
		(*loss)[iter->getAdjustmentWeight()] += currentPreferred - $cast(int64_t, iter->getMinimumSpan((float)targetSpan));
		lastMargin = $cast(int32_t, iter->getTrailingCollapseSpan());
	}
	totalSpacing += lastMargin;
	totalSpacing += 2 * iter->getBorderWidth();
	for (int32_t i = 1; i < adjustmentWeightsCount; ++i) {
		(*gain)[i] += gain->get(i - 1);
		(*loss)[i] += loss->get(i - 1);
	}
	int32_t allocated = targetSpan - totalSpacing;
	int64_t desiredAdjustment = allocated - preferred;
	$var($longs, adjustmentsArray, (desiredAdjustment > 0) ? gain : loss);
	desiredAdjustment = $Math::abs(desiredAdjustment);
	int32_t adjustmentLevel = 0;
	for (; adjustmentLevel <= $CSS$LayoutIterator::WorstAdjustmentWeight; ++adjustmentLevel) {
		if ($nc(adjustmentsArray)->get(adjustmentLevel) >= desiredAdjustment) {
			break;
		}
	}
	float adjustmentFactor = 0.0f;
	if (adjustmentLevel <= $CSS$LayoutIterator::WorstAdjustmentWeight) {
		desiredAdjustment -= (adjustmentLevel > 0) ? $nc(adjustmentsArray)->get(adjustmentLevel - 1) : (int64_t)0;
		if (desiredAdjustment != 0) {
			float maximumAdjustment = (float)(adjustmentsArray->get(adjustmentLevel) - ((adjustmentLevel > 0) ? adjustmentsArray->get(adjustmentLevel - 1) : (int64_t)0));
			adjustmentFactor = desiredAdjustment / maximumAdjustment;
		}
	}
	int32_t totalOffset = $cast(int32_t, iter->getBorderWidth());
	for (int32_t i = 0; i < n; ++i) {
		iter->setIndex(i);
		iter->setOffset(iter->getOffset() + totalOffset);
		if (iter->getAdjustmentWeight() < adjustmentLevel) {
			iter->setSpan($cast(int32_t, ((allocated > preferred) ? $Math::floor(iter->getMaximumSpan((float)targetSpan)) : $Math::ceil(iter->getMinimumSpan((float)targetSpan)))));
		} else if (iter->getAdjustmentWeight() == adjustmentLevel) {
			int32_t var$1 = 0;
			if (allocated > preferred) {
				int32_t var$2 = $cast(int32_t, iter->getMaximumSpan((float)targetSpan));
				var$1 = var$2 - iter->getSpan();
			} else {
				int32_t var$3 = iter->getSpan();
				var$1 = var$3 - $cast(int32_t, iter->getMinimumSpan((float)targetSpan));
			}
			int32_t availableSpan = var$1;
			int32_t adj = $cast(int32_t, $Math::floor(adjustmentFactor * availableSpan));
			iter->setSpan(iter->getSpan() + ((allocated > preferred) ? adj : -adj));
		}
		int64_t var$4 = (int64_t)iter->getOffset();
		totalOffset = (int32_t)$Math::min(var$4 + (int64_t)iter->getSpan(), (int64_t)$Integer::MAX_VALUE);
	}
	int32_t var$5 = targetSpan - totalOffset - $cast(int32_t, iter->getTrailingCollapseSpan());
	int32_t roundError = var$5 - $cast(int32_t, iter->getBorderWidth());
	int32_t adj = (roundError > 0) ? 1 : -1;
	roundError *= adj;
	bool canAdjust = true;
	while (roundError > 0 && canAdjust) {
		canAdjust = false;
		int32_t offsetAdjust = 0;
		for (int32_t i = 0; i < n; ++i) {
			iter->setIndex(i);
			iter->setOffset(iter->getOffset() + offsetAdjust);
			int32_t curSpan = iter->getSpan();
			if (roundError > 0) {
				int32_t boundGap = (adj > 0) ? $cast(int32_t, $Math::floor(iter->getMaximumSpan((float)targetSpan))) - curSpan : curSpan - $cast(int32_t, $Math::ceil(iter->getMinimumSpan((float)targetSpan)));
				if (boundGap >= 1) {
					canAdjust = true;
					iter->setSpan(curSpan + adj);
					offsetAdjust += adj;
					--roundError;
				}
			}
		}
	}
}

void CSS::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultWriteObject();
	$var($Enumeration, keys, $nc(this->valueConvertor)->keys());
	s->writeInt($nc(this->valueConvertor)->size());
	if (keys != nullptr) {
		while (keys->hasMoreElements()) {
			$var($Object, key, keys->nextElement());
			$var($Object, value, $nc(this->valueConvertor)->get(key));
			if (!($instanceOf($Serializable, key)) && ($assign(key, $StyleContext::getStaticAttributeKey(key))) == nullptr) {
				$assign(key, nullptr);
				$assign(value, nullptr);
			} else if (!($instanceOf($Serializable, value)) && ($assign(value, $StyleContext::getStaticAttributeKey(value))) == nullptr) {
				$assign(key, nullptr);
				$assign(value, nullptr);
			}
			s->writeObject(key);
			s->writeObject(value);
		}
	}
}

void CSS::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	int32_t newBaseFontSize = $nc(f)->get("baseFontSize"_s, 0);
	setBaseFontSize(newBaseFontSize);
	int32_t numValues = s->readInt();
	$set(this, valueConvertor, $new($Hashtable));
	while (numValues-- > 0) {
		$var($Object, key, s->readObject());
		$var($Object, value, s->readObject());
		$var($Object, staticKey, $StyleContext::getStaticAttribute(key));
		if (staticKey != nullptr) {
			$assign(key, staticKey);
		}
		$var($Object, staticValue, $StyleContext::getStaticAttribute(value));
		if (staticValue != nullptr) {
			$assign(value, staticValue);
		}
		if (key != nullptr && value != nullptr) {
			$nc(this->valueConvertor)->put(key, value);
		}
	}
}

$StyleSheet* CSS::getStyleSheet($StyleSheet* ss) {
	if (ss != nullptr) {
		$set(this, styleSheet, ss);
	}
	return this->styleSheet;
}

void clinit$CSS($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(CSS::attributeMap, $new($Hashtable));
	$assignStatic(CSS::valueMap, $new($Hashtable));
	$assignStatic(CSS::htmlAttrToCssAttrMap, $new($Hashtable, 20));
	$assignStatic(CSS::styleConstantToCssMap, $new($Hashtable, 17));
	$assignStatic(CSS::htmlValueToCssValueMap, $new($Hashtable, 8));
	$assignStatic(CSS::cssValueToInternalValueMap, $new($Hashtable, 13));
	{
		$init($CSS$Attribute);
		for (int32_t i = 0; i < $nc($CSS$Attribute::allAttributes)->length; ++i) {
			$nc(CSS::attributeMap)->put($($nc($nc($CSS$Attribute::allAttributes)->get(i))->toString()), $nc($CSS$Attribute::allAttributes)->get(i));
		}
		$init($CSS$Value);
		for (int32_t i = 0; i < $nc($CSS$Value::allValues)->length; ++i) {
			$nc(CSS::valueMap)->put($($nc($nc($CSS$Value::allValues)->get(i))->toString()), $nc($CSS$Value::allValues)->get(i));
		}
		$init($HTML$Attribute);
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::COLOR, $$new($CSS$AttributeArray, {$CSS$Attribute::COLOR}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::TEXT, $$new($CSS$AttributeArray, {$CSS$Attribute::COLOR}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::CLEAR, $$new($CSS$AttributeArray, {$CSS$Attribute::CLEAR}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::BACKGROUND, $$new($CSS$AttributeArray, {$CSS$Attribute::BACKGROUND_IMAGE}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::BGCOLOR, $$new($CSS$AttributeArray, {$CSS$Attribute::BACKGROUND_COLOR}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::WIDTH, $$new($CSS$AttributeArray, {$CSS$Attribute::WIDTH}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::HEIGHT, $$new($CSS$AttributeArray, {$CSS$Attribute::HEIGHT}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::BORDER, $$new($CSS$AttributeArray, {
			$CSS$Attribute::BORDER_TOP_WIDTH,
			$CSS$Attribute::BORDER_RIGHT_WIDTH,
			$CSS$Attribute::BORDER_BOTTOM_WIDTH,
			$CSS$Attribute::BORDER_LEFT_WIDTH
		}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::CELLPADDING, $$new($CSS$AttributeArray, {$CSS$Attribute::PADDING}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::CELLSPACING, $$new($CSS$AttributeArray, {$CSS$Attribute::BORDER_SPACING}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::MARGINWIDTH, $$new($CSS$AttributeArray, {
			$CSS$Attribute::MARGIN_LEFT,
			$CSS$Attribute::MARGIN_RIGHT
		}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::MARGINHEIGHT, $$new($CSS$AttributeArray, {
			$CSS$Attribute::MARGIN_TOP,
			$CSS$Attribute::MARGIN_BOTTOM
		}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::HSPACE, $$new($CSS$AttributeArray, {
			$CSS$Attribute::PADDING_LEFT,
			$CSS$Attribute::PADDING_RIGHT
		}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::VSPACE, $$new($CSS$AttributeArray, {
			$CSS$Attribute::PADDING_BOTTOM,
			$CSS$Attribute::PADDING_TOP
		}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::FACE, $$new($CSS$AttributeArray, {$CSS$Attribute::FONT_FAMILY}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::SIZE, $$new($CSS$AttributeArray, {$CSS$Attribute::FONT_SIZE}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::VALIGN, $$new($CSS$AttributeArray, {$CSS$Attribute::VERTICAL_ALIGN}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::ALIGN, $$new($CSS$AttributeArray, {
			$CSS$Attribute::VERTICAL_ALIGN,
			$CSS$Attribute::TEXT_ALIGN,
			$CSS$Attribute::FLOAT
		}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::TYPE, $$new($CSS$AttributeArray, {$CSS$Attribute::LIST_STYLE_TYPE}));
		$nc(CSS::htmlAttrToCssAttrMap)->put($HTML$Attribute::NOWRAP, $$new($CSS$AttributeArray, {$CSS$Attribute::WHITE_SPACE}));
		$init($StyleConstants);
		$nc(CSS::styleConstantToCssMap)->put($StyleConstants::FontFamily, $CSS$Attribute::FONT_FAMILY);
		$nc(CSS::styleConstantToCssMap)->put($StyleConstants::FontSize, $CSS$Attribute::FONT_SIZE);
		$nc(CSS::styleConstantToCssMap)->put($StyleConstants::Bold, $CSS$Attribute::FONT_WEIGHT);
		$nc(CSS::styleConstantToCssMap)->put($StyleConstants::Italic, $CSS$Attribute::FONT_STYLE);
		$nc(CSS::styleConstantToCssMap)->put($StyleConstants::Underline, $CSS$Attribute::TEXT_DECORATION);
		$nc(CSS::styleConstantToCssMap)->put($StyleConstants::StrikeThrough, $CSS$Attribute::TEXT_DECORATION);
		$nc(CSS::styleConstantToCssMap)->put($StyleConstants::Superscript, $CSS$Attribute::VERTICAL_ALIGN);
		$nc(CSS::styleConstantToCssMap)->put($StyleConstants::Subscript, $CSS$Attribute::VERTICAL_ALIGN);
		$nc(CSS::styleConstantToCssMap)->put($StyleConstants::Foreground, $CSS$Attribute::COLOR);
		$nc(CSS::styleConstantToCssMap)->put($StyleConstants::Background, $CSS$Attribute::BACKGROUND_COLOR);
		$nc(CSS::styleConstantToCssMap)->put($StyleConstants::FirstLineIndent, $CSS$Attribute::TEXT_INDENT);
		$nc(CSS::styleConstantToCssMap)->put($StyleConstants::LeftIndent, $CSS$Attribute::MARGIN_LEFT);
		$nc(CSS::styleConstantToCssMap)->put($StyleConstants::RightIndent, $CSS$Attribute::MARGIN_RIGHT);
		$nc(CSS::styleConstantToCssMap)->put($StyleConstants::SpaceAbove, $CSS$Attribute::MARGIN_TOP);
		$nc(CSS::styleConstantToCssMap)->put($StyleConstants::SpaceBelow, $CSS$Attribute::MARGIN_BOTTOM);
		$nc(CSS::styleConstantToCssMap)->put($StyleConstants::Alignment, $CSS$Attribute::TEXT_ALIGN);
		$nc(CSS::htmlValueToCssValueMap)->put("disc"_s, $CSS$Value::DISC);
		$nc(CSS::htmlValueToCssValueMap)->put("square"_s, $CSS$Value::SQUARE);
		$nc(CSS::htmlValueToCssValueMap)->put("circle"_s, $CSS$Value::CIRCLE);
		$nc(CSS::htmlValueToCssValueMap)->put("1"_s, $CSS$Value::DECIMAL);
		$nc(CSS::htmlValueToCssValueMap)->put("a"_s, $CSS$Value::LOWER_ALPHA);
		$nc(CSS::htmlValueToCssValueMap)->put("A"_s, $CSS$Value::UPPER_ALPHA);
		$nc(CSS::htmlValueToCssValueMap)->put("i"_s, $CSS$Value::LOWER_ROMAN);
		$nc(CSS::htmlValueToCssValueMap)->put("I"_s, $CSS$Value::UPPER_ROMAN);
		$nc(CSS::cssValueToInternalValueMap)->put("none"_s, $CSS$Value::NONE);
		$nc(CSS::cssValueToInternalValueMap)->put("disc"_s, $CSS$Value::DISC);
		$nc(CSS::cssValueToInternalValueMap)->put("square"_s, $CSS$Value::SQUARE);
		$nc(CSS::cssValueToInternalValueMap)->put("circle"_s, $CSS$Value::CIRCLE);
		$nc(CSS::cssValueToInternalValueMap)->put("decimal"_s, $CSS$Value::DECIMAL);
		$nc(CSS::cssValueToInternalValueMap)->put("lower-roman"_s, $CSS$Value::LOWER_ROMAN);
		$nc(CSS::cssValueToInternalValueMap)->put("upper-roman"_s, $CSS$Value::UPPER_ROMAN);
		$nc(CSS::cssValueToInternalValueMap)->put("lower-alpha"_s, $CSS$Value::LOWER_ALPHA);
		$nc(CSS::cssValueToInternalValueMap)->put("upper-alpha"_s, $CSS$Value::UPPER_ALPHA);
		$nc(CSS::cssValueToInternalValueMap)->put("repeat"_s, $CSS$Value::BACKGROUND_REPEAT);
		$nc(CSS::cssValueToInternalValueMap)->put("no-repeat"_s, $CSS$Value::BACKGROUND_NO_REPEAT);
		$nc(CSS::cssValueToInternalValueMap)->put("repeat-x"_s, $CSS$Value::BACKGROUND_REPEAT_X);
		$nc(CSS::cssValueToInternalValueMap)->put("repeat-y"_s, $CSS$Value::BACKGROUND_REPEAT_Y);
		$nc(CSS::cssValueToInternalValueMap)->put("scroll"_s, $CSS$Value::BACKGROUND_SCROLL);
		$nc(CSS::cssValueToInternalValueMap)->put("fixed"_s, $CSS$Value::BACKGROUND_FIXED);
		$var($ObjectArray, keys, $CSS$Attribute::allAttributes);
		try {
			{
				$var($ObjectArray, arr$, keys);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($Object0, key, arr$->get(i$));
					{
						$StyleContext::registerStaticAttributeKey(key);
					}
				}
			}
		} catch ($Throwable& e) {
			e->printStackTrace();
		}
		$assign(keys, $CSS$Value::allValues);
		try {
			{
				$var($ObjectArray, arr$, keys);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($Object0, key, arr$->get(i$));
					{
						$StyleContext::registerStaticAttributeKey(key);
					}
				}
			}
		} catch ($Throwable& e) {
			e->printStackTrace();
		}
	}
	CSS::baseFontSizeIndex = 3;
}

CSS::CSS() {
}

$Class* CSS::load$($String* name, bool initialize) {
	$loadClass(CSS, name, initialize, &_CSS_ClassInfo_, clinit$CSS, allocate$CSS);
	return class$;
}

$Class* CSS::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax