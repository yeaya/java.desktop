#ifndef _com_apple_laf_AquaTableUI$MouseInputHandler_h_
#define _com_apple_laf_AquaTableUI$MouseInputHandler_h_
//$ class com.apple.laf.AquaTableUI$MouseInputHandler
//$ extends javax.swing.plaf.basic.BasicTableUI$MouseInputHandler

#include <javax/swing/plaf/basic/BasicTableUI$MouseInputHandler.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTableUI;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTableUI$MouseInputHandler : public ::javax::swing::plaf::basic::BasicTableUI$MouseInputHandler {
	$class(AquaTableUI$MouseInputHandler, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTableUI$MouseInputHandler)
public:
	AquaTableUI$MouseInputHandler();
	void init$(::com::apple::laf::AquaTableUI* this$0);
	::com::apple::laf::AquaTableUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTableUI$MouseInputHandler_h_