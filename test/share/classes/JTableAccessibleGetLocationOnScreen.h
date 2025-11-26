#ifndef _JTableAccessibleGetLocationOnScreen_h_
#define _JTableAccessibleGetLocationOnScreen_h_
//$ class JTableAccessibleGetLocationOnScreen
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JTable;
	}
}

class $export JTableAccessibleGetLocationOnScreen : public ::java::lang::Object {
	$class(JTableAccessibleGetLocationOnScreen, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JTableAccessibleGetLocationOnScreen();
	void init$();
	static void assertGetLocation();
	static void constructInEDT();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTable* table;
};

#endif // _JTableAccessibleGetLocationOnScreen_h_