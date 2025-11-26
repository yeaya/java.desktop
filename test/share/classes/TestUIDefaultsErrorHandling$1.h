#ifndef _TestUIDefaultsErrorHandling$1_h_
#define _TestUIDefaultsErrorHandling$1_h_
//$ class TestUIDefaultsErrorHandling$1
//$ extends javax.swing.JLabel

#include <javax/swing/JLabel.h>

class TestUIDefaultsErrorHandling$1 : public ::javax::swing::JLabel {
	$class(TestUIDefaultsErrorHandling$1, $NO_CLASS_INIT, ::javax::swing::JLabel)
public:
	TestUIDefaultsErrorHandling$1();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::firePropertyChange;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	void init$();
	virtual $String* getUIClassID() override;
	using ::javax::swing::JLabel::setUI;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	using ::javax::swing::JLabel::repaint;
	using ::javax::swing::JLabel::remove;
	using ::javax::swing::JLabel::list;
};

#endif // _TestUIDefaultsErrorHandling$1_h_