#ifndef _javax_swing_plaf_synth_SynthSpinnerUI$EditorFocusHandler_h_
#define _javax_swing_plaf_synth_SynthSpinnerUI$EditorFocusHandler_h_
//$ class javax.swing.plaf.synth.SynthSpinnerUI$EditorFocusHandler
//$ extends java.awt.event.FocusListener

#include <java/awt/event/FocusListener.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthSpinnerUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthSpinnerUI$EditorFocusHandler : public ::java::awt::event::FocusListener {
	$class(SynthSpinnerUI$EditorFocusHandler, $NO_CLASS_INIT, ::java::awt::event::FocusListener)
public:
	SynthSpinnerUI$EditorFocusHandler();
	void init$(::javax::swing::plaf::synth::SynthSpinnerUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::javax::swing::plaf::synth::SynthSpinnerUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthSpinnerUI$EditorFocusHandler_h_