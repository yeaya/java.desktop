#ifndef _javax_swing_plaf_metal_MetalScrollBarUI$ScrollBarListener_h_
#define _javax_swing_plaf_metal_MetalScrollBarUI$ScrollBarListener_h_
//$ class javax.swing.plaf.metal.MetalScrollBarUI$ScrollBarListener
//$ extends javax.swing.plaf.basic.BasicScrollBarUI$PropertyChangeHandler

#include <javax/swing/plaf/basic/BasicScrollBarUI$PropertyChangeHandler.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalScrollBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $export MetalScrollBarUI$ScrollBarListener : public ::javax::swing::plaf::basic::BasicScrollBarUI$PropertyChangeHandler {
	$class(MetalScrollBarUI$ScrollBarListener, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicScrollBarUI$PropertyChangeHandler)
public:
	MetalScrollBarUI$ScrollBarListener();
	void init$(::javax::swing::plaf::metal::MetalScrollBarUI* this$0);
	virtual void handlePropertyChange(Object$* newValue);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void toFlush();
	virtual void toFreeStanding();
	::javax::swing::plaf::metal::MetalScrollBarUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalScrollBarUI$ScrollBarListener_h_