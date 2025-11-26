#ifndef _javax_swing_plaf_synth_SynthArrowButton$SynthArrowButtonUI_h_
#define _javax_swing_plaf_synth_SynthArrowButton$SynthArrowButtonUI_h_
//$ class javax.swing.plaf.synth.SynthArrowButton$SynthArrowButtonUI
//$ extends javax.swing.plaf.synth.SynthButtonUI

#include <javax/swing/plaf/synth/SynthButtonUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
		class JComponent;
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

class SynthArrowButton$SynthArrowButtonUI : public ::javax::swing::plaf::synth::SynthButtonUI {
	$class(SynthArrowButton$SynthArrowButtonUI, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthButtonUI)
public:
	SynthArrowButton$SynthArrowButtonUI();
	using ::javax::swing::plaf::synth::SynthButtonUI::getMinimumSize;
	using ::javax::swing::plaf::synth::SynthButtonUI::getMaximumSize;
	void init$();
	virtual ::java::awt::Dimension* getMaximumSize();
	virtual ::java::awt::Dimension* getMinimumSize();
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void installDefaults(::javax::swing::AbstractButton* b) override;
	using ::javax::swing::plaf::synth::SynthButtonUI::paint;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g) override;
	virtual void paintBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthArrowButton$SynthArrowButtonUI_h_