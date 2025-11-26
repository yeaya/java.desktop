#ifndef _JMenuItemsTest_h_
#define _JMenuItemsTest_h_
//$ class JMenuItemsTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JMenu;
		class JMenuItem;
	}
}

class $export JMenuItemsTest : public ::java::lang::Object {
	$class(JMenuItemsTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JMenuItemsTest();
	void init$();
	void createUI();
	void dispose();
	static void lambda$main$0();
	static void main($StringArray* args);
	void testDisabledStateOfJMenu();
	void testDisabledStateOfJMenuItem();
	static ::javax::swing::JFrame* mainFrame;
	static ::javax::swing::JMenu* disabledMenu;
	static ::javax::swing::JMenuItem* disabledMenuItem;
};

#endif // _JMenuItemsTest_h_