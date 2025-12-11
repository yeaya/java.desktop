#ifndef _com_apple_laf_AquaKeyBindings$DeleteWordAction_h_
#define _com_apple_laf_AquaKeyBindings$DeleteWordAction_h_
//$ class com.apple.laf.AquaKeyBindings$DeleteWordAction
//$ extends javax.swing.text.TextAction

#include <javax/swing/text/TextAction.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class JTextComponent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaKeyBindings$DeleteWordAction : public ::javax::swing::text::TextAction {
	$class(AquaKeyBindings$DeleteWordAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	AquaKeyBindings$DeleteWordAction();
	void init$($String* name);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual int32_t getEnd(::javax::swing::text::JTextComponent* target, ::javax::swing::text::Element* line, int32_t start) {return 0;}
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaKeyBindings$DeleteWordAction_h_