#ifndef _javax_swing_table_TableRowSorter$ComparableComparator_h_
#define _javax_swing_table_TableRowSorter$ComparableComparator_h_
//$ class javax.swing.table.TableRowSorter$ComparableComparator
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace javax {
	namespace swing {
		namespace table {

class TableRowSorter$ComparableComparator : public ::java::util::Comparator {
	$class(TableRowSorter$ComparableComparator, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	TableRowSorter$ComparableComparator();
	void init$();
	virtual int32_t compare(Object$* o1, Object$* o2) override;
};

		} // table
	} // swing
} // javax

#endif // _javax_swing_table_TableRowSorter$ComparableComparator_h_