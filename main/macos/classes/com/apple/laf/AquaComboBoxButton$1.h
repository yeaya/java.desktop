#ifndef _com_apple_laf_AquaComboBoxButton$1_h_
#define _com_apple_laf_AquaComboBoxButton$1_h_
//$ class com.apple.laf.AquaComboBoxButton$1
//$ extends javax.swing.DefaultButtonModel

#include <javax/swing/DefaultButtonModel.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaComboBoxButton;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaComboBoxButton$1 : public ::javax::swing::DefaultButtonModel {
	$class(AquaComboBoxButton$1, $NO_CLASS_INIT, ::javax::swing::DefaultButtonModel)
public:
	AquaComboBoxButton$1();
	void init$(::com::apple::laf::AquaComboBoxButton* this$0);
	virtual void setArmed(bool armed) override;
	::com::apple::laf::AquaComboBoxButton* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxButton$1_h_