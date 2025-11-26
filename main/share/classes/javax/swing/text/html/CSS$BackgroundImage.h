#ifndef _javax_swing_text_html_CSS$BackgroundImage_h_
#define _javax_swing_text_html_CSS$BackgroundImage_h_
//$ class javax.swing.text.html.CSS$BackgroundImage
//$ extends javax.swing.text.html.CSS$CssValue

#include <javax/swing/text/html/CSS$CssValue.h>

namespace java {
	namespace net {
		class URL;
	}
}
namespace javax {
	namespace swing {
		class ImageIcon;
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export CSS$BackgroundImage : public ::javax::swing::text::html::CSS$CssValue {
	$class(CSS$BackgroundImage, $NO_CLASS_INIT, ::javax::swing::text::html::CSS$CssValue)
public:
	CSS$BackgroundImage();
	void init$();
	virtual ::javax::swing::ImageIcon* getImage(::java::net::URL* base);
	virtual $Object* parseCssValue($String* value) override;
	virtual $Object* parseHtmlValue($String* value) override;
	bool loadedImage = false;
	::javax::swing::ImageIcon* image = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSS$BackgroundImage_h_