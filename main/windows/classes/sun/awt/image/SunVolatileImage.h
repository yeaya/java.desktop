#ifndef _sun_awt_image_SunVolatileImage_h_
#define _sun_awt_image_SunVolatileImage_h_
//$ class sun.awt.image.SunVolatileImage
//$ extends java.awt.image.VolatileImage
//$ implements sun.java2d.DestSurfaceProvider

#include <java/awt/image/VolatileImage.h>
#include <sun/java2d/DestSurfaceProvider.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Font;
		class Graphics2D;
		class GraphicsConfiguration;
		class ImageCapabilities;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class ImageObserver;
		}
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class VolatileSurfaceManager;
		}
	}
}
namespace sun {
	namespace java2d {
		class Surface;
	}
}

namespace sun {
	namespace awt {
		namespace image {

class SunVolatileImage : public ::java::awt::image::VolatileImage, public ::sun::java2d::DestSurfaceProvider {
	$class(SunVolatileImage, $NO_CLASS_INIT, ::java::awt::image::VolatileImage, ::sun::java2d::DestSurfaceProvider)
public:
	SunVolatileImage();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::image::VolatileImage::getCapabilities;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Component* comp, ::java::awt::GraphicsConfiguration* graphicsConfig, int32_t width, int32_t height, Object$* context, int32_t transparency, ::java::awt::ImageCapabilities* caps, int32_t accType);
	void init$(::java::awt::Component* comp, ::java::awt::GraphicsConfiguration* graphicsConfig, int32_t width, int32_t height, Object$* context, ::java::awt::ImageCapabilities* caps);
	void init$(::java::awt::Component* comp, int32_t width, int32_t height);
	void init$(::java::awt::Component* comp, int32_t width, int32_t height, Object$* context);
	void init$(::java::awt::GraphicsConfiguration* graphicsConfig, int32_t width, int32_t height, int32_t transparency, ::java::awt::ImageCapabilities* caps);
	virtual bool contentsLost() override;
	virtual ::java::awt::Graphics2D* createGraphics() override;
	virtual ::sun::awt::image::VolatileSurfaceManager* createSurfaceManager(Object$* context, ::java::awt::ImageCapabilities* caps);
	::java::awt::Color* getBackground();
	virtual ::java::awt::image::BufferedImage* getBackupImage();
	virtual ::java::awt::image::BufferedImage* getBackupImage(double scaleX, double scaleY);
	virtual ::java::awt::ImageCapabilities* getCapabilities() override;
	virtual ::java::awt::Component* getComponent();
	virtual ::sun::java2d::Surface* getDestSurface() override;
	::java::awt::Font* getFont();
	virtual int32_t getForcedAccelSurfaceType();
	::java::awt::Color* getForeground();
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfig();
	virtual int32_t getHeight() override;
	virtual int32_t getHeight(::java::awt::image::ImageObserver* observer) override;
	virtual $Object* getProperty($String* name, ::java::awt::image::ImageObserver* observer) override;
	virtual ::java::awt::image::BufferedImage* getSnapshot() override;
	virtual int32_t getWidth() override;
	virtual int32_t getWidth(::java::awt::image::ImageObserver* observer) override;
	virtual $String* toString() override;
	virtual void updateGraphicsConfig();
	virtual int32_t validate(::java::awt::GraphicsConfiguration* gc) override;
	::sun::awt::image::VolatileSurfaceManager* volSurfaceManager = nullptr;
	::java::awt::Component* comp = nullptr;
	::java::awt::GraphicsConfiguration* graphicsConfig = nullptr;
	::java::awt::Font* defaultFont = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	int32_t forcedAccelSurfaceType = 0;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_SunVolatileImage_h_