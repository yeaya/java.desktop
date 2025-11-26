#ifndef _javax_swing_text_DefaultEditorKit$ReadOnlyAction_h_
#define _javax_swing_text_DefaultEditorKit$ReadOnlyAction_h_
//$ class javax.swing.text.DefaultEditorKit$ReadOnlyAction
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

class $import DefaultEditorKit$ReadOnlyAction : public ::javax::swing::text::TextAction {
	$class(DefaultEditorKit$ReadOnlyAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	DefaultEditorKit$ReadOnlyAction();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultEditorKit$ReadOnlyAction_h_