#ifndef _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler_h_
#define _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler_h_
//$ class com.apple.laf.AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneCopyFromBasicUI;
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

class AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler : public ::java::beans::PropertyChangeListener {
	$class(AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler();
	void init$(::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler_h_