#ifndef _javax_swing_plaf_metal_MetalComboBoxEditor$1_h_
#define _javax_swing_plaf_metal_MetalComboBoxEditor$1_h_
//$ class javax.swing.plaf.metal.MetalComboBoxEditor$1
//$ extends javax.swing.JTextField

#include <javax/swing/JTextField.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalComboBoxEditor;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalComboBoxEditor$1 : public ::javax::swing::JTextField {
	$class(MetalComboBoxEditor$1, $NO_CLASS_INIT, ::javax::swing::JTextField)
public:
	MetalComboBoxEditor$1();
	using ::javax::swing::JTextField::getToolTipText;
	using ::javax::swing::JTextField::contains;
	using ::javax::swing::JTextField::enable;
	using ::javax::swing::JTextField::getBounds;
	using ::javax::swing::JTextField::getSize;
	using ::javax::swing::JTextField::getLocation;
	using ::javax::swing::JTextField::firePropertyChange;
	using ::javax::swing::JTextField::add;
	using ::javax::swing::JTextField::getMousePosition;
	void init$(::javax::swing::plaf::metal::MetalComboBoxEditor* this$0, $String* text, int32_t columns);
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::JTextField::print;
	using ::javax::swing::JTextField::requestFocus;
	using ::javax::swing::JTextField::requestFocusInWindow;
	using ::javax::swing::JTextField::repaint;
	using ::javax::swing::JTextField::remove;
	using ::javax::swing::JTextField::list;
	virtual void setText($String* s) override;
	using ::javax::swing::JTextField::setUI;
	::javax::swing::plaf::metal::MetalComboBoxEditor* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalComboBoxEditor$1_h_