#include <javax/swing/text/html/CSS$Attribute.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

#undef ALL_BORDER_COLORS
#undef ALL_BORDER_STYLES
#undef ALL_BORDER_WIDTHS
#undef ALL_MARGINS
#undef ALL_PADDING
#undef BACKGROUND
#undef BACKGROUND_ATTACHMENT
#undef BACKGROUND_COLOR
#undef BACKGROUND_IMAGE
#undef BACKGROUND_POSITION
#undef BACKGROUND_REPEAT
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
#undef CAPTION_SIDE
#undef CLEAR
#undef COLOR
#undef DISPLAY
#undef FLOAT
#undef FONT
#undef FONT_FAMILY
#undef FONT_SIZE
#undef FONT_STYLE
#undef FONT_VARIANT
#undef FONT_WEIGHT
#undef HEIGHT
#undef LETTER_SPACING
#undef LINE_HEIGHT
#undef LIST_STYLE
#undef LIST_STYLE_IMAGE
#undef LIST_STYLE_POSITION
#undef LIST_STYLE_TYPE
#undef MARGIN
#undef MARGIN_BOTTOM
#undef MARGIN_LEFT
#undef MARGIN_LEFT_LTR
#undef MARGIN_LEFT_RTL
#undef MARGIN_RIGHT
#undef MARGIN_RIGHT_LTR
#undef MARGIN_RIGHT_RTL
#undef MARGIN_TOP
#undef MIN_VALUE
#undef PADDING
#undef PADDING_BOTTOM
#undef PADDING_LEFT
#undef PADDING_RIGHT
#undef PADDING_TOP
#undef TEXT_ALIGN
#undef TEXT_DECORATION
#undef TEXT_INDENT
#undef TEXT_TRANSFORM
#undef VERTICAL_ALIGN
#undef WHITE_SPACE
#undef WIDTH
#undef WORD_SPACING

using $CSS$AttributeArray = $Array<::javax::swing::text::html::CSS$Attribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CSS = ::javax::swing::text::html::CSS;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSS$Attribute_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CSS$Attribute, name)},
	{"defaultValue", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CSS$Attribute, defaultValue)},
	{"inherited", "Z", nullptr, $PRIVATE, $field(CSS$Attribute, inherited)},
	{"BACKGROUND", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BACKGROUND)},
	{"BACKGROUND_ATTACHMENT", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BACKGROUND_ATTACHMENT)},
	{"BACKGROUND_COLOR", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BACKGROUND_COLOR)},
	{"BACKGROUND_IMAGE", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BACKGROUND_IMAGE)},
	{"BACKGROUND_POSITION", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BACKGROUND_POSITION)},
	{"BACKGROUND_REPEAT", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BACKGROUND_REPEAT)},
	{"BORDER", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER)},
	{"BORDER_BOTTOM", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_BOTTOM)},
	{"BORDER_BOTTOM_COLOR", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_BOTTOM_COLOR)},
	{"BORDER_BOTTOM_STYLE", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_BOTTOM_STYLE)},
	{"BORDER_BOTTOM_WIDTH", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_BOTTOM_WIDTH)},
	{"BORDER_COLOR", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_COLOR)},
	{"BORDER_LEFT", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_LEFT)},
	{"BORDER_LEFT_COLOR", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_LEFT_COLOR)},
	{"BORDER_LEFT_STYLE", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_LEFT_STYLE)},
	{"BORDER_LEFT_WIDTH", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_LEFT_WIDTH)},
	{"BORDER_RIGHT", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_RIGHT)},
	{"BORDER_RIGHT_COLOR", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_RIGHT_COLOR)},
	{"BORDER_RIGHT_STYLE", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_RIGHT_STYLE)},
	{"BORDER_RIGHT_WIDTH", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_RIGHT_WIDTH)},
	{"BORDER_STYLE", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_STYLE)},
	{"BORDER_TOP", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_TOP)},
	{"BORDER_TOP_COLOR", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_TOP_COLOR)},
	{"BORDER_TOP_STYLE", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_TOP_STYLE)},
	{"BORDER_TOP_WIDTH", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_TOP_WIDTH)},
	{"BORDER_WIDTH", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_WIDTH)},
	{"CLEAR", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, CLEAR)},
	{"COLOR", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, COLOR)},
	{"DISPLAY", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, DISPLAY)},
	{"FLOAT", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, FLOAT)},
	{"FONT", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, FONT)},
	{"FONT_FAMILY", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, FONT_FAMILY)},
	{"FONT_SIZE", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, FONT_SIZE)},
	{"FONT_STYLE", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, FONT_STYLE)},
	{"FONT_VARIANT", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, FONT_VARIANT)},
	{"FONT_WEIGHT", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, FONT_WEIGHT)},
	{"HEIGHT", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, HEIGHT)},
	{"LETTER_SPACING", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, LETTER_SPACING)},
	{"LINE_HEIGHT", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, LINE_HEIGHT)},
	{"LIST_STYLE", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, LIST_STYLE)},
	{"LIST_STYLE_IMAGE", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, LIST_STYLE_IMAGE)},
	{"LIST_STYLE_POSITION", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, LIST_STYLE_POSITION)},
	{"LIST_STYLE_TYPE", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, LIST_STYLE_TYPE)},
	{"MARGIN", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, MARGIN)},
	{"MARGIN_BOTTOM", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, MARGIN_BOTTOM)},
	{"MARGIN_LEFT", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, MARGIN_LEFT)},
	{"MARGIN_RIGHT", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, MARGIN_RIGHT)},
	{"MARGIN_LEFT_LTR", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $STATIC | $FINAL, $staticField(CSS$Attribute, MARGIN_LEFT_LTR)},
	{"MARGIN_LEFT_RTL", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $STATIC | $FINAL, $staticField(CSS$Attribute, MARGIN_LEFT_RTL)},
	{"MARGIN_RIGHT_LTR", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $STATIC | $FINAL, $staticField(CSS$Attribute, MARGIN_RIGHT_LTR)},
	{"MARGIN_RIGHT_RTL", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $STATIC | $FINAL, $staticField(CSS$Attribute, MARGIN_RIGHT_RTL)},
	{"MARGIN_TOP", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, MARGIN_TOP)},
	{"PADDING", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, PADDING)},
	{"PADDING_BOTTOM", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, PADDING_BOTTOM)},
	{"PADDING_LEFT", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, PADDING_LEFT)},
	{"PADDING_RIGHT", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, PADDING_RIGHT)},
	{"PADDING_TOP", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, PADDING_TOP)},
	{"TEXT_ALIGN", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, TEXT_ALIGN)},
	{"TEXT_DECORATION", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, TEXT_DECORATION)},
	{"TEXT_INDENT", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, TEXT_INDENT)},
	{"TEXT_TRANSFORM", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, TEXT_TRANSFORM)},
	{"VERTICAL_ALIGN", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, VERTICAL_ALIGN)},
	{"WORD_SPACING", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, WORD_SPACING)},
	{"WHITE_SPACE", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, WHITE_SPACE)},
	{"WIDTH", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CSS$Attribute, WIDTH)},
	{"BORDER_SPACING", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $STATIC | $FINAL, $staticField(CSS$Attribute, BORDER_SPACING)},
	{"CAPTION_SIDE", "Ljavax/swing/text/html/CSS$Attribute;", nullptr, $STATIC | $FINAL, $staticField(CSS$Attribute, CAPTION_SIDE)},
	{"allAttributes", "[Ljavax/swing/text/html/CSS$Attribute;", nullptr, $STATIC | $FINAL, $staticField(CSS$Attribute, allAttributes)},
	{"ALL_MARGINS", "[Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CSS$Attribute, ALL_MARGINS)},
	{"ALL_PADDING", "[Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CSS$Attribute, ALL_PADDING)},
	{"ALL_BORDER_WIDTHS", "[Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CSS$Attribute, ALL_BORDER_WIDTHS)},
	{"ALL_BORDER_STYLES", "[Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CSS$Attribute, ALL_BORDER_STYLES)},
	{"ALL_BORDER_COLORS", "[Ljavax/swing/text/html/CSS$Attribute;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CSS$Attribute, ALL_BORDER_COLORS)},
	{}
};

$MethodInfo _CSS$Attribute_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(static_cast<void(CSS$Attribute::*)($String*,$String*,bool)>(&CSS$Attribute::init$))},
	{"getDefaultValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(CSS$Attribute::*)()>(&CSS$Attribute::getDefaultValue))},
	{"isInherited", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(CSS$Attribute::*)()>(&CSS$Attribute::isInherited))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CSS$Attribute_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$Attribute", "javax.swing.text.html.CSS", "Attribute", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _CSS$Attribute_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.text.html.CSS$Attribute",
	"java.lang.Object",
	nullptr,
	_CSS$Attribute_FieldInfo_,
	_CSS$Attribute_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$Attribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$Attribute($Class* clazz) {
	return $of($alloc(CSS$Attribute));
}


CSS$Attribute* CSS$Attribute::BACKGROUND = nullptr;

CSS$Attribute* CSS$Attribute::BACKGROUND_ATTACHMENT = nullptr;

CSS$Attribute* CSS$Attribute::BACKGROUND_COLOR = nullptr;

CSS$Attribute* CSS$Attribute::BACKGROUND_IMAGE = nullptr;

CSS$Attribute* CSS$Attribute::BACKGROUND_POSITION = nullptr;

CSS$Attribute* CSS$Attribute::BACKGROUND_REPEAT = nullptr;

CSS$Attribute* CSS$Attribute::BORDER = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_BOTTOM = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_BOTTOM_COLOR = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_BOTTOM_STYLE = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_BOTTOM_WIDTH = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_COLOR = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_LEFT = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_LEFT_COLOR = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_LEFT_STYLE = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_LEFT_WIDTH = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_RIGHT = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_RIGHT_COLOR = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_RIGHT_STYLE = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_RIGHT_WIDTH = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_STYLE = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_TOP = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_TOP_COLOR = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_TOP_STYLE = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_TOP_WIDTH = nullptr;

CSS$Attribute* CSS$Attribute::BORDER_WIDTH = nullptr;

CSS$Attribute* CSS$Attribute::CLEAR = nullptr;

CSS$Attribute* CSS$Attribute::COLOR = nullptr;

CSS$Attribute* CSS$Attribute::DISPLAY = nullptr;

CSS$Attribute* CSS$Attribute::FLOAT = nullptr;

CSS$Attribute* CSS$Attribute::FONT = nullptr;

CSS$Attribute* CSS$Attribute::FONT_FAMILY = nullptr;

CSS$Attribute* CSS$Attribute::FONT_SIZE = nullptr;

CSS$Attribute* CSS$Attribute::FONT_STYLE = nullptr;

CSS$Attribute* CSS$Attribute::FONT_VARIANT = nullptr;

CSS$Attribute* CSS$Attribute::FONT_WEIGHT = nullptr;

CSS$Attribute* CSS$Attribute::HEIGHT = nullptr;

CSS$Attribute* CSS$Attribute::LETTER_SPACING = nullptr;

CSS$Attribute* CSS$Attribute::LINE_HEIGHT = nullptr;

CSS$Attribute* CSS$Attribute::LIST_STYLE = nullptr;

CSS$Attribute* CSS$Attribute::LIST_STYLE_IMAGE = nullptr;

CSS$Attribute* CSS$Attribute::LIST_STYLE_POSITION = nullptr;

CSS$Attribute* CSS$Attribute::LIST_STYLE_TYPE = nullptr;

CSS$Attribute* CSS$Attribute::MARGIN = nullptr;

CSS$Attribute* CSS$Attribute::MARGIN_BOTTOM = nullptr;

CSS$Attribute* CSS$Attribute::MARGIN_LEFT = nullptr;

CSS$Attribute* CSS$Attribute::MARGIN_RIGHT = nullptr;
CSS$Attribute* CSS$Attribute::MARGIN_LEFT_LTR = nullptr;
CSS$Attribute* CSS$Attribute::MARGIN_LEFT_RTL = nullptr;
CSS$Attribute* CSS$Attribute::MARGIN_RIGHT_LTR = nullptr;
CSS$Attribute* CSS$Attribute::MARGIN_RIGHT_RTL = nullptr;

CSS$Attribute* CSS$Attribute::MARGIN_TOP = nullptr;

CSS$Attribute* CSS$Attribute::PADDING = nullptr;

CSS$Attribute* CSS$Attribute::PADDING_BOTTOM = nullptr;

CSS$Attribute* CSS$Attribute::PADDING_LEFT = nullptr;

CSS$Attribute* CSS$Attribute::PADDING_RIGHT = nullptr;

CSS$Attribute* CSS$Attribute::PADDING_TOP = nullptr;

CSS$Attribute* CSS$Attribute::TEXT_ALIGN = nullptr;

CSS$Attribute* CSS$Attribute::TEXT_DECORATION = nullptr;

CSS$Attribute* CSS$Attribute::TEXT_INDENT = nullptr;

CSS$Attribute* CSS$Attribute::TEXT_TRANSFORM = nullptr;

CSS$Attribute* CSS$Attribute::VERTICAL_ALIGN = nullptr;

CSS$Attribute* CSS$Attribute::WORD_SPACING = nullptr;

CSS$Attribute* CSS$Attribute::WHITE_SPACE = nullptr;

CSS$Attribute* CSS$Attribute::WIDTH = nullptr;
CSS$Attribute* CSS$Attribute::BORDER_SPACING = nullptr;
CSS$Attribute* CSS$Attribute::CAPTION_SIDE = nullptr;
$CSS$AttributeArray* CSS$Attribute::allAttributes = nullptr;
$CSS$AttributeArray* CSS$Attribute::ALL_MARGINS = nullptr;
$CSS$AttributeArray* CSS$Attribute::ALL_PADDING = nullptr;
$CSS$AttributeArray* CSS$Attribute::ALL_BORDER_WIDTHS = nullptr;
$CSS$AttributeArray* CSS$Attribute::ALL_BORDER_STYLES = nullptr;
$CSS$AttributeArray* CSS$Attribute::ALL_BORDER_COLORS = nullptr;

void CSS$Attribute::init$($String* name, $String* defaultValue, bool inherited) {
	$set(this, name, name);
	$set(this, defaultValue, defaultValue);
	this->inherited = inherited;
}

$String* CSS$Attribute::toString() {
	return this->name;
}

$String* CSS$Attribute::getDefaultValue() {
	return this->defaultValue;
}

bool CSS$Attribute::isInherited() {
	return this->inherited;
}

void clinit$CSS$Attribute($Class* class$) {
	$assignStatic(CSS$Attribute::BACKGROUND, $new(CSS$Attribute, "background"_s, nullptr, false));
	$assignStatic(CSS$Attribute::BACKGROUND_ATTACHMENT, $new(CSS$Attribute, "background-attachment"_s, "scroll"_s, false));
	$assignStatic(CSS$Attribute::BACKGROUND_COLOR, $new(CSS$Attribute, "background-color"_s, "transparent"_s, false));
	$assignStatic(CSS$Attribute::BACKGROUND_IMAGE, $new(CSS$Attribute, "background-image"_s, "none"_s, false));
	$assignStatic(CSS$Attribute::BACKGROUND_POSITION, $new(CSS$Attribute, "background-position"_s, nullptr, false));
	$assignStatic(CSS$Attribute::BACKGROUND_REPEAT, $new(CSS$Attribute, "background-repeat"_s, "repeat"_s, false));
	$assignStatic(CSS$Attribute::BORDER, $new(CSS$Attribute, "border"_s, nullptr, false));
	$assignStatic(CSS$Attribute::BORDER_BOTTOM, $new(CSS$Attribute, "border-bottom"_s, nullptr, false));
	$assignStatic(CSS$Attribute::BORDER_BOTTOM_COLOR, $new(CSS$Attribute, "border-bottom-color"_s, nullptr, false));
	$assignStatic(CSS$Attribute::BORDER_BOTTOM_STYLE, $new(CSS$Attribute, "border-bottom-style"_s, "none"_s, false));
	$assignStatic(CSS$Attribute::BORDER_BOTTOM_WIDTH, $new(CSS$Attribute, "border-bottom-width"_s, "medium"_s, false));
	$assignStatic(CSS$Attribute::BORDER_COLOR, $new(CSS$Attribute, "border-color"_s, nullptr, false));
	$assignStatic(CSS$Attribute::BORDER_LEFT, $new(CSS$Attribute, "border-left"_s, nullptr, false));
	$assignStatic(CSS$Attribute::BORDER_LEFT_COLOR, $new(CSS$Attribute, "border-left-color"_s, nullptr, false));
	$assignStatic(CSS$Attribute::BORDER_LEFT_STYLE, $new(CSS$Attribute, "border-left-style"_s, "none"_s, false));
	$assignStatic(CSS$Attribute::BORDER_LEFT_WIDTH, $new(CSS$Attribute, "border-left-width"_s, "medium"_s, false));
	$assignStatic(CSS$Attribute::BORDER_RIGHT, $new(CSS$Attribute, "border-right"_s, nullptr, false));
	$assignStatic(CSS$Attribute::BORDER_RIGHT_COLOR, $new(CSS$Attribute, "border-right-color"_s, nullptr, false));
	$assignStatic(CSS$Attribute::BORDER_RIGHT_STYLE, $new(CSS$Attribute, "border-right-style"_s, "none"_s, false));
	$assignStatic(CSS$Attribute::BORDER_RIGHT_WIDTH, $new(CSS$Attribute, "border-right-width"_s, "medium"_s, false));
	$assignStatic(CSS$Attribute::BORDER_STYLE, $new(CSS$Attribute, "border-style"_s, "none"_s, false));
	$assignStatic(CSS$Attribute::BORDER_TOP, $new(CSS$Attribute, "border-top"_s, nullptr, false));
	$assignStatic(CSS$Attribute::BORDER_TOP_COLOR, $new(CSS$Attribute, "border-top-color"_s, nullptr, false));
	$assignStatic(CSS$Attribute::BORDER_TOP_STYLE, $new(CSS$Attribute, "border-top-style"_s, "none"_s, false));
	$assignStatic(CSS$Attribute::BORDER_TOP_WIDTH, $new(CSS$Attribute, "border-top-width"_s, "medium"_s, false));
	$assignStatic(CSS$Attribute::BORDER_WIDTH, $new(CSS$Attribute, "border-width"_s, "medium"_s, false));
	$assignStatic(CSS$Attribute::CLEAR, $new(CSS$Attribute, "clear"_s, "none"_s, false));
	$assignStatic(CSS$Attribute::COLOR, $new(CSS$Attribute, "color"_s, "black"_s, true));
	$assignStatic(CSS$Attribute::DISPLAY, $new(CSS$Attribute, "display"_s, "block"_s, false));
	$assignStatic(CSS$Attribute::FLOAT, $new(CSS$Attribute, "float"_s, "none"_s, false));
	$assignStatic(CSS$Attribute::FONT, $new(CSS$Attribute, "font"_s, nullptr, true));
	$assignStatic(CSS$Attribute::FONT_FAMILY, $new(CSS$Attribute, "font-family"_s, nullptr, true));
	$assignStatic(CSS$Attribute::FONT_SIZE, $new(CSS$Attribute, "font-size"_s, "medium"_s, true));
	$assignStatic(CSS$Attribute::FONT_STYLE, $new(CSS$Attribute, "font-style"_s, "normal"_s, true));
	$assignStatic(CSS$Attribute::FONT_VARIANT, $new(CSS$Attribute, "font-variant"_s, "normal"_s, true));
	$assignStatic(CSS$Attribute::FONT_WEIGHT, $new(CSS$Attribute, "font-weight"_s, "normal"_s, true));
	$assignStatic(CSS$Attribute::HEIGHT, $new(CSS$Attribute, "height"_s, "auto"_s, false));
	$assignStatic(CSS$Attribute::LETTER_SPACING, $new(CSS$Attribute, "letter-spacing"_s, "normal"_s, true));
	$assignStatic(CSS$Attribute::LINE_HEIGHT, $new(CSS$Attribute, "line-height"_s, "normal"_s, true));
	$assignStatic(CSS$Attribute::LIST_STYLE, $new(CSS$Attribute, "list-style"_s, nullptr, true));
	$assignStatic(CSS$Attribute::LIST_STYLE_IMAGE, $new(CSS$Attribute, "list-style-image"_s, "none"_s, true));
	$assignStatic(CSS$Attribute::LIST_STYLE_POSITION, $new(CSS$Attribute, "list-style-position"_s, "outside"_s, true));
	$assignStatic(CSS$Attribute::LIST_STYLE_TYPE, $new(CSS$Attribute, "list-style-type"_s, "disc"_s, true));
	$assignStatic(CSS$Attribute::MARGIN, $new(CSS$Attribute, "margin"_s, nullptr, false));
	$assignStatic(CSS$Attribute::MARGIN_BOTTOM, $new(CSS$Attribute, "margin-bottom"_s, "0"_s, false));
	$assignStatic(CSS$Attribute::MARGIN_LEFT, $new(CSS$Attribute, "margin-left"_s, "0"_s, false));
	$assignStatic(CSS$Attribute::MARGIN_RIGHT, $new(CSS$Attribute, "margin-right"_s, "0"_s, false));
	$assignStatic(CSS$Attribute::MARGIN_LEFT_LTR, $new(CSS$Attribute, "margin-left-ltr"_s, $($Integer::toString($Integer::MIN_VALUE)), false));
	$assignStatic(CSS$Attribute::MARGIN_LEFT_RTL, $new(CSS$Attribute, "margin-left-rtl"_s, $($Integer::toString($Integer::MIN_VALUE)), false));
	$assignStatic(CSS$Attribute::MARGIN_RIGHT_LTR, $new(CSS$Attribute, "margin-right-ltr"_s, $($Integer::toString($Integer::MIN_VALUE)), false));
	$assignStatic(CSS$Attribute::MARGIN_RIGHT_RTL, $new(CSS$Attribute, "margin-right-rtl"_s, $($Integer::toString($Integer::MIN_VALUE)), false));
	$assignStatic(CSS$Attribute::MARGIN_TOP, $new(CSS$Attribute, "margin-top"_s, "0"_s, false));
	$assignStatic(CSS$Attribute::PADDING, $new(CSS$Attribute, "padding"_s, nullptr, false));
	$assignStatic(CSS$Attribute::PADDING_BOTTOM, $new(CSS$Attribute, "padding-bottom"_s, "0"_s, false));
	$assignStatic(CSS$Attribute::PADDING_LEFT, $new(CSS$Attribute, "padding-left"_s, "0"_s, false));
	$assignStatic(CSS$Attribute::PADDING_RIGHT, $new(CSS$Attribute, "padding-right"_s, "0"_s, false));
	$assignStatic(CSS$Attribute::PADDING_TOP, $new(CSS$Attribute, "padding-top"_s, "0"_s, false));
	$assignStatic(CSS$Attribute::TEXT_ALIGN, $new(CSS$Attribute, "text-align"_s, nullptr, true));
	$assignStatic(CSS$Attribute::TEXT_DECORATION, $new(CSS$Attribute, "text-decoration"_s, "none"_s, true));
	$assignStatic(CSS$Attribute::TEXT_INDENT, $new(CSS$Attribute, "text-indent"_s, "0"_s, true));
	$assignStatic(CSS$Attribute::TEXT_TRANSFORM, $new(CSS$Attribute, "text-transform"_s, "none"_s, true));
	$assignStatic(CSS$Attribute::VERTICAL_ALIGN, $new(CSS$Attribute, "vertical-align"_s, "baseline"_s, false));
	$assignStatic(CSS$Attribute::WORD_SPACING, $new(CSS$Attribute, "word-spacing"_s, "normal"_s, true));
	$assignStatic(CSS$Attribute::WHITE_SPACE, $new(CSS$Attribute, "white-space"_s, "normal"_s, true));
	$assignStatic(CSS$Attribute::WIDTH, $new(CSS$Attribute, "width"_s, "auto"_s, false));
	$assignStatic(CSS$Attribute::BORDER_SPACING, $new(CSS$Attribute, "border-spacing"_s, "0"_s, true));
	$assignStatic(CSS$Attribute::CAPTION_SIDE, $new(CSS$Attribute, "caption-side"_s, "left"_s, true));
	$assignStatic(CSS$Attribute::allAttributes, $new($CSS$AttributeArray, {
		CSS$Attribute::BACKGROUND,
		CSS$Attribute::BACKGROUND_ATTACHMENT,
		CSS$Attribute::BACKGROUND_COLOR,
		CSS$Attribute::BACKGROUND_IMAGE,
		CSS$Attribute::BACKGROUND_POSITION,
		CSS$Attribute::BACKGROUND_REPEAT,
		CSS$Attribute::BORDER,
		CSS$Attribute::BORDER_BOTTOM,
		CSS$Attribute::BORDER_BOTTOM_WIDTH,
		CSS$Attribute::BORDER_COLOR,
		CSS$Attribute::BORDER_LEFT,
		CSS$Attribute::BORDER_LEFT_WIDTH,
		CSS$Attribute::BORDER_RIGHT,
		CSS$Attribute::BORDER_RIGHT_WIDTH,
		CSS$Attribute::BORDER_STYLE,
		CSS$Attribute::BORDER_TOP,
		CSS$Attribute::BORDER_TOP_WIDTH,
		CSS$Attribute::BORDER_WIDTH,
		CSS$Attribute::BORDER_TOP_STYLE,
		CSS$Attribute::BORDER_RIGHT_STYLE,
		CSS$Attribute::BORDER_BOTTOM_STYLE,
		CSS$Attribute::BORDER_LEFT_STYLE,
		CSS$Attribute::BORDER_TOP_COLOR,
		CSS$Attribute::BORDER_RIGHT_COLOR,
		CSS$Attribute::BORDER_BOTTOM_COLOR,
		CSS$Attribute::BORDER_LEFT_COLOR,
		CSS$Attribute::CLEAR,
		CSS$Attribute::COLOR,
		CSS$Attribute::DISPLAY,
		CSS$Attribute::FLOAT,
		CSS$Attribute::FONT,
		CSS$Attribute::FONT_FAMILY,
		CSS$Attribute::FONT_SIZE,
		CSS$Attribute::FONT_STYLE,
		CSS$Attribute::FONT_VARIANT,
		CSS$Attribute::FONT_WEIGHT,
		CSS$Attribute::HEIGHT,
		CSS$Attribute::LETTER_SPACING,
		CSS$Attribute::LINE_HEIGHT,
		CSS$Attribute::LIST_STYLE,
		CSS$Attribute::LIST_STYLE_IMAGE,
		CSS$Attribute::LIST_STYLE_POSITION,
		CSS$Attribute::LIST_STYLE_TYPE,
		CSS$Attribute::MARGIN,
		CSS$Attribute::MARGIN_BOTTOM,
		CSS$Attribute::MARGIN_LEFT,
		CSS$Attribute::MARGIN_RIGHT,
		CSS$Attribute::MARGIN_TOP,
		CSS$Attribute::PADDING,
		CSS$Attribute::PADDING_BOTTOM,
		CSS$Attribute::PADDING_LEFT,
		CSS$Attribute::PADDING_RIGHT,
		CSS$Attribute::PADDING_TOP,
		CSS$Attribute::TEXT_ALIGN,
		CSS$Attribute::TEXT_DECORATION,
		CSS$Attribute::TEXT_INDENT,
		CSS$Attribute::TEXT_TRANSFORM,
		CSS$Attribute::VERTICAL_ALIGN,
		CSS$Attribute::WORD_SPACING,
		CSS$Attribute::WHITE_SPACE,
		CSS$Attribute::WIDTH,
		CSS$Attribute::BORDER_SPACING,
		CSS$Attribute::CAPTION_SIDE,
		CSS$Attribute::MARGIN_LEFT_LTR,
		CSS$Attribute::MARGIN_LEFT_RTL,
		CSS$Attribute::MARGIN_RIGHT_LTR,
		CSS$Attribute::MARGIN_RIGHT_RTL
	}));
	$assignStatic(CSS$Attribute::ALL_MARGINS, $new($CSS$AttributeArray, {
		CSS$Attribute::MARGIN_TOP,
		CSS$Attribute::MARGIN_RIGHT,
		CSS$Attribute::MARGIN_BOTTOM,
		CSS$Attribute::MARGIN_LEFT
	}));
	$assignStatic(CSS$Attribute::ALL_PADDING, $new($CSS$AttributeArray, {
		CSS$Attribute::PADDING_TOP,
		CSS$Attribute::PADDING_RIGHT,
		CSS$Attribute::PADDING_BOTTOM,
		CSS$Attribute::PADDING_LEFT
	}));
	$assignStatic(CSS$Attribute::ALL_BORDER_WIDTHS, $new($CSS$AttributeArray, {
		CSS$Attribute::BORDER_TOP_WIDTH,
		CSS$Attribute::BORDER_RIGHT_WIDTH,
		CSS$Attribute::BORDER_BOTTOM_WIDTH,
		CSS$Attribute::BORDER_LEFT_WIDTH
	}));
	$assignStatic(CSS$Attribute::ALL_BORDER_STYLES, $new($CSS$AttributeArray, {
		CSS$Attribute::BORDER_TOP_STYLE,
		CSS$Attribute::BORDER_RIGHT_STYLE,
		CSS$Attribute::BORDER_BOTTOM_STYLE,
		CSS$Attribute::BORDER_LEFT_STYLE
	}));
	$assignStatic(CSS$Attribute::ALL_BORDER_COLORS, $new($CSS$AttributeArray, {
		CSS$Attribute::BORDER_TOP_COLOR,
		CSS$Attribute::BORDER_RIGHT_COLOR,
		CSS$Attribute::BORDER_BOTTOM_COLOR,
		CSS$Attribute::BORDER_LEFT_COLOR
	}));
}

CSS$Attribute::CSS$Attribute() {
}

$Class* CSS$Attribute::load$($String* name, bool initialize) {
	$loadClass(CSS$Attribute, name, initialize, &_CSS$Attribute_ClassInfo_, clinit$CSS$Attribute, allocate$CSS$Attribute);
	return class$;
}

$Class* CSS$Attribute::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax