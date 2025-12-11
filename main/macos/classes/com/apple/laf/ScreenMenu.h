#ifndef _com_apple_laf_ScreenMenu_h_
#define _com_apple_laf_ScreenMenu_h_
//$ class com.apple.laf.ScreenMenu
//$ extends java.awt.Menu
//$ implements java.awt.event.ContainerListener,java.awt.event.ComponentListener,com.apple.laf.ScreenMenuPropertyHandler

#include <com/apple/laf/ScreenMenuPropertyHandler.h>
#include <java/awt/Menu.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/ContainerListener.h>
#include <java/lang/Array.h>

namespace com {
	namespace apple {
		namespace laf {
			class ScreenMenuPropertyListener;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
			class ContainerEvent;
		}
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JMenu;
		class JMenuItem;
		class KeyStroke;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class ScreenMenu : public ::java::awt::Menu, public ::java::awt::event::ContainerListener, public ::java::awt::event::ComponentListener, public ::com::apple::laf::ScreenMenuPropertyHandler {
	$class(ScreenMenu, 0, ::java::awt::Menu, ::java::awt::event::ContainerListener, ::java::awt::event::ComponentListener, ::com::apple::laf::ScreenMenuPropertyHandler)
public:
	ScreenMenu();
	using ::java::awt::Menu::deleteShortcut;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JMenu* invoker);
	void addItem(::java::awt::Component* m);
	static int64_t addMenuListeners(::com::apple::laf::ScreenMenu* listener, int64_t nativeMenu);
	virtual void addNotify() override;
	virtual void componentAdded(::java::awt::event::ContainerEvent* e) override;
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	virtual void componentRemoved(::java::awt::event::ContainerEvent* e) override;
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	virtual void componentShown(::java::awt::event::ComponentEvent* e) override;
	static int32_t getHashCode(::java::awt::Component* m);
	void handleItemTargeted(int32_t inWhichItem, int32_t itemRectTop, int32_t itemRectLeft, int32_t itemRectBottom, int32_t itemRectRight);
	void handleMouseEvent(int32_t kind, int32_t x, int32_t y, int32_t modifiers, int64_t when);
	void invokeMenuClosing();
	void invokeOpenLater();
	static bool needsUpdate($Array<::java::awt::Component>* items, $ints* childHashArray);
	static void removeMenuListeners(int64_t modelPtr);
	virtual void removeNotify() override;
	virtual void setAccelerator(::javax::swing::KeyStroke* ks) override;
	virtual void setChildVisible(::javax::swing::JMenuItem* child, bool b) override;
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setIcon(::javax::swing::Icon* i) override;
	virtual void setIndeterminate(bool indeterminate) override;
	virtual void setLabel($String* label) override;
	virtual void setToolTipText($String* text) override;
	void setVisible(bool b);
	virtual $String* toString() override;
	void updateItems();
	int64_t fModelPtr = 0;
	::java::util::Hashtable* fItems = nullptr;
	::javax::swing::JMenu* fInvoker = nullptr;
	::java::awt::Component* fLastMouseEventTarget = nullptr;
	::java::awt::Rectangle* fLastTargetRect = nullptr;
	$volatile($Array<::java::awt::Rectangle>*) fItemBounds = nullptr;
	::com::apple::laf::ScreenMenuPropertyListener* fPropertyListener = nullptr;
	$ints* childHashArray = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_ScreenMenu_h_