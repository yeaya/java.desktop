#ifndef _javax_swing_text_DefaultEditorKit$PageAction_h_
#define _javax_swing_text_DefaultEditorKit$PageAction_h_
//$ class javax.swing.text.DefaultEditorKit$PageAction
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

class $export DefaultEditorKit$PageAction : public ::javax::swing::text::TextAction {
	$class(DefaultEditorKit$PageAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	DefaultEditorKit$PageAction();
	void init$($String* nm, bool left, bool select);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	bool select = false;
	bool left = false;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultEditorKit$PageAction_h_