#ifndef _sun_swing_plaf_synth_SynthFileChooserUIImpl$1_h_
#define _sun_swing_plaf_synth_SynthFileChooserUIImpl$1_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUIImpl$1
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
				class SynthFileChooserUIImpl;
			}
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthFileChooserUIImpl$1 : public ::java::beans::PropertyChangeListener {
	$class(SynthFileChooserUIImpl$1, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	SynthFileChooserUIImpl$1();
	void init$(::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* event) override;
	::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUIImpl$1_h_