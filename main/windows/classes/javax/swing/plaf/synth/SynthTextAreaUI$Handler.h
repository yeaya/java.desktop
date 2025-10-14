#ifndef _javax_swing_plaf_synth_SynthTextAreaUI$Handler_h_
#define _javax_swing_plaf_synth_SynthTextAreaUI$Handler_h_
//$ class javax.swing.plaf.synth.SynthTextAreaUI$Handler
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
				class SynthTextAreaUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthTextAreaUI$Handler : public ::java::awt::event::FocusListener {
	$class(SynthTextAreaUI$Handler, $NO_CLASS_INIT, ::java::awt::event::FocusListener)
public:
	SynthTextAreaUI$Handler();
	void init$(::javax::swing::plaf::synth::SynthTextAreaUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::javax::swing::plaf::synth::SynthTextAreaUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTextAreaUI$Handler_h_