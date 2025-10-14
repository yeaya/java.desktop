#ifndef _javax_swing_plaf_metal_MetalTitlePane$MaximizeAction_h_
#define _javax_swing_plaf_metal_MetalTitlePane$MaximizeAction_h_
//$ class javax.swing.plaf.metal.MetalTitlePane$MaximizeAction
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

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
				class MetalTitlePane;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalTitlePane$MaximizeAction : public ::javax::swing::AbstractAction {
	$class(MetalTitlePane$MaximizeAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	MetalTitlePane$MaximizeAction();
	void init$(::javax::swing::plaf::metal::MetalTitlePane* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::plaf::metal::MetalTitlePane* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalTitlePane$MaximizeAction_h_