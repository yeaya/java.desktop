#include <javax/swing/text/html/CSS$ColorValue.h>

#include <java/awt/Color.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSS$ColorValue_FieldInfo_[] = {
	{"c", "Ljava/awt/Color;", nullptr, 0, $field(CSS$ColorValue, c)},
	{}
};

$MethodInfo _CSS$ColorValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSS$ColorValue::*)()>(&CSS$ColorValue::init$))},
	{"fromStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"getValue", "()Ljava/awt/Color;", nullptr, 0},
	{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"parseHtmlValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"toStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljavax/swing/text/View;)Ljava/lang/Object;", nullptr, 0},
	{}
};

$InnerClassInfo _CSS$ColorValue_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$ColorValue", "javax.swing.text.html.CSS", "ColorValue", $STATIC},
	{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
	{}
};

$ClassInfo _CSS$ColorValue_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSS$ColorValue",
	"javax.swing.text.html.CSS$CssValue",
	nullptr,
	_CSS$ColorValue_FieldInfo_,
	_CSS$ColorValue_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$ColorValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$ColorValue($Class* clazz) {
	return $of($alloc(CSS$ColorValue));
}

void CSS$ColorValue::init$() {
	$CSS$CssValue::init$();
}

$Color* CSS$ColorValue::getValue() {
	return this->c;
}

$Object* CSS$ColorValue::parseCssValue($String* value) {
	$useLocalCurrentObjectStackCache();
	$var($Color, c, $CSS::stringToColor(value));
	if (c != nullptr) {
		$var(CSS$ColorValue, cv, $new(CSS$ColorValue));
		$set(cv, svalue, value);
		$set(cv, c, c);
		return $of(cv);
	}
	return $of(nullptr);
}

$Object* CSS$ColorValue::parseHtmlValue($String* value) {
	return $of(parseCssValue(value));
}

$Object* CSS$ColorValue::fromStyleConstants($StyleConstants* key, Object$* value) {
	$var(CSS$ColorValue, colorValue, $new(CSS$ColorValue));
	$set(colorValue, c, $cast($Color, value));
	$set(colorValue, svalue, $CSS::colorToHex(colorValue->c));
	return $of(colorValue);
}

$Object* CSS$ColorValue::toStyleConstants($StyleConstants* key, $View* v) {
	return $of(this->c);
}

CSS$ColorValue::CSS$ColorValue() {
}

$Class* CSS$ColorValue::load$($String* name, bool initialize) {
	$loadClass(CSS$ColorValue, name, initialize, &_CSS$ColorValue_ClassInfo_, allocate$CSS$ColorValue);
	return class$;
}

$Class* CSS$ColorValue::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax