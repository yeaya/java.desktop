#include <javax/swing/text/html/CSS$CssValue.h>

#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $CSS = ::javax::swing::text::html::CSS;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSS$CssValue_FieldInfo_[] = {
	{"svalue", "Ljava/lang/String;", nullptr, 0, $field(CSS$CssValue, svalue)},
	{}
};

$MethodInfo _CSS$CssValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSS$CssValue::*)()>(&CSS$CssValue::init$))},
	{"fromStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"parseHtmlValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljavax/swing/text/View;)Ljava/lang/Object;", nullptr, 0},
	{}
};

$InnerClassInfo _CSS$CssValue_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
	{}
};

$ClassInfo _CSS$CssValue_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSS$CssValue",
	"java.lang.Object",
	"java.io.Serializable",
	_CSS$CssValue_FieldInfo_,
	_CSS$CssValue_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$CssValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$CssValue($Class* clazz) {
	return $of($alloc(CSS$CssValue));
}

void CSS$CssValue::init$() {
}

$Object* CSS$CssValue::parseCssValue($String* value) {
	return $of(value);
}

$Object* CSS$CssValue::parseHtmlValue($String* value) {
	return $of(parseCssValue(value));
}

$Object* CSS$CssValue::fromStyleConstants($StyleConstants* key, Object$* value) {
	return $of(nullptr);
}

$Object* CSS$CssValue::toStyleConstants($StyleConstants* key, $View* v) {
	return $of(nullptr);
}

$String* CSS$CssValue::toString() {
	return this->svalue;
}

CSS$CssValue::CSS$CssValue() {
}

$Class* CSS$CssValue::load$($String* name, bool initialize) {
	$loadClass(CSS$CssValue, name, initialize, &_CSS$CssValue_ClassInfo_, allocate$CSS$CssValue);
	return class$;
}

$Class* CSS$CssValue::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax