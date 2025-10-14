#ifndef _javax_swing_JMenu_h_
#define _javax_swing_JMenu_h_
//$ class javax.swing.JMenu
//$ extends javax.swing.JMenuItem

#include <java/lang/Array.h>
#include <javax/swing/JMenuItem.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("TRACE")
#undef TRACE
#pragma push_macro("VERBOSE")
#undef VERBOSE

namespace java {
	namespace awt {
		class Component;
		class ComponentOrientation;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace io {
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
		class JMenu$WinListener;
		class JPopupMenu;
		class KeyStroke;
		class MenuElement;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
			class MenuEvent;
			class MenuListener;
		}
	}
}

namespace javax {
	namespace swing {

class $export JMenu : public ::javax::swing::JMenuItem {
	$class(JMenu, 0, ::javax::swing::JMenuItem)
public:
	JMenu();
	using ::javax::swing::JMenuItem::doClick;
	using ::javax::swing::JMenuItem::contains;
	using ::javax::swing::JMenuItem::enable;
	using ::javax::swing::JMenuItem::getBounds;
	using ::javax::swing::JMenuItem::getSize;
	using ::javax::swing::JMenuItem::getLocation;
	using ::javax::swing::JMenuItem::firePropertyChange;
	using ::javax::swing::JMenuItem::getComponent;
	using ::javax::swing::JMenuItem::add;
	using ::javax::swing::JMenuItem::getMousePosition;
	void init$();
	void init$($String* s);
	void init$(::javax::swing::Action* a);
	void init$($String* s, bool b);
	virtual ::javax::swing::JMenuItem* add(::javax::swing::JMenuItem* menuItem);
	virtual ::java::awt::Component* add(::java::awt::Component* c) override;
	virtual ::java::awt::Component* add(::java::awt::Component* c, int32_t index) override;
	virtual ::javax::swing::JMenuItem* add($String* s);
	virtual ::javax::swing::JMenuItem* add(::javax::swing::Action* a);
	virtual void addMenuListener(::javax::swing::event::MenuListener* l);
	virtual void addSeparator();
	virtual void applyComponentOrientation(::java::awt::ComponentOrientation* o) override;
	$Array<::javax::swing::MenuElement>* buildMenuElementArray(::javax::swing::JMenu* leaf);
	virtual void configureAcceleratorFromAction(::javax::swing::Action* a) override;
	virtual ::java::beans::PropertyChangeListener* createActionChangeListener(::javax::swing::JMenuItem* b);
	virtual ::javax::swing::JMenuItem* createActionComponent(::javax::swing::Action* a);
	::javax::swing::event::ChangeListener* createMenuChangeListener();
	virtual ::javax::swing::JMenu$WinListener* createWinListener(::javax::swing::JPopupMenu* p);
	virtual void doClick(int32_t pressTime) override;
	void ensurePopupMenuCreated();
	virtual void fireMenuCanceled();
	virtual void fireMenuDeselected();
	virtual void fireMenuSelected();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::Component* getComponent() override;
	::java::awt::Point* getCustomMenuLocation();
	virtual int32_t getDelay();
	virtual ::javax::swing::JMenuItem* getItem(int32_t pos);
	virtual int32_t getItemCount();
	virtual ::java::awt::Component* getMenuComponent(int32_t n);
	virtual int32_t getMenuComponentCount();
	virtual $Array<::java::awt::Component>* getMenuComponents();
	virtual $Array<::javax::swing::event::MenuListener>* getMenuListeners();
	virtual ::javax::swing::JPopupMenu* getPopupMenu();
	virtual ::java::awt::Point* getPopupMenuOrigin();
	virtual $Array<::javax::swing::MenuElement>* getSubElements() override;
	virtual $String* getUIClassID() override;
	virtual void initFocusability() override;
	virtual void insert($String* s, int32_t pos);
	virtual ::javax::swing::JMenuItem* insert(::javax::swing::JMenuItem* mi, int32_t pos);
	virtual ::javax::swing::JMenuItem* insert(::javax::swing::Action* a, int32_t pos);
	virtual void insertSeparator(int32_t index);
	virtual bool isMenuComponent(::java::awt::Component* c);
	virtual bool isPopupMenuVisible();
	virtual bool isSelected() override;
	virtual bool isTearOff();
	virtual bool isTopLevelMenu();
	using ::javax::swing::JMenuItem::list;
	virtual void menuSelectionChanged(bool isIncluded) override;
	virtual $String* paramString() override;
	using ::javax::swing::JMenuItem::processKeyEvent;
	virtual void processKeyEvent(::java::awt::event::KeyEvent* evt) override;
	using ::javax::swing::JMenuItem::processMouseEvent;
	using ::javax::swing::JMenuItem::remove;
	virtual void remove(::javax::swing::JMenuItem* item);
	virtual void remove(int32_t pos) override;
	virtual void remove(::java::awt::Component* c) override;
	virtual void removeAll() override;
	virtual void removeMenuListener(::javax::swing::event::MenuListener* l);
	using ::javax::swing::JMenuItem::requestFocus;
	using ::javax::swing::JMenuItem::requestFocusInWindow;
	using ::javax::swing::JMenuItem::repaint;
	virtual void setAccelerator(::javax::swing::KeyStroke* keyStroke) override;
	virtual void setComponentOrientation(::java::awt::ComponentOrientation* o) override;
	virtual void setDelay(int32_t d);
	virtual void setMenuLocation(int32_t x, int32_t y);
	virtual void setModel(::javax::swing::ButtonModel* newModel) override;
	virtual void setPopupMenuVisible(bool b);
	virtual void setSelected(bool b) override;
	using ::javax::swing::JMenuItem::setUI;
	::java::awt::Point* translateToPopupMenu(::java::awt::Point* p);
	::java::awt::Point* translateToPopupMenu(int32_t x, int32_t y);
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	::javax::swing::JPopupMenu* popupMenu = nullptr;
	::javax::swing::event::ChangeListener* menuChangeListener = nullptr;
	::javax::swing::event::MenuEvent* menuEvent = nullptr;
	int32_t delay = 0;
	::java::awt::Point* customMenuLocation = nullptr;
	static const bool TRACE = false;
	static const bool VERBOSE = false;
	static const bool DEBUG = false;
	::javax::swing::JMenu$WinListener* popupListener = nullptr;
};

	} // swing
} // javax

#pragma pop_macro("DEBUG")
#pragma pop_macro("TRACE")
#pragma pop_macro("VERBOSE")

#endif // _javax_swing_JMenu_h_