#ifndef _javax_swing_text_StyledEditorKit$ForegroundAction_h_
#define _javax_swing_text_StyledEditorKit$ForegroundAction_h_
//$ class javax.swing.text.StyledEditorKit$ForegroundAction
//$ extends javax.swing.text.StyledEditorKit$StyledTextAction

#include <javax/swing/text/StyledEditorKit$StyledTextAction.h>

namespace java {
	namespace awt {
		class Color;
	}
}
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

class $export StyledEditorKit$ForegroundAction : public ::javax::swing::text::StyledEditorKit$StyledTextAction {
	$class(StyledEditorKit$ForegroundAction, $NO_CLASS_INIT, ::javax::swing::text::StyledEditorKit$StyledTextAction)
public:
	StyledEditorKit$ForegroundAction();
	void init$($String* nm, ::java::awt::Color* fg);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::java::awt::Color* fg = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyledEditorKit$ForegroundAction_h_