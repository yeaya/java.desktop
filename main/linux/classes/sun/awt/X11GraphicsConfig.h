#ifndef _sun_awt_X11GraphicsConfig_h_
#define _sun_awt_X11GraphicsConfig_h_
//$ class sun.awt.X11GraphicsConfig
//$ extends java.awt.GraphicsConfiguration
//$ implements sun.awt.image.SurfaceManager$ProxiedGraphicsConfig

#include <java/awt/GraphicsConfiguration.h>
#include <sun/awt/image/SurfaceManager$ProxiedGraphicsConfig.h>

namespace java {
	namespace awt {
		class BufferCapabilities;
		class BufferCapabilities$FlipContents;
		class Component;
		class GraphicsDevice;
		class Image;
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
			class ColorModel;
			class ComponentColorModel;
			class DirectColorModel;
			class VolatileImage;
		}
	}
}
namespace sun {
	namespace awt {
		class X11ComponentPeer;
		class X11GraphicsDevice;
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class RenderLoops;
			class SurfaceType;
		}
	}
}

namespace sun {
	namespace awt {

class $export X11GraphicsConfig : public ::java::awt::GraphicsConfiguration, public ::sun::awt::image::SurfaceManager$ProxiedGraphicsConfig {
	$class(X11GraphicsConfig, 0, ::java::awt::GraphicsConfiguration, ::sun::awt::image::SurfaceManager$ProxiedGraphicsConfig)
public:
	X11GraphicsConfig();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::X11GraphicsDevice* device, int32_t visualnum, int32_t depth, int32_t colormap, bool doubleBuffer);
	static ::java::awt::image::ComponentColorModel* createABGRCCM();
	virtual ::java::awt::Image* createAcceleratedImage(::java::awt::Component* target, int32_t width, int32_t height);
	int64_t createBackBuffer(int64_t window, int32_t swapAction);
	virtual int64_t createBackBuffer(::sun::awt::X11ComponentPeer* peer, int32_t numBuffers, ::java::awt::BufferCapabilities* caps);
	virtual ::java::awt::image::VolatileImage* createBackBufferImage(::java::awt::Component* target, int64_t backBuffer);
	static ::java::awt::image::DirectColorModel* createDCM32(int32_t rMask, int32_t gMask, int32_t bMask, int32_t aMask, bool aPre);
	virtual ::sun::java2d::SurfaceData* createSurfaceData(::sun::awt::X11ComponentPeer* peer);
	virtual void destroyBackBuffer(int64_t backBuffer);
	static void dispose(int64_t x11ConfigData);
	virtual void flip(::sun::awt::X11ComponentPeer* peer, ::java::awt::Component* target, ::java::awt::image::VolatileImage* xBackBuffer, int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction);
	virtual int64_t getAData();
	virtual int32_t getBitsPerPixel();
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::BufferCapabilities* getBufferCapabilities() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::image::ColorModel* getColorModel(int32_t transparency) override;
	virtual int32_t getColormap();
	static ::sun::awt::X11GraphicsConfig* getConfig(::sun::awt::X11GraphicsDevice* device, int32_t visualnum, int32_t depth, int32_t colormap, bool doubleBuffer);
	static ::sun::awt::X11GraphicsConfig* getConfig(::sun::awt::X11GraphicsDevice* device, int32_t visualnum, int32_t depth, int32_t colormap, int32_t type);
	virtual ::java::awt::geom::AffineTransform* getDefaultTransform() override;
	virtual int32_t getDepth();
	virtual ::java::awt::GraphicsDevice* getDevice() override;
	virtual ::java::awt::ImageCapabilities* getImageCapabilities() override;
	virtual ::java::awt::geom::AffineTransform* getNormalizingTransform() override;
	int32_t getNumColors();
	virtual $Object* getProxyKey() override;
	virtual int32_t getScale();
	virtual ::sun::java2d::loops::RenderLoops* getSolidLoops(::sun::java2d::loops::SurfaceType* stype);
	virtual ::sun::java2d::loops::SurfaceType* getSurfaceType();
	static int32_t getSwapAction(::java::awt::BufferCapabilities$FlipContents* flipAction);
	virtual int32_t getVisual();
	double getXResolution(int32_t screen);
	double getYResolution(int32_t screen);
	void init(int32_t visualNum, int32_t screen);
	static void initIDs();
	virtual bool isDoubleBuffered();
	virtual bool isTranslucencyCapable() override;
	bool isTranslucencyCapable(int64_t x11ConfigData);
	::java::awt::image::ColorModel* makeColorModel();
	virtual int32_t scaleDown(int32_t x);
	virtual int32_t scaleUp(int32_t x);
	void swapBuffers(int64_t window, int32_t swapAction);
	virtual $String* toString() override;
	::sun::awt::X11GraphicsDevice* device = nullptr;
	int32_t visual = 0;
	int32_t depth = 0;
	int32_t colormap = 0;
	::java::awt::image::ColorModel* colorModel = nullptr;
	int64_t aData = 0;
	bool doubleBuffer = false;
	$Object* disposerReferent = nullptr;
	::java::awt::BufferCapabilities* bufferCaps = nullptr;
	static ::java::awt::ImageCapabilities* imageCaps;
	int32_t bitsPerPixel = 0;
	::sun::java2d::loops::SurfaceType* surfaceType = nullptr;
	::sun::java2d::loops::RenderLoops* solidloops = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_X11GraphicsConfig_h_