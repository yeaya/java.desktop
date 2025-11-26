#include <com/sun/java/swing/plaf/gtk/Metacity$ArithmeticExpressionEvaluator.h>

#include <com/sun/java/swing/plaf/gtk/Metacity$PeekableStringTokenizer.h>
#include <com/sun/java/swing/plaf/gtk/Metacity.h>
#include <java/lang/Math.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Metacity = ::com::sun::java::swing::plaf::gtk::Metacity;
using $Metacity$PeekableStringTokenizer = ::com::sun::java::swing::plaf::gtk::Metacity$PeekableStringTokenizer;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _Metacity$ArithmeticExpressionEvaluator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/Metacity;", nullptr, $FINAL | $SYNTHETIC, $field(Metacity$ArithmeticExpressionEvaluator, this$0)},
	{"tokenizer", "Lcom/sun/java/swing/plaf/gtk/Metacity$PeekableStringTokenizer;", nullptr, $PRIVATE, $field(Metacity$ArithmeticExpressionEvaluator, tokenizer)},
	{}
};

$MethodInfo _Metacity$ArithmeticExpressionEvaluator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/Metacity;)V", nullptr, 0, $method(static_cast<void(Metacity$ArithmeticExpressionEvaluator::*)($Metacity*)>(&Metacity$ArithmeticExpressionEvaluator::init$))},
	{"evaluate", "(Ljava/lang/String;)I", nullptr, 0},
	{"evaluate", "(Ljava/lang/String;I)I", nullptr, 0},
	{"expression", "()F", nullptr, $PUBLIC},
	{"getFactorValue", "()F", nullptr, $PUBLIC},
	{"getTermValue", "()F", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Metacity$ArithmeticExpressionEvaluator_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.Metacity$ArithmeticExpressionEvaluator", "com.sun.java.swing.plaf.gtk.Metacity", "ArithmeticExpressionEvaluator", 0},
	{}
};

$ClassInfo _Metacity$ArithmeticExpressionEvaluator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.Metacity$ArithmeticExpressionEvaluator",
	"java.lang.Object",
	nullptr,
	_Metacity$ArithmeticExpressionEvaluator_FieldInfo_,
	_Metacity$ArithmeticExpressionEvaluator_MethodInfo_,
	nullptr,
	nullptr,
	_Metacity$ArithmeticExpressionEvaluator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.Metacity"
};

$Object* allocate$Metacity$ArithmeticExpressionEvaluator($Class* clazz) {
	return $of($alloc(Metacity$ArithmeticExpressionEvaluator));
}

void Metacity$ArithmeticExpressionEvaluator::init$($Metacity* this$0) {
	$set(this, this$0, this$0);
}

int32_t Metacity$ArithmeticExpressionEvaluator::evaluate($String* expr) {
	$set(this, tokenizer, $new($Metacity$PeekableStringTokenizer, expr, " \t+-*/%()"_s, true));
	return $Math::round(expression());
}

int32_t Metacity$ArithmeticExpressionEvaluator::evaluate($String* expr, int32_t fallback) {
	return (expr != nullptr) ? evaluate(expr) : fallback;
}

float Metacity$ArithmeticExpressionEvaluator::expression() {
	$useLocalCurrentObjectStackCache();
	float value = getTermValue();
	bool done = false;
	while (!done && $nc(this->tokenizer)->hasMoreTokens()) {
		$var($String, next, $nc(this->tokenizer)->peek());
		bool var$2 = "+"_s->equals(next);
		bool var$1 = var$2 || "-"_s->equals(next);
		bool var$0 = var$1 || "`max`"_s->equals(next);
		if (var$0 || "`min`"_s->equals(next)) {
			$nc(this->tokenizer)->nextToken();
			float value2 = getTermValue();
			if ("+"_s->equals(next)) {
				value += value2;
			} else if ("-"_s->equals(next)) {
				value -= value2;
			} else if ("`max`"_s->equals(next)) {
				value = $Math::max(value, value2);
			} else if ("`min`"_s->equals(next)) {
				value = $Math::min(value, value2);
			}
		} else {
			done = true;
		}
	}
	return value;
}

float Metacity$ArithmeticExpressionEvaluator::getTermValue() {
	$useLocalCurrentObjectStackCache();
	float value = getFactorValue();
	bool done = false;
	while (!done && $nc(this->tokenizer)->hasMoreTokens()) {
		$var($String, next, $nc(this->tokenizer)->peek());
		bool var$1 = "*"_s->equals(next);
		bool var$0 = var$1 || "/"_s->equals(next);
		if (var$0 || "%"_s->equals(next)) {
			$nc(this->tokenizer)->nextToken();
			float value2 = getFactorValue();
			if ("*"_s->equals(next)) {
				value *= value2;
			} else if ("/"_s->equals(next)) {
				value /= value2;
			} else {
				$modAssign(value, value2);
			}
		} else {
			done = true;
		}
	}
	return value;
}

float Metacity$ArithmeticExpressionEvaluator::getFactorValue() {
	$useLocalCurrentObjectStackCache();
	float value = 0.0;
	if ("("_s->equals($($nc(this->tokenizer)->peek()))) {
		$nc(this->tokenizer)->nextToken();
		value = expression();
		$nc(this->tokenizer)->nextToken();
	} else {
		$var($String, token, $nc(this->tokenizer)->nextToken());
		if ($Character::isDigit($nc(token)->charAt(0))) {
			value = $Float::parseFloat(token);
		} else {
			$var($Integer, i, $cast($Integer, $nc(this->this$0->variables)->get(token)));
			if (i == nullptr) {
				$assign(i, $cast($Integer, $nc($(this->this$0->getFrameGeometry()))->get(token)));
			}
			if (i == nullptr) {
				$Metacity::logError(this->this$0->themeName, $$str({"Variable \""_s, token, "\" not defined"_s}));
				return (float)0;
			}
			value = (i != nullptr) ? (float)$nc(i)->intValue() : 0.0f;
		}
	}
	return value;
}

Metacity$ArithmeticExpressionEvaluator::Metacity$ArithmeticExpressionEvaluator() {
}

$Class* Metacity$ArithmeticExpressionEvaluator::load$($String* name, bool initialize) {
	$loadClass(Metacity$ArithmeticExpressionEvaluator, name, initialize, &_Metacity$ArithmeticExpressionEvaluator_ClassInfo_, allocate$Metacity$ArithmeticExpressionEvaluator);
	return class$;
}

$Class* Metacity$ArithmeticExpressionEvaluator::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com