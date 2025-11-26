#ifndef _java_awt_Menu$AccessibleAWTMenu_h_
#define _java_awt_Menu$AccessibleAWTMenu_h_
//$ class java.awt.Menu$AccessibleAWTMenu
//$ extends java.awt.MenuItem$AccessibleAWTMenuItem

#include <java/awt/MenuItem$AccessibleAWTMenuItem.h>

namespace java {
	namespace awt {
		class Menu;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}

namespace java {
	namespace awt {

class $import Menu$AccessibleAWTMenu : public ::java::awt::MenuItem$AccessibleAWTMenuItem {
	$class(Menu$AccessibleAWTMenu, $NO_CLASS_INIT, ::java::awt::MenuItem$AccessibleAWTMenuItem)
public:
	Menu$AccessibleAWTMenu();
	void init$(::java::awt::Menu* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::java::awt::Menu* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x488E28A24DE016E6;
};

	} // awt
} // java

#endif // _java_awt_Menu$AccessibleAWTMenu_h_