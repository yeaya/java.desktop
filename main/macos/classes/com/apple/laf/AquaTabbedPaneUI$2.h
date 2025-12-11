#ifndef _com_apple_laf_AquaTabbedPaneUI$2_h_
#define _com_apple_laf_AquaTabbedPaneUI$2_h_
//$ class com.apple.laf.AquaTabbedPaneUI$2
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneUI;
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

class AquaTabbedPaneUI$2 : public ::javax::swing::event::ChangeListener {
	$class(AquaTabbedPaneUI$2, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	AquaTabbedPaneUI$2();
	void init$(::com::apple::laf::AquaTabbedPaneUI* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::com::apple::laf::AquaTabbedPaneUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneUI$2_h_