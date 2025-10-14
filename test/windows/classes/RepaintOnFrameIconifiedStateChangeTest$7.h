#ifndef _RepaintOnFrameIconifiedStateChangeTest$7_h_
#define _RepaintOnFrameIconifiedStateChangeTest$7_h_
//$ class RepaintOnFrameIconifiedStateChangeTest$7
//$ extends javax.swing.JButton

#include <javax/swing/JButton.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}

class RepaintOnFrameIconifiedStateChangeTest$7 : public ::javax::swing::JButton {
	$class(RepaintOnFrameIconifiedStateChangeTest$7, $NO_CLASS_INIT, ::javax::swing::JButton)
public:
	RepaintOnFrameIconifiedStateChangeTest$7();
	using ::javax::swing::JButton::contains;
	using ::javax::swing::JButton::enable;
	using ::javax::swing::JButton::getBounds;
	using ::javax::swing::JButton::getSize;
	using ::javax::swing::JButton::getLocation;
	using ::javax::swing::JButton::firePropertyChange;
	using ::javax::swing::JButton::add;
	using ::javax::swing::JButton::getMousePosition;
	void init$($String* arg0);
	using ::javax::swing::JButton::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JButton::setUI;
	using ::javax::swing::JButton::requestFocus;
	using ::javax::swing::JButton::requestFocusInWindow;
	using ::javax::swing::JButton::repaint;
	using ::javax::swing::JButton::remove;
};

#endif // _RepaintOnFrameIconifiedStateChangeTest$7_h_