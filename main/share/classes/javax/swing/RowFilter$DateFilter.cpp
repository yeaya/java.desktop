#include <javax/swing/RowFilter$DateFilter.h>

#include <java/util/Date.h>
#include <javax/swing/RowFilter$1.h>
#include <javax/swing/RowFilter$ComparisonType.h>
#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter$GeneralFilter.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;
using $RowFilter$1 = ::javax::swing::RowFilter$1;
using $RowFilter$ComparisonType = ::javax::swing::RowFilter$ComparisonType;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;
using $RowFilter$GeneralFilter = ::javax::swing::RowFilter$GeneralFilter;

namespace javax {
	namespace swing {

$FieldInfo _RowFilter$DateFilter_FieldInfo_[] = {
	{"date", "J", nullptr, $PRIVATE, $field(RowFilter$DateFilter, date)},
	{"type", "Ljavax/swing/RowFilter$ComparisonType;", nullptr, $PRIVATE, $field(RowFilter$DateFilter, type)},
	{}
};

$MethodInfo _RowFilter$DateFilter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/RowFilter$ComparisonType;J[I)V", nullptr, 0, $method(static_cast<void(RowFilter$DateFilter::*)($RowFilter$ComparisonType*,int64_t,$ints*)>(&RowFilter$DateFilter::init$))},
	{"include", "(Ljavax/swing/RowFilter$Entry;I)Z", "(Ljavax/swing/RowFilter$Entry<+TM;+TI;>;I)Z", $PROTECTED},
	{}
};

$InnerClassInfo _RowFilter$DateFilter_InnerClassesInfo_[] = {
	{"javax.swing.RowFilter$DateFilter", "javax.swing.RowFilter", "DateFilter", $PRIVATE | $STATIC},
	{"javax.swing.RowFilter$GeneralFilter", "javax.swing.RowFilter", "GeneralFilter", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RowFilter$DateFilter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.RowFilter$DateFilter",
	"javax.swing.RowFilter$GeneralFilter",
	nullptr,
	_RowFilter$DateFilter_FieldInfo_,
	_RowFilter$DateFilter_MethodInfo_,
	"<M:Ljava/lang/Object;I:Ljava/lang/Object;>Ljavax/swing/RowFilter$GeneralFilter<TM;TI;>;",
	nullptr,
	_RowFilter$DateFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RowFilter"
};

$Object* allocate$RowFilter$DateFilter($Class* clazz) {
	return $of($alloc(RowFilter$DateFilter));
}

void RowFilter$DateFilter::init$($RowFilter$ComparisonType* type, int64_t date, $ints* columns) {
	$RowFilter$GeneralFilter::init$(columns);
	if (type == nullptr) {
		$throwNew($IllegalArgumentException, "type must be non-null"_s);
	}
	$set(this, type, type);
	this->date = date;
}

bool RowFilter$DateFilter::include($RowFilter$Entry* value, int32_t index) {
	$var($Object, v, $nc(value)->getValue(index));
	if ($instanceOf($Date, v)) {
		int64_t vDate = $nc(($cast($Date, v)))->getTime();
		$init($RowFilter$1);
		switch ($nc($RowFilter$1::$SwitchMap$javax$swing$RowFilter$ComparisonType)->get($nc((this->type))->ordinal())) {
		case 1:
			{
				return (vDate < this->date);
			}
		case 2:
			{
				return (vDate > this->date);
			}
		case 3:
			{
				return (vDate == this->date);
			}
		case 4:
			{
				return (vDate != this->date);
			}
		default:
			{
				break;
			}
		}
	}
	return false;
}

RowFilter$DateFilter::RowFilter$DateFilter() {
}

$Class* RowFilter$DateFilter::load$($String* name, bool initialize) {
	$loadClass(RowFilter$DateFilter, name, initialize, &_RowFilter$DateFilter_ClassInfo_, allocate$RowFilter$DateFilter);
	return class$;
}

$Class* RowFilter$DateFilter::class$ = nullptr;

	} // swing
} // javax