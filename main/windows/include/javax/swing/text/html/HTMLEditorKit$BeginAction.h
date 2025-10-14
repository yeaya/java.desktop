#ifndef _javax_swing_text_html_HTMLEditorKit$BeginAction_h_
#define _javax_swing_text_html_HTMLEditorKit$BeginAction_h_
//$ class javax.swing.text.html.HTMLEditorKit$BeginAction
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
			namespace html {

class $import HTMLEditorKit$BeginAction : public ::javax::swing::text::TextAction {
	$class(HTMLEditorKit$BeginAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	HTMLEditorKit$BeginAction();
	void init$($String* nm, bool select);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	bool select = false;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLEditorKit$BeginAction_h_