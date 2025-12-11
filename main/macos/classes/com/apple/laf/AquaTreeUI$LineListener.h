#ifndef _com_apple_laf_AquaTreeUI$LineListener_h_
#define _com_apple_laf_AquaTreeUI$LineListener_h_
//$ class com.apple.laf.AquaTreeUI$LineListener
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTreeUI;
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

class AquaTreeUI$LineListener : public ::java::beans::PropertyChangeListener {
	$class(AquaTreeUI$LineListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	AquaTreeUI$LineListener();
	void init$(::com::apple::laf::AquaTreeUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::com::apple::laf::AquaTreeUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTreeUI$LineListener_h_