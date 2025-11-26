#include <javax/swing/table/TableRowSorter$ComparableComparator.h>

#include <java/lang/Comparable.h>
#include <javax/swing/table/TableRowSorter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $TableRowSorter = ::javax::swing::table::TableRowSorter;

namespace javax {
	namespace swing {
		namespace table {

$MethodInfo _TableRowSorter$ComparableComparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TableRowSorter$ComparableComparator::*)()>(&TableRowSorter$ComparableComparator::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TableRowSorter$ComparableComparator_InnerClassesInfo_[] = {
	{"javax.swing.table.TableRowSorter$ComparableComparator", "javax.swing.table.TableRowSorter", "ComparableComparator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TableRowSorter$ComparableComparator_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.table.TableRowSorter$ComparableComparator",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_TableRowSorter$ComparableComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/Object;>;",
	nullptr,
	_TableRowSorter$ComparableComparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.table.TableRowSorter"
};

$Object* allocate$TableRowSorter$ComparableComparator($Class* clazz) {
	return $of($alloc(TableRowSorter$ComparableComparator));
}

void TableRowSorter$ComparableComparator::init$() {
}

int32_t TableRowSorter$ComparableComparator::compare(Object$* o1, Object$* o2) {
	return $nc(($cast($Comparable, o1)))->compareTo(o2);
}

TableRowSorter$ComparableComparator::TableRowSorter$ComparableComparator() {
}

$Class* TableRowSorter$ComparableComparator::load$($String* name, bool initialize) {
	$loadClass(TableRowSorter$ComparableComparator, name, initialize, &_TableRowSorter$ComparableComparator_ClassInfo_, allocate$TableRowSorter$ComparableComparator);
	return class$;
}

$Class* TableRowSorter$ComparableComparator::class$ = nullptr;

		} // table
	} // swing
} // javax