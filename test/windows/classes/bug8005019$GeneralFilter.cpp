#include <bug8005019$GeneralFilter.h>

#include <bug8005019.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

using $IntegerArray = $Array<::java::lang::Integer>;
using $bug8005019 = ::bug8005019;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $RowFilter = ::javax::swing::RowFilter;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;

$FieldInfo _bug8005019$GeneralFilter_FieldInfo_[] = {
	{"columns", "[I", nullptr, $PRIVATE, $field(bug8005019$GeneralFilter, columns)},
	{"excludes", "Ljava/util/List;", nullptr, 0, $field(bug8005019$GeneralFilter, excludes)},
	{}
};

$MethodInfo _bug8005019$GeneralFilter_MethodInfo_[] = {
	{"<init>", "([I)V", nullptr, 0, $method(static_cast<void(bug8005019$GeneralFilter::*)($ints*)>(&bug8005019$GeneralFilter::init$))},
	{"include", "(Ljavax/swing/RowFilter$Entry;)Z", "(Ljavax/swing/RowFilter$Entry<+Ljava/lang/Object;+Ljava/lang/Object;>;)Z", $PUBLIC},
	{"include", "(Ljavax/swing/RowFilter$Entry;I)Z", "(Ljavax/swing/RowFilter$Entry<+Ljava/lang/Object;+Ljava/lang/Object;>;I)Z", $PROTECTED},
	{}
};

$InnerClassInfo _bug8005019$GeneralFilter_InnerClassesInfo_[] = {
	{"bug8005019$GeneralFilter", "bug8005019", "GeneralFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug8005019$GeneralFilter_ClassInfo_ = {
	$ACC_SUPER,
	"bug8005019$GeneralFilter",
	"javax.swing.RowFilter",
	nullptr,
	_bug8005019$GeneralFilter_FieldInfo_,
	_bug8005019$GeneralFilter_MethodInfo_,
	"Ljavax/swing/RowFilter<Ljava/lang/Object;Ljava/lang/Object;>;",
	nullptr,
	_bug8005019$GeneralFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8005019"
};

$Object* allocate$bug8005019$GeneralFilter($Class* clazz) {
	return $of($alloc(bug8005019$GeneralFilter));
}

void bug8005019$GeneralFilter::init$($ints* columns) {
	$useLocalCurrentObjectStackCache();
	$RowFilter::init$();
	$set(this, excludes, $Arrays::asList($$new($IntegerArray, {$($Integer::valueOf(0))})));
	$set(this, columns, columns);
}

bool bug8005019$GeneralFilter::include($RowFilter$Entry* value) {
	int32_t count = $nc(value)->getValueCount();
	if ($nc(this->columns)->length > 0) {
		for (int32_t i = $nc(this->columns)->length - 1; i >= 0; --i) {
			int32_t index = $nc(this->columns)->get(i);
			if (index < count) {
				if (include(value, index)) {
					return true;
				}
			}
		}
	} else {
		while (--count >= 0) {
			if (include(value, count)) {
				return true;
			}
		}
	}
	return false;
}

bool bug8005019$GeneralFilter::include($RowFilter$Entry* entry, int32_t index) {
	return !$nc(this->excludes)->contains($($nc(entry)->getIdentifier()));
}

bug8005019$GeneralFilter::bug8005019$GeneralFilter() {
}

$Class* bug8005019$GeneralFilter::load$($String* name, bool initialize) {
	$loadClass(bug8005019$GeneralFilter, name, initialize, &_bug8005019$GeneralFilter_ClassInfo_, allocate$bug8005019$GeneralFilter);
	return class$;
}

$Class* bug8005019$GeneralFilter::class$ = nullptr;