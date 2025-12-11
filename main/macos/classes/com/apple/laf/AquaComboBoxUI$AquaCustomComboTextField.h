#ifndef _com_apple_laf_AquaComboBoxUI$AquaCustomComboTextField_h_
#define _com_apple_laf_AquaComboBoxUI$AquaCustomComboTextField_h_
//$ class com.apple.laf.AquaComboBoxUI$AquaCustomComboTextField
//$ extends javax.swing.JTextField

#include <javax/swing/JTextField.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaComboBoxUI;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaComboBoxUI$AquaCustomComboTextField : public ::javax::swing::JTextField {
	$class(AquaComboBoxUI$AquaCustomComboTextField, $NO_CLASS_INIT, ::javax::swing::JTextField)
public:
	AquaComboBoxUI$AquaCustomComboTextField();
	using ::javax::swing::JTextField::getToolTipText;
	using ::javax::swing::JTextField::contains;
	using ::javax::swing::JTextField::enable;
	using ::javax::swing::JTextField::getBounds;
	using ::javax::swing::JTextField::getSize;
	using ::javax::swing::JTextField::getLocation;
	using ::javax::swing::JTextField::firePropertyChange;
	using ::javax::swing::JTextField::add;
	using ::javax::swing::JTextField::getMousePosition;
	void init$(::com::apple::laf::AquaComboBoxUI* this$0);
	using ::javax::swing::JTextField::print;
	using ::javax::swing::JTextField::requestFocus;
	using ::javax::swing::JTextField::requestFocusInWindow;
	using ::javax::swing::JTextField::repaint;
	using ::javax::swing::JTextField::remove;
	using ::javax::swing::JTextField::list;
	virtual void setText($String* s) override;
	using ::javax::swing::JTextField::setUI;
	::com::apple::laf::AquaComboBoxUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxUI$AquaCustomComboTextField_h_