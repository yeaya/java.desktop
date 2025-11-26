#ifndef _sun_swing_plaf_synth_SynthFileChooserUIImpl$2_h_
#define _sun_swing_plaf_synth_SynthFileChooserUIImpl$2_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUIImpl$2
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

class $export SynthFileChooserUIImpl$2 : public ::java::beans::PropertyChangeListener {
	$class(SynthFileChooserUIImpl$2, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	SynthFileChooserUIImpl$2();
	void init$(::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUIImpl$2_h_