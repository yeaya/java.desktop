#ifndef _com_apple_laf_AquaOptionPaneUI_h_
#define _com_apple_laf_AquaOptionPaneUI_h_
//$ class com.apple.laf.AquaOptionPaneUI
//$ extends javax.swing.plaf.basic.BasicOptionPaneUI

#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>

namespace java {
	namespace awt {
		class Container;
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

class AquaOptionPaneUI : public ::javax::swing::plaf::basic::BasicOptionPaneUI {
	$class(AquaOptionPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicOptionPaneUI)
public:
	AquaOptionPaneUI();
	void init$();
	virtual ::java::awt::Container* createButtonArea() override;
	virtual ::java::awt::Container* createMessageArea() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	static const int32_t kOKCancelButtonWidth = 79;
	static const int32_t kButtonHeight = 23;
	static const int32_t kDialogSmallPadding = 4;
	static const int32_t kDialogLargePadding = 23;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaOptionPaneUI_h_