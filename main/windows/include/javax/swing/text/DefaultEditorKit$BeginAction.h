#ifndef _javax_swing_text_DefaultEditorKit$BeginAction_h_
#define _javax_swing_text_DefaultEditorKit$BeginAction_h_
//$ class javax.swing.text.DefaultEditorKit$BeginAction
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

class $import DefaultEditorKit$BeginAction : public ::javax::swing::text::TextAction {
	$class(DefaultEditorKit$BeginAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	DefaultEditorKit$BeginAction();
	void init$($String* nm, bool select);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	bool select = false;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultEditorKit$BeginAction_h_