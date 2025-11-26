#ifndef _javax_swing_text_DefaultEditorKit$InsertTabAction_h_
#define _javax_swing_text_DefaultEditorKit$InsertTabAction_h_
//$ class javax.swing.text.DefaultEditorKit$InsertTabAction
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

class $export DefaultEditorKit$InsertTabAction : public ::javax::swing::text::TextAction {
	$class(DefaultEditorKit$InsertTabAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	DefaultEditorKit$InsertTabAction();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultEditorKit$InsertTabAction_h_