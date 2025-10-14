#ifndef _java_awt_Color_h_
#define _java_awt_Color_h_
//$ class java.awt.Color
//$ extends java.awt.Paint
//$ implements java.io.Serializable

#include <java/awt/Paint.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("BLACK")
#undef BLACK
#pragma push_macro("BLUE")
#undef BLUE
#pragma push_macro("CYAN")
#undef CYAN
#pragma push_macro("DARK_GRAY")
#undef DARK_GRAY
#pragma push_macro("FACTOR")
#undef FACTOR
#pragma push_macro("GRAY")
#undef GRAY
#pragma push_macro("GREEN")
#undef GREEN
#pragma push_macro("LIGHT_GRAY")
#undef LIGHT_GRAY
#pragma push_macro("MAGENTA")
#undef MAGENTA
#pragma push_macro("ORANGE")
#undef ORANGE
#pragma push_macro("PINK")
#undef PINK
#pragma push_macro("RED")
#undef RED
#pragma push_macro("WHITE")
#undef WHITE
#pragma push_macro("YELLOW")
#undef YELLOW

namespace java {
	namespace awt {
		class PaintContext;
		class Rectangle;
		class RenderingHints;
	}
}
namespace java {
	namespace awt {
		namespace color {
			class ColorSpace;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}

namespace java {
	namespace awt {

class $import Color : public ::java::awt::Paint, public ::java::io::Serializable {
	$class(Color, 0, ::java::awt::Paint, ::java::io::Serializable)
public:
	Color();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int32_t r, int32_t g, int32_t b);
	void init$(int32_t r, int32_t g, int32_t b, int32_t a);
	void init$(int32_t rgb);
	void init$(int32_t rgba, bool hasalpha);
	void init$(float r, float g, float b);
	void init$(float r, float g, float b, float a);
	void init$(::java::awt::color::ColorSpace* cspace, $floats* components, float alpha);
	static int32_t HSBtoRGB(float hue, float saturation, float brightness);
	static $floats* RGBtoHSB(int32_t r, int32_t g, int32_t b, $floats* hsbvals);
	virtual ::java::awt::Color* brighter();
	virtual ::java::awt::PaintContext* createContext(::java::awt::image::ColorModel* cm, ::java::awt::Rectangle* r, ::java::awt::geom::Rectangle2D* r2d, ::java::awt::geom::AffineTransform* xform, ::java::awt::RenderingHints* hints) override;
	virtual ::java::awt::Color* darker();
	static ::java::awt::Color* decode($String* nm);
	virtual bool equals(Object$* obj) override;
	virtual int32_t getAlpha();
	virtual int32_t getBlue();
	static ::java::awt::Color* getColor($String* nm);
	static ::java::awt::Color* getColor($String* nm, ::java::awt::Color* v);
	static ::java::awt::Color* getColor($String* nm, int32_t v);
	virtual $floats* getColorComponents($floats* compArray);
	virtual $floats* getColorComponents(::java::awt::color::ColorSpace* cspace, $floats* compArray);
	virtual ::java::awt::color::ColorSpace* getColorSpace();
	virtual $floats* getComponents($floats* compArray);
	virtual $floats* getComponents(::java::awt::color::ColorSpace* cspace, $floats* compArray);
	virtual int32_t getGreen();
	static ::java::awt::Color* getHSBColor(float h, float s, float b);
	virtual int32_t getRGB();
	virtual $floats* getRGBColorComponents($floats* compArray);
	virtual $floats* getRGBComponents($floats* compArray);
	virtual int32_t getRed();
	virtual int32_t getTransparency() override;
	virtual int32_t hashCode() override;
	static void initIDs();
	static void testColorValueRange(int32_t r, int32_t g, int32_t b, int32_t a);
	static void testColorValueRange(float r, float g, float b, float a);
	virtual $String* toString() override;
	static ::java::awt::Color* white;
	static ::java::awt::Color* WHITE;
	static ::java::awt::Color* lightGray;
	static ::java::awt::Color* LIGHT_GRAY;
	static ::java::awt::Color* gray;
	static ::java::awt::Color* GRAY;
	static ::java::awt::Color* darkGray;
	static ::java::awt::Color* DARK_GRAY;
	static ::java::awt::Color* black;
	static ::java::awt::Color* BLACK;
	static ::java::awt::Color* red;
	static ::java::awt::Color* RED;
	static ::java::awt::Color* pink;
	static ::java::awt::Color* PINK;
	static ::java::awt::Color* orange;
	static ::java::awt::Color* ORANGE;
	static ::java::awt::Color* yellow;
	static ::java::awt::Color* YELLOW;
	static ::java::awt::Color* green;
	static ::java::awt::Color* GREEN;
	static ::java::awt::Color* magenta;
	static ::java::awt::Color* MAGENTA;
	static ::java::awt::Color* cyan;
	static ::java::awt::Color* CYAN;
	static ::java::awt::Color* blue;
	static ::java::awt::Color* BLUE;
	int32_t value = 0;
	$floats* frgbvalue = nullptr;
	$floats* fvalue = nullptr;
	float falpha = 0.0;
	::java::awt::color::ColorSpace* cs = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x01A51783108F3375;
	static double FACTOR;
};

	} // awt
} // java

#pragma pop_macro("BLACK")
#pragma pop_macro("BLUE")
#pragma pop_macro("CYAN")
#pragma pop_macro("DARK_GRAY")
#pragma pop_macro("FACTOR")
#pragma pop_macro("GRAY")
#pragma pop_macro("GREEN")
#pragma pop_macro("LIGHT_GRAY")
#pragma pop_macro("MAGENTA")
#pragma pop_macro("ORANGE")
#pragma pop_macro("PINK")
#pragma pop_macro("RED")
#pragma pop_macro("WHITE")
#pragma pop_macro("YELLOW")

#endif // _java_awt_Color_h_