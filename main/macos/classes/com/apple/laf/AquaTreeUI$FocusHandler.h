#ifndef _com_apple_laf_AquaTreeUI$FocusHandler_h_
#define _com_apple_laf_AquaTreeUI$FocusHandler_h_
//$ class com.apple.laf.AquaTreeUI$FocusHandler
//$ extends javax.swing.plaf.basic.BasicTreeUI$FocusHandler

#include <javax/swing/plaf/basic/BasicTreeUI$FocusHandler.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTreeUI;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTreeUI$FocusHandler : public ::javax::swing::plaf::basic::BasicTreeUI$FocusHandler {
	$class(AquaTreeUI$FocusHandler, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTreeUI$FocusHandler)
public:
	AquaTreeUI$FocusHandler();
	void init$(::com::apple::laf::AquaTreeUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::com::apple::laf::AquaTreeUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTreeUI$FocusHandler_h_