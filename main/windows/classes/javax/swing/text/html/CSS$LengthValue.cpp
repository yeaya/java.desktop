#include <javax/swing/text/html/CSS$LengthValue.h>

#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS$LengthUnit.h>
#include <javax/swing/text/html/CSS.h>
#include <javax/swing/text/html/HTML.h>
#include <jcpp.h>

#undef NULL_ATTRIBUTE_VALUE
#undef UNINITIALIZED_LENGTH

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;
using $CSS$LengthUnit = ::javax::swing::text::html::CSS$LengthUnit;
using $HTML = ::javax::swing::text::html::HTML;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSS$LengthValue_FieldInfo_[] = {
	{"mayBeNegative", "Z", nullptr, 0, $field(CSS$LengthValue, mayBeNegative)},
	{"percentage", "Z", nullptr, 0, $field(CSS$LengthValue, percentage)},
	{"span", "F", nullptr, 0, $field(CSS$LengthValue, span)},
	{"units", "Ljava/lang/String;", nullptr, 0, $field(CSS$LengthValue, units)},
	{}
};

$MethodInfo _CSS$LengthValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSS$LengthValue::*)()>(&CSS$LengthValue::init$))},
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(CSS$LengthValue::*)(bool)>(&CSS$LengthValue::init$))},
	{"fromStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"getValue", "()F", nullptr, 0},
	{"getValue", "(Z)F", nullptr, 0},
	{"getValue", "(F)F", nullptr, 0},
	{"getValue", "(FZ)F", nullptr, 0},
	{"isPercentage", "()Z", nullptr, 0},
	{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"parseHtmlValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"toStyleConstants", "(Ljavax/swing/text/StyleConstants;Ljavax/swing/text/View;)Ljava/lang/Object;", nullptr, 0},
	{}
};

$InnerClassInfo _CSS$LengthValue_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$LengthValue", "javax.swing.text.html.CSS", "LengthValue", $STATIC},
	{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
	{}
};

$ClassInfo _CSS$LengthValue_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSS$LengthValue",
	"javax.swing.text.html.CSS$CssValue",
	nullptr,
	_CSS$LengthValue_FieldInfo_,
	_CSS$LengthValue_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$LengthValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$LengthValue($Class* clazz) {
	return $of($alloc(CSS$LengthValue));
}

void CSS$LengthValue::init$() {
	CSS$LengthValue::init$(false);
}

void CSS$LengthValue::init$(bool mayBeNegative) {
	$CSS$CssValue::init$();
	$set(this, units, nullptr);
	this->mayBeNegative = mayBeNegative;
}

float CSS$LengthValue::getValue() {
	return getValue(false);
}

float CSS$LengthValue::getValue(bool isW3CLengthUnits) {
	return getValue((float)0, isW3CLengthUnits);
}

float CSS$LengthValue::getValue(float currentValue) {
	return getValue(currentValue, false);
}

float CSS$LengthValue::getValue(float currentValue, bool isW3CLengthUnits) {
	if (this->percentage) {
		return this->span * currentValue;
	}
	return $CSS$LengthUnit::getValue(this->span, this->units, $($Boolean::valueOf(isW3CLengthUnits)));
}

bool CSS$LengthValue::isPercentage() {
	return this->percentage;
}

$Object* CSS$LengthValue::parseCssValue($String* value) {
	$useLocalCurrentObjectStackCache();
	$var(CSS$LengthValue, lv, nullptr);
	try {
		float absolute = $nc($($Float::valueOf(value)))->floatValue();
		$assign(lv, $new(CSS$LengthValue));
		lv->span = absolute;
	} catch ($NumberFormatException& nfe) {
		$var($CSS$LengthUnit, lu, $new($CSS$LengthUnit, value, $CSS$LengthUnit::UNINITIALIZED_LENGTH, (float)0));
		switch (lu->type) {
		case 0:
			{
				$assign(lv, $new(CSS$LengthValue));
				$nc(lv)->span = (this->mayBeNegative) ? lu->value : $Math::max((float)0, lu->value);
				$set($nc(lv), units, lu->units);
				break;
			}
		case 1:
			{
				$assign(lv, $new(CSS$LengthValue));
				$nc(lv)->span = $Math::max((float)0, $Math::min((float)1, lu->value));
				$nc(lv)->percentage = true;
				break;
			}
		default:
			{
				return $of(nullptr);
			}
		}
	}
	$set($nc(lv), svalue, value);
	return $of(lv);
}

$Object* CSS$LengthValue::parseHtmlValue($String* value$renamed) {
	$var($String, value, value$renamed);
	$init($HTML);
	if ($nc(value)->equals($HTML::NULL_ATTRIBUTE_VALUE)) {
		$assign(value, "1"_s);
	}
	return $of(parseCssValue(value));
}

$Object* CSS$LengthValue::fromStyleConstants($StyleConstants* key, Object$* value) {
	$var(CSS$LengthValue, v, $new(CSS$LengthValue));
	$set(v, svalue, $nc($of(value))->toString());
	v->span = $nc(($cast($Float, value)))->floatValue();
	return $of(v);
}

$Object* CSS$LengthValue::toStyleConstants($StyleConstants* key, $View* v) {
	return $of($Float::valueOf(getValue(false)));
}

CSS$LengthValue::CSS$LengthValue() {
}

$Class* CSS$LengthValue::load$($String* name, bool initialize) {
	$loadClass(CSS$LengthValue, name, initialize, &_CSS$LengthValue_ClassInfo_, allocate$CSS$LengthValue);
	return class$;
}

$Class* CSS$LengthValue::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax