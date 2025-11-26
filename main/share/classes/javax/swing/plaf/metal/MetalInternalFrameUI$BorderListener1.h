#ifndef _javax_swing_plaf_metal_MetalInternalFrameUI$BorderListener1_h_
#define _javax_swing_plaf_metal_MetalInternalFrameUI$BorderListener1_h_
//$ class javax.swing.plaf.metal.MetalInternalFrameUI$BorderListener1
//$ extends javax.swing.plaf.basic.BasicInternalFrameUI$BorderListener

#include <javax/swing/plaf/basic/BasicInternalFrameUI$BorderListener.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalInternalFrameUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalInternalFrameUI$BorderListener1 : public ::javax::swing::plaf::basic::BasicInternalFrameUI$BorderListener {
	$class(MetalInternalFrameUI$BorderListener1, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicInternalFrameUI$BorderListener)
public:
	MetalInternalFrameUI$BorderListener1();
	void init$(::javax::swing::plaf::metal::MetalInternalFrameUI* this$0);
	virtual ::java::awt::Rectangle* getIconBounds();
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	::javax::swing::plaf::metal::MetalInternalFrameUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalInternalFrameUI$BorderListener1_h_