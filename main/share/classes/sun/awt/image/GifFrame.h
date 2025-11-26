#ifndef _sun_awt_image_GifFrame_h_
#define _sun_awt_image_GifFrame_h_
//$ class sun.awt.image.GifFrame
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DISPOSAL_BGCOLOR")
#undef DISPOSAL_BGCOLOR
#pragma push_macro("DISPOSAL_NONE")
#undef DISPOSAL_NONE
#pragma push_macro("DISPOSAL_PREVIOUS")
#undef DISPOSAL_PREVIOUS
#pragma push_macro("DISPOSAL_SAVE")
#undef DISPOSAL_SAVE

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class IndexColorModel;
		}
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class GifImageDecoder;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class GifFrame : public ::java::lang::Object {
	$class(GifFrame, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GifFrame();
	void init$(::sun::awt::image::GifImageDecoder* id, int32_t dm, int32_t dl, bool init, ::java::awt::image::IndexColorModel* cm, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual bool dispose();
	void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::ColorModel* cm, $bytes* pix, int32_t off, int32_t scan);
	static const bool verbose = false;
	static const int32_t DISPOSAL_NONE = 0;
	static const int32_t DISPOSAL_SAVE = 1;
	static const int32_t DISPOSAL_BGCOLOR = 2;
	static const int32_t DISPOSAL_PREVIOUS = 3;
	::sun::awt::image::GifImageDecoder* decoder = nullptr;
	int32_t disposal_method = 0;
	int32_t delay = 0;
	::java::awt::image::IndexColorModel* model = nullptr;
	int32_t x = 0;
	int32_t y = 0;
	int32_t width = 0;
	int32_t height = 0;
	bool initialframe = false;
};

		} // image
	} // awt
} // sun

#pragma pop_macro("DISPOSAL_BGCOLOR")
#pragma pop_macro("DISPOSAL_NONE")
#pragma pop_macro("DISPOSAL_PREVIOUS")
#pragma pop_macro("DISPOSAL_SAVE")

#endif // _sun_awt_image_GifFrame_h_