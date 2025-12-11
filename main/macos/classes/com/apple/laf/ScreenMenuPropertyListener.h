#ifndef _com_apple_laf_ScreenMenuPropertyListener_h_
#define _com_apple_laf_ScreenMenuPropertyListener_h_
//$ class com.apple.laf.ScreenMenuPropertyListener
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class ScreenMenuPropertyHandler;
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

class ScreenMenuPropertyListener : public ::java::beans::PropertyChangeListener {
	$class(ScreenMenuPropertyListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	ScreenMenuPropertyListener();
	void init$(::com::apple::laf::ScreenMenuPropertyHandler* mc);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::com::apple::laf::ScreenMenuPropertyHandler* fMenu = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_ScreenMenuPropertyListener_h_