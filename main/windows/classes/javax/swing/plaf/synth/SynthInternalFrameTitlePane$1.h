#ifndef _javax_swing_plaf_synth_SynthInternalFrameTitlePane$1_h_
#define _javax_swing_plaf_synth_SynthInternalFrameTitlePane$1_h_
//$ class javax.swing.plaf.synth.SynthInternalFrameTitlePane$1
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthInternalFrameTitlePane;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthInternalFrameTitlePane$1 : public ::java::awt::event::MouseAdapter {
	$class(SynthInternalFrameTitlePane$1, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	SynthInternalFrameTitlePane$1();
	void init$(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* this$0);
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	::javax::swing::plaf::synth::SynthInternalFrameTitlePane* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthInternalFrameTitlePane$1_h_