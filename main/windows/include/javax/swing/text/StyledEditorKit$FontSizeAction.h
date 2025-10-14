#ifndef _javax_swing_text_StyledEditorKit$FontSizeAction_h_
#define _javax_swing_text_StyledEditorKit$FontSizeAction_h_
//$ class javax.swing.text.StyledEditorKit$FontSizeAction
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

class $import StyledEditorKit$FontSizeAction : public ::javax::swing::text::StyledEditorKit$StyledTextAction {
	$class(StyledEditorKit$FontSizeAction, $NO_CLASS_INIT, ::javax::swing::text::StyledEditorKit$StyledTextAction)
public:
	StyledEditorKit$FontSizeAction();
	void init$($String* nm, int32_t size);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	int32_t size = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyledEditorKit$FontSizeAction_h_