#ifndef _javax_swing_text_DefaultEditorKit$EndAction_h_
#define _javax_swing_text_DefaultEditorKit$EndAction_h_
//$ class javax.swing.text.DefaultEditorKit$EndAction
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

class $export DefaultEditorKit$EndAction : public ::javax::swing::text::TextAction {
	$class(DefaultEditorKit$EndAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	DefaultEditorKit$EndAction();
	void init$($String* nm, bool select);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	bool select = false;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultEditorKit$EndAction_h_