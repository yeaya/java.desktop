#ifndef _sun_java2d_opengl_WGLGraphicsConfig_h_
#define _sun_java2d_opengl_WGLGraphicsConfig_h_
//$ class sun.java2d.opengl.WGLGraphicsConfig
//$ extends sun.awt.Win32GraphicsConfig
//$ implements sun.java2d.opengl.OGLGraphicsConfig

#include <sun/awt/Win32GraphicsConfig.h>
#include <sun/java2d/opengl/OGLGraphicsConfig.h>

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
		namespace opengl {
			class OGLContext;
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
		namespace opengl {

class WGLGraphicsConfig : public ::sun::awt::Win32GraphicsConfig, public ::sun::java2d::opengl::OGLGraphicsConfig {
	$class(WGLGraphicsConfig, 0, ::sun::awt::Win32GraphicsConfig, ::sun::java2d::opengl::OGLGraphicsConfig)
public:
	WGLGraphicsConfig();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::awt::Win32GraphicsConfig::getColorModel;
	using ::sun::awt::Win32GraphicsConfig::createCompatibleVolatileImage;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::Win32GraphicsDevice* device, int32_t visualnum, int64_t configInfo, ::sun::java2d::pipe::hw::ContextCapabilities* oglCaps);
	virtual void assertOperationSupported(::java::awt::Component* target, int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::image::VolatileImage* createBackBuffer(::sun::awt::windows::WComponentPeer* peer) override;
	virtual ::java::awt::image::VolatileImage* createCompatibleVolatileImage(int32_t width, int32_t height, int32_t transparency, int32_t type) override;
	virtual ::sun::java2d::SurfaceData* createManagedSurface(int32_t w, int32_t h, int32_t transparency) override;
	virtual ::sun::java2d::SurfaceData* createSurfaceData(::sun::awt::windows::WComponentPeer* peer, int32_t numBackBuffers) override;
	virtual void displayChanged() override;
	virtual void flip(::sun::awt::windows::WComponentPeer* peer, ::java::awt::Component* target, ::java::awt::image::VolatileImage* backBuffer, int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::BufferCapabilities* getBufferCapabilities() override;
	virtual ::java::awt::image::ColorModel* getColorModel(int32_t transparency) override;
	static ::sun::java2d::opengl::WGLGraphicsConfig* getConfig(::sun::awt::Win32GraphicsDevice* device, int32_t pixfmt);
	virtual ::sun::java2d::pipe::BufferedContext* getContext() override;
	virtual ::sun::java2d::pipe::hw::ContextCapabilities* getContextCapabilities() override;
	static int32_t getDefaultPixFmt(int32_t screennum);
	virtual ::java::awt::ImageCapabilities* getImageCapabilities() override;
	virtual int64_t getNativeConfigInfo() override;
	static int32_t getOGLCapabilities(int64_t configInfo);
	virtual $Object* getProxyKey() override;
	static int64_t getWGLConfigInfo(int32_t screennum, int32_t visualnum);
	static bool initWGL();
	virtual bool isCapPresent(int32_t cap) override;
	static bool isWGLAvailable();
	virtual $String* toString() override;
	static bool wglAvailable;
	static ::java::awt::ImageCapabilities* imageCaps;
	::java::awt::BufferCapabilities* bufferCaps = nullptr;
	int64_t pConfigInfo = 0;
	::sun::java2d::pipe::hw::ContextCapabilities* oglCaps = nullptr;
	::sun::java2d::opengl::OGLContext* context = nullptr;
	$Object* disposerReferent = nullptr;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_WGLGraphicsConfig_h_