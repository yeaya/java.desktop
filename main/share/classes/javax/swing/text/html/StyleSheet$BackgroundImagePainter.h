#ifndef _javax_swing_text_html_StyleSheet$BackgroundImagePainter_h_
#define _javax_swing_text_html_StyleSheet$BackgroundImagePainter_h_
//$ class javax.swing.text.html.StyleSheet$BackgroundImagePainter
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
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
			class AttributeSet;
			class View;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class CSS;
				class StyleSheet;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export StyleSheet$BackgroundImagePainter : public ::java::io::Serializable {
	$class(StyleSheet$BackgroundImagePainter, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	StyleSheet$BackgroundImagePainter();
	void init$(::javax::swing::text::AttributeSet* a, ::javax::swing::text::html::CSS* css, ::javax::swing::text::html::StyleSheet* ss);
	virtual void paint(::java::awt::Graphics* g, float x, float y, float w, float h, ::javax::swing::text::View* v);
	bool updatePaintCoordinates(::java::awt::Rectangle* clip, int32_t width, int32_t height);
	::javax::swing::ImageIcon* backgroundImage = nullptr;
	float hPosition = 0.0;
	float vPosition = 0.0;
	int16_t flags = 0;
	int32_t paintX = 0;
	int32_t paintY = 0;
	int32_t paintMaxX = 0;
	int32_t paintMaxY = 0;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_StyleSheet$BackgroundImagePainter_h_