#include <javax/swing/RowFilter$NotFilter.h>

#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RowFilter = ::javax::swing::RowFilter;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;

namespace javax {
	namespace swing {

$FieldInfo _RowFilter$NotFilter_FieldInfo_[] = {
	{"filter", "Ljavax/swing/RowFilter;", "Ljavax/swing/RowFilter<TM;TI;>;", $PRIVATE, $field(RowFilter$NotFilter, filter)},
	{}
};

$MethodInfo _RowFilter$NotFilter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/RowFilter;)V", "(Ljavax/swing/RowFilter<TM;TI;>;)V", 0, $method(static_cast<void(RowFilter$NotFilter::*)($RowFilter*)>(&RowFilter$NotFilter::init$))},
	{"include", "(Ljavax/swing/RowFilter$Entry;)Z", "(Ljavax/swing/RowFilter$Entry<+TM;+TI;>;)Z", $PUBLIC},
	{}
};

$InnerClassInfo _RowFilter$NotFilter_InnerClassesInfo_[] = {
	{"javax.swing.RowFilter$NotFilter", "javax.swing.RowFilter", "NotFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _RowFilter$NotFilter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.RowFilter$NotFilter",
	"javax.swing.RowFilter",
	nullptr,
	_RowFilter$NotFilter_FieldInfo_,
	_RowFilter$NotFilter_MethodInfo_,
	"<M:Ljava/lang/Object;I:Ljava/lang/Object;>Ljavax/swing/RowFilter<TM;TI;>;",
	nullptr,
	_RowFilter$NotFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RowFilter"
};

$Object* allocate$RowFilter$NotFilter($Class* clazz) {
	return $of($alloc(RowFilter$NotFilter));
}

void RowFilter$NotFilter::init$($RowFilter* filter) {
	$RowFilter::init$();
	if (filter == nullptr) {
		$throwNew($IllegalArgumentException, "filter must be non-null"_s);
	}
	$set(this, filter, filter);
}

bool RowFilter$NotFilter::include($RowFilter$Entry* value) {
	return !$nc(this->filter)->include(value);
}

RowFilter$NotFilter::RowFilter$NotFilter() {
}

$Class* RowFilter$NotFilter::load$($String* name, bool initialize) {
	$loadClass(RowFilter$NotFilter, name, initialize, &_RowFilter$NotFilter_ClassInfo_, allocate$RowFilter$NotFilter);
	return class$;
}

$Class* RowFilter$NotFilter::class$ = nullptr;

	} // swing
} // javax