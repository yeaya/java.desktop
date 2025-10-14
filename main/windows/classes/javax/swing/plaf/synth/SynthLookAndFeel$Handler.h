#ifndef _javax_swing_plaf_synth_SynthLookAndFeel$Handler_h_
#define _javax_swing_plaf_synth_SynthLookAndFeel$Handler_h_
//$ class javax.swing.plaf.synth.SynthLookAndFeel$Handler
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthLookAndFeel;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthLookAndFeel$Handler : public ::java::beans::PropertyChangeListener {
	$class(SynthLookAndFeel$Handler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	SynthLookAndFeel$Handler();
	void init$(::javax::swing::plaf::synth::SynthLookAndFeel* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	void repaintIfBackgroundsDiffer(::javax::swing::JComponent* comp);
	::javax::swing::plaf::synth::SynthLookAndFeel* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthLookAndFeel$Handler_h_