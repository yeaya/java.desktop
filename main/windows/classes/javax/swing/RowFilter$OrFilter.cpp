#include <javax/swing/RowFilter$OrFilter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Iterable.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $RowFilter = ::javax::swing::RowFilter;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;

namespace javax {
	namespace swing {

$FieldInfo _RowFilter$OrFilter_FieldInfo_[] = {
	{"filters", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/RowFilter<-TM;-TI;>;>;", 0, $field(RowFilter$OrFilter, filters)},
	{}
};

$MethodInfo _RowFilter$OrFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljavax/swing/RowFilter<-TM;-TI;>;>;)V", 0, $method(static_cast<void(RowFilter$OrFilter::*)($Iterable*)>(&RowFilter$OrFilter::init$))},
	{"include", "(Ljavax/swing/RowFilter$Entry;)Z", "(Ljavax/swing/RowFilter$Entry<+TM;+TI;>;)Z", $PUBLIC},
	{}
};

$InnerClassInfo _RowFilter$OrFilter_InnerClassesInfo_[] = {
	{"javax.swing.RowFilter$OrFilter", "javax.swing.RowFilter", "OrFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _RowFilter$OrFilter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.RowFilter$OrFilter",
	"javax.swing.RowFilter",
	nullptr,
	_RowFilter$OrFilter_FieldInfo_,
	_RowFilter$OrFilter_MethodInfo_,
	"<M:Ljava/lang/Object;I:Ljava/lang/Object;>Ljavax/swing/RowFilter<TM;TI;>;",
	nullptr,
	_RowFilter$OrFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RowFilter"
};

$Object* allocate$RowFilter$OrFilter($Class* clazz) {
	return $of($alloc(RowFilter$OrFilter));
}

void RowFilter$OrFilter::init$($Iterable* filters) {
	$useLocalCurrentObjectStackCache();
	$RowFilter::init$();
	$set(this, filters, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(filters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($RowFilter, filter, $cast($RowFilter, i$->next()));
			{
				if (filter == nullptr) {
					$throwNew($IllegalArgumentException, "Filter must be non-null"_s);
				}
				$nc(this->filters)->add(filter);
			}
		}
	}
}

bool RowFilter$OrFilter::include($RowFilter$Entry* value) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->filters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($RowFilter, filter, $cast($RowFilter, i$->next()));
			{
				if ($nc(filter)->include(value)) {
					return true;
				}
			}
		}
	}
	return false;
}

RowFilter$OrFilter::RowFilter$OrFilter() {
}

$Class* RowFilter$OrFilter::load$($String* name, bool initialize) {
	$loadClass(RowFilter$OrFilter, name, initialize, &_RowFilter$OrFilter_ClassInfo_, allocate$RowFilter$OrFilter);
	return class$;
}

$Class* RowFilter$OrFilter::class$ = nullptr;

	} // swing
} // javax