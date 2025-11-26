#include <javax/swing/SpinnerNumberModel.h>

#include <java/lang/Comparable.h>
#include <java/lang/Number.h>
#include <javax/swing/AbstractSpinnerModel.h>
#include <jcpp.h>

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Short = ::java::lang::Short;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;

namespace javax {
	namespace swing {

$FieldInfo _SpinnerNumberModel_FieldInfo_[] = {
	{"stepSize", "Ljava/lang/Number;", nullptr, $PRIVATE, $field(SpinnerNumberModel, stepSize)},
	{"value", "Ljava/lang/Number;", nullptr, $PRIVATE, $field(SpinnerNumberModel, value)},
	{"minimum", "Ljava/lang/Comparable;", "Ljava/lang/Comparable<*>;", $PRIVATE, $field(SpinnerNumberModel, minimum)},
	{"maximum", "Ljava/lang/Comparable;", "Ljava/lang/Comparable<*>;", $PRIVATE, $field(SpinnerNumberModel, maximum)},
	{}
};

$MethodInfo _SpinnerNumberModel_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Number;Ljava/lang/Comparable;Ljava/lang/Comparable;Ljava/lang/Number;)V", "(Ljava/lang/Number;Ljava/lang/Comparable<*>;Ljava/lang/Comparable<*>;Ljava/lang/Number;)V", $PUBLIC, $method(static_cast<void(SpinnerNumberModel::*)($Number*,$Comparable*,$Comparable*,$Number*)>(&SpinnerNumberModel::init$))},
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(SpinnerNumberModel::*)(int32_t,int32_t,int32_t,int32_t)>(&SpinnerNumberModel::init$))},
	{"<init>", "(DDDD)V", nullptr, $PUBLIC, $method(static_cast<void(SpinnerNumberModel::*)(double,double,double,double)>(&SpinnerNumberModel::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SpinnerNumberModel::*)()>(&SpinnerNumberModel::init$))},
	{"getMaximum", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<*>;", $PUBLIC},
	{"getMinimum", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<*>;", $PUBLIC},
	{"getNextValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getNumber", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getPreviousValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getStepSize", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"incrValue", "(I)Ljava/lang/Number;", nullptr, $PRIVATE, $method(static_cast<$Number*(SpinnerNumberModel::*)(int32_t)>(&SpinnerNumberModel::incrValue))},
	{"setMaximum", "(Ljava/lang/Comparable;)V", "(Ljava/lang/Comparable<*>;)V", $PUBLIC},
	{"setMinimum", "(Ljava/lang/Comparable;)V", "(Ljava/lang/Comparable<*>;)V", $PUBLIC},
	{"setStepSize", "(Ljava/lang/Number;)V", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SpinnerNumberModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.SpinnerNumberModel",
	"javax.swing.AbstractSpinnerModel",
	nullptr,
	_SpinnerNumberModel_FieldInfo_,
	_SpinnerNumberModel_MethodInfo_
};

$Object* allocate$SpinnerNumberModel($Class* clazz) {
	return $of($alloc(SpinnerNumberModel));
}

void SpinnerNumberModel::init$($Number* value, $Comparable* minimum, $Comparable* maximum, $Number* stepSize) {
	$AbstractSpinnerModel::init$();
	if ((value == nullptr) || (stepSize == nullptr)) {
		$throwNew($IllegalArgumentException, "value and stepSize must be non-null"_s);
	}
	bool var$0 = ((minimum == nullptr) || ($nc((minimum))->compareTo(value) <= 0));
	if (!(var$0 && ((maximum == nullptr) || ($nc((maximum))->compareTo(value) >= 0)))) {
		$throwNew($IllegalArgumentException, "(minimum <= value <= maximum) is false"_s);
	}
	$set(this, value, value);
	$set(this, minimum, minimum);
	$set(this, maximum, maximum);
	$set(this, stepSize, stepSize);
}

void SpinnerNumberModel::init$(int32_t value, int32_t minimum, int32_t maximum, int32_t stepSize) {
	$useLocalCurrentObjectStackCache();
	$var($Number, var$0, static_cast<$Number*>($Integer::valueOf(value)));
	$var($Comparable, var$1, static_cast<$Comparable*>($Integer::valueOf(minimum)));
	$var($Comparable, var$2, static_cast<$Comparable*>($Integer::valueOf(maximum)));
	SpinnerNumberModel::init$(var$0, var$1, var$2, $(static_cast<$Number*>($Integer::valueOf(stepSize))));
}

void SpinnerNumberModel::init$(double value, double minimum, double maximum, double stepSize) {
	$useLocalCurrentObjectStackCache();
	$var($Number, var$0, static_cast<$Number*>($Double::valueOf(value)));
	$var($Comparable, var$1, static_cast<$Comparable*>($Double::valueOf(minimum)));
	$var($Comparable, var$2, static_cast<$Comparable*>($Double::valueOf(maximum)));
	SpinnerNumberModel::init$(var$0, var$1, var$2, $(static_cast<$Number*>($Double::valueOf(stepSize))));
}

void SpinnerNumberModel::init$() {
	$useLocalCurrentObjectStackCache();
	$var($Number, var$0, static_cast<$Number*>($Integer::valueOf(0)));
	SpinnerNumberModel::init$(var$0, ($Comparable*)nullptr, ($Comparable*)nullptr, $(static_cast<$Number*>($Integer::valueOf(1))));
}

void SpinnerNumberModel::setMinimum($Comparable* minimum) {
	if ((minimum == nullptr) ? (this->minimum != nullptr) : !$nc($of(minimum))->equals(this->minimum)) {
		$set(this, minimum, minimum);
		fireStateChanged();
	}
}

$Comparable* SpinnerNumberModel::getMinimum() {
	return this->minimum;
}

void SpinnerNumberModel::setMaximum($Comparable* maximum) {
	if ((maximum == nullptr) ? (this->maximum != nullptr) : !$nc($of(maximum))->equals(this->maximum)) {
		$set(this, maximum, maximum);
		fireStateChanged();
	}
}

$Comparable* SpinnerNumberModel::getMaximum() {
	return this->maximum;
}

void SpinnerNumberModel::setStepSize($Number* stepSize) {
	if (stepSize == nullptr) {
		$throwNew($IllegalArgumentException, "null stepSize"_s);
	}
	if (!$nc($of(stepSize))->equals(this->stepSize)) {
		$set(this, stepSize, stepSize);
		fireStateChanged();
	}
}

$Number* SpinnerNumberModel::getStepSize() {
	return this->stepSize;
}

$Number* SpinnerNumberModel::incrValue(int32_t dir) {
	$var($Number, newValue, nullptr);
	if (($instanceOf($Float, this->value)) || ($instanceOf($Double, this->value))) {
		double var$0 = $nc(this->value)->doubleValue();
		double v = var$0 + ($nc(this->stepSize)->doubleValue() * (double)dir);
		if ($instanceOf($Double, this->value)) {
			$assign(newValue, $Double::valueOf(v));
		} else {
			$assign(newValue, $Float::valueOf((float)v));
		}
	} else {
		int64_t var$1 = $nc(this->value)->longValue();
		int64_t v = var$1 + ($nc(this->stepSize)->longValue() * (int64_t)dir);
		if ($instanceOf($Long, this->value)) {
			$assign(newValue, $Long::valueOf(v));
		} else if ($instanceOf($Integer, this->value)) {
			$assign(newValue, $Integer::valueOf((int32_t)v));
		} else if ($instanceOf($Short, this->value)) {
			$assign(newValue, $Short::valueOf((int16_t)v));
		} else {
			$assign(newValue, $Byte::valueOf((int8_t)v));
		}
	}
	if ((this->maximum != nullptr) && ($nc((this->maximum))->compareTo(newValue) < 0)) {
		return nullptr;
	}
	if ((this->minimum != nullptr) && ($nc((this->minimum))->compareTo(newValue) > 0)) {
		return nullptr;
	} else {
		return newValue;
	}
}

$Object* SpinnerNumberModel::getNextValue() {
	return $of(incrValue(+1));
}

$Object* SpinnerNumberModel::getPreviousValue() {
	return $of(incrValue(-1));
}

$Number* SpinnerNumberModel::getNumber() {
	return this->value;
}

$Object* SpinnerNumberModel::getValue() {
	return $of(this->value);
}

void SpinnerNumberModel::setValue(Object$* value) {
	if ((value == nullptr) || !($instanceOf($Number, value))) {
		$throwNew($IllegalArgumentException, "illegal value"_s);
	}
	if (!$nc($of(value))->equals(this->value)) {
		$set(this, value, $cast($Number, value));
		fireStateChanged();
	}
}

SpinnerNumberModel::SpinnerNumberModel() {
}

$Class* SpinnerNumberModel::load$($String* name, bool initialize) {
	$loadClass(SpinnerNumberModel, name, initialize, &_SpinnerNumberModel_ClassInfo_, allocate$SpinnerNumberModel);
	return class$;
}

$Class* SpinnerNumberModel::class$ = nullptr;

	} // swing
} // javax