#ifndef _javax_swing_text_html_HTMLDocument$HTMLReader$ParagraphAction_h_
#define _javax_swing_text_html_HTMLDocument$HTMLReader$ParagraphAction_h_
//$ class javax.swing.text.html.HTMLDocument$HTMLReader$ParagraphAction
//$ extends javax.swing.text.html.HTMLDocument$HTMLReader$BlockAction

#include <javax/swing/text/html/HTMLDocument$HTMLReader$BlockAction.h>

namespace javax {
	namespace swing {
		namespace text {
			class MutableAttributeSet;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTML$Tag;
				class HTMLDocument$HTMLReader;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import HTMLDocument$HTMLReader$ParagraphAction : public ::javax::swing::text::html::HTMLDocument$HTMLReader$BlockAction {
	$class(HTMLDocument$HTMLReader$ParagraphAction, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLDocument$HTMLReader$BlockAction)
public:
	HTMLDocument$HTMLReader$ParagraphAction();
	void init$(::javax::swing::text::html::HTMLDocument$HTMLReader* this$1);
	virtual void end(::javax::swing::text::html::HTML$Tag* t) override;
	virtual void start(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::MutableAttributeSet* a) override;
	::javax::swing::text::html::HTMLDocument$HTMLReader* this$1 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLDocument$HTMLReader$ParagraphAction_h_