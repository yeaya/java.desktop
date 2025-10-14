#include <javax/swing/text/html/CSS$BorderWidthValue.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS$LengthValue.h>
#include <javax/swing/text/html/CSS.h>
#include <javax/swing/text/html/HTML.h>
#include <jcpp.h>

#undef NULL_ATTRIBUTE_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;
using $CSS$LengthValue = ::javax::swing::text::html::CSS$LengthValue;
using $HTML = ::javax::swing::text::html::HTML;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSS$BorderWidthValue_FieldInfo_[] = {
	{"values", "[F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CSS$BorderWidthValue, values)},
	{}
};

$MethodInfo _CSS$BorderWidthValue_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(CSS$BorderWidthValue::*)($String*,int32_t)>(&CSS$BorderWidthValue::init$))},
	{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"parseHtmlValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{}
};

$InnerClassInfo _CSS$BorderWidthValue_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$BorderWidthValue", "javax.swing.text.html.CSS", "BorderWidthValue", $STATIC},
	{"javax.swing.text.html.CSS$LengthValue", "javax.swing.text.html.CSS", "LengthValue", $STATIC},
	{}
};

$ClassInfo _CSS$BorderWidthValue_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSS$BorderWidthValue",
	"javax.swing.text.html.CSS$LengthValue",
	nullptr,
	_CSS$BorderWidthValue_FieldInfo_,
	_CSS$BorderWidthValue_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$BorderWidthValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$BorderWidthValue($Class* clazz) {
	return $of($alloc(CSS$BorderWidthValue));
}


$floats* CSS$BorderWidthValue::values = nullptr;

void CSS$BorderWidthValue::init$($String* svalue, int32_t index) {
	$CSS$LengthValue::init$();
	$set(this, svalue, svalue);
	this->span = $nc(CSS$BorderWidthValue::values)->get(index);
	this->percentage = false;
}

$Object* CSS$BorderWidthValue::parseCssValue($String* value) {
	if (value != nullptr) {
		if (value->equals("thick"_s)) {
			return $of($new(CSS$BorderWidthValue, value, 2));
		} else if (value->equals("medium"_s)) {
			return $of($new(CSS$BorderWidthValue, value, 1));
		} else if (value->equals("thin"_s)) {
			return $of($new(CSS$BorderWidthValue, value, 0));
		}
	}
	return $of($CSS$LengthValue::parseCssValue(value));
}

$Object* CSS$BorderWidthValue::parseHtmlValue($String* value) {
	$init($HTML);
	if (value == $HTML::NULL_ATTRIBUTE_VALUE) {
		return $of(parseCssValue("medium"_s));
	}
	return $of(parseCssValue(value));
}

void clinit$CSS$BorderWidthValue($Class* class$) {
	$assignStatic(CSS$BorderWidthValue::values, $new($floats, {
		(float)1,
		(float)2,
		(float)4
	}));
}

CSS$BorderWidthValue::CSS$BorderWidthValue() {
}

$Class* CSS$BorderWidthValue::load$($String* name, bool initialize) {
	$loadClass(CSS$BorderWidthValue, name, initialize, &_CSS$BorderWidthValue_ClassInfo_, clinit$CSS$BorderWidthValue, allocate$CSS$BorderWidthValue);
	return class$;
}

$Class* CSS$BorderWidthValue::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax