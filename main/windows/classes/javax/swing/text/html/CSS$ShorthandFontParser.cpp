#include <javax/swing/text/html/CSS$ShorthandFontParser.h>

#include <java/awt/Font.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

#undef FONT_FAMILY
#undef FONT_SIZE
#undef FONT_STYLE
#undef FONT_VARIANT
#undef FONT_WEIGHT
#undef LINE_HEIGHT
#undef SANS_SERIF

using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _CSS$ShorthandFontParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSS$ShorthandFontParser::*)()>(&CSS$ShorthandFontParser::init$))},
	{"isFontStyle", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&CSS$ShorthandFontParser::isFontStyle))},
	{"isFontVariant", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&CSS$ShorthandFontParser::isFontVariant))},
	{"isFontWeight", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&CSS$ShorthandFontParser::isFontWeight))},
	{"parseShorthandFont", "(Ljavax/swing/text/html/CSS;Ljava/lang/String;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $STATIC, $method(static_cast<void(*)($CSS*,$String*,$MutableAttributeSet*)>(&CSS$ShorthandFontParser::parseShorthandFont))},
	{}
};

$InnerClassInfo _CSS$ShorthandFontParser_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$ShorthandFontParser", "javax.swing.text.html.CSS", "ShorthandFontParser", $STATIC},
	{}
};

$ClassInfo _CSS$ShorthandFontParser_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSS$ShorthandFontParser",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CSS$ShorthandFontParser_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$ShorthandFontParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$ShorthandFontParser($Class* clazz) {
	return $of($alloc(CSS$ShorthandFontParser));
}

void CSS$ShorthandFontParser::init$() {
}

void CSS$ShorthandFontParser::parseShorthandFont($CSS* css, $String* value, $MutableAttributeSet* attr) {
	$var($StringArray, strings, $CSS::parseStrings(value));
	int32_t count = $nc(strings)->length;
	int32_t index = 0;
	int16_t found = (int16_t)0;
	int32_t maxC = $Math::min(3, count);
	while (index < maxC) {
		if (((int32_t)(found & (uint32_t)1)) == 0 && isFontStyle(strings->get(index))) {
			$init($CSS$Attribute);
			$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::FONT_STYLE, strings->get(index++));
			found |= 1;
		} else if (((int32_t)(found & (uint32_t)2)) == 0 && isFontVariant(strings->get(index))) {
			$init($CSS$Attribute);
			$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::FONT_VARIANT, strings->get(index++));
			found |= 2;
		} else if (((int32_t)(found & (uint32_t)4)) == 0 && isFontWeight(strings->get(index))) {
			$init($CSS$Attribute);
			$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::FONT_WEIGHT, strings->get(index++));
			found |= 4;
		} else if ($nc(strings->get(index))->equals("normal"_s)) {
			++index;
		} else {
			break;
		}
	}
	if (((int32_t)(found & (uint32_t)1)) == 0) {
		$init($CSS$Attribute);
		$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::FONT_STYLE, "normal"_s);
	}
	if (((int32_t)(found & (uint32_t)2)) == 0) {
		$init($CSS$Attribute);
		$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::FONT_VARIANT, "normal"_s);
	}
	if (((int32_t)(found & (uint32_t)4)) == 0) {
		$init($CSS$Attribute);
		$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::FONT_WEIGHT, "normal"_s);
	}
	if (index < count) {
		$var($String, fontSize, strings->get(index));
		int32_t slashIndex = $nc(fontSize)->indexOf((int32_t)u'/');
		if (slashIndex != -1) {
			$assign(fontSize, fontSize->substring(0, slashIndex));
			strings->set(index, $($nc(strings->get(index))->substring(slashIndex)));
		} else {
			++index;
		}
		$init($CSS$Attribute);
		$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::FONT_SIZE, fontSize);
	} else {
		$init($CSS$Attribute);
		$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::FONT_SIZE, "medium"_s);
	}
	if (index < count && $nc(strings->get(index))->startsWith("/"_s)) {
		$var($String, lineHeight, nullptr);
		if ($nc(strings->get(index))->equals("/"_s)) {
			if (++index < count) {
				$assign(lineHeight, strings->get(index++));
			}
		} else {
			$assign(lineHeight, $nc(strings->get(index++))->substring(1));
		}
		if (lineHeight != nullptr) {
			$init($CSS$Attribute);
			$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::LINE_HEIGHT, lineHeight);
		} else {
			$init($CSS$Attribute);
			$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::LINE_HEIGHT, "normal"_s);
		}
	} else {
		$init($CSS$Attribute);
		$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::LINE_HEIGHT, "normal"_s);
	}
	if (index < count) {
		$var($String, family, strings->get(index++));
		while (index < count) {
			$plusAssign(family, $$str({" "_s, strings->get(index++)}));
		}
		$init($CSS$Attribute);
		$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::FONT_FAMILY, family);
	} else {
		$init($CSS$Attribute);
		$init($Font);
		$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::FONT_FAMILY, $Font::SANS_SERIF);
	}
}

bool CSS$ShorthandFontParser::isFontStyle($String* string) {
	bool var$0 = $nc(string)->equals("italic"_s);
	return (var$0 || $nc(string)->equals("oblique"_s));
}

bool CSS$ShorthandFontParser::isFontVariant($String* string) {
	return ($nc(string)->equals("small-caps"_s));
}

bool CSS$ShorthandFontParser::isFontWeight($String* string) {
	bool var$2 = $nc(string)->equals("bold"_s);
	bool var$1 = var$2 || $nc(string)->equals("bolder"_s);
	bool var$0 = var$1 || $nc(string)->equals("italic"_s);
	if (var$0 || $nc(string)->equals("lighter"_s)) {
		return true;
	}
	bool var$6 = $nc(string)->length() == 3;
	bool var$5 = var$6 && string->charAt(0) >= u'1';
	bool var$4 = var$5 && string->charAt(0) <= u'9';
	bool var$3 = var$4 && string->charAt(1) == u'0';
	return (var$3 && string->charAt(2) == u'0');
}

CSS$ShorthandFontParser::CSS$ShorthandFontParser() {
}

$Class* CSS$ShorthandFontParser::load$($String* name, bool initialize) {
	$loadClass(CSS$ShorthandFontParser, name, initialize, &_CSS$ShorthandFontParser_ClassInfo_, allocate$CSS$ShorthandFontParser);
	return class$;
}

$Class* CSS$ShorthandFontParser::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax