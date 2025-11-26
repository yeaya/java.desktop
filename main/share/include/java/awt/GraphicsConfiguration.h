#ifndef _java_awt_GraphicsConfiguration_h_
#define _java_awt_GraphicsConfiguration_h_
//$ class java.awt.GraphicsConfiguration
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class BufferCapabilities;
		class GraphicsDevice;
		class ImageCapabilities;
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
			class BufferedImage;
			class ColorModel;
			class VolatileImage;
		}
	}
}

namespace java {
	namespace awt {

class $import GraphicsConfiguration : public ::java::lang::Object {
	$class(GraphicsConfiguration, 0, ::java::lang::Object)
public:
	GraphicsConfiguration();
	void init$();
	virtual ::java::awt::image::BufferedImage* createCompatibleImage(int32_t width, int32_t height);
	virtual ::java::awt::image::BufferedImage* createCompatibleImage(int32_t width, int32_t height, int32_t transparency);
	virtual ::java::awt::image::VolatileImage* createCompatibleVolatileImage(int32_t width, int32_t height);
	virtual ::java::awt::image::VolatileImage* createCompatibleVolatileImage(int32_t width, int32_t height, int32_t transparency);
	virtual ::java::awt::image::VolatileImage* createCompatibleVolatileImage(int32_t width, int32_t height, ::java::awt::ImageCapabilities* caps);
	virtual ::java::awt::image::VolatileImage* createCompatibleVolatileImage(int32_t width, int32_t height, ::java::awt::ImageCapabilities* caps, int32_t transparency);
	virtual ::java::awt::Rectangle* getBounds() {return nullptr;}
	virtual ::java::awt::BufferCapabilities* getBufferCapabilities();
	virtual ::java::awt::image::ColorModel* getColorModel() {return nullptr;}
	virtual ::java::awt::image::ColorModel* getColorModel(int32_t transparency) {return nullptr;}
	virtual ::java::awt::geom::AffineTransform* getDefaultTransform() {return nullptr;}
	virtual ::java::awt::GraphicsDevice* getDevice() {return nullptr;}
	virtual ::java::awt::ImageCapabilities* getImageCapabilities();
	virtual ::java::awt::geom::AffineTransform* getNormalizingTransform() {return nullptr;}
	virtual bool isTranslucencyCapable();
	static bool $assertionsDisabled;
	static ::java::awt::BufferCapabilities* defaultBufferCaps;
	static ::java::awt::ImageCapabilities* defaultImageCaps;
};

	} // awt
} // java

#endif // _java_awt_GraphicsConfiguration_h_