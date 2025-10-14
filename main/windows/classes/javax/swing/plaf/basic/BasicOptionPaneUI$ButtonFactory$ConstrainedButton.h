#ifndef _javax_swing_plaf_basic_BasicOptionPaneUI$ButtonFactory$ConstrainedButton_h_
#define _javax_swing_plaf_basic_BasicOptionPaneUI$ButtonFactory$ConstrainedButton_h_
//$ class javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory$ConstrainedButton
//$ extends javax.swing.JButton

#include <javax/swing/JButton.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicOptionPaneUI$ButtonFactory$ConstrainedButton : public ::javax::swing::JButton {
	$class(BasicOptionPaneUI$ButtonFactory$ConstrainedButton, $NO_CLASS_INIT, ::javax::swing::JButton)
public:
	BasicOptionPaneUI$ButtonFactory$ConstrainedButton();
	using ::javax::swing::JButton::contains;
	using ::javax::swing::JButton::enable;
	using ::javax::swing::JButton::getBounds;
	using ::javax::swing::JButton::getSize;
	using ::javax::swing::JButton::getLocation;
	using ::javax::swing::JButton::firePropertyChange;
	using ::javax::swing::JButton::add;
	using ::javax::swing::JButton::getMousePosition;
	void init$($String* text, int32_t minimumWidth);
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::JButton::setUI;
	using ::javax::swing::JButton::requestFocus;
	using ::javax::swing::JButton::requestFocusInWindow;
	using ::javax::swing::JButton::repaint;
	using ::javax::swing::JButton::remove;
	using ::javax::swing::JButton::list;
	int32_t minimumWidth = 0;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicOptionPaneUI$ButtonFactory$ConstrainedButton_h_