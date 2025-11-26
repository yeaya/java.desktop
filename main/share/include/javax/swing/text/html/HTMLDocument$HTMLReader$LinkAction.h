#ifndef _javax_swing_text_html_HTMLDocument$HTMLReader$LinkAction_h_
#define _javax_swing_text_html_HTMLDocument$HTMLReader$LinkAction_h_
//$ class javax.swing.text.html.HTMLDocument$HTMLReader$LinkAction
//$ extends javax.swing.text.html.HTMLDocument$HTMLReader$HiddenAction

#include <javax/swing/text/html/HTMLDocument$HTMLReader$HiddenAction.h>

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

class $import HTMLDocument$HTMLReader$LinkAction : public ::javax::swing::text::html::HTMLDocument$HTMLReader$HiddenAction {
	$class(HTMLDocument$HTMLReader$LinkAction, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLDocument$HTMLReader$HiddenAction)
public:
	HTMLDocument$HTMLReader$LinkAction();
	void init$(::javax::swing::text::html::HTMLDocument$HTMLReader* this$1);
	virtual void start(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::MutableAttributeSet* a) override;
	::javax::swing::text::html::HTMLDocument$HTMLReader* this$1 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLDocument$HTMLReader$LinkAction_h_