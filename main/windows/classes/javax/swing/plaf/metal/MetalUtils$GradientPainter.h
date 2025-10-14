#ifndef _javax_swing_plaf_metal_MetalUtils$GradientPainter_h_
#define _javax_swing_plaf_metal_MetalUtils$GradientPainter_h_
//$ class javax.swing.plaf.metal.MetalUtils$GradientPainter
//$ extends sun.swing.CachedPainter

#include <java/lang/Array.h>
#include <sun/swing/CachedPainter.h>

#pragma push_macro("IMAGE_SIZE")
#undef IMAGE_SIZE
#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace awt {
		class Color;
		class Component;
		class GradientPaint;
		class Graphics;
		class Graphics2D;
		class Image;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalUtils$GradientPainter : public ::sun::swing::CachedPainter {
	$class(MetalUtils$GradientPainter, 0, ::sun::swing::CachedPainter)
public:
	MetalUtils$GradientPainter();
	void init$(int32_t count);
	void drawHorizontalGradient(::java::awt::Graphics2D* g, float ratio1, float ratio2, ::java::awt::Color* c1, ::java::awt::Color* c2, ::java::awt::Color* c3, int32_t w, int32_t h);
	void drawVerticalGradient(::java::awt::Graphics2D* g, float ratio1, float ratio2, ::java::awt::Color* c1, ::java::awt::Color* c2, ::java::awt::Color* c3, int32_t w, int32_t h);
	::java::awt::GradientPaint* getGradient(float x1, float y1, ::java::awt::Color* c1, float x2, float y2, ::java::awt::Color* c2);
	using ::sun::swing::CachedPainter::paint;
	virtual void paint(::java::awt::Component* c, ::java::awt::Graphics2D* g, ::java::util::List* gradient, int32_t x, int32_t y, int32_t w, int32_t h, bool isVertical);
	virtual void paintImage(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t imageW, int32_t imageH, ::java::awt::Image* image, $ObjectArray* args) override;
	virtual void paintToImage(::java::awt::Component* c, ::java::awt::Image* image, ::java::awt::Graphics* g, int32_t w, int32_t h, $ObjectArray* args) override;
	static ::javax::swing::plaf::metal::MetalUtils$GradientPainter* INSTANCE;
	static const int32_t IMAGE_SIZE = 64;
	int32_t w = 0;
	int32_t h = 0;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("IMAGE_SIZE")
#pragma pop_macro("INSTANCE")

#endif // _javax_swing_plaf_metal_MetalUtils$GradientPainter_h_