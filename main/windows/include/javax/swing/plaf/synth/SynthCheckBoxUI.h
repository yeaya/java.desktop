#ifndef _javax_swing_plaf_synth_SynthCheckBoxUI_h_
#define _javax_swing_plaf_synth_SynthCheckBoxUI_h_
//$ class javax.swing.plaf.synth.SynthCheckBoxUI
//$ extends javax.swing.plaf.synth.SynthRadioButtonUI

#include <javax/swing/plaf/synth/SynthRadioButtonUI.h>

namespace java {
	namespace awt {
		class Graphics;
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
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthContext;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthCheckBoxUI : public ::javax::swing::plaf::synth::SynthRadioButtonUI {
	$class(SynthCheckBoxUI, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthRadioButtonUI)
public:
	SynthCheckBoxUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual $String* getPropertyPrefix() override;
	virtual void paintBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthCheckBoxUI_h_