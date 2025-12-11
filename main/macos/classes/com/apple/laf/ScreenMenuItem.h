#ifndef _com_apple_laf_ScreenMenuItem_h_
#define _com_apple_laf_ScreenMenuItem_h_
//$ class com.apple.laf.ScreenMenuItem
//$ extends java.awt.MenuItem
//$ implements java.awt.event.ActionListener,java.awt.event.ComponentListener,com.apple.laf.ScreenMenuPropertyHandler

#include <com/apple/laf/ScreenMenuPropertyHandler.h>
#include <java/awt/MenuItem.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ComponentListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class ScreenMenuPropertyListener;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ComponentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JMenuItem;
		class KeyStroke;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class ScreenMenuItem : public ::java::awt::MenuItem, public ::java::awt::event::ActionListener, public ::java::awt::event::ComponentListener, public ::com::apple::laf::ScreenMenuPropertyHandler {
	$class(ScreenMenuItem, $NO_CLASS_INIT, ::java::awt::MenuItem, ::java::awt::event::ActionListener, ::java::awt::event::ComponentListener, ::com::apple::laf::ScreenMenuPropertyHandler)
public:
	ScreenMenuItem();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JMenuItem* mi);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void addNotify() override;
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	virtual void componentShown(::java::awt::event::ComponentEvent* e) override;
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
	static void syncLabelAndKS(::java::awt::MenuItem* menuItem, $String* label, ::javax::swing::KeyStroke* ks);
	virtual $String* toString() override;
	::com::apple::laf::ScreenMenuPropertyListener* fListener = nullptr;
	::javax::swing::JMenuItem* fMenuItem = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_ScreenMenuItem_h_