#ifndef _javax_swing_plaf_metal_MetalFileChooserUI$4_h_
#define _javax_swing_plaf_metal_MetalFileChooserUI$4_h_
//$ class javax.swing.plaf.metal.MetalFileChooserUI$4
//$ extends java.awt.event.FocusAdapter

#include <java/awt/event/FocusAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalFileChooserUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalFileChooserUI$4 : public ::java::awt::event::FocusAdapter {
	$class(MetalFileChooserUI$4, $NO_CLASS_INIT, ::java::awt::event::FocusAdapter)
public:
	MetalFileChooserUI$4();
	void init$(::javax::swing::plaf::metal::MetalFileChooserUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	::javax::swing::plaf::metal::MetalFileChooserUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalFileChooserUI$4_h_