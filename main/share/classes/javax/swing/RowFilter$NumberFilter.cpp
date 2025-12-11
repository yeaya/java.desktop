#include <javax/swing/RowFilter$NumberFilter.h>

#include <java/lang/Comparable.h>
#include <java/lang/Number.h>
#include <javax/swing/RowFilter$1.h>
#include <javax/swing/RowFilter$ComparisonType.h>
#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter$GeneralFilter.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $RowFilter$1 = ::javax::swing::RowFilter$1;
using $RowFilter$ComparisonType = ::javax::swing::RowFilter$ComparisonType;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;
using $RowFilter$GeneralFilter = ::javax::swing::RowFilter$GeneralFilter;

namespace javax {
	namespace swing {

$FieldInfo _RowFilter$NumberFilter_FieldInfo_[] = {
	{"isComparable", "Z", nullptr, $PRIVATE, $field(RowFilter$NumberFilter, isComparable)},
	{"number", "Ljava/lang/Number;", nullptr, $PRIVATE, $field(RowFilter$NumberFilter, number)},
	{"type", "Ljavax/swing/RowFilter$ComparisonType;", nullptr, $PRIVATE, $field(RowFilter$NumberFilter, type)},
	{}
};

$MethodInfo _RowFilter$NumberFilter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/RowFilter$ComparisonType;Ljava/lang/Number;[I)V", nullptr, 0, $method(static_cast<void(RowFilter$NumberFilter::*)($RowFilter$ComparisonType*,$Number*,$ints*)>(&RowFilter$NumberFilter::init$))},
	{"include", "(Ljavax/swing/RowFilter$Entry;I)Z", "(Ljavax/swing/RowFilter$Entry<+TM;+TI;>;I)Z", $PROTECTED},
	{"longCompare", "(Ljava/lang/Number;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(RowFilter$NumberFilter::*)($Number*)>(&RowFilter$NumberFilter::longCompare))},
	{}
};

$InnerClassInfo _RowFilter$NumberFilter_InnerClassesInfo_[] = {
	{"javax.swing.RowFilter$NumberFilter", "javax.swing.RowFilter", "NumberFilter", $PRIVATE | $STATIC},
	{"javax.swing.RowFilter$GeneralFilter", "javax.swing.RowFilter", "GeneralFilter", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RowFilter$NumberFilter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.RowFilter$NumberFilter",
	"javax.swing.RowFilter$GeneralFilter",
	nullptr,
	_RowFilter$NumberFilter_FieldInfo_,
	_RowFilter$NumberFilter_MethodInfo_,
	"<M:Ljava/lang/Object;I:Ljava/lang/Object;>Ljavax/swing/RowFilter$GeneralFilter<TM;TI;>;",
	nullptr,
	_RowFilter$NumberFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RowFilter"
};

$Object* allocate$RowFilter$NumberFilter($Class* clazz) {
	return $of($alloc(RowFilter$NumberFilter));
}

void RowFilter$NumberFilter::init$($RowFilter$ComparisonType* type, $Number* number, $ints* columns) {
	$RowFilter$GeneralFilter::init$(columns);
	if (type == nullptr || number == nullptr) {
		$throwNew($IllegalArgumentException, "type and number must be non-null"_s);
	}
	$set(this, type, type);
	$set(this, number, number);
	this->isComparable = ($instanceOf($Comparable, number));
}

bool RowFilter$NumberFilter::include($RowFilter$Entry* value, int32_t index) {
	$var($Object, v, $nc(value)->getValue(index));
	if ($instanceOf($Number, v)) {
		bool compared = true;
		int32_t compareResult = 0;
		$Class* vClass = $nc($of(v))->getClass();
		if ($nc($of(this->number))->getClass() == vClass && this->isComparable) {
			compareResult = $nc(($cast($Comparable, this->number)))->compareTo(v);
		} else {
			compareResult = longCompare($cast($Number, v));
		}
		$init($RowFilter$1);
		switch ($nc($RowFilter$1::$SwitchMap$javax$swing$RowFilter$ComparisonType)->get($nc((this->type))->ordinal())) {
		case 1:
			{
				return (compareResult > 0);
			}
		case 2:
			{
				return (compareResult < 0);
			}
		case 3:
			{
				return (compareResult == 0);
			}
		case 4:
			{
				return (compareResult != 0);
			}
		default:
			{
				break;
			}
		}
	}
	return false;
}

int32_t RowFilter$NumberFilter::longCompare($Number* o) {
	int64_t var$0 = $nc(this->number)->longValue();
	int64_t diff = var$0 - $nc(o)->longValue();
	if (diff < 0) {
		return -1;
	} else if (diff > 0) {
		return 1;
	}
	return 0;
}

RowFilter$NumberFilter::RowFilter$NumberFilter() {
}

$Class* RowFilter$NumberFilter::load$($String* name, bool initialize) {
	$loadClass(RowFilter$NumberFilter, name, initialize, &_RowFilter$NumberFilter_ClassInfo_, allocate$RowFilter$NumberFilter);
	return class$;
}

$Class* RowFilter$NumberFilter::class$ = nullptr;

	} // swing
} // javax