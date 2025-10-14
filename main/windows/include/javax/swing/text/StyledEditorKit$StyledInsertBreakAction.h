#ifndef _javax_swing_text_StyledEditorKit$StyledInsertBreakAction_h_
#define _javax_swing_text_StyledEditorKit$StyledInsertBreakAction_h_
//$ class javax.swing.text.StyledEditorKit$StyledInsertBreakAction
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
			class SimpleAttributeSet;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import StyledEditorKit$StyledInsertBreakAction : public ::javax::swing::text::StyledEditorKit$StyledTextAction {
	$class(StyledEditorKit$StyledInsertBreakAction, $NO_CLASS_INIT, ::javax::swing::text::StyledEditorKit$StyledTextAction)
public:
	StyledEditorKit$StyledInsertBreakAction();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::text::SimpleAttributeSet* tempSet = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyledEditorKit$StyledInsertBreakAction_h_