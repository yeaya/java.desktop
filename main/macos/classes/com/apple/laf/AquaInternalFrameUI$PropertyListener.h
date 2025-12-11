#ifndef _com_apple_laf_AquaInternalFrameUI$PropertyListener_h_
#define _com_apple_laf_AquaInternalFrameUI$PropertyListener_h_
//$ class com.apple.laf.AquaInternalFrameUI$PropertyListener
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaInternalFrameUI;
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

class AquaInternalFrameUI$PropertyListener : public ::java::beans::PropertyChangeListener {
	$class(AquaInternalFrameUI$PropertyListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	AquaInternalFrameUI$PropertyListener();
	void init$(::com::apple::laf::AquaInternalFrameUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::com::apple::laf::AquaInternalFrameUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFrameUI$PropertyListener_h_