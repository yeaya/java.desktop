#ifndef _sun_awt_Win32GraphicsConfig_h_
#define _sun_awt_Win32GraphicsConfig_h_
//$ class sun.awt.Win32GraphicsConfig
//$ extends java.awt.GraphicsConfiguration
//$ implements sun.awt.DisplayChangedListener,sun.awt.image.SurfaceManager$ProxiedGraphicsConfig

#include <java/awt/GraphicsConfiguration.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/image/SurfaceManager$ProxiedGraphicsConfig.h>

namespace java {
	namespace awt {
		class BufferCapabilities;
		class BufferCapabilities$FlipContents;
		class Component;
		class GraphicsDevice;
		class Image;
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
			class VolatileImage;
		}
	}
}
namespace sun {
	namespace awt {
		class Win32GraphicsDevice;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WComponentPeer;
		}
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

class $export Win32GraphicsConfig : public ::java::awt::GraphicsConfiguration, public ::sun::awt::DisplayChangedListener, public ::sun::awt::image::SurfaceManager$ProxiedGraphicsConfig {
	$class(Win32GraphicsConfig, 0, ::java::awt::GraphicsConfiguration, ::sun::awt::DisplayChangedListener, ::sun::awt::image::SurfaceManager$ProxiedGraphicsConfig)
public:
	Win32GraphicsConfig();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::GraphicsDevice* device, int32_t visualnum);
	virtual void assertOperationSupported(::java::awt::Component* target, int32_t numBuffers, ::java::awt::BufferCapabilities* caps);
	virtual ::java::awt::Image* createAcceleratedImage(::java::awt::Component* target, int32_t width, int32_t height);
	virtual ::java::awt::image::VolatileImage* createBackBuffer(::sun::awt::windows::WComponentPeer* peer);
	virtual ::sun::java2d::SurfaceData* createSurfaceData(::sun::awt::windows::WComponentPeer* peer, int32_t numBackBuffers);
	virtual void displayChanged() override;
	virtual void flip(::sun::awt::windows::WComponentPeer* peer, ::java::awt::Component* target, ::java::awt::image::VolatileImage* backBuffer, int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction);
	::java::awt::Rectangle* getBounds(int32_t screen);
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::image::ColorModel* getColorModel(int32_t transparency) override;
	static ::sun::awt::Win32GraphicsConfig* getConfig(::sun::awt::Win32GraphicsDevice* device, int32_t pixFormatID);
	virtual ::java::awt::geom::AffineTransform* getDefaultTransform() override;
	virtual ::java::awt::GraphicsDevice* getDevice() override;
	virtual ::java::awt::image::ColorModel* getDeviceColorModel();
	virtual ::java::awt::geom::AffineTransform* getNormalizingTransform() override;
	virtual $Object* getProxyKey() override;
	virtual ::sun::java2d::loops::RenderLoops* getSolidLoops(::sun::java2d::loops::SurfaceType* stype);
	virtual int32_t getVisual();
	static void initIDs();
	virtual bool isTranslucencyCapable() override;
	virtual void paletteChanged() override;
	virtual $String* toString() override;
	::sun::awt::Win32GraphicsDevice* device = nullptr;
	int32_t visual = 0;
	::sun::java2d::loops::RenderLoops* solidloops = nullptr;
	::sun::java2d::loops::SurfaceType* sTypeOrig = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_Win32GraphicsConfig_h_