#ifndef _TestTooltipBackgroundColor$1$1_h_
#define _TestTooltipBackgroundColor$1$1_h_
//$ class TestTooltipBackgroundColor$1$1
//$ extends javax.swing.JLabel

#include <javax/swing/JLabel.h>

class TestTooltipBackgroundColor$1;
namespace java {
	namespace awt {
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

class TestTooltipBackgroundColor$1$1 : public ::javax::swing::JLabel {
	$class(TestTooltipBackgroundColor$1$1, $NO_CLASS_INIT, ::javax::swing::JLabel)
public:
	TestTooltipBackgroundColor$1$1();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::firePropertyChange;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	void init$(::TestTooltipBackgroundColor$1* this$0, $String* arg0);
	virtual ::java::awt::Point* getToolTipLocation(::java::awt::event::MouseEvent* event) override;
	using ::javax::swing::JLabel::setUI;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	using ::javax::swing::JLabel::repaint;
	using ::javax::swing::JLabel::remove;
	using ::javax::swing::JLabel::list;
	::TestTooltipBackgroundColor$1* this$0 = nullptr;
};

#endif // _TestTooltipBackgroundColor$1$1_h_