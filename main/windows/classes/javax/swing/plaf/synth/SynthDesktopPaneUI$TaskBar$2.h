#ifndef _javax_swing_plaf_synth_SynthDesktopPaneUI$TaskBar$2_h_
#define _javax_swing_plaf_synth_SynthDesktopPaneUI$TaskBar$2_h_
//$ class javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar$2
//$ extends javax.swing.border.BevelBorder

#include <javax/swing/border/BevelBorder.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
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

class SynthDesktopPaneUI$TaskBar$2 : public ::javax::swing::border::BevelBorder {
	$class(SynthDesktopPaneUI$TaskBar$2, $NO_CLASS_INIT, ::javax::swing::border::BevelBorder)
public:
	SynthDesktopPaneUI$TaskBar$2();
	using ::javax::swing::border::BevelBorder::getBorderInsets;
	void init$(::javax::swing::plaf::synth::SynthDesktopPaneUI$TaskBar* this$0, int32_t bevelType);
	virtual void paintRaisedBevel(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	::javax::swing::plaf::synth::SynthDesktopPaneUI$TaskBar* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthDesktopPaneUI$TaskBar$2_h_