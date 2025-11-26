#ifndef _javax_swing_plaf_synth_SynthDesktopPaneUI$TaskBar$1_h_
#define _javax_swing_plaf_synth_SynthDesktopPaneUI$TaskBar$1_h_
//$ class javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar$1
//$ extends java.awt.FlowLayout

#include <java/awt/FlowLayout.h>

namespace java {
	namespace awt {
		class Container;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthDesktopPaneUI$TaskBar;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthDesktopPaneUI$TaskBar$1 : public ::java::awt::FlowLayout {
	$class(SynthDesktopPaneUI$TaskBar$1, $NO_CLASS_INIT, ::java::awt::FlowLayout)
public:
	SynthDesktopPaneUI$TaskBar$1();
	void init$(::javax::swing::plaf::synth::SynthDesktopPaneUI$TaskBar* this$0, int32_t align, int32_t hgap, int32_t vgap);
	virtual void layoutContainer(::java::awt::Container* target) override;
	::javax::swing::plaf::synth::SynthDesktopPaneUI$TaskBar* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthDesktopPaneUI$TaskBar$1_h_