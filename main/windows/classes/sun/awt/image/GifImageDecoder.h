#ifndef _sun_awt_image_GifImageDecoder_h_
#define _sun_awt_image_GifImageDecoder_h_
//$ class sun.awt.image.GifImageDecoder
//$ extends sun.awt.image.ImageDecoder

#include <java/awt/image/ImageConsumer.h>
#include <java/lang/Array.h>
#include <sun/awt/image/ImageDecoder.h>

#pragma push_macro("COLORMAPMASK")
#undef COLORMAPMASK
#pragma push_macro("COMPLETESCANLINES")
#undef COMPLETESCANLINES
#pragma push_macro("EXBLOCK")
#undef EXBLOCK
#pragma push_macro("EX_APPLICATION")
#undef EX_APPLICATION
#pragma push_macro("EX_COMMENT")
#undef EX_COMMENT
#pragma push_macro("EX_GRAPHICS_CONTROL")
#undef EX_GRAPHICS_CONTROL
#pragma push_macro("IMAGESEP")
#undef IMAGESEP
#pragma push_macro("INTERLACEMASK")
#undef INTERLACEMASK
#pragma push_macro("RANDOMPIXELORDER")
#undef RANDOMPIXELORDER
#pragma push_macro("SINGLEFRAME")
#undef SINGLEFRAME
#pragma push_macro("SINGLEPASS")
#undef SINGLEPASS
#pragma push_macro("TERMINATOR")
#undef TERMINATOR
#pragma push_macro("TOPDOWNLEFTRIGHT")
#undef TOPDOWNLEFTRIGHT
#pragma push_macro("TRANSPARENCYMASK")
#undef TRANSPARENCYMASK

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class IndexColorModel;
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class GifFrame;
			class InputStreamImageSource;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class GifImageDecoder : public ::sun::awt::image::ImageDecoder {
	$class(GifImageDecoder, 0, ::sun::awt::image::ImageDecoder)
public:
	GifImageDecoder();
	void init$(::sun::awt::image::InputStreamImageSource* src, ::java::io::InputStream* is);
	static int32_t ExtractByte($bytes* buf, int32_t off);
	static int32_t ExtractWord($bytes* buf, int32_t off);
	static void error($String* s1);
	static $bytes* grow_colormap($bytes* colormap, int32_t newlen);
	static void initIDs();
	bool parseImage(int32_t x, int32_t y, int32_t width, int32_t height, bool interlace, int32_t initCodeSize, $bytes* block, $bytes* rasline, ::java::awt::image::IndexColorModel* model);
	virtual void produceImage() override;
	int32_t readBytes($bytes* buf, int32_t off, int32_t len);
	void readHeader();
	bool readImage(bool first, int32_t disposal_method, int32_t delay);
	int32_t sendPixels(int32_t x, int32_t y, int32_t width, int32_t height, $bytes* rasline, ::java::awt::image::ColorModel* model);
	static const bool verbose = false;
	static const int32_t IMAGESEP = 44;
	static const int32_t EXBLOCK = 33;
	static const int32_t EX_GRAPHICS_CONTROL = 249;
	static const int32_t EX_COMMENT = 254;
	static const int32_t EX_APPLICATION = 255;
	static const int32_t TERMINATOR = 59;
	static const int32_t TRANSPARENCYMASK = 1;
	static const int32_t INTERLACEMASK = 64;
	static const int32_t COLORMAPMASK = 128;
	int32_t num_global_colors = 0;
	$bytes* global_colormap = nullptr;
	int32_t trans_pixel = 0;
	::java::awt::image::IndexColorModel* global_model = nullptr;
	::java::util::Hashtable* props = nullptr;
	$bytes* saved_image = nullptr;
	::java::awt::image::IndexColorModel* saved_model = nullptr;
	int32_t global_width = 0;
	int32_t global_height = 0;
	int32_t global_bgpixel = 0;
	::sun::awt::image::GifFrame* curframe = nullptr;
	static const int32_t normalflags = 30; // ::java::awt::image::ImageConsumer::TOPDOWNLEFTRIGHT | ::java::awt::image::ImageConsumer::COMPLETESCANLINES | ::java::awt::image::ImageConsumer::SINGLEPASS | ::java::awt::image::ImageConsumer::SINGLEFRAME
	static const int32_t interlaceflags = 29; // ::java::awt::image::ImageConsumer::RANDOMPIXELORDER | ::java::awt::image::ImageConsumer::COMPLETESCANLINES | ::java::awt::image::ImageConsumer::SINGLEPASS | ::java::awt::image::ImageConsumer::SINGLEFRAME
	$shorts* prefix = nullptr;
	$bytes* suffix = nullptr;
	$bytes* outCode = nullptr;
};

		} // image
	} // awt
} // sun

#pragma pop_macro("COLORMAPMASK")
#pragma pop_macro("COMPLETESCANLINES")
#pragma pop_macro("EXBLOCK")
#pragma pop_macro("EX_APPLICATION")
#pragma pop_macro("EX_COMMENT")
#pragma pop_macro("EX_GRAPHICS_CONTROL")
#pragma pop_macro("IMAGESEP")
#pragma pop_macro("INTERLACEMASK")
#pragma pop_macro("RANDOMPIXELORDER")
#pragma pop_macro("SINGLEFRAME")
#pragma pop_macro("SINGLEPASS")
#pragma pop_macro("TERMINATOR")
#pragma pop_macro("TOPDOWNLEFTRIGHT")
#pragma pop_macro("TRANSPARENCYMASK")

#endif // _sun_awt_image_GifImageDecoder_h_