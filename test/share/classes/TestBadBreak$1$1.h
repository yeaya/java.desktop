#ifndef _TestBadBreak$1$1_h_
#define _TestBadBreak$1$1_h_
//$ class TestBadBreak$1$1
//$ extends javax.swing.JLabel

#include <javax/swing/JLabel.h>

class TestBadBreak$1;
namespace java {
	namespace awt {
		class Graphics;
	}
}

class TestBadBreak$1$1 : public ::javax::swing::JLabel {
	$class(TestBadBreak$1$1, $NO_CLASS_INIT, ::javax::swing::JLabel)
public:
	TestBadBreak$1$1();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::firePropertyChange;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	void init$(::TestBadBreak$1* this$0, $String* arg0);
	using ::javax::swing::JLabel::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JLabel::setUI;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	using ::javax::swing::JLabel::repaint;
	using ::javax::swing::JLabel::remove;
	::TestBadBreak$1* this$0 = nullptr;
};

#endif // _TestBadBreak$1$1_h_