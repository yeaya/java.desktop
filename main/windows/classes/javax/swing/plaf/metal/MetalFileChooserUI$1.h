#ifndef _javax_swing_plaf_metal_MetalFileChooserUI$1_h_
#define _javax_swing_plaf_metal_MetalFileChooserUI$1_h_
//$ class javax.swing.plaf.metal.MetalFileChooserUI$1
//$ extends javax.swing.JComboBox

#include <javax/swing/JComboBox.h>

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

class MetalFileChooserUI$1 : public ::javax::swing::JComboBox {
	$class(MetalFileChooserUI$1, $NO_CLASS_INIT, ::javax::swing::JComboBox)
public:
	MetalFileChooserUI$1();
	using ::javax::swing::JComboBox::contains;
	using ::javax::swing::JComboBox::enable;
	using ::javax::swing::JComboBox::getBounds;
	using ::javax::swing::JComboBox::getSize;
	using ::javax::swing::JComboBox::getLocation;
	using ::javax::swing::JComboBox::firePropertyChange;
	using ::javax::swing::JComboBox::add;
	using ::javax::swing::JComboBox::getMousePosition;
	void init$(::javax::swing::plaf::metal::MetalFileChooserUI* this$0);
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::JComboBox::setUI;
	using ::javax::swing::JComboBox::requestFocus;
	using ::javax::swing::JComboBox::requestFocusInWindow;
	using ::javax::swing::JComboBox::repaint;
	using ::javax::swing::JComboBox::remove;
	using ::javax::swing::JComboBox::list;
	::javax::swing::plaf::metal::MetalFileChooserUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalFileChooserUI$1_h_