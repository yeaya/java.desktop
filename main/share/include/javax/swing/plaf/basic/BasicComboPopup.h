#ifndef _javax_swing_plaf_basic_BasicComboPopup_h_
#define _javax_swing_plaf_basic_BasicComboPopup_h_
//$ class javax.swing.plaf.basic.BasicComboPopup
//$ extends javax.swing.JPopupMenu
//$ implements javax.swing.plaf.basic.ComboPopup

#include <javax/swing/JPopupMenu.h>
#include <javax/swing/plaf/basic/ComboPopup.h>

#pragma push_macro("LIST_BORDER")
#undef LIST_BORDER
#pragma push_macro("SCROLL_DOWN")
#undef SCROLL_DOWN
#pragma push_macro("SCROLL_UP")
#undef SCROLL_UP

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ItemListener;
			class KeyListener;
			class MouseEvent;
			class MouseListener;
			class MouseMotionListener;
			class MouseWheelListener;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class ComboBoxModel;
		class JComboBox;
		class JList;
		class JScrollPane;
		class ListModel;
		class Timer;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListDataListener;
			class ListSelectionListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicComboPopup$Handler;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicComboPopup : public ::javax::swing::JPopupMenu, public ::javax::swing::plaf::basic::ComboPopup {
	$class(BasicComboPopup, 0, ::javax::swing::JPopupMenu, ::javax::swing::plaf::basic::ComboPopup)
public:
	BasicComboPopup();
	using ::javax::swing::JPopupMenu::add;
	using ::javax::swing::JPopupMenu::getComponent;
	using ::javax::swing::JPopupMenu::contains;
	using ::javax::swing::JPopupMenu::getPopupLocation;
	using ::javax::swing::JPopupMenu::enable;
	using ::javax::swing::JPopupMenu::getBounds;
	using ::javax::swing::JPopupMenu::getSize;
	using ::javax::swing::JPopupMenu::getLocation;
	using ::javax::swing::JPopupMenu::firePropertyChange;
	using ::javax::swing::JPopupMenu::getMousePosition;
	using ::javax::swing::JPopupMenu::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual bool isVisible() override;
	void init$(::javax::swing::JComboBox* combo);
	virtual void autoScrollDown();
	virtual void autoScrollUp();
	virtual ::java::awt::Rectangle* computePopupBounds(int32_t px, int32_t py, int32_t pw, int32_t ph);
	virtual void configureList();
	virtual void configurePopup();
	virtual void configureScroller();
	virtual ::java::awt::event::MouseEvent* convertMouseEvent(::java::awt::event::MouseEvent* e);
	virtual ::java::awt::event::ItemListener* createItemListener();
	virtual ::java::awt::event::KeyListener* createKeyListener();
	virtual ::javax::swing::JList* createList();
	virtual ::javax::swing::event::ListDataListener* createListDataListener();
	virtual ::java::awt::event::MouseListener* createListMouseListener();
	virtual ::java::awt::event::MouseMotionListener* createListMouseMotionListener();
	virtual ::javax::swing::event::ListSelectionListener* createListSelectionListener();
	virtual ::java::awt::event::MouseListener* createMouseListener();
	virtual ::java::awt::event::MouseMotionListener* createMouseMotionListener();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener();
	virtual ::javax::swing::JScrollPane* createScroller();
	virtual void delegateFocus(::java::awt::event::MouseEvent* e);
	virtual void firePopupMenuCanceled() override;
	virtual void firePopupMenuWillBecomeInvisible() override;
	virtual void firePopupMenuWillBecomeVisible() override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	::javax::swing::plaf::basic::BasicComboPopup$Handler* getHandler();
	virtual ::java::awt::event::KeyListener* getKeyListener() override;
	virtual ::javax::swing::JList* getList() override;
	virtual ::java::awt::event::MouseListener* getMouseListener() override;
	virtual ::java::awt::event::MouseMotionListener* getMouseMotionListener() override;
	virtual int32_t getPopupHeightForRowCount(int32_t maxRowCount);
	::java::awt::Point* getPopupLocation();
	virtual void hide() override;
	virtual void installComboBoxListeners();
	virtual void installComboBoxModelListeners(::javax::swing::ComboBoxModel* model);
	virtual void installKeyboardActions();
	virtual void installListListeners();
	void installScrollerListeners();
	virtual bool isFocusTraversable() override;
	using ::javax::swing::JPopupMenu::remove;
	using ::javax::swing::JPopupMenu::processMouseEvent;
	using ::javax::swing::JPopupMenu::requestFocus;
	using ::javax::swing::JPopupMenu::requestFocusInWindow;
	using ::javax::swing::JPopupMenu::repaint;
	void setListSelection(int32_t selectedIndex);
	using ::javax::swing::JPopupMenu::setUI;
	using ::javax::swing::JPopupMenu::setLocation;
	using ::javax::swing::JPopupMenu::show;
	virtual void show() override;
	virtual void startAutoScrolling(int32_t direction);
	virtual void stopAutoScrolling();
	virtual $String* toString() override;
	virtual void togglePopup();
	virtual void uninstallComboBoxModelListeners(::javax::swing::ComboBoxModel* model);
	virtual void uninstallKeyboardActions();
	virtual void uninstallListListeners();
	void uninstallScrollerListeners();
	virtual void uninstallingUI() override;
	virtual void updateListBoxSelectionForEvent(::java::awt::event::MouseEvent* anEvent, bool shouldScroll);
	static ::javax::swing::ListModel* EmptyListModel;
	static ::javax::swing::border::Border* LIST_BORDER;
	::javax::swing::JComboBox* comboBox = nullptr;
	::javax::swing::JList* list$ = nullptr;
	::javax::swing::JScrollPane* scroller = nullptr;
	bool valueIsAdjusting = false;
	::javax::swing::plaf::basic::BasicComboPopup$Handler* handler = nullptr;
	::java::awt::event::MouseMotionListener* mouseMotionListener = nullptr;
	::java::awt::event::MouseListener* mouseListener = nullptr;
	::java::awt::event::KeyListener* keyListener = nullptr;
	::javax::swing::event::ListSelectionListener* listSelectionListener = nullptr;
	::java::awt::event::MouseListener* listMouseListener = nullptr;
	::java::awt::event::MouseMotionListener* listMouseMotionListener = nullptr;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
	::javax::swing::event::ListDataListener* listDataListener = nullptr;
	::java::awt::event::ItemListener* itemListener = nullptr;
	::java::awt::event::MouseWheelListener* scrollerMouseWheelListener = nullptr;
	::javax::swing::Timer* autoscrollTimer = nullptr;
	bool hasEntered = false;
	bool isAutoScrolling = false;
	int32_t scrollDirection = 0;
	static const int32_t SCROLL_UP = 0;
	static const int32_t SCROLL_DOWN = 1;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("LIST_BORDER")
#pragma pop_macro("SCROLL_DOWN")
#pragma pop_macro("SCROLL_UP")

#endif // _javax_swing_plaf_basic_BasicComboPopup_h_