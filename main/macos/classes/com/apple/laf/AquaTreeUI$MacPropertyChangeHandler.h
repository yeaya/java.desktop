#ifndef _com_apple_laf_AquaTreeUI$MacPropertyChangeHandler_h_
#define _com_apple_laf_AquaTreeUI$MacPropertyChangeHandler_h_
//$ class com.apple.laf.AquaTreeUI$MacPropertyChangeHandler
//$ extends javax.swing.plaf.basic.BasicTreeUI$PropertyChangeHandler

#include <javax/swing/plaf/basic/BasicTreeUI$PropertyChangeHandler.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTreeUI;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTreeUI$MacPropertyChangeHandler : public ::javax::swing::plaf::basic::BasicTreeUI$PropertyChangeHandler {
	$class(AquaTreeUI$MacPropertyChangeHandler, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTreeUI$PropertyChangeHandler)
public:
	AquaTreeUI$MacPropertyChangeHandler();
	void init$(::com::apple::laf::AquaTreeUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::com::apple::laf::AquaTreeUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTreeUI$MacPropertyChangeHandler_h_