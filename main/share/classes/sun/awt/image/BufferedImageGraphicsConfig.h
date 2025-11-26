#ifndef _sun_awt_image_BufferedImageGraphicsConfig_h_
#define _sun_awt_image_BufferedImageGraphicsConfig_h_
//$ class sun.awt.image.BufferedImageGraphicsConfig
//$ extends java.awt.GraphicsConfiguration

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Array.h>

#pragma push_macro("TYPE_BYTE_BINARY")
#undef TYPE_BYTE_BINARY

namespace java {
	namespace awt {
		class Component;
		class GraphicsDevice;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class Raster;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class BufferedImageGraphicsConfig : public ::java::awt::GraphicsConfiguration {
	$class(BufferedImageGraphicsConfig, 0, ::java::awt::GraphicsConfiguration)
public:
	BufferedImageGraphicsConfig();
	using ::java::awt::GraphicsConfiguration::createCompatibleImage;
	void init$(::java::awt::image::BufferedImage* bufImg, ::java::awt::Component* comp, double scaleX, double scaleY);
	virtual ::java::awt::image::BufferedImage* createCompatibleImage(int32_t width, int32_t height) override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::image::ColorModel* getColorModel(int32_t transparency) override;
	static ::sun::awt::image::BufferedImageGraphicsConfig* getConfig(::java::awt::image::BufferedImage* bImg);
	static ::sun::awt::image::BufferedImageGraphicsConfig* getConfig(::java::awt::image::BufferedImage* bImg, double scaleX, double scaleY);
	virtual ::java::awt::geom::AffineTransform* getDefaultTransform() override;
	virtual ::java::awt::GraphicsDevice* getDevice() override;
	virtual ::java::awt::geom::AffineTransform* getNormalizingTransform() override;
	static const int32_t numconfigs = ::java::awt::image::BufferedImage::TYPE_BYTE_BINARY;
	static $Array<::sun::awt::image::BufferedImageGraphicsConfig>* standardConfigs;
	static $Array<::sun::awt::image::BufferedImageGraphicsConfig>* scaledConfigs;
	::java::awt::GraphicsDevice* device = nullptr;
	::java::awt::image::ColorModel* model = nullptr;
	::java::awt::image::Raster* raster = nullptr;
	double scaleX = 0.0;
	double scaleY = 0.0;
};

		} // image
	} // awt
} // sun

#pragma pop_macro("TYPE_BYTE_BINARY")

#endif // _sun_awt_image_BufferedImageGraphicsConfig_h_