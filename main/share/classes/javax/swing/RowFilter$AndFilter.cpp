#include <javax/swing/RowFilter$AndFilter.h>

#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter$OrFilter.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $RowFilter = ::javax::swing::RowFilter;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;
using $RowFilter$OrFilter = ::javax::swing::RowFilter$OrFilter;

namespace javax {
	namespace swing {

$MethodInfo _RowFilter$AndFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljavax/swing/RowFilter<-TM;-TI;>;>;)V", 0, $method(static_cast<void(RowFilter$AndFilter::*)($Iterable*)>(&RowFilter$AndFilter::init$))},
	{"include", "(Ljavax/swing/RowFilter$Entry;)Z", "(Ljavax/swing/RowFilter$Entry<+TM;+TI;>;)Z", $PUBLIC},
	{}
};

$InnerClassInfo _RowFilter$AndFilter_InnerClassesInfo_[] = {
	{"javax.swing.RowFilter$AndFilter", "javax.swing.RowFilter", "AndFilter", $PRIVATE | $STATIC},
	{"javax.swing.RowFilter$OrFilter", "javax.swing.RowFilter", "OrFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _RowFilter$AndFilter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.RowFilter$AndFilter",
	"javax.swing.RowFilter$OrFilter",
	nullptr,
	nullptr,
	_RowFilter$AndFilter_MethodInfo_,
	"<M:Ljava/lang/Object;I:Ljava/lang/Object;>Ljavax/swing/RowFilter$OrFilter<TM;TI;>;",
	nullptr,
	_RowFilter$AndFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RowFilter"
};

$Object* allocate$RowFilter$AndFilter($Class* clazz) {
	return $of($alloc(RowFilter$AndFilter));
}

void RowFilter$AndFilter::init$($Iterable* filters) {
	$RowFilter$OrFilter::init$(filters);
}

bool RowFilter$AndFilter::include($RowFilter$Entry* value) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->filters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($RowFilter, filter, $cast($RowFilter, i$->next()));
			{
				if (!$nc(filter)->include(value)) {
					return false;
				}
			}
		}
	}
	return true;
}

RowFilter$AndFilter::RowFilter$AndFilter() {
}

$Class* RowFilter$AndFilter::load$($String* name, bool initialize) {
	$loadClass(RowFilter$AndFilter, name, initialize, &_RowFilter$AndFilter_ClassInfo_, allocate$RowFilter$AndFilter);
	return class$;
}

$Class* RowFilter$AndFilter::class$ = nullptr;

	} // swing
} // javax