#ifndef _com_apple_laf_AquaMenuUI$AquaMouseInputHandler_h_
#define _com_apple_laf_AquaMenuUI$AquaMouseInputHandler_h_
//$ class com.apple.laf.AquaMenuUI$AquaMouseInputHandler
//$ extends javax.swing.plaf.basic.BasicMenuUI$MouseInputHandler

#include <javax/swing/plaf/basic/BasicMenuUI$MouseInputHandler.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaMenuUI;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaMenuUI$AquaMouseInputHandler : public ::javax::swing::plaf::basic::BasicMenuUI$MouseInputHandler {
	$class(AquaMenuUI$AquaMouseInputHandler, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicMenuUI$MouseInputHandler)
public:
	AquaMenuUI$AquaMouseInputHandler();
	void init$(::com::apple::laf::AquaMenuUI* this$0);
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	::com::apple::laf::AquaMenuUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaMenuUI$AquaMouseInputHandler_h_