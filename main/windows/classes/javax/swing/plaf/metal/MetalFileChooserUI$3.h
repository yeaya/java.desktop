#ifndef _javax_swing_plaf_metal_MetalFileChooserUI$3_h_
#define _javax_swing_plaf_metal_MetalFileChooserUI$3_h_
//$ class javax.swing.plaf.metal.MetalFileChooserUI$3
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
				class MetalFileChooserUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalFileChooserUI$3 : public ::javax::swing::JTextField {
	$class(MetalFileChooserUI$3, $NO_CLASS_INIT, ::javax::swing::JTextField)
public:
	MetalFileChooserUI$3();
	using ::javax::swing::JTextField::getToolTipText;
	using ::javax::swing::JTextField::contains;
	using ::javax::swing::JTextField::enable;
	using ::javax::swing::JTextField::getBounds;
	using ::javax::swing::JTextField::getSize;
	using ::javax::swing::JTextField::getLocation;
	using ::javax::swing::JTextField::firePropertyChange;
	using ::javax::swing::JTextField::add;
	using ::javax::swing::JTextField::getMousePosition;
	void init$(::javax::swing::plaf::metal::MetalFileChooserUI* this$0, int32_t columns);
	virtual ::java::awt::Dimension* getMaximumSize() override;
	using ::javax::swing::JTextField::setUI;
	using ::javax::swing::JTextField::print;
	using ::javax::swing::JTextField::requestFocus;
	using ::javax::swing::JTextField::requestFocusInWindow;
	using ::javax::swing::JTextField::repaint;
	using ::javax::swing::JTextField::remove;
	using ::javax::swing::JTextField::list;
	::javax::swing::plaf::metal::MetalFileChooserUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalFileChooserUI$3_h_