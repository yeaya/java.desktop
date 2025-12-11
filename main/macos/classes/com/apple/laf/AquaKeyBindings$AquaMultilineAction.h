#ifndef _com_apple_laf_AquaKeyBindings$AquaMultilineAction_h_
#define _com_apple_laf_AquaKeyBindings$AquaMultilineAction_h_
//$ class com.apple.laf.AquaKeyBindings$AquaMultilineAction
//$ extends javax.swing.text.TextAction

#include <javax/swing/text/TextAction.h>

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

class AquaKeyBindings$AquaMultilineAction : public ::javax::swing::text::TextAction {
	$class(AquaKeyBindings$AquaMultilineAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	AquaKeyBindings$AquaMultilineAction();
	void init$($String* actionName, $String* targetActionName, $String* proxyActionName);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	$String* targetActionName = nullptr;
	$String* proxyActionName = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaKeyBindings$AquaMultilineAction_h_