#ifndef _sun_swing_plaf_synth_SynthFileChooserUI$SynthFCPropertyChangeListener_h_
#define _sun_swing_plaf_synth_SynthFileChooserUI$SynthFCPropertyChangeListener_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUI$SynthFCPropertyChangeListener
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
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

class $import SynthFileChooserUI$SynthFCPropertyChangeListener : public ::java::beans::PropertyChangeListener {
	$class(SynthFileChooserUI$SynthFCPropertyChangeListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	SynthFileChooserUI$SynthFCPropertyChangeListener();
	void init$(::sun::swing::plaf::synth::SynthFileChooserUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::sun::swing::plaf::synth::SynthFileChooserUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUI$SynthFCPropertyChangeListener_h_