#ifndef _javax_swing_JMenuItem_h_
#define _javax_swing_JMenuItem_h_
//$ class javax.swing.JMenuItem
//$ extends javax.swing.AbstractButton
//$ implements javax.accessibility.Accessible,javax.swing.MenuElement

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/MenuElement.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("TRACE")
#undef TRACE
#pragma push_macro("VERBOSE")
#undef VERBOSE

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
			class MouseEvent;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class ButtonModel;
		class Icon;
		class KeyStroke;
		class MenuSelectionManager;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class MenuDragMouseEvent;
			class MenuDragMouseListener;
			class MenuKeyEvent;
			class MenuKeyListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class MenuItemUI;
		}
	}
}

namespace javax {
	namespace swing {

class $export JMenuItem : public ::javax::swing::AbstractButton, public ::javax::accessibility::Accessible, public ::javax::swing::MenuElement {
	$class(JMenuItem, 0, ::javax::swing::AbstractButton, ::javax::accessibility::Accessible, ::javax::swing::MenuElement)
public:
	JMenuItem();
	using ::javax::swing::AbstractButton::contains;
	using ::javax::swing::AbstractButton::enable;
	using ::javax::swing::AbstractButton::getBounds;
	using ::javax::swing::AbstractButton::getSize;
	using ::javax::swing::AbstractButton::getLocation;
	using ::javax::swing::AbstractButton::firePropertyChange;
	using ::javax::swing::AbstractButton::getComponent;
	using ::javax::swing::AbstractButton::add;
	using ::javax::swing::AbstractButton::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::javax::swing::Icon* icon);
	void init$($String* text);
	void init$(::javax::swing::Action* a);
	void init$($String* text, ::javax::swing::Icon* icon);
	void init$($String* text, int32_t mnemonic);
	virtual void actionPropertyChanged(::javax::swing::Action* action, $String* propertyName) override;
	virtual void addMenuDragMouseListener(::javax::swing::event::MenuDragMouseListener* l);
	virtual void addMenuKeyListener(::javax::swing::event::MenuKeyListener* l);
	virtual bool alwaysOnTop() override;
	virtual void configureAcceleratorFromAction(::javax::swing::Action* a);
	virtual void configurePropertiesFromAction(::javax::swing::Action* a) override;
	virtual void fireMenuDragMouseDragged(::javax::swing::event::MenuDragMouseEvent* event);
	virtual void fireMenuDragMouseEntered(::javax::swing::event::MenuDragMouseEvent* event);
	virtual void fireMenuDragMouseExited(::javax::swing::event::MenuDragMouseEvent* event);
	virtual void fireMenuDragMouseReleased(::javax::swing::event::MenuDragMouseEvent* event);
	virtual void fireMenuKeyPressed(::javax::swing::event::MenuKeyEvent* event);
	virtual void fireMenuKeyReleased(::javax::swing::event::MenuKeyEvent* event);
	virtual void fireMenuKeyTyped(::javax::swing::event::MenuKeyEvent* event);
	virtual ::javax::swing::KeyStroke* getAccelerator();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::Component* getComponent() override;
	virtual $Array<::javax::swing::event::MenuDragMouseListener>* getMenuDragMouseListeners();
	virtual $Array<::javax::swing::event::MenuKeyListener>* getMenuKeyListeners();
	virtual $Array<::javax::swing::MenuElement>* getSubElements() override;
	virtual $String* getUIClassID() override;
	virtual void init($String* text, ::javax::swing::Icon* icon) override;
	virtual void initFocusability();
	virtual bool isArmed();
	virtual void largeIconChanged(::javax::swing::Action* a) override;
	using ::javax::swing::AbstractButton::list;
	virtual void menuSelectionChanged(bool isIncluded) override;
	virtual $String* paramString() override;
	using ::javax::swing::AbstractButton::processKeyEvent;
	virtual void processKeyEvent(::java::awt::event::KeyEvent* e, $Array<::javax::swing::MenuElement>* path, ::javax::swing::MenuSelectionManager* manager) override;
	virtual void processMenuDragMouseEvent(::javax::swing::event::MenuDragMouseEvent* e);
	virtual void processMenuKeyEvent(::javax::swing::event::MenuKeyEvent* e);
	using ::javax::swing::AbstractButton::processMouseEvent;
	virtual void processMouseEvent(::java::awt::event::MouseEvent* e, $Array<::javax::swing::MenuElement>* path, ::javax::swing::MenuSelectionManager* manager) override;
	void readObject(::java::io::ObjectInputStream* s);
	using ::javax::swing::AbstractButton::remove;
	virtual void removeMenuDragMouseListener(::javax::swing::event::MenuDragMouseListener* l);
	virtual void removeMenuKeyListener(::javax::swing::event::MenuKeyListener* l);
	using ::javax::swing::AbstractButton::requestFocus;
	using ::javax::swing::AbstractButton::requestFocusInWindow;
	using ::javax::swing::AbstractButton::repaint;
	virtual void setAccelerator(::javax::swing::KeyStroke* keyStroke);
	virtual void setArmed(bool b);
	virtual void setEnabled(bool b) override;
	virtual void setIconFromAction(::javax::swing::Action* a) override;
	virtual void setModel(::javax::swing::ButtonModel* newModel) override;
	using ::javax::swing::AbstractButton::setUI;
	virtual void setUI(::javax::swing::plaf::MenuItemUI* ui);
	virtual void smallIconChanged(::javax::swing::Action* a) override;
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	static const bool TRACE = false;
	static const bool VERBOSE = false;
	static const bool DEBUG = false;
	bool isMouseDragged = false;
	::javax::swing::KeyStroke* accelerator = nullptr;
};

	} // swing
} // javax

#pragma pop_macro("DEBUG")
#pragma pop_macro("TRACE")
#pragma pop_macro("VERBOSE")

#endif // _javax_swing_JMenuItem_h_