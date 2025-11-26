#ifndef _javax_swing_plaf_synth_SynthTabbedPaneUI$SynthScrollableTabButton_h_
#define _javax_swing_plaf_synth_SynthTabbedPaneUI$SynthScrollableTabButton_h_
//$ class javax.swing.plaf.synth.SynthTabbedPaneUI$SynthScrollableTabButton
//$ extends javax.swing.plaf.synth.SynthArrowButton

#include <javax/swing/plaf/synth/SynthArrowButton.h>

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

class SynthTabbedPaneUI$SynthScrollableTabButton : public ::javax::swing::plaf::synth::SynthArrowButton {
	$class(SynthTabbedPaneUI$SynthScrollableTabButton, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthArrowButton)
public:
	SynthTabbedPaneUI$SynthScrollableTabButton();
	using ::javax::swing::plaf::synth::SynthArrowButton::contains;
	using ::javax::swing::plaf::synth::SynthArrowButton::enable;
	using ::javax::swing::plaf::synth::SynthArrowButton::getBounds;
	using ::javax::swing::plaf::synth::SynthArrowButton::getSize;
	using ::javax::swing::plaf::synth::SynthArrowButton::getLocation;
	using ::javax::swing::plaf::synth::SynthArrowButton::firePropertyChange;
	using ::javax::swing::plaf::synth::SynthArrowButton::add;
	using ::javax::swing::plaf::synth::SynthArrowButton::getMousePosition;
	void init$(::javax::swing::plaf::synth::SynthTabbedPaneUI* this$0, int32_t direction);
	using ::javax::swing::plaf::synth::SynthArrowButton::setUI;
	using ::javax::swing::plaf::synth::SynthArrowButton::requestFocus;
	using ::javax::swing::plaf::synth::SynthArrowButton::requestFocusInWindow;
	using ::javax::swing::plaf::synth::SynthArrowButton::repaint;
	using ::javax::swing::plaf::synth::SynthArrowButton::remove;
	using ::javax::swing::plaf::synth::SynthArrowButton::list;
	::javax::swing::plaf::synth::SynthTabbedPaneUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTabbedPaneUI$SynthScrollableTabButton_h_