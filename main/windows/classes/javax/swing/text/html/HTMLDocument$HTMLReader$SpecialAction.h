#ifndef _javax_swing_text_html_HTMLDocument$HTMLReader$SpecialAction_h_
#define _javax_swing_text_html_HTMLDocument$HTMLReader$SpecialAction_h_
//$ class javax.swing.text.html.HTMLDocument$HTMLReader$SpecialAction
//$ extends javax.swing.text.html.HTMLDocument$HTMLReader$TagAction

#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>

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

class $export HTMLDocument$HTMLReader$SpecialAction : public ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction {
	$class(HTMLDocument$HTMLReader$SpecialAction, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction)
public:
	HTMLDocument$HTMLReader$SpecialAction();
	void init$(::javax::swing::text::html::HTMLDocument$HTMLReader* this$1);
	virtual void start(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::MutableAttributeSet* a) override;
	::javax::swing::text::html::HTMLDocument$HTMLReader* this$1 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLDocument$HTMLReader$SpecialAction_h_