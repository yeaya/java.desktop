#ifndef _bug4987336$LafRadioButton_h_
#define _bug4987336$LafRadioButton_h_
//$ class bug4987336$LafRadioButton
//$ extends javax.swing.JRadioButton

#include <javax/swing/JRadioButton.h>

class bug4987336;
namespace javax {
	namespace swing {
		class UIManager$LookAndFeelInfo;
	}
}

class bug4987336$LafRadioButton : public ::javax::swing::JRadioButton {
	$class(bug4987336$LafRadioButton, $NO_CLASS_INIT, ::javax::swing::JRadioButton)
public:
	bug4987336$LafRadioButton();
	using ::javax::swing::JRadioButton::contains;
	using ::javax::swing::JRadioButton::enable;
	using ::javax::swing::JRadioButton::getBounds;
	using ::javax::swing::JRadioButton::getSize;
	using ::javax::swing::JRadioButton::getLocation;
	using ::javax::swing::JRadioButton::firePropertyChange;
	using ::javax::swing::JRadioButton::add;
	using ::javax::swing::JRadioButton::getMousePosition;
	void init$(::bug4987336* this$0, ::javax::swing::UIManager$LookAndFeelInfo* lafInfo);
	using ::javax::swing::JRadioButton::requestFocus;
	using ::javax::swing::JRadioButton::requestFocusInWindow;
	using ::javax::swing::JRadioButton::setUI;
	using ::javax::swing::JRadioButton::repaint;
	using ::javax::swing::JRadioButton::remove;
	using ::javax::swing::JRadioButton::list;
	::bug4987336* this$0 = nullptr;
};

#endif // _bug4987336$LafRadioButton_h_