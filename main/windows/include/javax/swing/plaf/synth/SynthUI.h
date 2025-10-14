#ifndef _javax_swing_plaf_synth_SynthUI_h_
#define _javax_swing_plaf_synth_SynthUI_h_
//$ interface javax.swing.plaf.synth.SynthUI
//$ extends javax.swing.plaf.synth.SynthConstants

#include <javax/swing/plaf/synth/SynthConstants.h>

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

class $import SynthUI : public ::javax::swing::plaf::synth::SynthConstants {
	$interface(SynthUI, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthConstants)
public:
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) {return nullptr;}
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {}
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthUI_h_