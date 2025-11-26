#ifndef _DefaultRowSorterIOOBEtest_h_
#define _DefaultRowSorterIOOBEtest_h_
//$ class DefaultRowSorterIOOBEtest
//$ extends javax.swing.table.TableRowSorter

#include <java/lang/Array.h>
#include <javax/swing/table/TableRowSorter.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class TableModel;
		}
	}
}

class $export DefaultRowSorterIOOBEtest : public ::javax::swing::table::TableRowSorter {
	$class(DefaultRowSorterIOOBEtest, 0, ::javax::swing::table::TableRowSorter)
public:
	DefaultRowSorterIOOBEtest();
	void init$();
	static void main($StringArray* args);
	static ::java::util::List* rows;
	static ::javax::swing::table::TableModel* tableModel;
};

#endif // _DefaultRowSorterIOOBEtest_h_