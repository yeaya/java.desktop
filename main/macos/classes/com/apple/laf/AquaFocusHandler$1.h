#ifndef _com_apple_laf_AquaFocusHandler$1_h_
#define _com_apple_laf_AquaFocusHandler$1_h_
//$ class com.apple.laf.AquaFocusHandler$1
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

class AquaFocusHandler$1 : public ::java::beans::PropertyChangeListener {
	$class(AquaFocusHandler$1, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	AquaFocusHandler$1();
	void init$();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFocusHandler$1_h_