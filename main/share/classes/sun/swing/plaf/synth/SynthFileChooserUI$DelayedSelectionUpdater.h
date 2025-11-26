#ifndef _sun_swing_plaf_synth_SynthFileChooserUI$DelayedSelectionUpdater_h_
#define _sun_swing_plaf_synth_SynthFileChooserUI$DelayedSelectionUpdater_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUI$DelayedSelectionUpdater
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

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

class $export SynthFileChooserUI$DelayedSelectionUpdater : public ::java::lang::Runnable {
	$class(SynthFileChooserUI$DelayedSelectionUpdater, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SynthFileChooserUI$DelayedSelectionUpdater();
	void init$(::sun::swing::plaf::synth::SynthFileChooserUI* this$0);
	virtual void run() override;
	::sun::swing::plaf::synth::SynthFileChooserUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUI$DelayedSelectionUpdater_h_