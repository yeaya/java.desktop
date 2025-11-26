#ifndef _sun_font_Underline$StandardUnderline_h_
#define _sun_font_Underline$StandardUnderline_h_
//$ class sun.font.Underline$StandardUnderline
//$ extends sun.font.Underline

#include <java/lang/Array.h>
#include <sun/font/Underline.h>

namespace java {
	namespace awt {
		class BasicStroke;
		class Graphics2D;
		class Shape;
		class Stroke;
	}
}

namespace sun {
	namespace font {

class Underline$StandardUnderline : public ::sun::font::Underline {
	$class(Underline$StandardUnderline, $NO_CLASS_INIT, ::sun::font::Underline)
public:
	Underline$StandardUnderline();
	void init$(float shift, float thicknessMultiplier, $floats* dashPattern, bool useThickness);
	::java::awt::BasicStroke* createStroke(float lineThickness);
	virtual void drawUnderline(::java::awt::Graphics2D* g2d, float thickness, float x1, float x2, float y) override;
	float getLineThickness(float thickness);
	virtual float getLowerDrawLimit(float thickness) override;
	::java::awt::Stroke* getStroke(float thickness);
	virtual ::java::awt::Shape* getUnderlineShape(float thickness, float x1, float x2, float y) override;
	float shift = 0.0;
	float thicknessMultiplier = 0.0;
	$floats* dashPattern = nullptr;
	bool useThickness = false;
	::java::awt::BasicStroke* cachedStroke = nullptr;
};

	} // font
} // sun

#endif // _sun_font_Underline$StandardUnderline_h_