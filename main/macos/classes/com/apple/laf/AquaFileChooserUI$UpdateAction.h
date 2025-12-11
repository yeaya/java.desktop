#ifndef _com_apple_laf_AquaFileChooserUI$UpdateAction_h_
#define _com_apple_laf_AquaFileChooserUI$UpdateAction_h_
//$ class com.apple.laf.AquaFileChooserUI$UpdateAction
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$UpdateAction : public ::javax::swing::AbstractAction {
	$class(AquaFileChooserUI$UpdateAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	AquaFileChooserUI$UpdateAction();
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$UpdateAction_h_