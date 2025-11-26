#ifndef _sun_awt_image_WritableRasterNative_h_
#define _sun_awt_image_WritableRasterNative_h_
//$ class sun.awt.image.WritableRasterNative
//$ extends java.awt.image.WritableRaster

#include <java/awt/image/WritableRaster.h>

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class DataBuffer;
			class SampleModel;
		}
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}

namespace sun {
	namespace awt {
		namespace image {

class WritableRasterNative : public ::java::awt::image::WritableRaster {
	$class(WritableRasterNative, $NO_CLASS_INIT, ::java::awt::image::WritableRaster)
public:
	WritableRasterNative();
	void init$(::java::awt::image::SampleModel* sm, ::java::awt::image::DataBuffer* db);
	static ::sun::awt::image::WritableRasterNative* createNativeRaster(::java::awt::image::SampleModel* sm, ::java::awt::image::DataBuffer* db);
	static ::sun::awt::image::WritableRasterNative* createNativeRaster(::java::awt::image::ColorModel* cm, ::sun::java2d::SurfaceData* sd, int32_t width, int32_t height);
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_WritableRasterNative_h_