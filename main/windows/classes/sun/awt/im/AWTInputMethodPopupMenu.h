#ifndef _sun_awt_im_AWTInputMethodPopupMenu_h_
#define _sun_awt_im_AWTInputMethodPopupMenu_h_
//$ class sun.awt.im.AWTInputMethodPopupMenu
//$ extends sun.awt.im.InputMethodPopupMenu

#include <sun/awt/im/InputMethodPopupMenu.h>

namespace java {
	namespace awt {
		class Component;
		class PopupMenu;
	}
}

namespace sun {
	namespace awt {
		namespace im {

class AWTInputMethodPopupMenu : public ::sun::awt::im::InputMethodPopupMenu {
	$class(AWTInputMethodPopupMenu, 0, ::sun::awt::im::InputMethodPopupMenu)
public:
	AWTInputMethodPopupMenu();
	void init$($String* title);
	virtual void add(Object$* menuItem) override;
	virtual void addMenuItem($String* label, $String* command, $String* currentSelection) override;
	virtual void addMenuItem(Object$* targetMenu, $String* label, $String* command, $String* currentSelection) override;
	virtual void addSeparator() override;
	virtual void addToComponent(::java::awt::Component* c) override;
	virtual $Object* createSubmenu($String* label) override;
	virtual void removeAll() override;
	virtual void show(::java::awt::Component* c, int32_t x, int32_t y) override;
	static ::java::awt::PopupMenu* delegate;
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_AWTInputMethodPopupMenu_h_