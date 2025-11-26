#ifndef _javax_swing_plaf_metal_MetalTreeUI$LineListener_h_
#define _javax_swing_plaf_metal_MetalTreeUI$LineListener_h_
//$ class javax.swing.plaf.metal.MetalTreeUI$LineListener
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
				class MetalTreeUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $export MetalTreeUI$LineListener : public ::java::beans::PropertyChangeListener {
	$class(MetalTreeUI$LineListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	MetalTreeUI$LineListener();
	void init$(::javax::swing::plaf::metal::MetalTreeUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::javax::swing::plaf::metal::MetalTreeUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalTreeUI$LineListener_h_