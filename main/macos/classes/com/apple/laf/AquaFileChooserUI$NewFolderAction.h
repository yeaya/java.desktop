#ifndef _com_apple_laf_AquaFileChooserUI$NewFolderAction_h_
#define _com_apple_laf_AquaFileChooserUI$NewFolderAction_h_
//$ class com.apple.laf.AquaFileChooserUI$NewFolderAction
//$ extends javax.swing.AbstractAction

#include <java/lang/Array.h>
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
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$NewFolderAction : public ::javax::swing::AbstractAction {
	$class(AquaFileChooserUI$NewFolderAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	AquaFileChooserUI$NewFolderAction();
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	$Object* showNewFolderDialog(::java::awt::Component* parentComponent, Object$* message, $String* title, int32_t messageType, ::javax::swing::Icon* icon, $ObjectArray* options, Object$* initialSelectionValue);
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$NewFolderAction_h_