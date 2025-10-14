#ifndef _javax_swing_plaf_basic_BasicInternalFrameTitlePane$NoFocusButton_h_
#define _javax_swing_plaf_basic_BasicInternalFrameTitlePane$NoFocusButton_h_
//$ class javax.swing.plaf.basic.BasicInternalFrameTitlePane$NoFocusButton
//$ extends javax.swing.JButton

#include <javax/swing/JButton.h>

namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicInternalFrameTitlePane;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicInternalFrameTitlePane$NoFocusButton : public ::javax::swing::JButton {
	$class(BasicInternalFrameTitlePane$NoFocusButton, $NO_CLASS_INIT, ::javax::swing::JButton)
public:
	BasicInternalFrameTitlePane$NoFocusButton();
	using ::javax::swing::JButton::contains;
	using ::javax::swing::JButton::enable;
	using ::javax::swing::JButton::getBounds;
	using ::javax::swing::JButton::getSize;
	using ::javax::swing::JButton::getLocation;
	using ::javax::swing::JButton::firePropertyChange;
	using ::javax::swing::JButton::add;
	using ::javax::swing::JButton::getMousePosition;
	void init$(::javax::swing::plaf::basic::BasicInternalFrameTitlePane* this$0, $String* uiKey, $String* opacityKey);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual bool isFocusTraversable() override;
	using ::javax::swing::JButton::requestFocus;
	using ::javax::swing::JButton::repaint;
	using ::javax::swing::JButton::remove;
	using ::javax::swing::JButton::list;
	virtual void requestFocus() override;
	using ::javax::swing::JButton::setUI;
	using ::javax::swing::JButton::requestFocusInWindow;
	::javax::swing::plaf::basic::BasicInternalFrameTitlePane* this$0 = nullptr;
	$String* uiKey = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicInternalFrameTitlePane$NoFocusButton_h_