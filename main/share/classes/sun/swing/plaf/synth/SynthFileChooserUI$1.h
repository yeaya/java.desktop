#ifndef _sun_swing_plaf_synth_SynthFileChooserUI$1_h_
#define _sun_swing_plaf_synth_SynthFileChooserUI$1_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUI$1
//$ extends javax.swing.event.ListDataListener

#include <javax/swing/event/ListDataListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class ListDataEvent;
		}
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

class $export SynthFileChooserUI$1 : public ::javax::swing::event::ListDataListener {
	$class(SynthFileChooserUI$1, $NO_CLASS_INIT, ::javax::swing::event::ListDataListener)
public:
	SynthFileChooserUI$1();
	void init$(::sun::swing::plaf::synth::SynthFileChooserUI* this$0);
	virtual void contentsChanged(::javax::swing::event::ListDataEvent* e) override;
	virtual void intervalAdded(::javax::swing::event::ListDataEvent* e) override;
	virtual void intervalRemoved(::javax::swing::event::ListDataEvent* e) override;
	::sun::swing::plaf::synth::SynthFileChooserUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUI$1_h_