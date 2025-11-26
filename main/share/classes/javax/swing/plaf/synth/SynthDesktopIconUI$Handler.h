#ifndef _javax_swing_plaf_synth_SynthDesktopIconUI$Handler_h_
#define _javax_swing_plaf_synth_SynthDesktopIconUI$Handler_h_
//$ class javax.swing.plaf.synth.SynthDesktopIconUI$Handler
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthDesktopIconUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthDesktopIconUI$Handler : public ::java::awt::event::ActionListener {
	$class(SynthDesktopIconUI$Handler, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	SynthDesktopIconUI$Handler();
	void init$(::javax::swing::plaf::synth::SynthDesktopIconUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* evt) override;
	::javax::swing::plaf::synth::SynthDesktopIconUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthDesktopIconUI$Handler_h_