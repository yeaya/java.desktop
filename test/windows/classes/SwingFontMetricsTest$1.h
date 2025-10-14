#ifndef _SwingFontMetricsTest$1_h_
#define _SwingFontMetricsTest$1_h_
//$ class SwingFontMetricsTest$1
//$ extends javax.swing.JLabel

#include <javax/swing/JLabel.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class SwingFontMetricsTest$1 : public ::javax::swing::JLabel {
	$class(SwingFontMetricsTest$1, $NO_CLASS_INIT, ::javax::swing::JLabel)
public:
	SwingFontMetricsTest$1();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::firePropertyChange;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	void init$($String* arg0, ::javax::swing::JFrame* val$frame);
	using ::javax::swing::JLabel::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JLabel::setUI;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	using ::javax::swing::JLabel::repaint;
	using ::javax::swing::JLabel::remove;
	::javax::swing::JFrame* val$frame = nullptr;
};

#endif // _SwingFontMetricsTest$1_h_