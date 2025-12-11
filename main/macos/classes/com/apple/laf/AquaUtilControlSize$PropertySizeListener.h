#ifndef _com_apple_laf_AquaUtilControlSize$PropertySizeListener_h_
#define _com_apple_laf_AquaUtilControlSize$PropertySizeListener_h_
//$ class com.apple.laf.AquaUtilControlSize$PropertySizeListener
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaUtilControlSize$PropertySizeListener : public ::java::beans::PropertyChangeListener {
	$class(AquaUtilControlSize$PropertySizeListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	AquaUtilControlSize$PropertySizeListener();
	void init$();
	static void applyComponentSize(::javax::swing::JComponent* c, Object$* value);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaUtilControlSize$PropertySizeListener_h_