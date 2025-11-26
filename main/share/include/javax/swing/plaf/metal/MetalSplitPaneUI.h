#ifndef _javax_swing_plaf_metal_MetalSplitPaneUI_h_
#define _javax_swing_plaf_metal_MetalSplitPaneUI_h_
//$ class javax.swing.plaf.metal.MetalSplitPaneUI
//$ extends javax.swing.plaf.basic.BasicSplitPaneUI

#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>

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
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicSplitPaneDivider;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalSplitPaneUI : public ::javax::swing::plaf::basic::BasicSplitPaneUI {
	$class(MetalSplitPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSplitPaneUI)
public:
	MetalSplitPaneUI();
	void init$();
	virtual ::javax::swing::plaf::basic::BasicSplitPaneDivider* createDefaultDivider() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalSplitPaneUI_h_