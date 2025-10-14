#ifndef _javax_swing_text_TextAction_h_
#define _javax_swing_text_TextAction_h_
//$ class javax.swing.text.TextAction
//$ extends javax.swing.AbstractAction

#include <java/lang/Array.h>
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
		class Action;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export TextAction : public ::javax::swing::AbstractAction {
	$class(TextAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	TextAction();
	void init$($String* name);
	static $Array<::javax::swing::Action>* augmentList($Array<::javax::swing::Action>* list1, $Array<::javax::swing::Action>* list2);
	::javax::swing::text::JTextComponent* getFocusedComponent();
	::javax::swing::text::JTextComponent* getTextComponent(::java::awt::event::ActionEvent* e);
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_TextAction_h_