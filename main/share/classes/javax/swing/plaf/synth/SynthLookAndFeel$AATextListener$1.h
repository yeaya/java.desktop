#ifndef _javax_swing_plaf_synth_SynthLookAndFeel$AATextListener$1_h_
#define _javax_swing_plaf_synth_SynthLookAndFeel$AATextListener$1_h_
//$ class javax.swing.plaf.synth.SynthLookAndFeel$AATextListener$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthLookAndFeel$AATextListener;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthLookAndFeel$AATextListener$1 : public ::java::lang::Runnable {
	$class(SynthLookAndFeel$AATextListener$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SynthLookAndFeel$AATextListener$1();
	void init$(::javax::swing::plaf::synth::SynthLookAndFeel$AATextListener* this$0);
	virtual void run() override;
	::javax::swing::plaf::synth::SynthLookAndFeel$AATextListener* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthLookAndFeel$AATextListener$1_h_