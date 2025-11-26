#ifndef _javax_swing_plaf_metal_MetalToolBarUI$MetalDockingListener_h_
#define _javax_swing_plaf_metal_MetalToolBarUI$MetalDockingListener_h_
//$ class javax.swing.plaf.metal.MetalToolBarUI$MetalDockingListener
//$ extends javax.swing.plaf.basic.BasicToolBarUI$DockingListener

#include <javax/swing/plaf/basic/BasicToolBarUI$DockingListener.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JToolBar;
	}
}
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

class $import MetalToolBarUI$MetalDockingListener : public ::javax::swing::plaf::basic::BasicToolBarUI$DockingListener {
	$class(MetalToolBarUI$MetalDockingListener, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicToolBarUI$DockingListener)
public:
	MetalToolBarUI$MetalDockingListener();
	void init$(::javax::swing::plaf::metal::MetalToolBarUI* this$0, ::javax::swing::JToolBar* t);
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	::javax::swing::plaf::metal::MetalToolBarUI* this$0 = nullptr;
	bool pressedInBumps = false;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalToolBarUI$MetalDockingListener_h_