#ifndef _com_apple_laf_AquaTreeUI$KeyboardExpandCollapseAction_h_
#define _com_apple_laf_AquaTreeUI$KeyboardExpandCollapseAction_h_
//$ class com.apple.laf.AquaTreeUI$KeyboardExpandCollapseAction
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTreeUI;
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

class AquaTreeUI$KeyboardExpandCollapseAction : public ::javax::swing::AbstractAction {
	$class(AquaTreeUI$KeyboardExpandCollapseAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	AquaTreeUI$KeyboardExpandCollapseAction();
	void init$(::com::apple::laf::AquaTreeUI* this$0, bool expand, bool recursive);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual bool isEnabled() override;
	::com::apple::laf::AquaTreeUI* this$0 = nullptr;
	bool expand = false;
	bool recursive = false;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTreeUI$KeyboardExpandCollapseAction_h_