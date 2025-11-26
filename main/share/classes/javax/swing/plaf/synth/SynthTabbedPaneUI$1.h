#ifndef _javax_swing_plaf_synth_SynthTabbedPaneUI$1_h_
#define _javax_swing_plaf_synth_SynthTabbedPaneUI$1_h_
//$ class javax.swing.plaf.synth.SynthTabbedPaneUI$1
//$ extends java.awt.event.MouseListener

#include <java/awt/event/MouseListener.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
			class MouseMotionListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthTabbedPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthTabbedPaneUI$1 : public ::java::awt::event::MouseListener {
	$class(SynthTabbedPaneUI$1, $NO_CLASS_INIT, ::java::awt::event::MouseListener)
public:
	SynthTabbedPaneUI$1();
	void init$(::javax::swing::plaf::synth::SynthTabbedPaneUI* this$0, ::java::awt::event::MouseListener* val$delegate, ::java::awt::event::MouseMotionListener* val$delegate2);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	::javax::swing::plaf::synth::SynthTabbedPaneUI* this$0 = nullptr;
	::java::awt::event::MouseMotionListener* val$delegate2 = nullptr;
	::java::awt::event::MouseListener* val$delegate = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTabbedPaneUI$1_h_