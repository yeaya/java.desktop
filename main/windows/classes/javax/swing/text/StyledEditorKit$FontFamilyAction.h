#ifndef _javax_swing_text_StyledEditorKit$FontFamilyAction_h_
#define _javax_swing_text_StyledEditorKit$FontFamilyAction_h_
//$ class javax.swing.text.StyledEditorKit$FontFamilyAction
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

class $export StyledEditorKit$FontFamilyAction : public ::javax::swing::text::StyledEditorKit$StyledTextAction {
	$class(StyledEditorKit$FontFamilyAction, $NO_CLASS_INIT, ::javax::swing::text::StyledEditorKit$StyledTextAction)
public:
	StyledEditorKit$FontFamilyAction();
	void init$($String* nm, $String* family);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	$String* family = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyledEditorKit$FontFamilyAction_h_