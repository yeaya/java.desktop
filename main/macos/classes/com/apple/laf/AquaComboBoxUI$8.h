#ifndef _com_apple_laf_AquaComboBoxUI$8_h_
#define _com_apple_laf_AquaComboBoxUI$8_h_
//$ class com.apple.laf.AquaComboBoxUI$8
//$ extends com.apple.laf.AquaComboBoxUI$ComboBoxAction

#include <com/apple/laf/AquaComboBoxUI$ComboBoxAction.h>

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

class AquaComboBoxUI$8 : public ::com::apple::laf::AquaComboBoxUI$ComboBoxAction {
	$class(AquaComboBoxUI$8, $NO_CLASS_INIT, ::com::apple::laf::AquaComboBoxUI$ComboBoxAction)
public:
	AquaComboBoxUI$8();
	void init$(::com::apple::laf::AquaComboBoxUI* this$0);
	virtual void performComboBoxAction(::com::apple::laf::AquaComboBoxUI* ui) override;
	::com::apple::laf::AquaComboBoxUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxUI$8_h_