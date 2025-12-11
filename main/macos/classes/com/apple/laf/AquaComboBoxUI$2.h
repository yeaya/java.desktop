#ifndef _com_apple_laf_AquaComboBoxUI$2_h_
#define _com_apple_laf_AquaComboBoxUI$2_h_
//$ class com.apple.laf.AquaComboBoxUI$2
//$ extends javax.swing.plaf.basic.BasicComboBoxUI$FocusHandler

#include <javax/swing/plaf/basic/BasicComboBoxUI$FocusHandler.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaComboBoxUI;
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

class AquaComboBoxUI$2 : public ::javax::swing::plaf::basic::BasicComboBoxUI$FocusHandler {
	$class(AquaComboBoxUI$2, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboBoxUI$FocusHandler)
public:
	AquaComboBoxUI$2();
	void init$(::com::apple::laf::AquaComboBoxUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::com::apple::laf::AquaComboBoxUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxUI$2_h_