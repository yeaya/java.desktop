#ifndef _java_awt_MenuBar$1_h_
#define _java_awt_MenuBar$1_h_
//$ class java.awt.MenuBar$1
//$ extends sun.awt.AWTAccessor$MenuBarAccessor

#include <sun/awt/AWTAccessor$MenuBarAccessor.h>

namespace java {
	namespace awt {
		class Menu;
		class MenuBar;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace java {
	namespace awt {

class MenuBar$1 : public ::sun::awt::AWTAccessor$MenuBarAccessor {
	$class(MenuBar$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$MenuBarAccessor)
public:
	MenuBar$1();
	void init$();
	virtual ::java::awt::Menu* getHelpMenu(::java::awt::MenuBar* menuBar) override;
	virtual ::java::util::Vector* getMenus(::java::awt::MenuBar* menuBar) override;
};

	} // awt
} // java

#endif // _java_awt_MenuBar$1_h_