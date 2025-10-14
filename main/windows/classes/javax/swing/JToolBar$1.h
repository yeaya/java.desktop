#ifndef _javax_swing_JToolBar$1_h_
#define _javax_swing_JToolBar$1_h_
//$ class javax.swing.JToolBar$1
//$ extends javax.swing.JButton

#include <javax/swing/JButton.h>

namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class JToolBar;
	}
}

namespace javax {
	namespace swing {

class JToolBar$1 : public ::javax::swing::JButton {
	$class(JToolBar$1, $NO_CLASS_INIT, ::javax::swing::JButton)
public:
	JToolBar$1();
	using ::javax::swing::JButton::contains;
	using ::javax::swing::JButton::enable;
	using ::javax::swing::JButton::getBounds;
	using ::javax::swing::JButton::getSize;
	using ::javax::swing::JButton::getLocation;
	using ::javax::swing::JButton::firePropertyChange;
	using ::javax::swing::JButton::add;
	using ::javax::swing::JButton::getMousePosition;
	void init$(::javax::swing::JToolBar* this$0);
	virtual ::java::beans::PropertyChangeListener* createActionPropertyChangeListener(::javax::swing::Action* a) override;
	using ::javax::swing::JButton::setUI;
	using ::javax::swing::JButton::requestFocus;
	using ::javax::swing::JButton::requestFocusInWindow;
	using ::javax::swing::JButton::repaint;
	using ::javax::swing::JButton::remove;
	using ::javax::swing::JButton::list;
	::javax::swing::JToolBar* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JToolBar$1_h_