#include <javax/swing/text/html/CSS$ShorthandBackgroundParser.h>

#include <java/awt/Color.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

#undef BACKGROUND_ATTACHMENT
#undef BACKGROUND_COLOR
#undef BACKGROUND_IMAGE
#undef BACKGROUND_POSITION
#undef BACKGROUND_REPEAT

using $Color = ::java::awt::Color;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _CSS$ShorthandBackgroundParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSS$ShorthandBackgroundParser::*)()>(&CSS$ShorthandBackgroundParser::init$))},
	{"isAttachment", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&CSS$ShorthandBackgroundParser::isAttachment))},
	{"isColor", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&CSS$ShorthandBackgroundParser::isColor))},
	{"isImage", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&CSS$ShorthandBackgroundParser::isImage))},
	{"isPosition", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&CSS$ShorthandBackgroundParser::isPosition))},
	{"isRepeat", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&CSS$ShorthandBackgroundParser::isRepeat))},
	{"parseShorthandBackground", "(Ljavax/swing/text/html/CSS;Ljava/lang/String;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $STATIC, $method(static_cast<void(*)($CSS*,$String*,$MutableAttributeSet*)>(&CSS$ShorthandBackgroundParser::parseShorthandBackground))},
	{}
};

$InnerClassInfo _CSS$ShorthandBackgroundParser_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$ShorthandBackgroundParser", "javax.swing.text.html.CSS", "ShorthandBackgroundParser", $STATIC},
	{}
};

$ClassInfo _CSS$ShorthandBackgroundParser_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSS$ShorthandBackgroundParser",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CSS$ShorthandBackgroundParser_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$ShorthandBackgroundParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$ShorthandBackgroundParser($Class* clazz) {
	return $of($alloc(CSS$ShorthandBackgroundParser));
}

void CSS$ShorthandBackgroundParser::init$() {
}

void CSS$ShorthandBackgroundParser::parseShorthandBackground($CSS* css, $String* value, $MutableAttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, strings, $CSS::parseStrings(value));
	int32_t count = $nc(strings)->length;
	int32_t index = 0;
	int16_t found = (int16_t)0;
	while (index < count) {
		$var($String, string, strings->get(index++));
		if (((int32_t)(found & (uint32_t)1)) == 0 && isImage(string)) {
			$init($CSS$Attribute);
			$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::BACKGROUND_IMAGE, string);
			found |= 1;
		} else if (((int32_t)(found & (uint32_t)2)) == 0 && isRepeat(string)) {
			$init($CSS$Attribute);
			$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::BACKGROUND_REPEAT, string);
			found |= 2;
		} else if (((int32_t)(found & (uint32_t)4)) == 0 && isAttachment(string)) {
			$init($CSS$Attribute);
			$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::BACKGROUND_ATTACHMENT, string);
			found |= 4;
		} else if (((int32_t)(found & (uint32_t)8)) == 0 && isPosition(string)) {
			if (index < count && isPosition(strings->get(index))) {
				$init($CSS$Attribute);
				$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::BACKGROUND_POSITION, $$str({string, " "_s, strings->get(index++)}));
			} else {
				$init($CSS$Attribute);
				$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::BACKGROUND_POSITION, string);
			}
			found |= 8;
		} else if (((int32_t)(found & (uint32_t)16)) == 0 && isColor(string)) {
			$init($CSS$Attribute);
			$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::BACKGROUND_COLOR, string);
			found |= 16;
		}
	}
	if (((int32_t)(found & (uint32_t)1)) == 0) {
		$init($CSS$Attribute);
		$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::BACKGROUND_IMAGE, nullptr);
	}
	if (((int32_t)(found & (uint32_t)2)) == 0) {
		$init($CSS$Attribute);
		$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::BACKGROUND_REPEAT, "repeat"_s);
	}
	if (((int32_t)(found & (uint32_t)4)) == 0) {
		$init($CSS$Attribute);
		$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::BACKGROUND_ATTACHMENT, "scroll"_s);
	}
	if (((int32_t)(found & (uint32_t)8)) == 0) {
		$init($CSS$Attribute);
		$nc(css)->addInternalCSSValue(attr, $CSS$Attribute::BACKGROUND_POSITION, nullptr);
	}
}

bool CSS$ShorthandBackgroundParser::isImage($String* string) {
	bool var$0 = $nc(string)->startsWith("url("_s);
	return (var$0 && string->endsWith(")"_s));
}

bool CSS$ShorthandBackgroundParser::isRepeat($String* string) {
	bool var$2 = $nc(string)->equals("repeat-x"_s);
	bool var$1 = var$2 || $nc(string)->equals("repeat-y"_s);
	bool var$0 = var$1 || $nc(string)->equals("repeat"_s);
	return (var$0 || $nc(string)->equals("no-repeat"_s));
}

bool CSS$ShorthandBackgroundParser::isAttachment($String* string) {
	bool var$0 = $nc(string)->equals("fixed"_s);
	return (var$0 || $nc(string)->equals("scroll"_s));
}

bool CSS$ShorthandBackgroundParser::isPosition($String* string) {
	bool var$4 = $nc(string)->equals("top"_s);
	bool var$3 = var$4 || $nc(string)->equals("bottom"_s);
	bool var$2 = var$3 || $nc(string)->equals("left"_s);
	bool var$1 = var$2 || $nc(string)->equals("right"_s);
	bool var$0 = var$1 || $nc(string)->equals("center"_s);
	if (!var$0) {
		bool var$5 = $nc(string)->length() > 0;
		var$0 = (var$5 && $Character::isDigit(string->charAt(0)));
	}
	return (var$0);
}

bool CSS$ShorthandBackgroundParser::isColor($String* string) {
	return ($CSS::stringToColor(string) != nullptr);
}

CSS$ShorthandBackgroundParser::CSS$ShorthandBackgroundParser() {
}

$Class* CSS$ShorthandBackgroundParser::load$($String* name, bool initialize) {
	$loadClass(CSS$ShorthandBackgroundParser, name, initialize, &_CSS$ShorthandBackgroundParser_ClassInfo_, allocate$CSS$ShorthandBackgroundParser);
	return class$;
}

$Class* CSS$ShorthandBackgroundParser::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax