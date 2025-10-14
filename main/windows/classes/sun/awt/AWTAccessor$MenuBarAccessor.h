#ifndef _sun_awt_AWTAccessor$MenuBarAccessor_h_
#define _sun_awt_AWTAccessor$MenuBarAccessor_h_
//$ interface sun.awt.AWTAccessor$MenuBarAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace sun {
	namespace awt {

class $export AWTAccessor$MenuBarAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$MenuBarAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Menu* getHelpMenu(::java::awt::MenuBar* menuBar) {return nullptr;}
	virtual ::java::util::Vector* getMenus(::java::awt::MenuBar* menuBar) {return nullptr;}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$MenuBarAccessor_h_