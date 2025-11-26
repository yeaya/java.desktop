#ifndef _sun_java2d_opengl_GLXGraphicsConfig_h_
#define _sun_java2d_opengl_GLXGraphicsConfig_h_
//$ class sun.java2d.opengl.GLXGraphicsConfig
//$ extends sun.awt.X11GraphicsConfig
//$ implements sun.java2d.opengl.OGLGraphicsConfig

#include <sun/awt/X11GraphicsConfig.h>
#include <sun/java2d/opengl/OGLGraphicsConfig.h>

namespace java {
	namespace awt {
		class BufferCapabilities;
		class BufferCapabilities$FlipContents;
		class Component;
		class Image;
		class ImageCapabilities;
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

class GLXGraphicsConfig : public ::sun::awt::X11GraphicsConfig, public ::sun::java2d::opengl::OGLGraphicsConfig {
	$class(GLXGraphicsConfig, 0, ::sun::awt::X11GraphicsConfig, ::sun::java2d::opengl::OGLGraphicsConfig)
public:
	GLXGraphicsConfig();
	using ::sun::awt::X11GraphicsConfig::getColorModel;
	using ::sun::awt::X11GraphicsConfig::createCompatibleImage;
	using ::sun::awt::X11GraphicsConfig::createCompatibleVolatileImage;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::X11GraphicsDevice* device, int32_t visualnum, int64_t configInfo, ::sun::java2d::pipe::hw::ContextCapabilities* oglCaps);
	virtual ::java::awt::Image* createAcceleratedImage(::java::awt::Component* target, int32_t width, int32_t height) override;
	virtual int64_t createBackBuffer(::sun::awt::X11ComponentPeer* peer, int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::image::VolatileImage* createBackBufferImage(::java::awt::Component* target, int64_t backBuffer) override;
	virtual ::java::awt::image::BufferedImage* createCompatibleImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createCompatibleVolatileImage(int32_t width, int32_t height, int32_t transparency, int32_t type) override;
	virtual ::sun::java2d::SurfaceData* createManagedSurface(int32_t w, int32_t h, int32_t transparency) override;
	virtual ::sun::java2d::SurfaceData* createSurfaceData(::sun::awt::X11ComponentPeer* peer) override;
	virtual void destroyBackBuffer(int64_t backBuffer) override;
	virtual void flip(::sun::awt::X11ComponentPeer* peer, ::java::awt::Component* target, ::java::awt::image::VolatileImage* xBackBuffer, int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::BufferCapabilities* getBufferCapabilities() override;
	virtual ::java::awt::image::ColorModel* getColorModel(int32_t transparency) override;
	static ::sun::java2d::opengl::GLXGraphicsConfig* getConfig(::sun::awt::X11GraphicsDevice* device, int32_t visualnum);
	virtual ::sun::java2d::pipe::BufferedContext* getContext() override;
	virtual ::sun::java2d::pipe::hw::ContextCapabilities* getContextCapabilities() override;
	static int64_t getGLXConfigInfo(int32_t screennum, int32_t visualnum);
	virtual ::java::awt::ImageCapabilities* getImageCapabilities() override;
	virtual int64_t getNativeConfigInfo() override;
	static int32_t getOGLCapabilities(int64_t configInfo);
	virtual $Object* getProxyKey() override;
	void initConfig(int64_t aData, int64_t ctxinfo);
	virtual bool isCapPresent(int32_t cap) override;
	virtual $String* toString() override;
	static ::java::awt::ImageCapabilities* imageCaps;
	::java::awt::BufferCapabilities* bufferCaps = nullptr;
	int64_t pConfigInfo = 0;
	::sun::java2d::pipe::hw::ContextCapabilities* oglCaps = nullptr;
	::sun::java2d::opengl::OGLContext* context = nullptr;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_GLXGraphicsConfig_h_