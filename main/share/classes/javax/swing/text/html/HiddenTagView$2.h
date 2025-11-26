#ifndef _javax_swing_text_html_HiddenTagView$2_h_
#define _javax_swing_text_html_HiddenTagView$2_h_
//$ class javax.swing.text.html.HiddenTagView$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HiddenTagView;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class HiddenTagView$2 : public ::java::lang::Runnable {
	$class(HiddenTagView$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	HiddenTagView$2();
	void init$(::javax::swing::text::html::HiddenTagView* this$0);
	virtual void run() override;
	::javax::swing::text::html::HiddenTagView* this$0 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HiddenTagView$2_h_