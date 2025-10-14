#ifndef _java_awt_PopupMenu_h_
#define _java_awt_PopupMenu_h_
//$ class java.awt.PopupMenu
//$ extends java.awt.Menu

#include <java/awt/Menu.h>

namespace java {
	namespace awt {
		class Component;
		class MenuContainer;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace java {
	namespace awt {

class $import PopupMenu : public ::java::awt::Menu {
	$class(PopupMenu, 0, ::java::awt::Menu)
public:
	PopupMenu();
	using ::java::awt::Menu::deleteShortcut;
	void init$();
	void init$($String* label);
	virtual void addNotify() override;
	virtual $String* constructComponentName() override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::MenuContainer* getParent() override;
	virtual void show(::java::awt::Component* origin, int32_t x, int32_t y);
	static $String* base;
	static int32_t nameCounter;
	$volatile(bool) isTrayIconPopup = false;
	static const int64_t serialVersionUID = (int64_t)0xBFE0DAE6A5D27E84;
};

	} // awt
} // java

#endif // _java_awt_PopupMenu_h_