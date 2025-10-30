#include <javax/swing/SpinnerDateModel.h>

#include <java/lang/Comparable.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <javax/swing/AbstractSpinnerModel.h>
#include <jcpp.h>

#undef AM_PM
#undef DAY_OF_MONTH
#undef DAY_OF_WEEK
#undef DAY_OF_WEEK_IN_MONTH
#undef DAY_OF_YEAR
#undef ERA
#undef HOUR
#undef HOUR_OF_DAY
#undef MILLISECOND
#undef MINUTE
#undef MONTH
#undef SECOND
#undef WEEK_OF_MONTH
#undef WEEK_OF_YEAR
#undef YEAR

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;

namespace javax {
	namespace swing {

$FieldInfo _SpinnerDateModel_FieldInfo_[] = {
	{"start", "Ljava/lang/Comparable;", "Ljava/lang/Comparable<Ljava/util/Date;>;", $PRIVATE, $field(SpinnerDateModel, start)},
	{"end", "Ljava/lang/Comparable;", "Ljava/lang/Comparable<Ljava/util/Date;>;", $PRIVATE, $field(SpinnerDateModel, end)},
	{"value", "Ljava/util/Calendar;", nullptr, $PRIVATE, $field(SpinnerDateModel, value)},
	{"calendarField", "I", nullptr, $PRIVATE, $field(SpinnerDateModel, calendarField)},
	{}
};

$MethodInfo _SpinnerDateModel_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Date;Ljava/lang/Comparable;Ljava/lang/Comparable;I)V", "(Ljava/util/Date;Ljava/lang/Comparable<Ljava/util/Date;>;Ljava/lang/Comparable<Ljava/util/Date;>;I)V", $PUBLIC, $method(static_cast<void(SpinnerDateModel::*)($Date*,$Comparable*,$Comparable*,int32_t)>(&SpinnerDateModel::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SpinnerDateModel::*)()>(&SpinnerDateModel::init$))},
	{"calendarFieldOK", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(SpinnerDateModel::*)(int32_t)>(&SpinnerDateModel::calendarFieldOK))},
	{"getCalendarField", "()I", nullptr, $PUBLIC},
	{"getDate", "()Ljava/util/Date;", nullptr, $PUBLIC},
	{"getEnd", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<Ljava/util/Date;>;", $PUBLIC},
	{"getNextValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPreviousValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getStart", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<Ljava/util/Date;>;", $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setCalendarField", "(I)V", nullptr, $PUBLIC},
	{"setEnd", "(Ljava/lang/Comparable;)V", "(Ljava/lang/Comparable<Ljava/util/Date;>;)V", $PUBLIC},
	{"setStart", "(Ljava/lang/Comparable;)V", "(Ljava/lang/Comparable<Ljava/util/Date;>;)V", $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SpinnerDateModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.SpinnerDateModel",
	"javax.swing.AbstractSpinnerModel",
	nullptr,
	_SpinnerDateModel_FieldInfo_,
	_SpinnerDateModel_MethodInfo_
};

$Object* allocate$SpinnerDateModel($Class* clazz) {
	return $of($alloc(SpinnerDateModel));
}

bool SpinnerDateModel::calendarFieldOK(int32_t calendarField) {
	switch (calendarField) {
	case $Calendar::ERA:
		{}
	case $Calendar::YEAR:
		{}
	case $Calendar::MONTH:
		{}
	case $Calendar::WEEK_OF_YEAR:
		{}
	case $Calendar::WEEK_OF_MONTH:
		{}
	case $Calendar::DAY_OF_MONTH:
		{}
	case $Calendar::DAY_OF_YEAR:
		{}
	case $Calendar::DAY_OF_WEEK:
		{}
	case $Calendar::DAY_OF_WEEK_IN_MONTH:
		{}
	case $Calendar::AM_PM:
		{}
	case $Calendar::HOUR:
		{}
	case $Calendar::HOUR_OF_DAY:
		{}
	case $Calendar::MINUTE:
		{}
	case $Calendar::SECOND:
		{}
	case $Calendar::MILLISECOND:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

void SpinnerDateModel::init$($Date* value, $Comparable* start, $Comparable* end, int32_t calendarField) {
	$AbstractSpinnerModel::init$();
	if (value == nullptr) {
		$throwNew($IllegalArgumentException, "value is null"_s);
	}
	if (!calendarFieldOK(calendarField)) {
		$throwNew($IllegalArgumentException, "invalid calendarField"_s);
	}
	bool var$0 = ((start == nullptr) || ($nc(start)->compareTo(value) <= 0));
	if (!(var$0 && ((end == nullptr) || ($nc(end)->compareTo(value) >= 0)))) {
		$throwNew($IllegalArgumentException, "(start <= value <= end) is false"_s);
	}
	$set(this, value, $Calendar::getInstance());
	$set(this, start, start);
	$set(this, end, end);
	this->calendarField = calendarField;
	$nc(this->value)->setTime(value);
}

void SpinnerDateModel::init$() {
	SpinnerDateModel::init$($$new($Date), nullptr, nullptr, $Calendar::DAY_OF_MONTH);
}

void SpinnerDateModel::setStart($Comparable* start) {
	if ((start == nullptr) ? (this->start != nullptr) : !$nc($of(start))->equals(this->start)) {
		$set(this, start, start);
		fireStateChanged();
	}
}

$Comparable* SpinnerDateModel::getStart() {
	return this->start;
}

void SpinnerDateModel::setEnd($Comparable* end) {
	if ((end == nullptr) ? (this->end != nullptr) : !$nc($of(end))->equals(this->end)) {
		$set(this, end, end);
		fireStateChanged();
	}
}

$Comparable* SpinnerDateModel::getEnd() {
	return this->end;
}

void SpinnerDateModel::setCalendarField(int32_t calendarField) {
	if (!calendarFieldOK(calendarField)) {
		$throwNew($IllegalArgumentException, "invalid calendarField"_s);
	}
	if (calendarField != this->calendarField) {
		this->calendarField = calendarField;
		fireStateChanged();
	}
}

int32_t SpinnerDateModel::getCalendarField() {
	return this->calendarField;
}

$Object* SpinnerDateModel::getNextValue() {
	$useLocalCurrentObjectStackCache();
	$var($Calendar, cal, $Calendar::getInstance());
	$nc(cal)->setTime($($nc(this->value)->getTime()));
	cal->add(this->calendarField, 1);
	$var($Date, next, cal->getTime());
	return $of(((this->end == nullptr) || ($nc(this->end)->compareTo(next) >= 0)) ? $of(next) : ($Object*)nullptr);
}

$Object* SpinnerDateModel::getPreviousValue() {
	$useLocalCurrentObjectStackCache();
	$var($Calendar, cal, $Calendar::getInstance());
	$nc(cal)->setTime($($nc(this->value)->getTime()));
	cal->add(this->calendarField, -1);
	$var($Date, prev, cal->getTime());
	return $of(((this->start == nullptr) || ($nc(this->start)->compareTo(prev) <= 0)) ? $of(prev) : ($Object*)nullptr);
}

$Date* SpinnerDateModel::getDate() {
	return $nc(this->value)->getTime();
}

$Object* SpinnerDateModel::getValue() {
	return $of($nc(this->value)->getTime());
}

void SpinnerDateModel::setValue(Object$* value) {
	if ((value == nullptr) || !($instanceOf($Date, value))) {
		$throwNew($IllegalArgumentException, "illegal value"_s);
	}
	if (!$nc($of(value))->equals($($nc(this->value)->getTime()))) {
		$nc(this->value)->setTime($cast($Date, value));
		fireStateChanged();
	}
}

SpinnerDateModel::SpinnerDateModel() {
}

$Class* SpinnerDateModel::load$($String* name, bool initialize) {
	$loadClass(SpinnerDateModel, name, initialize, &_SpinnerDateModel_ClassInfo_, allocate$SpinnerDateModel);
	return class$;
}

$Class* SpinnerDateModel::class$ = nullptr;

	} // swing
} // javax