#ifndef _javax_swing_table_TableRowSorter_h_
#define _javax_swing_table_TableRowSorter_h_
//$ class javax.swing.table.TableRowSorter
//$ extends javax.swing.DefaultRowSorter

#include <javax/swing/DefaultRowSorter.h>

#pragma push_macro("COMPARABLE_COMPARATOR")
#undef COMPARABLE_COMPARATOR

namespace java {
	namespace util {
		class Comparator;
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class TableModel;
			class TableStringConverter;
		}
	}
}

namespace javax {
	namespace swing {
		namespace table {

class $export TableRowSorter : public ::javax::swing::DefaultRowSorter {
	$class(TableRowSorter, 0, ::javax::swing::DefaultRowSorter)
public:
	TableRowSorter();
	void init$();
	void init$(::javax::swing::table::TableModel* model);
	virtual ::java::util::Comparator* getComparator(int32_t column) override;
	virtual ::javax::swing::table::TableStringConverter* getStringConverter();
	virtual void setModel(::javax::swing::table::TableModel* model);
	virtual void setStringConverter(::javax::swing::table::TableStringConverter* stringConverter);
	virtual bool useToString(int32_t column) override;
	static ::java::util::Comparator* COMPARABLE_COMPARATOR;
	::javax::swing::table::TableModel* tableModel = nullptr;
	::javax::swing::table::TableStringConverter* stringConverter = nullptr;
};

		} // table
	} // swing
} // javax

#pragma pop_macro("COMPARABLE_COMPARATOR")

#endif // _javax_swing_table_TableRowSorter_h_