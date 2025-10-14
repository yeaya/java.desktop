#ifndef _javax_swing_plaf_synth_SynthRadioButtonMenuItemUI_h_
#define _javax_swing_plaf_synth_SynthRadioButtonMenuItemUI_h_
//$ class javax.swing.plaf.synth.SynthRadioButtonMenuItemUI
//$ extends javax.swing.plaf.synth.SynthMenuItemUI

#include <javax/swing/plaf/synth/SynthMenuItemUI.h>

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

class $export SynthRadioButtonMenuItemUI : public ::javax::swing::plaf::synth::SynthMenuItemUI {
	$class(SynthRadioButtonMenuItemUI, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthMenuItemUI)
public:
	SynthRadioButtonMenuItemUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual $String* getPropertyPrefix() override;
	using ::javax::swing::plaf::synth::SynthMenuItemUI::paintBackground;
	virtual void paintBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthRadioButtonMenuItemUI_h_