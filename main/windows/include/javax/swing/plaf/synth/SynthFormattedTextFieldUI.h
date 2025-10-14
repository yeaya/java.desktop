#ifndef _javax_swing_plaf_synth_SynthFormattedTextFieldUI_h_
#define _javax_swing_plaf_synth_SynthFormattedTextFieldUI_h_
//$ class javax.swing.plaf.synth.SynthFormattedTextFieldUI
//$ extends javax.swing.plaf.synth.SynthTextFieldUI

#include <javax/swing/plaf/synth/SynthTextFieldUI.h>

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

class $import SynthFormattedTextFieldUI : public ::javax::swing::plaf::synth::SynthTextFieldUI {
	$class(SynthFormattedTextFieldUI, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthTextFieldUI)
public:
	SynthFormattedTextFieldUI();
	using ::javax::swing::plaf::synth::SynthTextFieldUI::create;
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual $String* getPropertyPrefix() override;
	using ::javax::swing::plaf::synth::SynthTextFieldUI::paint;
	using ::javax::swing::plaf::synth::SynthTextFieldUI::paintBackground;
	virtual void paintBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthFormattedTextFieldUI_h_