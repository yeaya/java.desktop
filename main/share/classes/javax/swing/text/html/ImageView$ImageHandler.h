#ifndef _javax_swing_text_html_ImageView$ImageHandler_h_
#define _javax_swing_text_html_ImageView$ImageHandler_h_
//$ class javax.swing.text.html.ImageView$ImageHandler
//$ extends java.awt.image.ImageObserver

#include <java/awt/image/ImageObserver.h>

namespace java {
	namespace awt {
		class Image;
	}
}
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

class ImageView$ImageHandler : public ::java::awt::image::ImageObserver {
	$class(ImageView$ImageHandler, $NO_CLASS_INIT, ::java::awt::image::ImageObserver)
public:
	ImageView$ImageHandler();
	void init$(::javax::swing::text::html::ImageView* this$0);
	virtual bool imageUpdate(::java::awt::Image* img, int32_t flags, int32_t x, int32_t y, int32_t newWidth, int32_t newHeight) override;
	::javax::swing::text::html::ImageView* this$0 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_ImageView$ImageHandler_h_