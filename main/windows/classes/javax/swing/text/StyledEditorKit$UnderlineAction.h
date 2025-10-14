#ifndef _javax_swing_text_StyledEditorKit$UnderlineAction_h_
#define _javax_swing_text_StyledEditorKit$UnderlineAction_h_
//$ class javax.swing.text.StyledEditorKit$UnderlineAction
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

class $export StyledEditorKit$UnderlineAction : public ::javax::swing::text::StyledEditorKit$StyledTextAction {
	$class(StyledEditorKit$UnderlineAction, $NO_CLASS_INIT, ::javax::swing::text::StyledEditorKit$StyledTextAction)
public:
	StyledEditorKit$UnderlineAction();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyledEditorKit$UnderlineAction_h_