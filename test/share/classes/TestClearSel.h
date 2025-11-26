#ifndef _TestClearSel_h_
#define _TestClearSel_h_
//$ class TestClearSel
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		namespace table {
			class DefaultTableModel;
		}
	}
}

class $export TestClearSel : public ::java::lang::Object {
	$class(TestClearSel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestClearSel();
	void init$();
	static void main($StringArray* args);
	static ::javax::swing::table::DefaultTableModel* model;
};

#endif // _TestClearSel_h_