#ifndef _java_awt_PopupMenu$AccessibleAWTPopupMenu_h_
#define _java_awt_PopupMenu$AccessibleAWTPopupMenu_h_
//$ class java.awt.PopupMenu$AccessibleAWTPopupMenu
//$ extends java.awt.Menu$AccessibleAWTMenu

#include <java/awt/Menu$AccessibleAWTMenu.h>

namespace java {
	namespace awt {
		class PopupMenu;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}

namespace java {
	namespace awt {

class $export PopupMenu$AccessibleAWTPopupMenu : public ::java::awt::Menu$AccessibleAWTMenu {
	$class(PopupMenu$AccessibleAWTPopupMenu, $NO_CLASS_INIT, ::java::awt::Menu$AccessibleAWTMenu)
public:
	PopupMenu$AccessibleAWTPopupMenu();
	void init$(::java::awt::PopupMenu* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::java::awt::PopupMenu* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xC4931EF2014135ED;
};

	} // awt
} // java

#endif // _java_awt_PopupMenu$AccessibleAWTPopupMenu_h_