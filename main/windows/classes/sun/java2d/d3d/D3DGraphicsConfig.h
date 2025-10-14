#ifndef _sun_java2d_d3d_D3DGraphicsConfig_h_
#define _sun_java2d_d3d_D3DGraphicsConfig_h_
//$ class sun.java2d.d3d.D3DGraphicsConfig
//$ extends sun.awt.Win32GraphicsConfig
//$ implements sun.java2d.pipe.hw.AccelGraphicsConfig

#include <sun/awt/Win32GraphicsConfig.h>
#include <sun/java2d/pipe/hw/AccelGraphicsConfig.h>

namespace java {
	namespace awt {
		class BufferCapabilities;
		class BufferCapabilities$FlipContents;
		class Component;
		class ImageCapabilities;
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
		namespace d3d {
			class D3DGraphicsDevice;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class BufferedContext;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {
				class ContextCapabilities;
			}
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DGraphicsConfig : public ::sun::awt::Win32GraphicsConfig, public ::sun::java2d::pipe::hw::AccelGraphicsConfig {
	$class(D3DGraphicsConfig, 0, ::sun::awt::Win32GraphicsConfig, ::sun::java2d::pipe::hw::AccelGraphicsConfig)
public:
	D3DGraphicsConfig();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::awt::Win32GraphicsConfig::getColorModel;
	using ::sun::awt::Win32GraphicsConfig::createCompatibleVolatileImage;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::java2d::d3d::D3DGraphicsDevice* device);
	virtual void assertOperationSupported(::java::awt::Component* target, int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::image::VolatileImage* createBackBuffer(::sun::awt::windows::WComponentPeer* peer) override;
	virtual ::java::awt::image::VolatileImage* createCompatibleVolatileImage(int32_t width, int32_t height, int32_t transparency, int32_t type) override;
	::sun::java2d::SurfaceData* createManagedSurface(int32_t w, int32_t h, int32_t transparency);
	virtual ::sun::java2d::SurfaceData* createSurfaceData(::sun::awt::windows::WComponentPeer* peer, int32_t numBackBuffers) override;
	virtual void displayChanged() override;
	virtual void flip(::sun::awt::windows::WComponentPeer* peer, ::java::awt::Component* target, ::java::awt::image::VolatileImage* backBuffer, int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::BufferCapabilities* getBufferCapabilities() override;
	virtual ::java::awt::image::ColorModel* getColorModel(int32_t transparency) override;
	virtual ::sun::java2d::pipe::BufferedContext* getContext() override;
	virtual ::sun::java2d::pipe::hw::ContextCapabilities* getContextCapabilities() override;
	::sun::java2d::d3d::D3DGraphicsDevice* getD3DDevice();
	virtual ::java::awt::ImageCapabilities* getImageCapabilities() override;
	virtual $String* toString() override;
	static ::java::awt::ImageCapabilities* imageCaps;
	::java::awt::BufferCapabilities* bufferCaps = nullptr;
	::sun::java2d::d3d::D3DGraphicsDevice* device = nullptr;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DGraphicsConfig_h_