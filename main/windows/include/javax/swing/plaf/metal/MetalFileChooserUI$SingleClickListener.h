#ifndef _javax_swing_plaf_metal_MetalFileChooserUI$SingleClickListener_h_
#define _javax_swing_plaf_metal_MetalFileChooserUI$SingleClickListener_h_
//$ class javax.swing.plaf.metal.MetalFileChooserUI$SingleClickListener
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

namespace javax {
	namespace swing {
		class JList;
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

class $import MetalFileChooserUI$SingleClickListener : public ::java::awt::event::MouseAdapter {
	$class(MetalFileChooserUI$SingleClickListener, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	MetalFileChooserUI$SingleClickListener();
	void init$(::javax::swing::plaf::metal::MetalFileChooserUI* this$0, ::javax::swing::JList* list);
	::javax::swing::plaf::metal::MetalFileChooserUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalFileChooserUI$SingleClickListener_h_