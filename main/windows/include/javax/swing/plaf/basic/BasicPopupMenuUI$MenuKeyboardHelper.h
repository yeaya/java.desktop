#ifndef _javax_swing_plaf_basic_BasicPopupMenuUI$MenuKeyboardHelper_h_
#define _javax_swing_plaf_basic_BasicPopupMenuUI$MenuKeyboardHelper_h_
//$ class javax.swing.plaf.basic.BasicPopupMenuUI$MenuKeyboardHelper
//$ extends javax.swing.event.ChangeListener
//$ implements java.awt.event.KeyListener

#include <java/awt/event/KeyListener.h>
#include <java/lang/Array.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusListener;
			class KeyEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class ActionMap;
		class InputMap;
		class JComponent;
		class JPopupMenu;
		class JRootPane;
		class MenuElement;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicPopupMenuUI$MenuKeyboardHelper : public ::javax::swing::event::ChangeListener, public ::java::awt::event::KeyListener {
	$class(BasicPopupMenuUI$MenuKeyboardHelper, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener, ::java::awt::event::KeyListener)
public:
	BasicPopupMenuUI$MenuKeyboardHelper();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addUIActionMap(::javax::swing::JComponent* c, ::javax::swing::ActionMap* map);
	virtual void addUIInputMap(::javax::swing::JComponent* c, ::javax::swing::InputMap* map);
	virtual ::javax::swing::JPopupMenu* getActivePopup($Array<::javax::swing::MenuElement>* path);
	virtual void keyPressed(::java::awt::event::KeyEvent* ev) override;
	virtual void keyReleased(::java::awt::event::KeyEvent* ev) override;
	virtual void keyTyped(::java::awt::event::KeyEvent* ev) override;
	virtual void removeItems();
	virtual void removeUIActionMap(::javax::swing::JComponent* c, ::javax::swing::ActionMap* map);
	virtual void removeUIInputMap(::javax::swing::JComponent* c, ::javax::swing::InputMap* map);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* ev) override;
	virtual $String* toString() override;
	virtual void uninstall();
	::java::awt::Component* lastFocused = nullptr;
	$Array<::javax::swing::MenuElement>* lastPathSelected = nullptr;
	::javax::swing::JPopupMenu* lastPopup = nullptr;
	::javax::swing::JRootPane* invokerRootPane = nullptr;
	::javax::swing::ActionMap* menuActionMap = nullptr;
	::javax::swing::InputMap* menuInputMap = nullptr;
	bool focusTraversalKeysEnabled = false;
	bool receivedKeyPressed = false;
	::java::awt::event::FocusListener* rootPaneFocusListener = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicPopupMenuUI$MenuKeyboardHelper_h_