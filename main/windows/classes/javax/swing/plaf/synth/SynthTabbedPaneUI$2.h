#ifndef _javax_swing_plaf_synth_SynthTabbedPaneUI$2_h_
#define _javax_swing_plaf_synth_SynthTabbedPaneUI$2_h_
//$ class javax.swing.plaf.synth.SynthTabbedPaneUI$2
//$ extends javax.swing.plaf.basic.BasicTabbedPaneUI$TabbedPaneLayout

#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabbedPaneLayout.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthTabbedPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthTabbedPaneUI$2 : public ::javax::swing::plaf::basic::BasicTabbedPaneUI$TabbedPaneLayout {
	$class(SynthTabbedPaneUI$2, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTabbedPaneUI$TabbedPaneLayout)
public:
	SynthTabbedPaneUI$2();
	void init$(::javax::swing::plaf::synth::SynthTabbedPaneUI* this$0);
	virtual void calculateLayoutInfo() override;
	::javax::swing::plaf::synth::SynthTabbedPaneUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTabbedPaneUI$2_h_