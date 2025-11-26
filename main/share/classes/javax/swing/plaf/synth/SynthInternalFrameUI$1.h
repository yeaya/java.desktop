#ifndef _javax_swing_plaf_synth_SynthInternalFrameUI$1_h_
#define _javax_swing_plaf_synth_SynthInternalFrameUI$1_h_
//$ class javax.swing.plaf.synth.SynthInternalFrameUI$1
//$ extends javax.swing.plaf.basic.BasicInternalFrameUI$ComponentHandler

#include <javax/swing/plaf/basic/BasicInternalFrameUI$ComponentHandler.h>

namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthInternalFrameUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthInternalFrameUI$1 : public ::javax::swing::plaf::basic::BasicInternalFrameUI$ComponentHandler {
	$class(SynthInternalFrameUI$1, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicInternalFrameUI$ComponentHandler)
public:
	SynthInternalFrameUI$1();
	void init$(::javax::swing::plaf::synth::SynthInternalFrameUI* this$0);
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	::javax::swing::plaf::synth::SynthInternalFrameUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthInternalFrameUI$1_h_