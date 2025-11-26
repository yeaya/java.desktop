#ifndef _javax_swing_plaf_metal_MetalTitlePane$WindowHandler_h_
#define _javax_swing_plaf_metal_MetalTitlePane$WindowHandler_h_
//$ class javax.swing.plaf.metal.MetalTitlePane$WindowHandler
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
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

class MetalTitlePane$WindowHandler : public ::java::awt::event::WindowAdapter {
	$class(MetalTitlePane$WindowHandler, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	MetalTitlePane$WindowHandler();
	void init$(::javax::swing::plaf::metal::MetalTitlePane* this$0);
	virtual void windowActivated(::java::awt::event::WindowEvent* ev) override;
	virtual void windowDeactivated(::java::awt::event::WindowEvent* ev) override;
	::javax::swing::plaf::metal::MetalTitlePane* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalTitlePane$WindowHandler_h_