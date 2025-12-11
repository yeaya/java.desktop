#ifndef _com_apple_laf_AquaButtonToggleUI_h_
#define _com_apple_laf_AquaButtonToggleUI_h_
//$ class com.apple.laf.AquaButtonToggleUI
//$ extends com.apple.laf.AquaButtonUI

#include <com/apple/laf/AquaButtonUI.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace javax {
	namespace swing {
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

class AquaButtonToggleUI : public ::com::apple::laf::AquaButtonUI {
	$class(AquaButtonToggleUI, 0, ::com::apple::laf::AquaButtonUI)
public:
	AquaButtonToggleUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual $String* getPropertyPrefix() override;
	using ::com::apple::laf::AquaButtonUI::paintIcon;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* aquaToggleButtonUI;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonToggleUI_h_