#ifndef _sun_swing_plaf_synth_SynthFileChooserUI$FileNameCompletionAction_h_
#define _sun_swing_plaf_synth_SynthFileChooserUI$FileNameCompletionAction_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUI$FileNameCompletionAction
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthFileChooserUI;
			}
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthFileChooserUI$FileNameCompletionAction : public ::javax::swing::AbstractAction {
	$class(SynthFileChooserUI$FileNameCompletionAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	SynthFileChooserUI$FileNameCompletionAction();
	void init$(::sun::swing::plaf::synth::SynthFileChooserUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::sun::swing::plaf::synth::SynthFileChooserUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUI$FileNameCompletionAction_h_