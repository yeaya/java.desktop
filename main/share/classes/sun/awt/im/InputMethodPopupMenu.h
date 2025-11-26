#ifndef _sun_awt_im_InputMethodPopupMenu_h_
#define _sun_awt_im_InputMethodPopupMenu_h_
//$ class sun.awt.im.InputMethodPopupMenu
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace sun {
	namespace awt {
		namespace im {
			class InputMethodLocator;
		}
	}
}

namespace sun {
	namespace awt {
		namespace im {

class InputMethodPopupMenu : public ::java::awt::event::ActionListener {
	$class(InputMethodPopupMenu, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	InputMethodPopupMenu();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
	virtual void add(Object$* menuItem) {}
	virtual void addMenuItem($String* label, $String* command, $String* currentSelection) {}
	virtual void addMenuItem(Object$* targetMenu, $String* label, $String* command, $String* currentSelection) {}
	virtual void addOneInputMethodToMenu(::sun::awt::im::InputMethodLocator* locator, $String* currentSelection);
	virtual void addSeparator() {}
	virtual void addToComponent(::java::awt::Component* c) {}
	virtual $Object* createSubmenu($String* label) {return nullptr;}
	static ::sun::awt::im::InputMethodPopupMenu* getInstance(::java::awt::Component* client, $String* title);
	virtual $String* getLocaleName(::java::util::Locale* locale);
	static bool isSelected($String* command, $String* currentSelection);
	virtual void removeAll() {}
	virtual void show(::java::awt::Component* c, int32_t x, int32_t y) {}
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_InputMethodPopupMenu_h_