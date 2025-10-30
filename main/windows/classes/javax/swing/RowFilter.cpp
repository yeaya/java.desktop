#include <javax/swing/RowFilter.h>

#include <java/lang/Iterable.h>
#include <java/lang/Number.h>
#include <java/util/Date.h>
#include <java/util/regex/Pattern.h>
#include <javax/swing/RowFilter$AndFilter.h>
#include <javax/swing/RowFilter$ComparisonType.h>
#include <javax/swing/RowFilter$DateFilter.h>
#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter$GeneralFilter.h>
#include <javax/swing/RowFilter$NotFilter.h>
#include <javax/swing/RowFilter$NumberFilter.h>
#include <javax/swing/RowFilter$OrFilter.h>
#include <javax/swing/RowFilter$RegexFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Date = ::java::util::Date;
using $Pattern = ::java::util::regex::Pattern;
using $RowFilter$AndFilter = ::javax::swing::RowFilter$AndFilter;
using $RowFilter$ComparisonType = ::javax::swing::RowFilter$ComparisonType;
using $RowFilter$DateFilter = ::javax::swing::RowFilter$DateFilter;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;
using $RowFilter$GeneralFilter = ::javax::swing::RowFilter$GeneralFilter;
using $RowFilter$NotFilter = ::javax::swing::RowFilter$NotFilter;
using $RowFilter$NumberFilter = ::javax::swing::RowFilter$NumberFilter;
using $RowFilter$OrFilter = ::javax::swing::RowFilter$OrFilter;
using $RowFilter$RegexFilter = ::javax::swing::RowFilter$RegexFilter;

namespace javax {
	namespace swing {

$MethodInfo _RowFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(RowFilter::*)()>(&RowFilter::init$))},
	{"andFilter", "(Ljava/lang/Iterable;)Ljavax/swing/RowFilter;", "<M:Ljava/lang/Object;I:Ljava/lang/Object;>(Ljava/lang/Iterable<+Ljavax/swing/RowFilter<-TM;-TI;>;>;)Ljavax/swing/RowFilter<TM;TI;>;", $PUBLIC | $STATIC, $method(static_cast<RowFilter*(*)($Iterable*)>(&RowFilter::andFilter))},
	{"checkIndices", "([I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*)>(&RowFilter::checkIndices))},
	{"dateFilter", "(Ljavax/swing/RowFilter$ComparisonType;Ljava/util/Date;[I)Ljavax/swing/RowFilter;", "<M:Ljava/lang/Object;I:Ljava/lang/Object;>(Ljavax/swing/RowFilter$ComparisonType;Ljava/util/Date;[I)Ljavax/swing/RowFilter<TM;TI;>;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<RowFilter*(*)($RowFilter$ComparisonType*,$Date*,$ints*)>(&RowFilter::dateFilter))},
	{"include", "(Ljavax/swing/RowFilter$Entry;)Z", "(Ljavax/swing/RowFilter$Entry<+TM;+TI;>;)Z", $PUBLIC | $ABSTRACT},
	{"notFilter", "(Ljavax/swing/RowFilter;)Ljavax/swing/RowFilter;", "<M:Ljava/lang/Object;I:Ljava/lang/Object;>(Ljavax/swing/RowFilter<TM;TI;>;)Ljavax/swing/RowFilter<TM;TI;>;", $PUBLIC | $STATIC, $method(static_cast<RowFilter*(*)(RowFilter*)>(&RowFilter::notFilter))},
	{"numberFilter", "(Ljavax/swing/RowFilter$ComparisonType;Ljava/lang/Number;[I)Ljavax/swing/RowFilter;", "<M:Ljava/lang/Object;I:Ljava/lang/Object;>(Ljavax/swing/RowFilter$ComparisonType;Ljava/lang/Number;[I)Ljavax/swing/RowFilter<TM;TI;>;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<RowFilter*(*)($RowFilter$ComparisonType*,$Number*,$ints*)>(&RowFilter::numberFilter))},
	{"orFilter", "(Ljava/lang/Iterable;)Ljavax/swing/RowFilter;", "<M:Ljava/lang/Object;I:Ljava/lang/Object;>(Ljava/lang/Iterable<+Ljavax/swing/RowFilter<-TM;-TI;>;>;)Ljavax/swing/RowFilter<TM;TI;>;", $PUBLIC | $STATIC, $method(static_cast<RowFilter*(*)($Iterable*)>(&RowFilter::orFilter))},
	{"regexFilter", "(Ljava/lang/String;[I)Ljavax/swing/RowFilter;", "<M:Ljava/lang/Object;I:Ljava/lang/Object;>(Ljava/lang/String;[I)Ljavax/swing/RowFilter<TM;TI;>;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<RowFilter*(*)($String*,$ints*)>(&RowFilter::regexFilter))},
	{}
};

$InnerClassInfo _RowFilter_InnerClassesInfo_[] = {
	{"javax.swing.RowFilter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"javax.swing.RowFilter$NotFilter", "javax.swing.RowFilter", "NotFilter", $PRIVATE | $STATIC},
	{"javax.swing.RowFilter$AndFilter", "javax.swing.RowFilter", "AndFilter", $PRIVATE | $STATIC},
	{"javax.swing.RowFilter$OrFilter", "javax.swing.RowFilter", "OrFilter", $PRIVATE | $STATIC},
	{"javax.swing.RowFilter$NumberFilter", "javax.swing.RowFilter", "NumberFilter", $PRIVATE | $STATIC},
	{"javax.swing.RowFilter$DateFilter", "javax.swing.RowFilter", "DateFilter", $PRIVATE | $STATIC},
	{"javax.swing.RowFilter$RegexFilter", "javax.swing.RowFilter", "RegexFilter", $PRIVATE | $STATIC},
	{"javax.swing.RowFilter$GeneralFilter", "javax.swing.RowFilter", "GeneralFilter", $PRIVATE | $STATIC | $ABSTRACT},
	{"javax.swing.RowFilter$Entry", "javax.swing.RowFilter", "Entry", $PUBLIC | $STATIC | $ABSTRACT},
	{"javax.swing.RowFilter$ComparisonType", "javax.swing.RowFilter", "ComparisonType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _RowFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.RowFilter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RowFilter_MethodInfo_,
	"<M:Ljava/lang/Object;I:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_RowFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.RowFilter$1,javax.swing.RowFilter$NotFilter,javax.swing.RowFilter$AndFilter,javax.swing.RowFilter$OrFilter,javax.swing.RowFilter$NumberFilter,javax.swing.RowFilter$DateFilter,javax.swing.RowFilter$RegexFilter,javax.swing.RowFilter$GeneralFilter,javax.swing.RowFilter$Entry,javax.swing.RowFilter$ComparisonType"
};

$Object* allocate$RowFilter($Class* clazz) {
	return $of($alloc(RowFilter));
}

void RowFilter::init$() {
}

void RowFilter::checkIndices($ints* columns) {
	for (int32_t i = $nc(columns)->length - 1; i >= 0; --i) {
		if (columns->get(i) < 0) {
			$throwNew($IllegalArgumentException, "Index must be >= 0"_s);
		}
	}
}

RowFilter* RowFilter::regexFilter($String* regex, $ints* indices) {
	return $new($RowFilter$RegexFilter, $($Pattern::compile(regex)), indices);
}

RowFilter* RowFilter::dateFilter($RowFilter$ComparisonType* type, $Date* date, $ints* indices) {
	return $new($RowFilter$DateFilter, type, $nc(date)->getTime(), indices);
}

RowFilter* RowFilter::numberFilter($RowFilter$ComparisonType* type, $Number* number, $ints* indices) {
	return $new($RowFilter$NumberFilter, type, number, indices);
}

RowFilter* RowFilter::orFilter($Iterable* filters) {
	return $new($RowFilter$OrFilter, filters);
}

RowFilter* RowFilter::andFilter($Iterable* filters) {
	return $new($RowFilter$AndFilter, filters);
}

RowFilter* RowFilter::notFilter(RowFilter* filter) {
	return $new($RowFilter$NotFilter, filter);
}

RowFilter::RowFilter() {
}

$Class* RowFilter::load$($String* name, bool initialize) {
	$loadClass(RowFilter, name, initialize, &_RowFilter_ClassInfo_, allocate$RowFilter);
	return class$;
}

$Class* RowFilter::class$ = nullptr;

	} // swing
} // javax