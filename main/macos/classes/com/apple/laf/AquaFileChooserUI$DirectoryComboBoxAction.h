#ifndef _com_apple_laf_AquaFileChooserUI$DirectoryComboBoxAction_h_
#define _com_apple_laf_AquaFileChooserUI$DirectoryComboBoxAction_h_
//$ class com.apple.laf.AquaFileChooserUI$DirectoryComboBoxAction
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

class AquaFileChooserUI$DirectoryComboBoxAction : public ::javax::swing::AbstractAction {
	$class(AquaFileChooserUI$DirectoryComboBoxAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	AquaFileChooserUI$DirectoryComboBoxAction();
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$DirectoryComboBoxAction_h_