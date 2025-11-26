#include <javax/swing/text/html/CSS$ShorthandBorderParser.h>

#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS.h>
#include <javax/swing/text/html/CSSBorder.h>
#include <jcpp.h>

#undef ATTRIBUTES
#undef BORDER
#undef BORDER_BOTTOM
#undef BORDER_LEFT
#undef BORDER_RIGHT
#undef BORDER_TOP
#undef DEFAULTS
#undef PARSERS

using $CSS$AttributeArray = $Array<::javax::swing::text::html::CSS$Attribute>;
using $CSS$CssValueArray = $Array<::javax::swing::text::html::CSS$CssValue>;
using $CSS$AttributeArray2 = $Array<::javax::swing::text::html::CSS$Attribute, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;
using $CSSBorder = ::javax::swing::text::html::CSSBorder;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSS$ShorthandBorderParser_FieldInfo_[] = {
	{"keys", "[Ljavax/swing/text/html/CSS$Attribute;", nullptr, $STATIC, $staticField(CSS$ShorthandBorderParser, keys)},
	{}
};

$MethodInfo _CSS$ShorthandBorderParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSS$ShorthandBorderParser::*)()>(&CSS$ShorthandBorderParser::init$))},
	{"parseShorthandBorder", "(Ljavax/swing/text/MutableAttributeSet;Ljavax/swing/text/html/CSS$Attribute;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,$CSS$Attribute*,$String*)>(&CSS$ShorthandBorderParser::parseShorthandBorder))},
	{}
};

$InnerClassInfo _CSS$ShorthandBorderParser_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$ShorthandBorderParser", "javax.swing.text.html.CSS", "ShorthandBorderParser", $STATIC},
	{}
};

$ClassInfo _CSS$ShorthandBorderParser_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSS$ShorthandBorderParser",
	"java.lang.Object",
	nullptr,
	_CSS$ShorthandBorderParser_FieldInfo_,
	_CSS$ShorthandBorderParser_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$ShorthandBorderParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$ShorthandBorderParser($Class* clazz) {
	return $of($alloc(CSS$ShorthandBorderParser));
}

$CSS$AttributeArray* CSS$ShorthandBorderParser::keys = nullptr;

void CSS$ShorthandBorderParser::init$() {
}

void CSS$ShorthandBorderParser::parseShorthandBorder($MutableAttributeSet* attributes, $CSS$Attribute* key, $String* value) {
	$init(CSS$ShorthandBorderParser);
	$useLocalCurrentObjectStackCache();
	$init($CSSBorder);
	$var($ObjectArray, parts, $new($ObjectArray, $nc($CSSBorder::PARSERS)->length));
	$var($StringArray, strings, $CSS::parseStrings(value));
	{
		$var($StringArray, arr$, strings);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				bool valid = false;
				for (int32_t i = 0; i < parts->length; ++i) {
					$var($Object, v, $nc($nc($CSSBorder::PARSERS)->get(i))->parseCssValue(s));
					if (v != nullptr) {
						if (parts->get(i) == nullptr) {
							parts->set(i, v);
							valid = true;
						}
						break;
					}
				}
				if (!valid) {
					return;
				}
			}
		}
	}
	for (int32_t i = 0; i < parts->length; ++i) {
		if (parts->get(i) == nullptr) {
			parts->set(i, $nc($CSSBorder::DEFAULTS)->get(i));
		}
	}
	for (int32_t i = 0; i < $nc(CSS$ShorthandBorderParser::keys)->length; ++i) {
		$init($CSS$Attribute);
		if ((key == $CSS$Attribute::BORDER) || (key == $nc(CSS$ShorthandBorderParser::keys)->get(i))) {
			for (int32_t k = 0; k < parts->length; ++k) {
				$nc(attributes)->addAttribute($nc($nc($CSSBorder::ATTRIBUTES)->get(k))->get(i), parts->get(k));
			}
		}
	}
}

void clinit$CSS$ShorthandBorderParser($Class* class$) {
	$init($CSS$Attribute);
	$assignStatic(CSS$ShorthandBorderParser::keys, $new($CSS$AttributeArray, {
		$CSS$Attribute::BORDER_TOP,
		$CSS$Attribute::BORDER_RIGHT,
		$CSS$Attribute::BORDER_BOTTOM,
		$CSS$Attribute::BORDER_LEFT
	}));
}

CSS$ShorthandBorderParser::CSS$ShorthandBorderParser() {
}

$Class* CSS$ShorthandBorderParser::load$($String* name, bool initialize) {
	$loadClass(CSS$ShorthandBorderParser, name, initialize, &_CSS$ShorthandBorderParser_ClassInfo_, clinit$CSS$ShorthandBorderParser, allocate$CSS$ShorthandBorderParser);
	return class$;
}

$Class* CSS$ShorthandBorderParser::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax