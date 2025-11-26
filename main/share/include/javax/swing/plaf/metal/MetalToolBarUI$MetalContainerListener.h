#ifndef _javax_swing_plaf_metal_MetalToolBarUI$MetalContainerListener_h_
#define _javax_swing_plaf_metal_MetalToolBarUI$MetalContainerListener_h_
//$ class javax.swing.plaf.metal.MetalToolBarUI$MetalContainerListener
//$ extends javax.swing.plaf.basic.BasicToolBarUI$ToolBarContListener

#include <javax/swing/plaf/basic/BasicToolBarUI$ToolBarContListener.h>

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

class $import MetalToolBarUI$MetalContainerListener : public ::javax::swing::plaf::basic::BasicToolBarUI$ToolBarContListener {
	$class(MetalToolBarUI$MetalContainerListener, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicToolBarUI$ToolBarContListener)
public:
	MetalToolBarUI$MetalContainerListener();
	void init$(::javax::swing::plaf::metal::MetalToolBarUI* this$0);
	::javax::swing::plaf::metal::MetalToolBarUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalToolBarUI$MetalContainerListener_h_