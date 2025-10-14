#ifndef _bug6918861$HackedSynthSliderUI_h_
#define _bug6918861$HackedSynthSliderUI_h_
//$ class bug6918861$HackedSynthSliderUI
//$ extends javax.swing.plaf.synth.SynthSliderUI

#include <javax/swing/plaf/synth/SynthSliderUI.h>

namespace javax {
	namespace swing {
		class JSlider;
	}
}

class bug6918861$HackedSynthSliderUI : public ::javax::swing::plaf::synth::SynthSliderUI {
	$class(bug6918861$HackedSynthSliderUI, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthSliderUI)
public:
	bug6918861$HackedSynthSliderUI();
	void init$(::javax::swing::JSlider* c);
	virtual void installDefaults(::javax::swing::JSlider* slider) override;
	virtual void installKeyboardActions(::javax::swing::JSlider* slider) override;
	virtual void installListeners(::javax::swing::JSlider* slider) override;
	using ::javax::swing::plaf::synth::SynthSliderUI::paintThumb;
	using ::javax::swing::plaf::synth::SynthSliderUI::paintTrack;
	virtual void uninstallDefaults(::javax::swing::JSlider* slider) override;
	virtual void uninstallKeyboardActions(::javax::swing::JSlider* slider) override;
	virtual void uninstallListeners(::javax::swing::JSlider* slider) override;
	using ::javax::swing::plaf::synth::SynthSliderUI::yPositionForValue;
	int32_t counter = 0;
};

#endif // _bug6918861$HackedSynthSliderUI_h_