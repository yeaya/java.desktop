#ifndef _SetInvokerJPopupMenuTest$MyPopupMenu_h_
#define _SetInvokerJPopupMenuTest$MyPopupMenu_h_
//$ class SetInvokerJPopupMenuTest$MyPopupMenu
//$ extends javax.swing.JPopupMenu

#include <javax/swing/JPopupMenu.h>

class SetInvokerJPopupMenuTest$MyPopupMenu : public ::javax::swing::JPopupMenu {
	$class(SetInvokerJPopupMenuTest$MyPopupMenu, $NO_CLASS_INIT, ::javax::swing::JPopupMenu)
public:
	SetInvokerJPopupMenuTest$MyPopupMenu();
	using ::javax::swing::JPopupMenu::add;
	using ::javax::swing::JPopupMenu::getComponent;
	using ::javax::swing::JPopupMenu::contains;
	using ::javax::swing::JPopupMenu::enable;
	using ::javax::swing::JPopupMenu::getBounds;
	using ::javax::swing::JPopupMenu::getSize;
	using ::javax::swing::JPopupMenu::getLocation;
	using ::javax::swing::JPopupMenu::firePropertyChange;
	using ::javax::swing::JPopupMenu::getMousePosition;
	void init$();
	using ::javax::swing::JPopupMenu::setUI;
	using ::javax::swing::JPopupMenu::remove;
	using ::javax::swing::JPopupMenu::setLocation;
	using ::javax::swing::JPopupMenu::processMouseEvent;
	using ::javax::swing::JPopupMenu::requestFocus;
	using ::javax::swing::JPopupMenu::requestFocusInWindow;
	using ::javax::swing::JPopupMenu::repaint;
	using ::javax::swing::JPopupMenu::list;
	virtual void setVisible(bool state) override;
	using ::javax::swing::JPopupMenu::show;
};

#endif // _SetInvokerJPopupMenuTest$MyPopupMenu_h_