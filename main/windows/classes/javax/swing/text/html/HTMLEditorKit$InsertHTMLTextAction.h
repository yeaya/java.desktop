#ifndef _javax_swing_text_html_HTMLEditorKit$InsertHTMLTextAction_h_
#define _javax_swing_text_html_HTMLEditorKit$InsertHTMLTextAction_h_
//$ class javax.swing.text.html.HTMLEditorKit$InsertHTMLTextAction
//$ extends javax.swing.text.html.HTMLEditorKit$HTMLTextAction

#include <javax/swing/text/html/HTMLEditorKit$HTMLTextAction.h>

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
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTML$Tag;
				class HTMLDocument;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export HTMLEditorKit$InsertHTMLTextAction : public ::javax::swing::text::html::HTMLEditorKit$HTMLTextAction {
	$class(HTMLEditorKit$InsertHTMLTextAction, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLEditorKit$HTMLTextAction)
public:
	HTMLEditorKit$InsertHTMLTextAction();
	void init$($String* name, $String* html, ::javax::swing::text::html::HTML$Tag* parentTag, ::javax::swing::text::html::HTML$Tag* addTag);
	void init$($String* name, $String* html, ::javax::swing::text::html::HTML$Tag* parentTag, ::javax::swing::text::html::HTML$Tag* addTag, ::javax::swing::text::html::HTML$Tag* alternateParentTag, ::javax::swing::text::html::HTML$Tag* alternateAddTag);
	void init$($String* name, $String* html, ::javax::swing::text::html::HTML$Tag* parentTag, ::javax::swing::text::html::HTML$Tag* addTag, ::javax::swing::text::html::HTML$Tag* alternateParentTag, ::javax::swing::text::html::HTML$Tag* alternateAddTag, bool adjustSelection);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	virtual void adjustSelection(::javax::swing::JEditorPane* pane, ::javax::swing::text::html::HTMLDocument* doc, int32_t startOffset, int32_t oldLength);
	virtual void insertAtBoundary(::javax::swing::JEditorPane* editor, ::javax::swing::text::html::HTMLDocument* doc, int32_t offset, ::javax::swing::text::Element* insertElement, $String* html, ::javax::swing::text::html::HTML$Tag* parentTag, ::javax::swing::text::html::HTML$Tag* addTag);
	virtual void insertAtBoundry(::javax::swing::JEditorPane* editor, ::javax::swing::text::html::HTMLDocument* doc, int32_t offset, ::javax::swing::text::Element* insertElement, $String* html, ::javax::swing::text::html::HTML$Tag* parentTag, ::javax::swing::text::html::HTML$Tag* addTag);
	virtual void insertHTML(::javax::swing::JEditorPane* editor, ::javax::swing::text::html::HTMLDocument* doc, int32_t offset, $String* html, int32_t popDepth, int32_t pushDepth, ::javax::swing::text::html::HTML$Tag* addTag);
	virtual bool insertIntoTag(::javax::swing::JEditorPane* editor, ::javax::swing::text::html::HTMLDocument* doc, int32_t offset, ::javax::swing::text::html::HTML$Tag* tag, ::javax::swing::text::html::HTML$Tag* addTag);
	$String* html = nullptr;
	::javax::swing::text::html::HTML$Tag* parentTag = nullptr;
	::javax::swing::text::html::HTML$Tag* addTag = nullptr;
	::javax::swing::text::html::HTML$Tag* alternateParentTag = nullptr;
	::javax::swing::text::html::HTML$Tag* alternateAddTag = nullptr;
	bool adjustSelection$ = false;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLEditorKit$InsertHTMLTextAction_h_