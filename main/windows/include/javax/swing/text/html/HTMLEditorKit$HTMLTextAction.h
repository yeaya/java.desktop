#ifndef _javax_swing_text_html_HTMLEditorKit$HTMLTextAction_h_
#define _javax_swing_text_html_HTMLEditorKit$HTMLTextAction_h_
//$ class javax.swing.text.html.HTMLEditorKit$HTMLTextAction
//$ extends javax.swing.text.StyledEditorKit$StyledTextAction

#include <java/lang/Array.h>
#include <javax/swing/text/StyledEditorKit$StyledTextAction.h>

namespace javax {
	namespace swing {
		class JEditorPane;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTML$Tag;
				class HTMLDocument;
				class HTMLEditorKit;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import HTMLEditorKit$HTMLTextAction : public ::javax::swing::text::StyledEditorKit$StyledTextAction {
	$class(HTMLEditorKit$HTMLTextAction, $NO_CLASS_INIT, ::javax::swing::text::StyledEditorKit$StyledTextAction)
public:
	HTMLEditorKit$HTMLTextAction();
	void init$($String* name);
	virtual int32_t elementCountToTag(::javax::swing::text::html::HTMLDocument* doc, int32_t offset, ::javax::swing::text::html::HTML$Tag* tag);
	virtual ::javax::swing::text::Element* findElementMatchingTag(::javax::swing::text::html::HTMLDocument* doc, int32_t offset, ::javax::swing::text::html::HTML$Tag* tag);
	virtual $Array<::javax::swing::text::Element>* getElementsAt(::javax::swing::text::html::HTMLDocument* doc, int32_t offset);
	$Array<::javax::swing::text::Element>* getElementsAt(::javax::swing::text::Element* parent, int32_t offset, int32_t depth);
	virtual ::javax::swing::text::html::HTMLDocument* getHTMLDocument(::javax::swing::JEditorPane* e);
	virtual ::javax::swing::text::html::HTMLEditorKit* getHTMLEditorKit(::javax::swing::JEditorPane* e);
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLEditorKit$HTMLTextAction_h_