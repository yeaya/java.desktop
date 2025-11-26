#ifndef _sun_swing_plaf_synth_SynthFileChooserUIImpl$DirectoryComboBoxAction_h_
#define _sun_swing_plaf_synth_SynthFileChooserUIImpl$DirectoryComboBoxAction_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUIImpl$DirectoryComboBoxAction
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
				class SynthFileChooserUIImpl;
			}
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export SynthFileChooserUIImpl$DirectoryComboBoxAction : public ::javax::swing::AbstractAction {
	$class(SynthFileChooserUIImpl$DirectoryComboBoxAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	SynthFileChooserUIImpl$DirectoryComboBoxAction();
	void init$(::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUIImpl$DirectoryComboBoxAction_h_