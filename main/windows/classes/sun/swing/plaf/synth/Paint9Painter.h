#ifndef _sun_swing_plaf_synth_Paint9Painter_h_
#define _sun_swing_plaf_synth_Paint9Painter_h_
//$ class sun.swing.plaf.synth.Paint9Painter
//$ extends sun.swing.CachedPainter

#include <java/lang/Array.h>
#include <sun/swing/CachedPainter.h>

#pragma push_macro("EMPTY_INSETS")
#undef EMPTY_INSETS
#pragma push_macro("PAINT_ALL")
#undef PAINT_ALL
#pragma push_macro("PAINT_BOTTOM")
#undef PAINT_BOTTOM
#pragma push_macro("PAINT_BOTTOM_LEFT")
#undef PAINT_BOTTOM_LEFT
#pragma push_macro("PAINT_BOTTOM_RIGHT")
#undef PAINT_BOTTOM_RIGHT
#pragma push_macro("PAINT_CENTER")
#undef PAINT_CENTER
#pragma push_macro("PAINT_LEFT")
#undef PAINT_LEFT
#pragma push_macro("PAINT_RIGHT")
#undef PAINT_RIGHT
#pragma push_macro("PAINT_TOP")
#undef PAINT_TOP
#pragma push_macro("PAINT_TOP_LEFT")
#undef PAINT_TOP_LEFT
#pragma push_macro("PAINT_TOP_RIGHT")
#undef PAINT_TOP_RIGHT

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class GraphicsConfiguration;
		class Image;
		class Insets;
	}
}
namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {
				class Paint9Painter$PaintType;
			}
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export Paint9Painter : public ::sun::swing::CachedPainter {
	$class(Paint9Painter, 0, ::sun::swing::CachedPainter)
public:
	Paint9Painter();
	void init$(int32_t cacheCount);
	virtual ::java::awt::Image* createImage(::java::awt::Component* c, int32_t w, int32_t h, ::java::awt::GraphicsConfiguration* config, $ObjectArray* args) override;
	void drawChunk(::java::awt::Image* image, ::java::awt::Graphics* g, bool stretch, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, bool xDirection);
	void drawImage(::java::awt::Image* image, ::java::awt::Graphics* g, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2);
	using ::sun::swing::CachedPainter::paint;
	virtual void paint(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::Image* source, ::java::awt::Insets* sInsets, ::java::awt::Insets* dInsets, ::sun::swing::plaf::synth::Paint9Painter$PaintType* type, int32_t mask);
	virtual void paint9(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::Image* image, ::java::awt::Insets* sInsets, ::java::awt::Insets* dInsets, ::sun::swing::plaf::synth::Paint9Painter$PaintType* type, int32_t componentMask);
	virtual void paintToImage(::java::awt::Component* c, ::java::awt::Image* destImage, ::java::awt::Graphics* g, int32_t w, int32_t h, $ObjectArray* args) override;
	static bool validImage(::java::awt::Image* image);
	static ::java::awt::Insets* EMPTY_INSETS;
	static const int32_t PAINT_TOP_LEFT = 1;
	static const int32_t PAINT_TOP = 2;
	static const int32_t PAINT_TOP_RIGHT = 4;
	static const int32_t PAINT_LEFT = 8;
	static const int32_t PAINT_CENTER = 16;
	static const int32_t PAINT_RIGHT = 32;
	static const int32_t PAINT_BOTTOM_RIGHT = 64;
	static const int32_t PAINT_BOTTOM = 128;
	static const int32_t PAINT_BOTTOM_LEFT = 256;
	static const int32_t PAINT_ALL = 512;
};

			} // synth
		} // plaf
	} // swing
} // sun

#pragma pop_macro("EMPTY_INSETS")
#pragma pop_macro("PAINT_ALL")
#pragma pop_macro("PAINT_BOTTOM")
#pragma pop_macro("PAINT_BOTTOM_LEFT")
#pragma pop_macro("PAINT_BOTTOM_RIGHT")
#pragma pop_macro("PAINT_CENTER")
#pragma pop_macro("PAINT_LEFT")
#pragma pop_macro("PAINT_RIGHT")
#pragma pop_macro("PAINT_TOP")
#pragma pop_macro("PAINT_TOP_LEFT")
#pragma pop_macro("PAINT_TOP_RIGHT")

#endif // _sun_swing_plaf_synth_Paint9Painter_h_