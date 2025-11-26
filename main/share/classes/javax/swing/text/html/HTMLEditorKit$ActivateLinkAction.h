#ifndef _javax_swing_text_html_HTMLEditorKit$ActivateLinkAction_h_
#define _javax_swing_text_html_HTMLEditorKit$ActivateLinkAction_h_
//$ class javax.swing.text.html.HTMLEditorKit$ActivateLinkAction
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
		class JEditorPane;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class View;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTMLDocument;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export HTMLEditorKit$ActivateLinkAction : public ::javax::swing::text::TextAction {
	$class(HTMLEditorKit$ActivateLinkAction, $NO_CLASS_INIT, ::javax::swing::text::TextAction)
public:
	HTMLEditorKit$ActivateLinkAction();
	void init$($String* actionName);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	void activateLink($String* href, ::javax::swing::text::html::HTMLDocument* doc, ::javax::swing::JEditorPane* editor, int32_t offset);
	void doObjectAction(::javax::swing::JEditorPane* editor, ::javax::swing::text::Element* elem);
	::javax::swing::text::View* getRootView(::javax::swing::JEditorPane* editor);
	::javax::swing::text::View* getView(::javax::swing::JEditorPane* editor, ::javax::swing::text::Element* elem);
	::javax::swing::text::View* getView(::javax::swing::text::View* parent, ::javax::swing::text::Element* elem, int32_t start);
	$Object* lock(::javax::swing::JEditorPane* editor);
	void unlock(Object$* key);
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLEditorKit$ActivateLinkAction_h_