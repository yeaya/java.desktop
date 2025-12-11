#ifndef _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$FocusHandler_h_
#define _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$FocusHandler_h_
//$ class com.apple.laf.AquaTabbedPaneCopyFromBasicUI$FocusHandler
//$ extends java.awt.event.FocusAdapter

#include <java/awt/event/FocusAdapter.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneCopyFromBasicUI;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneCopyFromBasicUI$FocusHandler : public ::java::awt::event::FocusAdapter {
	$class(AquaTabbedPaneCopyFromBasicUI$FocusHandler, $NO_CLASS_INIT, ::java::awt::event::FocusAdapter)
public:
	AquaTabbedPaneCopyFromBasicUI$FocusHandler();
	void init$(::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$FocusHandler_h_