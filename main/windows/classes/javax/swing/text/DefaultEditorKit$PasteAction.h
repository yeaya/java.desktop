#ifndef _javax_swing_text_DefaultEditorKit$PasteAction_h_
#define _javax_swing_text_DefaultEditorKit$PasteAction_h_
//$ class javax.swing.text.DefaultEditorKit$PasteAction
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

class $export DefaultEditorKit$PasteAction : public ::javax::swing::text::TextAction {
	$class(DefaultEditorKit$PasteAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	DefaultEditorKit$PasteAction();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultEditorKit$PasteAction_h_