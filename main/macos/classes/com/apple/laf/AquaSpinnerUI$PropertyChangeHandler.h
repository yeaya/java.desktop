#ifndef _com_apple_laf_AquaSpinnerUI$PropertyChangeHandler_h_
#define _com_apple_laf_AquaSpinnerUI$PropertyChangeHandler_h_
//$ class com.apple.laf.AquaSpinnerUI$PropertyChangeHandler
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaSpinnerUI$PropertyChangeHandler : public ::java::beans::PropertyChangeListener {
	$class(AquaSpinnerUI$PropertyChangeHandler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	AquaSpinnerUI$PropertyChangeHandler();
	void init$();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaSpinnerUI$PropertyChangeHandler_h_