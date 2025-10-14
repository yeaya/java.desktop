#ifndef _javax_swing_JMenu$1_h_
#define _javax_swing_JMenu$1_h_
//$ class javax.swing.JMenu$1
//$ extends javax.swing.JMenuItem

#include <javax/swing/JMenuItem.h>

namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class JMenu;
	}
}

namespace javax {
	namespace swing {

class JMenu$1 : public ::javax::swing::JMenuItem {
	$class(JMenu$1, $NO_CLASS_INIT, ::javax::swing::JMenuItem)
public:
	JMenu$1();
	using ::javax::swing::JMenuItem::getComponent;
	using ::javax::swing::JMenuItem::contains;
	using ::javax::swing::JMenuItem::enable;
	using ::javax::swing::JMenuItem::getBounds;
	using ::javax::swing::JMenuItem::getSize;
	using ::javax::swing::JMenuItem::getLocation;
	using ::javax::swing::JMenuItem::firePropertyChange;
	using ::javax::swing::JMenuItem::add;
	using ::javax::swing::JMenuItem::getMousePosition;
	void init$(::javax::swing::JMenu* this$0);
	virtual ::java::beans::PropertyChangeListener* createActionPropertyChangeListener(::javax::swing::Action* a) override;
	using ::javax::swing::JMenuItem::setUI;
	using ::javax::swing::JMenuItem::processMouseEvent;
	using ::javax::swing::JMenuItem::processKeyEvent;
	using ::javax::swing::JMenuItem::requestFocus;
	using ::javax::swing::JMenuItem::requestFocusInWindow;
	using ::javax::swing::JMenuItem::repaint;
	using ::javax::swing::JMenuItem::remove;
	using ::javax::swing::JMenuItem::list;
	::javax::swing::JMenu* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JMenu$1_h_