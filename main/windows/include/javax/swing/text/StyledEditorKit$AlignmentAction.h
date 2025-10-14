#ifndef _javax_swing_text_StyledEditorKit$AlignmentAction_h_
#define _javax_swing_text_StyledEditorKit$AlignmentAction_h_
//$ class javax.swing.text.StyledEditorKit$AlignmentAction
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

class $import StyledEditorKit$AlignmentAction : public ::javax::swing::text::StyledEditorKit$StyledTextAction {
	$class(StyledEditorKit$AlignmentAction, $NO_CLASS_INIT, ::javax::swing::text::StyledEditorKit$StyledTextAction)
public:
	StyledEditorKit$AlignmentAction();
	void init$($String* nm, int32_t a);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	int32_t a = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyledEditorKit$AlignmentAction_h_