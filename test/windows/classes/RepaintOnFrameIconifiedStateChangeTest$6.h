#ifndef _RepaintOnFrameIconifiedStateChangeTest$6_h_
#define _RepaintOnFrameIconifiedStateChangeTest$6_h_
//$ class RepaintOnFrameIconifiedStateChangeTest$6
//$ extends javax.swing.JLabel

#include <javax/swing/JLabel.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}

class RepaintOnFrameIconifiedStateChangeTest$6 : public ::javax::swing::JLabel {
	$class(RepaintOnFrameIconifiedStateChangeTest$6, $NO_CLASS_INIT, ::javax::swing::JLabel)
public:
	RepaintOnFrameIconifiedStateChangeTest$6();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::firePropertyChange;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	void init$($String* arg0);
	using ::javax::swing::JLabel::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JLabel::setUI;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	using ::javax::swing::JLabel::repaint;
	using ::javax::swing::JLabel::remove;
};

#endif // _RepaintOnFrameIconifiedStateChangeTest$6_h_