#ifndef _javax_swing_text_DefaultEditorKit$DeleteWordAction_h_
#define _javax_swing_text_DefaultEditorKit$DeleteWordAction_h_
//$ class javax.swing.text.DefaultEditorKit$DeleteWordAction
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

class $import DefaultEditorKit$DeleteWordAction : public ::javax::swing::text::TextAction {
	$class(DefaultEditorKit$DeleteWordAction, 0, ::javax::swing::text::TextAction)
public:
	DefaultEditorKit$DeleteWordAction();
	void init$($String* name);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	static bool $assertionsDisabled;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultEditorKit$DeleteWordAction_h_