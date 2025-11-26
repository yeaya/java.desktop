#ifndef _javax_swing_plaf_metal_MetalComboBoxButton$1_h_
#define _javax_swing_plaf_metal_MetalComboBoxButton$1_h_
//$ class javax.swing.plaf.metal.MetalComboBoxButton$1
//$ extends javax.swing.DefaultButtonModel

#include <javax/swing/DefaultButtonModel.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalComboBoxButton;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalComboBoxButton$1 : public ::javax::swing::DefaultButtonModel {
	$class(MetalComboBoxButton$1, $NO_CLASS_INIT, ::javax::swing::DefaultButtonModel)
public:
	MetalComboBoxButton$1();
	void init$(::javax::swing::plaf::metal::MetalComboBoxButton* this$0);
	virtual void setArmed(bool armed) override;
	::javax::swing::plaf::metal::MetalComboBoxButton* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalComboBoxButton$1_h_