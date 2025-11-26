#ifndef _javax_swing_table_TableStringConverter_h_
#define _javax_swing_table_TableStringConverter_h_
//$ class javax.swing.table.TableStringConverter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace table {
			class TableModel;
		}
	}
}

namespace javax {
	namespace swing {
		namespace table {

class $export TableStringConverter : public ::java::lang::Object {
	$class(TableStringConverter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TableStringConverter();
	void init$();
	using ::java::lang::Object::toString;
	virtual $String* toString(::javax::swing::table::TableModel* model, int32_t row, int32_t column) {return nullptr;}
};

		} // table
	} // swing
} // javax

#endif // _javax_swing_table_TableStringConverter_h_