#ifndef _javax_swing_text_DefaultEditorKit$SelectAllAction_h_
#define _javax_swing_text_DefaultEditorKit$SelectAllAction_h_
//$ class javax.swing.text.DefaultEditorKit$SelectAllAction
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

class $import DefaultEditorKit$SelectAllAction : public ::javax::swing::text::TextAction {
	$class(DefaultEditorKit$SelectAllAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	DefaultEditorKit$SelectAllAction();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultEditorKit$SelectAllAction_h_