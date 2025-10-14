#ifndef _SetInvokerJPopupMenuTest$MyButton_h_
#define _SetInvokerJPopupMenuTest$MyButton_h_
//$ class SetInvokerJPopupMenuTest$MyButton
//$ extends javax.swing.JButton

#include <javax/swing/JButton.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

class SetInvokerJPopupMenuTest$MyButton : public ::javax::swing::JButton {
	$class(SetInvokerJPopupMenuTest$MyButton, $NO_CLASS_INIT, ::javax::swing::JButton)
public:
	SetInvokerJPopupMenuTest$MyButton();
	using ::javax::swing::JButton::contains;
	using ::javax::swing::JButton::enable;
	using ::javax::swing::JButton::getBounds;
	using ::javax::swing::JButton::getSize;
	using ::javax::swing::JButton::getLocation;
	using ::javax::swing::JButton::firePropertyChange;
	using ::javax::swing::JButton::add;
	using ::javax::swing::JButton::getMousePosition;
	void init$($String* string);
	using ::javax::swing::JButton::list;
	virtual void processMouseEvent(::java::awt::event::MouseEvent* e) override;
	using ::javax::swing::JButton::setUI;
	using ::javax::swing::JButton::requestFocus;
	using ::javax::swing::JButton::requestFocusInWindow;
	using ::javax::swing::JButton::repaint;
	using ::javax::swing::JButton::remove;
};

#endif // _SetInvokerJPopupMenuTest$MyButton_h_