#ifndef _javax_swing_plaf_synth_SynthCheckBoxMenuItemUI_h_
#define _javax_swing_plaf_synth_SynthCheckBoxMenuItemUI_h_
//$ class javax.swing.plaf.synth.SynthCheckBoxMenuItemUI
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

class $export SynthCheckBoxMenuItemUI : public ::javax::swing::plaf::synth::SynthMenuItemUI {
	$class(SynthCheckBoxMenuItemUI, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthMenuItemUI)
public:
	SynthCheckBoxMenuItemUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual $String* getPropertyPrefix() override;
	using ::javax::swing::plaf::synth::SynthMenuItemUI::paintBackground;
	virtual void paintBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthCheckBoxMenuItemUI_h_