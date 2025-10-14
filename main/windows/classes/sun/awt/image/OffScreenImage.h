#ifndef _sun_awt_image_OffScreenImage_h_
#define _sun_awt_image_OffScreenImage_h_
//$ class sun.awt.image.OffScreenImage
//$ extends java.awt.image.BufferedImage

#include <java/awt/image/BufferedImage.h>

namespace java {
	namespace awt {
		class Component;
		class Font;
		class Graphics;
		class Graphics2D;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class ImageProducer;
			class WritableRaster;
		}
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class OffScreenImageSource;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class OffScreenImage : public ::java::awt::image::BufferedImage {
	$class(OffScreenImage, $NO_CLASS_INIT, ::java::awt::image::BufferedImage)
public:
	OffScreenImage();
	void init$(::java::awt::Component* c, ::java::awt::image::ColorModel* cm, ::java::awt::image::WritableRaster* raster, bool isRasterPremultiplied);
	virtual ::java::awt::Graphics2D* createGraphics() override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::image::ImageProducer* getSource() override;
	void initSurface(int32_t width, int32_t height);
	::java::awt::Component* c = nullptr;
	::sun::awt::image::OffScreenImageSource* osis = nullptr;
	::java::awt::Font* defaultFont = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_OffScreenImage_h_