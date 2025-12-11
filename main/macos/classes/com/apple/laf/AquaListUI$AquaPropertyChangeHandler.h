#ifndef _com_apple_laf_AquaListUI$AquaPropertyChangeHandler_h_
#define _com_apple_laf_AquaListUI$AquaPropertyChangeHandler_h_
//$ class com.apple.laf.AquaListUI$AquaPropertyChangeHandler
//$ extends javax.swing.plaf.basic.BasicListUI$PropertyChangeHandler

#include <javax/swing/plaf/basic/BasicListUI$PropertyChangeHandler.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaListUI;
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

class AquaListUI$AquaPropertyChangeHandler : public ::javax::swing::plaf::basic::BasicListUI$PropertyChangeHandler {
	$class(AquaListUI$AquaPropertyChangeHandler, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicListUI$PropertyChangeHandler)
public:
	AquaListUI$AquaPropertyChangeHandler();
	void init$(::com::apple::laf::AquaListUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::com::apple::laf::AquaListUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaListUI$AquaPropertyChangeHandler_h_