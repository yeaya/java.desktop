#ifndef _LostTextTest_h_
#define _LostTextTest_h_
//$ class LostTextTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		namespace table {
			class DefaultTableModel;
		}
	}
}

class $export LostTextTest : public ::java::lang::Object {
	$class(LostTextTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LostTextTest();
	void init$();
	static void main($StringArray* args);
	static ::javax::swing::table::DefaultTableModel* model;
};

#endif // _LostTextTest_h_