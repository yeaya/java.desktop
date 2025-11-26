#ifndef _javax_swing_plaf_metal_MetalSliderUI$MetalPropertyListener_h_
#define _javax_swing_plaf_metal_MetalSliderUI$MetalPropertyListener_h_
//$ class javax.swing.plaf.metal.MetalSliderUI$MetalPropertyListener
//$ extends javax.swing.plaf.basic.BasicSliderUI$PropertyChangeHandler

#include <javax/swing/plaf/basic/BasicSliderUI$PropertyChangeHandler.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalSliderUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $export MetalSliderUI$MetalPropertyListener : public ::javax::swing::plaf::basic::BasicSliderUI$PropertyChangeHandler {
	$class(MetalSliderUI$MetalPropertyListener, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSliderUI$PropertyChangeHandler)
public:
	MetalSliderUI$MetalPropertyListener();
	void init$(::javax::swing::plaf::metal::MetalSliderUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::javax::swing::plaf::metal::MetalSliderUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalSliderUI$MetalPropertyListener_h_