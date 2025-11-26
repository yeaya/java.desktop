#ifndef _javax_swing_plaf_synth_SynthSplitPaneUI$1_h_
#define _javax_swing_plaf_synth_SynthSplitPaneUI$1_h_
//$ class javax.swing.plaf.synth.SynthSplitPaneUI$1
//$ extends java.awt.Canvas

#include <java/awt/Canvas.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthSplitPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthSplitPaneUI$1 : public ::java::awt::Canvas {
	$class(SynthSplitPaneUI$1, $NO_CLASS_INIT, ::java::awt::Canvas)
public:
	SynthSplitPaneUI$1();
	void init$(::javax::swing::plaf::synth::SynthSplitPaneUI* this$0);
	virtual void paint(::java::awt::Graphics* g) override;
	::javax::swing::plaf::synth::SynthSplitPaneUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthSplitPaneUI$1_h_