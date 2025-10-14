#ifndef _com_sun_imageio_plugins_common_ImageUtil_h_
#define _com_sun_imageio_plugins_common_ImageUtil_h_
//$ class com.sun.imageio.plugins.common.ImageUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Rectangle;
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
		namespace image {
			class ColorModel;
			class Raster;
			class RenderedImage;
			class SampleModel;
			class WritableRaster;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}
namespace javax {
	namespace imageio {
		class ImageReadParam;
		class ImageTypeSpecifier;
		class ImageWriter;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

class ImageUtil : public ::java::lang::Object {
	$class(ImageUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImageUtil();
	void init$();
	static void canEncodeImage(::javax::imageio::ImageWriter* writer, ::javax::imageio::ImageTypeSpecifier* type);
	static void canEncodeImage(::javax::imageio::ImageWriter* writer, ::java::awt::image::ColorModel* colorModel, ::java::awt::image::SampleModel* sampleModel);
	static $String* convertObjectToString(Object$* obj);
	static ::java::awt::image::ColorModel* createColorModel(::java::awt::image::SampleModel* sampleModel);
	static ::java::awt::image::ColorModel* createColorModel(::java::awt::color::ColorSpace* colorSpace, ::java::awt::image::SampleModel* sampleModel);
	static int64_t getBandSize(::java::awt::image::SampleModel* sm);
	static ::javax::imageio::ImageTypeSpecifier* getDestinationType(::javax::imageio::ImageReadParam* param, ::java::util::Iterator* imageTypes);
	static int32_t getElementSize(::java::awt::image::SampleModel* sm);
	static $bytes* getPackedBinaryData(::java::awt::image::Raster* raster, ::java::awt::Rectangle* rect);
	static int64_t getTileSize(::java::awt::image::SampleModel* sm);
	static $bytes* getUnpackedBinaryData(::java::awt::image::Raster* raster, ::java::awt::Rectangle* rect);
	static bool imageIsContiguous(::java::awt::image::RenderedImage* image);
	static bool isBinary(::java::awt::image::SampleModel* sm);
	static bool isIndicesForGrayscale($bytes* r, $bytes* g, $bytes* b);
	static bool isNonStandardICCColorSpace(::java::awt::color::ColorSpace* cs);
	static void setPackedBinaryData($bytes* binaryDataArray, ::java::awt::image::WritableRaster* raster, ::java::awt::Rectangle* rect);
	static void setUnpackedBinaryData($bytes* bdata, ::java::awt::image::WritableRaster* raster, ::java::awt::Rectangle* rect);
};

				} // common
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_common_ImageUtil_h_