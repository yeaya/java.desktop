#ifndef _javax_swing_plaf_synth_SynthSliderUI$SynthTrackListener_h_
#define _javax_swing_plaf_synth_SynthSliderUI$SynthTrackListener_h_
//$ class javax.swing.plaf.synth.SynthSliderUI$SynthTrackListener
//$ extends javax.swing.plaf.basic.BasicSliderUI$TrackListener

#include <javax/swing/plaf/basic/BasicSliderUI$TrackListener.h>

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
				class SynthSliderUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthSliderUI$SynthTrackListener : public ::javax::swing::plaf::basic::BasicSliderUI$TrackListener {
	$class(SynthSliderUI$SynthTrackListener, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSliderUI$TrackListener)
public:
	SynthSliderUI$SynthTrackListener();
	void init$(::javax::swing::plaf::synth::SynthSliderUI* this$0);
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	::javax::swing::plaf::synth::SynthSliderUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthSliderUI$SynthTrackListener_h_