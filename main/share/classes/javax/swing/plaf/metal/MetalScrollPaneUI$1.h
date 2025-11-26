#ifndef _javax_swing_plaf_metal_MetalScrollPaneUI$1_h_
#define _javax_swing_plaf_metal_MetalScrollPaneUI$1_h_
//$ class javax.swing.plaf.metal.MetalScrollPaneUI$1
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
				class MetalScrollPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalScrollPaneUI$1 : public ::java::beans::PropertyChangeListener {
	$class(MetalScrollPaneUI$1, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	MetalScrollPaneUI$1();
	void init$(::javax::swing::plaf::metal::MetalScrollPaneUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::javax::swing::plaf::metal::MetalScrollPaneUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalScrollPaneUI$1_h_