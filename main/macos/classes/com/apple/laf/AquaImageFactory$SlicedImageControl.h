#ifndef _com_apple_laf_AquaImageFactory$SlicedImageControl_h_
#define _com_apple_laf_AquaImageFactory$SlicedImageControl_h_
//$ class com.apple.laf.AquaImageFactory$SlicedImageControl
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("C")
#undef C
#pragma push_macro("E")
#undef E
#pragma push_macro("N")
#undef N
#pragma push_macro("NE")
#undef NE
#pragma push_macro("NW")
#undef NW
#pragma push_macro("S")
#undef S
#pragma push_macro("SE")
#undef SE
#pragma push_macro("SW")
#undef SW
#pragma push_macro("W")
#undef W

namespace com {
	namespace apple {
		namespace laf {
			class AquaImageFactory$NineSliceMetrics;
		}
	}
}
namespace java {
	namespace awt {
		class Graphics;
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaImageFactory$SlicedImageControl : public ::java::lang::Object {
	$class(AquaImageFactory$SlicedImageControl, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaImageFactory$SlicedImageControl();
	void init$(::java::awt::Image* img, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut);
	void init$(::java::awt::Image* img, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut, bool useMiddle);
	void init$(::java::awt::Image* img, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut, bool useMiddle, bool stretchHorizontally, bool stretchVertically);
	void init$(::java::awt::Image* img, ::com::apple::laf::AquaImageFactory$NineSliceMetrics* metrics);
	static ::java::awt::image::BufferedImage* createSlice(::java::awt::Image* img, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paint(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintCompressed(::java::awt::Graphics* g, int32_t w, int32_t h);
	virtual void paintStretchedMiddles(::java::awt::Graphics* g, int32_t w, int32_t h);
	::java::awt::image::BufferedImage* NW = nullptr;
	::java::awt::image::BufferedImage* N = nullptr;
	::java::awt::image::BufferedImage* NE = nullptr;
	::java::awt::image::BufferedImage* W = nullptr;
	::java::awt::image::BufferedImage* C = nullptr;
	::java::awt::image::BufferedImage* E = nullptr;
	::java::awt::image::BufferedImage* SW = nullptr;
	::java::awt::image::BufferedImage* S = nullptr;
	::java::awt::image::BufferedImage* SE = nullptr;
	::com::apple::laf::AquaImageFactory$NineSliceMetrics* metrics = nullptr;
	int32_t totalWidth = 0;
	int32_t totalHeight = 0;
	int32_t centerColWidth = 0;
	int32_t centerRowHeight = 0;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("C")
#pragma pop_macro("E")
#pragma pop_macro("N")
#pragma pop_macro("NE")
#pragma pop_macro("NW")
#pragma pop_macro("S")
#pragma pop_macro("SE")
#pragma pop_macro("SW")
#pragma pop_macro("W")

#endif // _com_apple_laf_AquaImageFactory$SlicedImageControl_h_