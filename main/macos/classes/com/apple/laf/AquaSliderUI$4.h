#ifndef _com_apple_laf_AquaSliderUI$4_h_
#define _com_apple_laf_AquaSliderUI$4_h_
//$ class com.apple.laf.AquaSliderUI$4
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaSliderUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaSliderUI$4 : public ::javax::swing::event::ChangeListener {
	$class(AquaSliderUI$4, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	AquaSliderUI$4();
	void init$(::com::apple::laf::AquaSliderUI* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::com::apple::laf::AquaSliderUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaSliderUI$4_h_