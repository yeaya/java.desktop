#ifndef _javax_swing_plaf_nimbus_ImageScalingHelper_h_
#define _javax_swing_plaf_nimbus_ImageScalingHelper_h_
//$ class javax.swing.plaf.nimbus.ImageScalingHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
		class Graphics;
		class Image;
		class Insets;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class ImageScalingHelper$PaintType;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class ImageScalingHelper : public ::java::lang::Object {
	$class(ImageScalingHelper, 0, ::java::lang::Object)
public:
	ImageScalingHelper();
	void init$();
	static void drawChunk(::java::awt::Image* image, ::java::awt::Graphics* g, bool stretch, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, bool xDirection);
	static void drawImage(::java::awt::Image* image, ::java::awt::Graphics* g, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2);
	static void paint(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::Image* image, ::java::awt::Insets* sInsets, ::java::awt::Insets* dInsets, ::javax::swing::plaf::nimbus::ImageScalingHelper$PaintType* paintType, int32_t mask);
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

			} // nimbus
		} // plaf
	} // swing
} // javax

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

#endif // _javax_swing_plaf_nimbus_ImageScalingHelper_h_