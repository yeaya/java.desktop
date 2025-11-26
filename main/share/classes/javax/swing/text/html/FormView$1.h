#ifndef _javax_swing_text_html_FormView$1_h_
#define _javax_swing_text_html_FormView$1_h_
//$ class javax.swing.text.html.FormView$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace net {
		class URL;
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
			namespace html {
				class FormSubmitEvent;
				class FormView;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class FormView$1 : public ::java::lang::Runnable {
	$class(FormView$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	FormView$1();
	void init$(::javax::swing::text::html::FormView* this$0, ::javax::swing::text::html::FormSubmitEvent* val$fse, ::javax::swing::JEditorPane* val$c, ::java::net::URL* val$url);
	virtual void run() override;
	::javax::swing::text::html::FormView* this$0 = nullptr;
	::java::net::URL* val$url = nullptr;
	::javax::swing::JEditorPane* val$c = nullptr;
	::javax::swing::text::html::FormSubmitEvent* val$fse = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_FormView$1_h_