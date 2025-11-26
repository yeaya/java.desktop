#ifndef _javax_swing_text_DefaultEditorKit$ToggleComponentOrientationAction_h_
#define _javax_swing_text_DefaultEditorKit$ToggleComponentOrientationAction_h_
//$ class javax.swing.text.DefaultEditorKit$ToggleComponentOrientationAction
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

class $export DefaultEditorKit$ToggleComponentOrientationAction : public ::javax::swing::text::TextAction {
	$class(DefaultEditorKit$ToggleComponentOrientationAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	DefaultEditorKit$ToggleComponentOrientationAction();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultEditorKit$ToggleComponentOrientationAction_h_