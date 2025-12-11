#ifndef _com_apple_laf_AquaListUI$FocusHandler_h_
#define _com_apple_laf_AquaListUI$FocusHandler_h_
//$ class com.apple.laf.AquaListUI$FocusHandler
//$ extends javax.swing.plaf.basic.BasicListUI$FocusHandler

#include <javax/swing/plaf/basic/BasicListUI$FocusHandler.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaListUI;
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

class AquaListUI$FocusHandler : public ::javax::swing::plaf::basic::BasicListUI$FocusHandler {
	$class(AquaListUI$FocusHandler, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicListUI$FocusHandler)
public:
	AquaListUI$FocusHandler();
	void init$(::com::apple::laf::AquaListUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::com::apple::laf::AquaListUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaListUI$FocusHandler_h_