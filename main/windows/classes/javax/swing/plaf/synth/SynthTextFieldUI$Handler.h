#ifndef _javax_swing_plaf_synth_SynthTextFieldUI$Handler_h_
#define _javax_swing_plaf_synth_SynthTextFieldUI$Handler_h_
//$ class javax.swing.plaf.synth.SynthTextFieldUI$Handler
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
				class SynthTextFieldUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthTextFieldUI$Handler : public ::java::awt::event::FocusListener {
	$class(SynthTextFieldUI$Handler, $NO_CLASS_INIT, ::java::awt::event::FocusListener)
public:
	SynthTextFieldUI$Handler();
	void init$(::javax::swing::plaf::synth::SynthTextFieldUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::javax::swing::plaf::synth::SynthTextFieldUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTextFieldUI$Handler_h_