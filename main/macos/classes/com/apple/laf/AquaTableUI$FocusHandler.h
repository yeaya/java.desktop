#ifndef _com_apple_laf_AquaTableUI$FocusHandler_h_
#define _com_apple_laf_AquaTableUI$FocusHandler_h_
//$ class com.apple.laf.AquaTableUI$FocusHandler
//$ extends javax.swing.plaf.basic.BasicTableUI$FocusHandler

#include <javax/swing/plaf/basic/BasicTableUI$FocusHandler.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTableUI;
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

class AquaTableUI$FocusHandler : public ::javax::swing::plaf::basic::BasicTableUI$FocusHandler {
	$class(AquaTableUI$FocusHandler, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTableUI$FocusHandler)
public:
	AquaTableUI$FocusHandler();
	void init$(::com::apple::laf::AquaTableUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::com::apple::laf::AquaTableUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTableUI$FocusHandler_h_