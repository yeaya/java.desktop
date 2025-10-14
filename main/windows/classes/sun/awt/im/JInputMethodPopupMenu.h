#ifndef _sun_awt_im_JInputMethodPopupMenu_h_
#define _sun_awt_im_JInputMethodPopupMenu_h_
//$ class sun.awt.im.JInputMethodPopupMenu
//$ extends sun.awt.im.InputMethodPopupMenu

#include <sun/awt/im/InputMethodPopupMenu.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JPopupMenu;
	}
}

namespace sun {
	namespace awt {
		namespace im {

class JInputMethodPopupMenu : public ::sun::awt::im::InputMethodPopupMenu {
	$class(JInputMethodPopupMenu, 0, ::sun::awt::im::InputMethodPopupMenu)
public:
	JInputMethodPopupMenu();
	void init$($String* title);
	virtual void add(Object$* menuItem) override;
	virtual void addMenuItem($String* label, $String* command, $String* currentSelection) override;
	virtual void addMenuItem(Object$* targetMenu, $String* label, $String* command, $String* currentSelection) override;
	virtual void addSeparator() override;
	virtual void addToComponent(::java::awt::Component* c) override;
	virtual $Object* createSubmenu($String* label) override;
	virtual void removeAll() override;
	virtual void show(::java::awt::Component* c, int32_t x, int32_t y) override;
	static ::javax::swing::JPopupMenu* delegate;
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_JInputMethodPopupMenu_h_