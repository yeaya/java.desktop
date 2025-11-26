#ifndef _javax_swing_text_DefaultEditorKit$CopyAction_h_
#define _javax_swing_text_DefaultEditorKit$CopyAction_h_
//$ class javax.swing.text.DefaultEditorKit$CopyAction
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

class $export DefaultEditorKit$CopyAction : public ::javax::swing::text::TextAction {
	$class(DefaultEditorKit$CopyAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	DefaultEditorKit$CopyAction();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultEditorKit$CopyAction_h_