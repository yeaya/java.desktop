#ifndef _com_apple_laf_AquaTextFieldSearch$SearchFieldPropertyListener_h_
#define _com_apple_laf_AquaTextFieldSearch$SearchFieldPropertyListener_h_
//$ class com.apple.laf.AquaTextFieldSearch$SearchFieldPropertyListener
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

class AquaTextFieldSearch$SearchFieldPropertyListener : public ::java::beans::PropertyChangeListener {
	$class(AquaTextFieldSearch$SearchFieldPropertyListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	AquaTextFieldSearch$SearchFieldPropertyListener();
	void init$();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextFieldSearch$SearchFieldPropertyListener_h_