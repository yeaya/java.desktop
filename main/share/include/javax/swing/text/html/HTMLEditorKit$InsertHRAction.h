#ifndef _javax_swing_text_html_HTMLEditorKit$InsertHRAction_h_
#define _javax_swing_text_html_HTMLEditorKit$InsertHRAction_h_
//$ class javax.swing.text.html.HTMLEditorKit$InsertHRAction
//$ extends javax.swing.text.html.HTMLEditorKit$InsertHTMLTextAction

#include <javax/swing/text/html/HTMLEditorKit$InsertHTMLTextAction.h>

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

class $import HTMLEditorKit$InsertHRAction : public ::javax::swing::text::html::HTMLEditorKit$InsertHTMLTextAction {
	$class(HTMLEditorKit$InsertHRAction, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLEditorKit$InsertHTMLTextAction)
public:
	HTMLEditorKit$InsertHRAction();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLEditorKit$InsertHRAction_h_