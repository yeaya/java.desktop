#ifndef _javax_swing_plaf_metal_MetalTabbedPaneUI$TabbedPaneLayout_h_
#define _javax_swing_plaf_metal_MetalTabbedPaneUI$TabbedPaneLayout_h_
//$ class javax.swing.plaf.metal.MetalTabbedPaneUI$TabbedPaneLayout
//$ extends javax.swing.plaf.basic.BasicTabbedPaneUI$TabbedPaneLayout

#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabbedPaneLayout.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalTabbedPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalTabbedPaneUI$TabbedPaneLayout : public ::javax::swing::plaf::basic::BasicTabbedPaneUI$TabbedPaneLayout {
	$class(MetalTabbedPaneUI$TabbedPaneLayout, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTabbedPaneUI$TabbedPaneLayout)
public:
	MetalTabbedPaneUI$TabbedPaneLayout();
	void init$(::javax::swing::plaf::metal::MetalTabbedPaneUI* this$0);
	virtual void normalizeTabRuns(int32_t tabPlacement, int32_t tabCount, int32_t start, int32_t max) override;
	virtual void padSelectedTab(int32_t tabPlacement, int32_t selectedIndex) override;
	virtual void rotateTabRuns(int32_t tabPlacement, int32_t selectedRun) override;
	::javax::swing::plaf::metal::MetalTabbedPaneUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalTabbedPaneUI$TabbedPaneLayout_h_