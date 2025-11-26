#ifndef _javax_swing_plaf_metal_MetalDesktopIconUI$1_h_
#define _javax_swing_plaf_metal_MetalDesktopIconUI$1_h_
//$ class javax.swing.plaf.metal.MetalDesktopIconUI$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalDesktopIconUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalDesktopIconUI$1 : public ::java::awt::event::ActionListener {
	$class(MetalDesktopIconUI$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	MetalDesktopIconUI$1();
	void init$(::javax::swing::plaf::metal::MetalDesktopIconUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::plaf::metal::MetalDesktopIconUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalDesktopIconUI$1_h_