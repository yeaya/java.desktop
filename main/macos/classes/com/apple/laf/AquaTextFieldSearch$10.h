#ifndef _com_apple_laf_AquaTextFieldSearch$10_h_
#define _com_apple_laf_AquaTextFieldSearch$10_h_
//$ class com.apple.laf.AquaTextFieldSearch$10
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

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
			class JTextComponent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTextFieldSearch$10 : public ::javax::swing::AbstractAction {
	$class(AquaTextFieldSearch$10, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	AquaTextFieldSearch$10();
	void init$($String* name, ::javax::swing::text::JTextComponent* val$c);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::text::JTextComponent* val$c = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextFieldSearch$10_h_