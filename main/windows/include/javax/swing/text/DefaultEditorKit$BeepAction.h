#ifndef _javax_swing_text_DefaultEditorKit$BeepAction_h_
#define _javax_swing_text_DefaultEditorKit$BeepAction_h_
//$ class javax.swing.text.DefaultEditorKit$BeepAction
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

class $import DefaultEditorKit$BeepAction : public ::javax::swing::text::TextAction {
	$class(DefaultEditorKit$BeepAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	DefaultEditorKit$BeepAction();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultEditorKit$BeepAction_h_