#ifndef _com_apple_laf_ScreenMenuItemCheckbox_h_
#define _com_apple_laf_ScreenMenuItemCheckbox_h_
//$ class com.apple.laf.ScreenMenuItemCheckbox
//$ extends java.awt.CheckboxMenuItem
//$ implements java.awt.event.ActionListener,java.awt.event.ComponentListener,com.apple.laf.ScreenMenuPropertyHandler,java.awt.event.ItemListener

#include <com/apple/laf/ScreenMenuPropertyHandler.h>
#include <java/awt/CheckboxMenuItem.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/ItemListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class ScreenMenuPropertyListener;
		}
	}
}
namespace java {
	namespace awt {
		class MenuContainer;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ComponentEvent;
			class ItemEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JCheckBoxMenuItem;
		class JMenuItem;
		class JRadioButtonMenuItem;
		class KeyStroke;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class ScreenMenuItemCheckbox : public ::java::awt::CheckboxMenuItem, public ::java::awt::event::ActionListener, public ::java::awt::event::ComponentListener, public ::com::apple::laf::ScreenMenuPropertyHandler, public ::java::awt::event::ItemListener {
	$class(ScreenMenuItemCheckbox, $NO_CLASS_INIT, ::java::awt::CheckboxMenuItem, ::java::awt::event::ActionListener, ::java::awt::event::ComponentListener, ::com::apple::laf::ScreenMenuPropertyHandler, ::java::awt::event::ItemListener)
public:
	ScreenMenuItemCheckbox();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JCheckBoxMenuItem* mi);
	void init$(::javax::swing::JRadioButtonMenuItem* mi);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void addNotify() override;
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	virtual void componentShown(::java::awt::event::ComponentEvent* e) override;
	void forceSetState(bool b);
	void init(::javax::swing::JMenuItem* mi);
	virtual void itemStateChanged(::java::awt::event::ItemEvent* e) override;
	virtual void removeNotify() override;
	virtual void setAccelerator(::javax::swing::KeyStroke* ks) override;
	virtual void setChildVisible(::javax::swing::JMenuItem* child, bool b) override;
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setIcon(::javax::swing::Icon* i) override;
	virtual void setIndeterminate(bool indeterminate) override;
	virtual void setLabel($String* label) override;
	virtual void setState(bool b) override;
	virtual void setToolTipText($String* text) override;
	void setVisible(bool b);
	virtual $String* toString() override;
	::javax::swing::JMenuItem* fMenuItem = nullptr;
	::java::awt::MenuContainer* fParent = nullptr;
	::com::apple::laf::ScreenMenuPropertyListener* fPropertyListener = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_ScreenMenuItemCheckbox_h_