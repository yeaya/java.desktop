#include <javax/swing/text/html/CSS$FontWeight.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSS$FontWeight_FieldInfo_[] = {
	{"weight", "I", nullptr, 0, $field(CSS$FontWeight, weight)},
	{}
};

$MethodInfo _CSS$FontWeight_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSS$FontWeight::*)()>(&CSS$FontWeight::init$))},
	{"fromStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"getValue", "()I", nullptr, 0},
	{"isBold", "()Z", nullptr, 0},
	{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"toStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljavax/swing/text/View;)Ljava/lang/Object;", nullptr, 0},
	{}
};

$InnerClassInfo _CSS$FontWeight_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$FontWeight", "javax.swing.text.html.CSS", "FontWeight", $STATIC},
	{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
	{}
};

$ClassInfo _CSS$FontWeight_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSS$FontWeight",
	"javax.swing.text.html.CSS$CssValue",
	nullptr,
	_CSS$FontWeight_FieldInfo_,
	_CSS$FontWeight_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$FontWeight_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$FontWeight($Class* clazz) {
	return $of($alloc(CSS$FontWeight));
}

void CSS$FontWeight::init$() {
	$CSS$CssValue::init$();
}

int32_t CSS$FontWeight::getValue() {
	return this->weight;
}

$Object* CSS$FontWeight::parseCssValue($String* value) {
	$var(CSS$FontWeight, fw, $new(CSS$FontWeight));
	$set(fw, svalue, value);
	if ($nc(value)->equals("bold"_s)) {
		fw->weight = 700;
	} else if (value->equals("normal"_s)) {
		fw->weight = 400;
	} else {
		try {
			fw->weight = $Integer::parseInt(value);
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, nfe, $catch());
			$assign(fw, nullptr);
		}
	}
	return $of(fw);
}

$Object* CSS$FontWeight::fromStyleConstants($StyleConstants* key, Object$* value) {
	$init($Boolean);
	if ($nc($of(value))->equals($Boolean::TRUE)) {
		return $of(parseCssValue("bold"_s));
	}
	return $of(parseCssValue("normal"_s));
}

$Object* CSS$FontWeight::toStyleConstants($StyleConstants* key, $View* v) {
	$init($Boolean);
	return $of((this->weight > 500) ? $Boolean::TRUE : $Boolean::FALSE);
}

bool CSS$FontWeight::isBold() {
	return (this->weight > 500);
}

CSS$FontWeight::CSS$FontWeight() {
}

$Class* CSS$FontWeight::load$($String* name, bool initialize) {
	$loadClass(CSS$FontWeight, name, initialize, &_CSS$FontWeight_ClassInfo_, allocate$CSS$FontWeight);
	return class$;
}

$Class* CSS$FontWeight::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax