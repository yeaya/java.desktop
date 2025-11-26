#ifndef _javax_swing_text_html_HTMLDocument$HTMLReader$TagAction_h_
#define _javax_swing_text_html_HTMLDocument$HTMLReader$TagAction_h_
//$ class javax.swing.text.html.HTMLDocument$HTMLReader$TagAction
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import HTMLDocument$HTMLReader$TagAction : public ::java::lang::Object {
	$class(HTMLDocument$HTMLReader$TagAction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HTMLDocument$HTMLReader$TagAction();
	void init$(::javax::swing::text::html::HTMLDocument$HTMLReader* this$1);
	virtual void end(::javax::swing::text::html::HTML$Tag* t);
	virtual void start(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::MutableAttributeSet* a);
	::javax::swing::text::html::HTMLDocument$HTMLReader* this$1 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLDocument$HTMLReader$TagAction_h_