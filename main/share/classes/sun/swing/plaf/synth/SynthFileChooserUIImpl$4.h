#ifndef _sun_swing_plaf_synth_SynthFileChooserUIImpl$4_h_
#define _sun_swing_plaf_synth_SynthFileChooserUIImpl$4_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUIImpl$4
//$ extends java.awt.event.FocusAdapter

#include <java/awt/event/FocusAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
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

class $export SynthFileChooserUIImpl$4 : public ::java::awt::event::FocusAdapter {
	$class(SynthFileChooserUIImpl$4, $NO_CLASS_INIT, ::java::awt::event::FocusAdapter)
public:
	SynthFileChooserUIImpl$4();
	void init$(::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUIImpl$4_h_