#ifndef _sun_font_Underline_h_
#define _sun_font_Underline_h_
//$ class sun.font.Underline
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_THICKNESS")
#undef DEFAULT_THICKNESS
#pragma push_macro("IGNORE_THICKNESS")
#undef IGNORE_THICKNESS
#pragma push_macro("UNDERLINES")
#undef UNDERLINES
#pragma push_macro("UNDERLINE_LIST")
#undef UNDERLINE_LIST
#pragma push_macro("USE_THICKNESS")
#undef USE_THICKNESS

namespace java {
	namespace awt {
		class Graphics2D;
		class Shape;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}

namespace sun {
	namespace font {

class Underline : public ::java::lang::Object {
	$class(Underline, 0, ::java::lang::Object)
public:
	Underline();
	void init$();
	virtual void drawUnderline(::java::awt::Graphics2D* g2d, float thickness, float x1, float x2, float y) {}
	virtual float getLowerDrawLimit(float thickness) {return 0.0;}
	static ::sun::font::Underline* getUnderline(Object$* value);
	static ::sun::font::Underline* getUnderline(int32_t index);
	virtual ::java::awt::Shape* getUnderlineShape(float thickness, float x1, float x2, float y) {return nullptr;}
	static float DEFAULT_THICKNESS;
	static const bool USE_THICKNESS = true;
	static const bool IGNORE_THICKNESS = false;
	static ::java::util::concurrent::ConcurrentHashMap* UNDERLINES;
	static $Array<::sun::font::Underline>* UNDERLINE_LIST;
};

	} // font
} // sun

#pragma pop_macro("DEFAULT_THICKNESS")
#pragma pop_macro("IGNORE_THICKNESS")
#pragma pop_macro("UNDERLINES")
#pragma pop_macro("UNDERLINE_LIST")
#pragma pop_macro("USE_THICKNESS")

#endif // _sun_font_Underline_h_