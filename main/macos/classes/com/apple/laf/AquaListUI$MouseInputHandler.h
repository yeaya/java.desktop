#ifndef _com_apple_laf_AquaListUI$MouseInputHandler_h_
#define _com_apple_laf_AquaListUI$MouseInputHandler_h_
//$ class com.apple.laf.AquaListUI$MouseInputHandler
//$ extends javax.swing.plaf.basic.BasicListUI$MouseInputHandler

#include <javax/swing/plaf/basic/BasicListUI$MouseInputHandler.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaListUI;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaListUI$MouseInputHandler : public ::javax::swing::plaf::basic::BasicListUI$MouseInputHandler {
	$class(AquaListUI$MouseInputHandler, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicListUI$MouseInputHandler)
public:
	AquaListUI$MouseInputHandler();
	void init$(::com::apple::laf::AquaListUI* this$0);
	::com::apple::laf::AquaListUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaListUI$MouseInputHandler_h_