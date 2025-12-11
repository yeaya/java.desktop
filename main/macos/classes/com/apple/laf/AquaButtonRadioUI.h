#ifndef _com_apple_laf_AquaButtonRadioUI_h_
#define _com_apple_laf_AquaButtonRadioUI_h_
//$ class com.apple.laf.AquaButtonRadioUI
//$ extends com.apple.laf.AquaButtonLabeledUI

#include <com/apple/laf/AquaButtonLabeledUI.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaButtonBorder;
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaButtonRadioUI : public ::com::apple::laf::AquaButtonLabeledUI {
	$class(AquaButtonRadioUI, 0, ::com::apple::laf::AquaButtonLabeledUI)
public:
	AquaButtonRadioUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual ::com::apple::laf::AquaButtonBorder* getPainter() override;
	virtual $String* getPropertyPrefix() override;
	static ::javax::swing::Icon* getSizingRadioButtonIcon();
	using ::com::apple::laf::AquaButtonLabeledUI::paintIcon;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* instance;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* sizingIcon;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonRadioUI_h_