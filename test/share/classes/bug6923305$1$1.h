#ifndef _bug6923305$1$1_h_
#define _bug6923305$1$1_h_
//$ class bug6923305$1$1
//$ extends javax.swing.plaf.synth.SynthSliderUI

#include <javax/swing/plaf/synth/SynthSliderUI.h>

class bug6923305$1;
namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JSlider;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthContext;
			}
		}
	}
}

class bug6923305$1$1 : public ::javax::swing::plaf::synth::SynthSliderUI {
	$class(bug6923305$1$1, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthSliderUI)
public:
	bug6923305$1$1();
	void init$(::bug6923305$1* this$0, ::javax::swing::JSlider* arg0);
	using ::javax::swing::plaf::synth::SynthSliderUI::paintThumb;
	using ::javax::swing::plaf::synth::SynthSliderUI::paintTrack;
	virtual void paintTrack(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::java::awt::Rectangle* trackBounds) override;
	using ::javax::swing::plaf::synth::SynthSliderUI::yPositionForValue;
	::bug6923305$1* this$0 = nullptr;
};

#endif // _bug6923305$1$1_h_