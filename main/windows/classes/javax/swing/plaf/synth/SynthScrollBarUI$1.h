#ifndef _javax_swing_plaf_synth_SynthScrollBarUI$1_h_
#define _javax_swing_plaf_synth_SynthScrollBarUI$1_h_
//$ class javax.swing.plaf.synth.SynthScrollBarUI$1
//$ extends javax.swing.plaf.synth.SynthArrowButton

#include <javax/swing/plaf/synth/SynthArrowButton.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthScrollBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthScrollBarUI$1 : public ::javax::swing::plaf::synth::SynthArrowButton {
	$class(SynthScrollBarUI$1, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthArrowButton)
public:
	SynthScrollBarUI$1();
	using ::javax::swing::plaf::synth::SynthArrowButton::enable;
	using ::javax::swing::plaf::synth::SynthArrowButton::getBounds;
	using ::javax::swing::plaf::synth::SynthArrowButton::getSize;
	using ::javax::swing::plaf::synth::SynthArrowButton::getLocation;
	using ::javax::swing::plaf::synth::SynthArrowButton::firePropertyChange;
	using ::javax::swing::plaf::synth::SynthArrowButton::add;
	using ::javax::swing::plaf::synth::SynthArrowButton::getMousePosition;
	using ::javax::swing::plaf::synth::SynthArrowButton::contains;
	void init$(::javax::swing::plaf::synth::SynthScrollBarUI* this$0, int32_t direction);
	virtual bool contains(int32_t x, int32_t y) override;
	using ::javax::swing::plaf::synth::SynthArrowButton::setUI;
	using ::javax::swing::plaf::synth::SynthArrowButton::requestFocus;
	using ::javax::swing::plaf::synth::SynthArrowButton::requestFocusInWindow;
	using ::javax::swing::plaf::synth::SynthArrowButton::repaint;
	using ::javax::swing::plaf::synth::SynthArrowButton::remove;
	using ::javax::swing::plaf::synth::SynthArrowButton::list;
	::javax::swing::plaf::synth::SynthScrollBarUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthScrollBarUI$1_h_