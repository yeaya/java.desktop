#ifndef _com_apple_laf_AquaToolTipUI_h_
#define _com_apple_laf_AquaToolTipUI_h_
//$ class com.apple.laf.AquaToolTipUI
//$ extends javax.swing.plaf.basic.BasicToolTipUI

#include <javax/swing/plaf/basic/BasicToolTipUI.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$RecyclableSingletonFromDefaultConstructor;
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

class AquaToolTipUI : public ::javax::swing::plaf::basic::BasicToolTipUI {
	$class(AquaToolTipUI, 0, ::javax::swing::plaf::basic::BasicToolTipUI)
public:
	AquaToolTipUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	static ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor* sharedAquaInstance;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaToolTipUI_h_