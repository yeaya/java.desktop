#ifndef _javax_swing_text_html_ImageView$1_h_
#define _javax_swing_text_html_ImageView$1_h_
//$ class javax.swing.text.html.ImageView$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class ImageView;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class ImageView$1 : public ::java::lang::Runnable {
	$class(ImageView$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ImageView$1();
	void init$(::javax::swing::text::html::ImageView* this$0);
	virtual void run() override;
	::javax::swing::text::html::ImageView* this$0 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_ImageView$1_h_