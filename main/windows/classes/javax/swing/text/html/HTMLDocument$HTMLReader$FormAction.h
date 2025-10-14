#ifndef _javax_swing_text_html_HTMLDocument$HTMLReader$FormAction_h_
#define _javax_swing_text_html_HTMLDocument$HTMLReader$FormAction_h_
//$ class javax.swing.text.html.HTMLDocument$HTMLReader$FormAction
//$ extends javax.swing.text.html.HTMLDocument$HTMLReader$SpecialAction

#include <javax/swing/text/html/HTMLDocument$HTMLReader$SpecialAction.h>

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

class $export HTMLDocument$HTMLReader$FormAction : public ::javax::swing::text::html::HTMLDocument$HTMLReader$SpecialAction {
	$class(HTMLDocument$HTMLReader$FormAction, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLDocument$HTMLReader$SpecialAction)
public:
	HTMLDocument$HTMLReader$FormAction();
	void init$(::javax::swing::text::html::HTMLDocument$HTMLReader* this$1);
	virtual void end(::javax::swing::text::html::HTML$Tag* t) override;
	virtual void setModel($String* type, ::javax::swing::text::MutableAttributeSet* attr);
	virtual void start(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::MutableAttributeSet* attr) override;
	::javax::swing::text::html::HTMLDocument$HTMLReader* this$1 = nullptr;
	$Object* selectModel = nullptr;
	int32_t optionCount = 0;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLDocument$HTMLReader$FormAction_h_