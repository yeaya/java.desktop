#ifndef _javax_swing_text_html_HTMLDocument$HTMLReader$ObjectAction_h_
#define _javax_swing_text_html_HTMLDocument$HTMLReader$ObjectAction_h_
//$ class javax.swing.text.html.HTMLDocument$HTMLReader$ObjectAction
//$ extends javax.swing.text.html.HTMLDocument$HTMLReader$SpecialAction

#include <javax/swing/text/html/HTMLDocument$HTMLReader$SpecialAction.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
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

class $export HTMLDocument$HTMLReader$ObjectAction : public ::javax::swing::text::html::HTMLDocument$HTMLReader$SpecialAction {
	$class(HTMLDocument$HTMLReader$ObjectAction, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLDocument$HTMLReader$SpecialAction)
public:
	HTMLDocument$HTMLReader$ObjectAction();
	void init$(::javax::swing::text::html::HTMLDocument$HTMLReader* this$1);
	virtual void addParameter(::javax::swing::text::AttributeSet* a);
	virtual void end(::javax::swing::text::html::HTML$Tag* t) override;
	virtual void start(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::MutableAttributeSet* a) override;
	::javax::swing::text::html::HTMLDocument$HTMLReader* this$1 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLDocument$HTMLReader$ObjectAction_h_