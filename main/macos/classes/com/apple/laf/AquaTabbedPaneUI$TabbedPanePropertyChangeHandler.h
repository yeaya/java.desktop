#ifndef _com_apple_laf_AquaTabbedPaneUI$TabbedPanePropertyChangeHandler_h_
#define _com_apple_laf_AquaTabbedPaneUI$TabbedPanePropertyChangeHandler_h_
//$ class com.apple.laf.AquaTabbedPaneUI$TabbedPanePropertyChangeHandler
//$ extends com.apple.laf.AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneUI;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneUI$TabbedPanePropertyChangeHandler : public ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler {
	$class(AquaTabbedPaneUI$TabbedPanePropertyChangeHandler, $NO_CLASS_INIT, ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler)
public:
	AquaTabbedPaneUI$TabbedPanePropertyChangeHandler();
	void init$(::com::apple::laf::AquaTabbedPaneUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::com::apple::laf::AquaTabbedPaneUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneUI$TabbedPanePropertyChangeHandler_h_