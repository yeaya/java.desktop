#ifndef _com_apple_laf_AquaComboBoxUI$1$1_h_
#define _com_apple_laf_AquaComboBoxUI$1$1_h_
//$ class com.apple.laf.AquaComboBoxUI$1$1
//$ extends com.apple.laf.AquaUtils$Selectable

#include <com/apple/laf/AquaUtils$Selectable.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaComboBoxUI$1;
			class AquaListUI;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaComboBoxUI$1$1 : public ::com::apple::laf::AquaUtils$Selectable {
	$class(AquaComboBoxUI$1$1, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$Selectable)
public:
	AquaComboBoxUI$1$1();
	void init$(::com::apple::laf::AquaComboBoxUI$1* this$1, ::com::apple::laf::AquaListUI* val$aquaListUI, Object$* val$value, int32_t val$selectedIndex);
	virtual void paintSelected(bool selected) override;
	::com::apple::laf::AquaComboBoxUI$1* this$1 = nullptr;
	int32_t val$selectedIndex = 0;
	$Object* val$value = nullptr;
	::com::apple::laf::AquaListUI* val$aquaListUI = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxUI$1$1_h_