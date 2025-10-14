#include <javax/swing/RowFilter$GeneralFilter.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RowFilter = ::javax::swing::RowFilter;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;

namespace javax {
	namespace swing {

$FieldInfo _RowFilter$GeneralFilter_FieldInfo_[] = {
	{"columns", "[I", nullptr, $PRIVATE, $field(RowFilter$GeneralFilter, columns)},
	{}
};

$MethodInfo _RowFilter$GeneralFilter_MethodInfo_[] = {
	{"<init>", "([I)V", nullptr, 0, $method(static_cast<void(RowFilter$GeneralFilter::*)($ints*)>(&RowFilter$GeneralFilter::init$))},
	{"include", "(Ljavax/swing/RowFilter$Entry;)Z", "(Ljavax/swing/RowFilter$Entry<+TM;+TI;>;)Z", $PUBLIC},
	{"include", "(Ljavax/swing/RowFilter$Entry;I)Z", "(Ljavax/swing/RowFilter$Entry<+TM;+TI;>;I)Z", $PROTECTED | $ABSTRACT},
	{}
};

$InnerClassInfo _RowFilter$GeneralFilter_InnerClassesInfo_[] = {
	{"javax.swing.RowFilter$GeneralFilter", "javax.swing.RowFilter", "GeneralFilter", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RowFilter$GeneralFilter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"javax.swing.RowFilter$GeneralFilter",
	"javax.swing.RowFilter",
	nullptr,
	_RowFilter$GeneralFilter_FieldInfo_,
	_RowFilter$GeneralFilter_MethodInfo_,
	"<M:Ljava/lang/Object;I:Ljava/lang/Object;>Ljavax/swing/RowFilter<TM;TI;>;",
	nullptr,
	_RowFilter$GeneralFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RowFilter"
};

$Object* allocate$RowFilter$GeneralFilter($Class* clazz) {
	return $of($alloc(RowFilter$GeneralFilter));
}

void RowFilter$GeneralFilter::init$($ints* columns) {
	$RowFilter::init$();
	$RowFilter::checkIndices(columns);
	$set(this, columns, columns);
}

bool RowFilter$GeneralFilter::include($RowFilter$Entry* value) {
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

RowFilter$GeneralFilter::RowFilter$GeneralFilter() {
}

$Class* RowFilter$GeneralFilter::load$($String* name, bool initialize) {
	$loadClass(RowFilter$GeneralFilter, name, initialize, &_RowFilter$GeneralFilter_ClassInfo_, allocate$RowFilter$GeneralFilter);
	return class$;
}

$Class* RowFilter$GeneralFilter::class$ = nullptr;

	} // swing
} // javax