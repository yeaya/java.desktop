#ifndef _com_apple_laf_AquaScrollBarUI$PropertyChangeHandler_h_
#define _com_apple_laf_AquaScrollBarUI$PropertyChangeHandler_h_
//$ class com.apple.laf.AquaScrollBarUI$PropertyChangeHandler
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaScrollBarUI;
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

class AquaScrollBarUI$PropertyChangeHandler : public ::java::beans::PropertyChangeListener {
	$class(AquaScrollBarUI$PropertyChangeHandler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	AquaScrollBarUI$PropertyChangeHandler();
	void init$(::com::apple::laf::AquaScrollBarUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::com::apple::laf::AquaScrollBarUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaScrollBarUI$PropertyChangeHandler_h_