#ifndef _ContextMenuScrollTest_h_
#define _ContextMenuScrollTest_h_
//$ class ContextMenuScrollTest
//$ extends javax.swing.JPopupMenu

#include <java/lang/Array.h>
#include <javax/swing/JPopupMenu.h>

namespace java {
	namespace awt {
		class Dimension;
		class Point;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JMenu;
	}
}

class $export ContextMenuScrollTest : public ::javax::swing::JPopupMenu {
	$class(ContextMenuScrollTest, 0, ::javax::swing::JPopupMenu)
public:
	ContextMenuScrollTest();
	using ::javax::swing::JPopupMenu::add;
	using ::javax::swing::JPopupMenu::getComponent;
	using ::javax::swing::JPopupMenu::contains;
	using ::javax::swing::JPopupMenu::enable;
	using ::javax::swing::JPopupMenu::getBounds;
	using ::javax::swing::JPopupMenu::getSize;
	using ::javax::swing::JPopupMenu::getLocation;
	using ::javax::swing::JPopupMenu::firePropertyChange;
	using ::javax::swing::JPopupMenu::getMousePosition;
	using ::javax::swing::JPopupMenu::list;
	void init$();
	static void createGUI();
	static void lambda$main$0();
	static void lambda$main$1();
	static void lambda$main$2();
	static void lambda$main$3();
	static void main($StringArray* args);
	using ::javax::swing::JPopupMenu::setUI;
	using ::javax::swing::JPopupMenu::remove;
	using ::javax::swing::JPopupMenu::setLocation;
	using ::javax::swing::JPopupMenu::show;
	using ::javax::swing::JPopupMenu::processMouseEvent;
	using ::javax::swing::JPopupMenu::requestFocus;
	using ::javax::swing::JPopupMenu::requestFocusInWindow;
	using ::javax::swing::JPopupMenu::repaint;
	static ::java::awt::Robot* robot;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JMenu* menu;
	static $volatile(::java::awt::Point*) p;
	static $volatile(::java::awt::Dimension*) d;
	static $volatile(bool) popupVisible;
};

#endif // _ContextMenuScrollTest_h_