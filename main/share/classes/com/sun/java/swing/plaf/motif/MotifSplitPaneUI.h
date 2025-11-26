#ifndef _com_sun_java_swing_plaf_motif_MotifSplitPaneUI_h_
#define _com_sun_java_swing_plaf_motif_MotifSplitPaneUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifSplitPaneUI
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

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifSplitPaneUI : public ::javax::swing::plaf::basic::BasicSplitPaneUI {
	$class(MotifSplitPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSplitPaneUI)
public:
	MotifSplitPaneUI();
	void init$();
	virtual ::javax::swing::plaf::basic::BasicSplitPaneDivider* createDefaultDivider() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifSplitPaneUI_h_