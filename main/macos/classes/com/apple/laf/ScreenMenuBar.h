#ifndef _com_apple_laf_ScreenMenuBar_h_
#define _com_apple_laf_ScreenMenuBar_h_
//$ class com.apple.laf.ScreenMenuBar
//$ extends java.awt.MenuBar
//$ implements java.awt.event.ContainerListener,com.apple.laf.ScreenMenuPropertyHandler,java.awt.event.ComponentListener

#include <com/apple/laf/ScreenMenuPropertyHandler.h>
#include <java/awt/MenuBar.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/ContainerListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class ScreenMenu;
			class ScreenMenuPropertyListener;
		}
	}
}
namespace java {
	namespace awt {
		class Menu;
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
		class JMenuBar;
		class JMenuItem;
		class KeyStroke;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class ScreenMenuBar : public ::java::awt::MenuBar, public ::java::awt::event::ContainerListener, public ::com::apple::laf::ScreenMenuPropertyHandler, public ::java::awt::event::ComponentListener {
	$class(ScreenMenuBar, 0, ::java::awt::MenuBar, ::java::awt::event::ContainerListener, ::com::apple::laf::ScreenMenuPropertyHandler, ::java::awt::event::ComponentListener)
public:
	ScreenMenuBar();
	using ::java::awt::MenuBar::add;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JMenuBar* swingBar);
	virtual ::java::awt::Menu* add(::java::awt::Menu* m, int32_t index);
	virtual void addNotify() override;
	virtual ::com::apple::laf::ScreenMenu* addSubmenu(::javax::swing::JMenu* m);
	virtual void componentAdded(::java::awt::event::ContainerEvent* e) override;
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	virtual void componentRemoved(::java::awt::event::ContainerEvent* e) override;
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	virtual void componentShown(::java::awt::event::ComponentEvent* e) override;
	virtual void removeAll();
	virtual void removeNotify() override;
	void removeSubmenu(::javax::swing::JMenu* menu);
	virtual void setAccelerator(::javax::swing::KeyStroke* ks) override;
	virtual void setChildVisible(::javax::swing::JMenuItem* child, bool b) override;
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setIcon(::javax::swing::Icon* i) override;
	virtual void setIndeterminate(bool indeterminate) override;
	virtual void setLabel($String* s) override;
	virtual void setToolTipText($String* tooltip) override;
	virtual $String* toString() override;
	static bool sJMenuBarHasHelpMenus;
	::javax::swing::JMenuBar* fSwingBar = nullptr;
	::java::util::Hashtable* fSubmenus = nullptr;
	::com::apple::laf::ScreenMenuPropertyListener* fPropertyListener = nullptr;
	::com::apple::laf::ScreenMenuPropertyListener* fAccessibleListener = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_ScreenMenuBar_h_