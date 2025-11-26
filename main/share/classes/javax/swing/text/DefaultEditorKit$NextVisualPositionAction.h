#ifndef _javax_swing_text_DefaultEditorKit$NextVisualPositionAction_h_
#define _javax_swing_text_DefaultEditorKit$NextVisualPositionAction_h_
//$ class javax.swing.text.DefaultEditorKit$NextVisualPositionAction
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

class $export DefaultEditorKit$NextVisualPositionAction : public ::javax::swing::text::TextAction {
	$class(DefaultEditorKit$NextVisualPositionAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	DefaultEditorKit$NextVisualPositionAction();
	void init$($String* nm, bool select, int32_t direction);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	bool select = false;
	int32_t direction = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultEditorKit$NextVisualPositionAction_h_