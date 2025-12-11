#ifndef _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler_h_
#define _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler_h_
//$ class com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneCopyFromBasicUI;
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

class AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler : public ::javax::swing::event::ChangeListener {
	$class(AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler();
	void init$(::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler_h_