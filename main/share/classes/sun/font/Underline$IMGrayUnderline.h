#ifndef _sun_font_Underline$IMGrayUnderline_h_
#define _sun_font_Underline$IMGrayUnderline_h_
//$ class sun.font.Underline$IMGrayUnderline
//$ extends sun.font.Underline

#include <sun/font/Underline.h>

namespace java {
	namespace awt {
		class BasicStroke;
		class Graphics2D;
		class Shape;
	}
}

namespace sun {
	namespace font {

class Underline$IMGrayUnderline : public ::sun::font::Underline {
	$class(Underline$IMGrayUnderline, $NO_CLASS_INIT, ::sun::font::Underline)
public:
	Underline$IMGrayUnderline();
	void init$();
	virtual void drawUnderline(::java::awt::Graphics2D* g2d, float thickness, float x1, float x2, float y) override;
	virtual float getLowerDrawLimit(float thickness) override;
	virtual ::java::awt::Shape* getUnderlineShape(float thickness, float x1, float x2, float y) override;
	::java::awt::BasicStroke* stroke = nullptr;
};

	} // font
} // sun

#endif // _sun_font_Underline$IMGrayUnderline_h_