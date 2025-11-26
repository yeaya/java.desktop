#ifndef _javax_swing_plaf_metal_MetalTitlePane$PropertyChangeHandler_h_
#define _javax_swing_plaf_metal_MetalTitlePane$PropertyChangeHandler_h_
//$ class javax.swing.plaf.metal.MetalTitlePane$PropertyChangeHandler
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalTitlePane;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalTitlePane$PropertyChangeHandler : public ::java::beans::PropertyChangeListener {
	$class(MetalTitlePane$PropertyChangeHandler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	MetalTitlePane$PropertyChangeHandler();
	void init$(::javax::swing::plaf::metal::MetalTitlePane* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* pce) override;
	::javax::swing::plaf::metal::MetalTitlePane* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalTitlePane$PropertyChangeHandler_h_