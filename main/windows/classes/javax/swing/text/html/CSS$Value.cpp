#include <javax/swing/text/html/CSS$Value.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

#undef BACKGROUND_FIXED
#undef BACKGROUND_NO_REPEAT
#undef BACKGROUND_REPEAT
#undef BACKGROUND_REPEAT_X
#undef BACKGROUND_REPEAT_Y
#undef BACKGROUND_SCROLL
#undef CIRCLE
#undef DASHED
#undef DECIMAL
#undef DISC
#undef DOTTED
#undef DOUBLE
#undef GROOVE
#undef HIDDEN
#undef INHERITED
#undef INSET
#undef LOWER_ALPHA
#undef LOWER_ROMAN
#undef NONE
#undef OUTSET
#undef RIDGE
#undef SOLID
#undef SQUARE
#undef UPPER_ALPHA
#undef UPPER_ROMAN

using $CSS$ValueArray = $Array<::javax::swing::text::html::CSS$Value>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CSS = ::javax::swing::text::html::CSS;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSS$Value_FieldInfo_[] = {
	{"INHERITED", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, INHERITED)},
	{"NONE", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, NONE)},
	{"HIDDEN", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, HIDDEN)},
	{"DOTTED", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, DOTTED)},
	{"DASHED", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, DASHED)},
	{"SOLID", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, SOLID)},
	{"DOUBLE", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, DOUBLE)},
	{"GROOVE", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, GROOVE)},
	{"RIDGE", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, RIDGE)},
	{"INSET", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, INSET)},
	{"OUTSET", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, OUTSET)},
	{"DISC", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, DISC)},
	{"CIRCLE", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, CIRCLE)},
	{"SQUARE", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, SQUARE)},
	{"DECIMAL", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, DECIMAL)},
	{"LOWER_ROMAN", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, LOWER_ROMAN)},
	{"UPPER_ROMAN", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, UPPER_ROMAN)},
	{"LOWER_ALPHA", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, LOWER_ALPHA)},
	{"UPPER_ALPHA", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, UPPER_ALPHA)},
	{"BACKGROUND_NO_REPEAT", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, BACKGROUND_NO_REPEAT)},
	{"BACKGROUND_REPEAT", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, BACKGROUND_REPEAT)},
	{"BACKGROUND_REPEAT_X", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, BACKGROUND_REPEAT_X)},
	{"BACKGROUND_REPEAT_Y", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, BACKGROUND_REPEAT_Y)},
	{"BACKGROUND_SCROLL", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, BACKGROUND_SCROLL)},
	{"BACKGROUND_FIXED", "Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, BACKGROUND_FIXED)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CSS$Value, name)},
	{"allValues", "[Ljavax/swing/text/html/CSS$Value;", nullptr, $STATIC | $FINAL, $staticField(CSS$Value, allValues)},
	{}
};

$MethodInfo _CSS$Value_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(CSS$Value::*)($String*)>(&CSS$Value::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CSS$Value_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$Value", "javax.swing.text.html.CSS", "Value", $STATIC | $FINAL},
	{}
};

$ClassInfo _CSS$Value_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.text.html.CSS$Value",
	"java.lang.Object",
	nullptr,
	_CSS$Value_FieldInfo_,
	_CSS$Value_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$Value_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$Value($Class* clazz) {
	return $of($alloc(CSS$Value));
}

CSS$Value* CSS$Value::INHERITED = nullptr;
CSS$Value* CSS$Value::NONE = nullptr;
CSS$Value* CSS$Value::HIDDEN = nullptr;
CSS$Value* CSS$Value::DOTTED = nullptr;
CSS$Value* CSS$Value::DASHED = nullptr;
CSS$Value* CSS$Value::SOLID = nullptr;
CSS$Value* CSS$Value::DOUBLE = nullptr;
CSS$Value* CSS$Value::GROOVE = nullptr;
CSS$Value* CSS$Value::RIDGE = nullptr;
CSS$Value* CSS$Value::INSET = nullptr;
CSS$Value* CSS$Value::OUTSET = nullptr;
CSS$Value* CSS$Value::DISC = nullptr;
CSS$Value* CSS$Value::CIRCLE = nullptr;
CSS$Value* CSS$Value::SQUARE = nullptr;
CSS$Value* CSS$Value::DECIMAL = nullptr;
CSS$Value* CSS$Value::LOWER_ROMAN = nullptr;
CSS$Value* CSS$Value::UPPER_ROMAN = nullptr;
CSS$Value* CSS$Value::LOWER_ALPHA = nullptr;
CSS$Value* CSS$Value::UPPER_ALPHA = nullptr;
CSS$Value* CSS$Value::BACKGROUND_NO_REPEAT = nullptr;
CSS$Value* CSS$Value::BACKGROUND_REPEAT = nullptr;
CSS$Value* CSS$Value::BACKGROUND_REPEAT_X = nullptr;
CSS$Value* CSS$Value::BACKGROUND_REPEAT_Y = nullptr;
CSS$Value* CSS$Value::BACKGROUND_SCROLL = nullptr;
CSS$Value* CSS$Value::BACKGROUND_FIXED = nullptr;
$CSS$ValueArray* CSS$Value::allValues = nullptr;

void CSS$Value::init$($String* name) {
	$set(this, name, name);
}

$String* CSS$Value::toString() {
	return this->name;
}

void clinit$CSS$Value($Class* class$) {
	$assignStatic(CSS$Value::INHERITED, $new(CSS$Value, "inherited"_s));
	$assignStatic(CSS$Value::NONE, $new(CSS$Value, "none"_s));
	$assignStatic(CSS$Value::HIDDEN, $new(CSS$Value, "hidden"_s));
	$assignStatic(CSS$Value::DOTTED, $new(CSS$Value, "dotted"_s));
	$assignStatic(CSS$Value::DASHED, $new(CSS$Value, "dashed"_s));
	$assignStatic(CSS$Value::SOLID, $new(CSS$Value, "solid"_s));
	$assignStatic(CSS$Value::DOUBLE, $new(CSS$Value, "double"_s));
	$assignStatic(CSS$Value::GROOVE, $new(CSS$Value, "groove"_s));
	$assignStatic(CSS$Value::RIDGE, $new(CSS$Value, "ridge"_s));
	$assignStatic(CSS$Value::INSET, $new(CSS$Value, "inset"_s));
	$assignStatic(CSS$Value::OUTSET, $new(CSS$Value, "outset"_s));
	$assignStatic(CSS$Value::DISC, $new(CSS$Value, "disc"_s));
	$assignStatic(CSS$Value::CIRCLE, $new(CSS$Value, "circle"_s));
	$assignStatic(CSS$Value::SQUARE, $new(CSS$Value, "square"_s));
	$assignStatic(CSS$Value::DECIMAL, $new(CSS$Value, "decimal"_s));
	$assignStatic(CSS$Value::LOWER_ROMAN, $new(CSS$Value, "lower-roman"_s));
	$assignStatic(CSS$Value::UPPER_ROMAN, $new(CSS$Value, "upper-roman"_s));
	$assignStatic(CSS$Value::LOWER_ALPHA, $new(CSS$Value, "lower-alpha"_s));
	$assignStatic(CSS$Value::UPPER_ALPHA, $new(CSS$Value, "upper-alpha"_s));
	$assignStatic(CSS$Value::BACKGROUND_NO_REPEAT, $new(CSS$Value, "no-repeat"_s));
	$assignStatic(CSS$Value::BACKGROUND_REPEAT, $new(CSS$Value, "repeat"_s));
	$assignStatic(CSS$Value::BACKGROUND_REPEAT_X, $new(CSS$Value, "repeat-x"_s));
	$assignStatic(CSS$Value::BACKGROUND_REPEAT_Y, $new(CSS$Value, "repeat-y"_s));
	$assignStatic(CSS$Value::BACKGROUND_SCROLL, $new(CSS$Value, "scroll"_s));
	$assignStatic(CSS$Value::BACKGROUND_FIXED, $new(CSS$Value, "fixed"_s));
	$assignStatic(CSS$Value::allValues, $new($CSS$ValueArray, {
		CSS$Value::INHERITED,
		CSS$Value::NONE,
		CSS$Value::DOTTED,
		CSS$Value::DASHED,
		CSS$Value::SOLID,
		CSS$Value::DOUBLE,
		CSS$Value::GROOVE,
		CSS$Value::RIDGE,
		CSS$Value::INSET,
		CSS$Value::OUTSET,
		CSS$Value::DISC,
		CSS$Value::CIRCLE,
		CSS$Value::SQUARE,
		CSS$Value::DECIMAL,
		CSS$Value::LOWER_ROMAN,
		CSS$Value::UPPER_ROMAN,
		CSS$Value::LOWER_ALPHA,
		CSS$Value::UPPER_ALPHA,
		CSS$Value::BACKGROUND_NO_REPEAT,
		CSS$Value::BACKGROUND_REPEAT,
		CSS$Value::BACKGROUND_REPEAT_X,
		CSS$Value::BACKGROUND_REPEAT_Y,
		CSS$Value::BACKGROUND_FIXED,
		CSS$Value::BACKGROUND_FIXED
	}));
}

CSS$Value::CSS$Value() {
}

$Class* CSS$Value::load$($String* name, bool initialize) {
	$loadClass(CSS$Value, name, initialize, &_CSS$Value_ClassInfo_, clinit$CSS$Value, allocate$CSS$Value);
	return class$;
}

$Class* CSS$Value::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax