#ifndef _javax_swing_plaf_basic_BasicComboBoxEditor$BorderlessTextField_h_
#define _javax_swing_plaf_basic_BasicComboBoxEditor$BorderlessTextField_h_
//$ class javax.swing.plaf.basic.BasicComboBoxEditor$BorderlessTextField
//$ extends javax.swing.JTextField

#include <javax/swing/JTextField.h>

namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicComboBoxEditor$BorderlessTextField : public ::javax::swing::JTextField {
	$class(BasicComboBoxEditor$BorderlessTextField, $NO_CLASS_INIT, ::javax::swing::JTextField)
public:
	BasicComboBoxEditor$BorderlessTextField();
	using ::javax::swing::JTextField::getToolTipText;
	using ::javax::swing::JTextField::contains;
	using ::javax::swing::JTextField::enable;
	using ::javax::swing::JTextField::getBounds;
	using ::javax::swing::JTextField::getSize;
	using ::javax::swing::JTextField::getLocation;
	using ::javax::swing::JTextField::firePropertyChange;
	using ::javax::swing::JTextField::add;
	using ::javax::swing::JTextField::getMousePosition;
	void init$($String* value, int32_t n);
	using ::javax::swing::JTextField::print;
	using ::javax::swing::JTextField::requestFocus;
	using ::javax::swing::JTextField::requestFocusInWindow;
	using ::javax::swing::JTextField::repaint;
	using ::javax::swing::JTextField::remove;
	using ::javax::swing::JTextField::list;
	virtual void setBorder(::javax::swing::border::Border* b) override;
	virtual void setText($String* s) override;
	using ::javax::swing::JTextField::setUI;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboBoxEditor$BorderlessTextField_h_