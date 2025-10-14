#ifndef _javax_swing_plaf_metal_MetalToolBarUI$MetalRolloverListener_h_
#define _javax_swing_plaf_metal_MetalToolBarUI$MetalRolloverListener_h_
//$ class javax.swing.plaf.metal.MetalToolBarUI$MetalRolloverListener
//$ extends javax.swing.plaf.basic.BasicToolBarUI$PropertyListener

#include <javax/swing/plaf/basic/BasicToolBarUI$PropertyListener.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalToolBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalToolBarUI$MetalRolloverListener : public ::javax::swing::plaf::basic::BasicToolBarUI$PropertyListener {
	$class(MetalToolBarUI$MetalRolloverListener, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicToolBarUI$PropertyListener)
public:
	MetalToolBarUI$MetalRolloverListener();
	void init$(::javax::swing::plaf::metal::MetalToolBarUI* this$0);
	::javax::swing::plaf::metal::MetalToolBarUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalToolBarUI$MetalRolloverListener_h_