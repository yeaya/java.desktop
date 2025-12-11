#include <javax/swing/text/html/CSS$ShorthandMarginParser.h>

#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

using $CSS$AttributeArray = $Array<::javax::swing::text::html::CSS$Attribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $CSS = ::javax::swing::text::html::CSS;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _CSS$ShorthandMarginParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSS$ShorthandMarginParser::*)()>(&CSS$ShorthandMarginParser::init$))},
	{"parseShorthandMargin", "(Ljavax/swing/text/html/CSS;Ljava/lang/String;Ljavax/swing/text/MutableAttributeSet;[Ljavax/swing/text/html/CSS$Attribute;)V", nullptr, $STATIC, $method(static_cast<void(*)($CSS*,$String*,$MutableAttributeSet*,$CSS$AttributeArray*)>(&CSS$ShorthandMarginParser::parseShorthandMargin))},
	{}
};

$InnerClassInfo _CSS$ShorthandMarginParser_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$ShorthandMarginParser", "javax.swing.text.html.CSS", "ShorthandMarginParser", $STATIC},
	{}
};

$ClassInfo _CSS$ShorthandMarginParser_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSS$ShorthandMarginParser",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CSS$ShorthandMarginParser_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$ShorthandMarginParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$ShorthandMarginParser($Class* clazz) {
	return $of($alloc(CSS$ShorthandMarginParser));
}

void CSS$ShorthandMarginParser::init$() {
}

void CSS$ShorthandMarginParser::parseShorthandMargin($CSS* css, $String* value, $MutableAttributeSet* attr, $CSS$AttributeArray* names) {
	$var($StringArray, strings, $CSS::parseStrings(value));
	int32_t count = $nc(strings)->length;
	int32_t index = 0;
	switch (count) {
	case 0:
		{
			return;
		}
	case 1:
		{
			for (int32_t counter = 0; counter < 4; ++counter) {
				$nc(css)->addInternalCSSValue(attr, $nc(names)->get(counter), strings->get(0));
			}
			break;
		}
	case 2:
		{
			$nc(css)->addInternalCSSValue(attr, $nc(names)->get(0), strings->get(0));
			$nc(css)->addInternalCSSValue(attr, $nc(names)->get(2), strings->get(0));
			$nc(css)->addInternalCSSValue(attr, $nc(names)->get(1), strings->get(1));
			$nc(css)->addInternalCSSValue(attr, $nc(names)->get(3), strings->get(1));
			break;
		}
	case 3:
		{
			$nc(css)->addInternalCSSValue(attr, $nc(names)->get(0), strings->get(0));
			$nc(css)->addInternalCSSValue(attr, $nc(names)->get(1), strings->get(1));
			$nc(css)->addInternalCSSValue(attr, $nc(names)->get(2), strings->get(2));
			$nc(css)->addInternalCSSValue(attr, $nc(names)->get(3), strings->get(1));
			break;
		}
	default:
		{
			for (int32_t counter = 0; counter < 4; ++counter) {
				$nc(css)->addInternalCSSValue(attr, $nc(names)->get(counter), strings->get(counter));
			}
			break;
		}
	}
}

CSS$ShorthandMarginParser::CSS$ShorthandMarginParser() {
}

$Class* CSS$ShorthandMarginParser::load$($String* name, bool initialize) {
	$loadClass(CSS$ShorthandMarginParser, name, initialize, &_CSS$ShorthandMarginParser_ClassInfo_, allocate$CSS$ShorthandMarginParser);
	return class$;
}

$Class* CSS$ShorthandMarginParser::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax