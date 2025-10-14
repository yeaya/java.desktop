#ifndef _javax_swing_text_StyledEditorKit$BoldAction_h_
#define _javax_swing_text_StyledEditorKit$BoldAction_h_
//$ class javax.swing.text.StyledEditorKit$BoldAction
//$ extends javax.swing.text.StyledEditorKit$StyledTextAction

#include <javax/swing/text/StyledEditorKit$StyledTextAction.h>

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

class $import StyledEditorKit$BoldAction : public ::javax::swing::text::StyledEditorKit$StyledTextAction {
	$class(StyledEditorKit$BoldAction, $NO_CLASS_INIT, ::javax::swing::text::StyledEditorKit$StyledTextAction)
public:
	StyledEditorKit$BoldAction();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyledEditorKit$BoldAction_h_