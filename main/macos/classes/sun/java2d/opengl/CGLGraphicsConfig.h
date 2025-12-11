#ifndef _sun_java2d_opengl_CGLGraphicsConfig_h_
#define _sun_java2d_opengl_CGLGraphicsConfig_h_
//$ class sun.java2d.opengl.CGLGraphicsConfig
//$ extends sun.awt.CGraphicsConfig
//$ implements sun.java2d.opengl.OGLGraphicsConfig

#include <java/lang/Array.h>
#include <sun/awt/CGraphicsConfig.h>
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
		class CGraphicsDevice;
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
	namespace lwawt {
		class LWComponentPeer;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CFRetainedResource;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class CGLGraphicsConfig : public ::sun::awt::CGraphicsConfig, public ::sun::java2d::opengl::OGLGraphicsConfig {
	$class(CGLGraphicsConfig, 0, ::sun::awt::CGraphicsConfig, ::sun::java2d::opengl::OGLGraphicsConfig)
public:
	CGLGraphicsConfig();
	using ::sun::awt::CGraphicsConfig::getColorModel;
	using ::sun::awt::CGraphicsConfig::createCompatibleImage;
	using ::sun::awt::CGraphicsConfig::createCompatibleVolatileImage;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::CGraphicsDevice* device, int64_t configInfo, int32_t maxTextureSize, ::sun::java2d::pipe::hw::ContextCapabilities* oglCaps);
	virtual void assertOperationSupported(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createAcceleratedImage(::java::awt::Component* target, int32_t width, int32_t height) override;
	virtual ::java::awt::Image* createBackBuffer(::sun::lwawt::LWComponentPeer* peer) override;
	virtual ::java::awt::image::BufferedImage* createCompatibleImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createCompatibleVolatileImage(int32_t width, int32_t height, int32_t transparency, int32_t type) override;
	virtual ::sun::java2d::SurfaceData* createManagedSurface(int32_t w, int32_t h, int32_t transparency) override;
	virtual ::sun::java2d::SurfaceData* createSurfaceData(::sun::lwawt::macosx::CFRetainedResource* layer) override;
	virtual void destroyBackBuffer(::java::awt::Image* backBuffer) override;
	void displayChanged();
	virtual void flip(::sun::lwawt::LWComponentPeer* peer, ::java::awt::Image* backBuffer, int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::BufferCapabilities* getBufferCapabilities() override;
	static int64_t getCGLConfigInfo();
	virtual ::java::awt::image::ColorModel* getColorModel(int32_t transparency) override;
	static ::sun::java2d::opengl::CGLGraphicsConfig* getConfig(::sun::awt::CGraphicsDevice* device);
	virtual ::sun::java2d::pipe::BufferedContext* getContext() override;
	virtual ::sun::java2d::pipe::hw::ContextCapabilities* getContextCapabilities() override;
	virtual ::java::awt::ImageCapabilities* getImageCapabilities() override;
	virtual int32_t getMaxTextureHeight() override;
	virtual int32_t getMaxTextureWidth() override;
	virtual int64_t getNativeConfigInfo() override;
	static int32_t getOGLCapabilities(int64_t configInfo);
	virtual $Object* getProxyKey() override;
	static bool initCGL();
	static bool isCGLAvailable();
	virtual bool isCapPresent(int32_t cap) override;
	bool isDoubleBuffered();
	static void lambda$getConfig$0($StringArray* ids);
	static int32_t nativeGetMaxTextureSize();
	virtual $String* toString() override;
	static bool cglAvailable;
	static ::java::awt::ImageCapabilities* imageCaps;
	::java::awt::BufferCapabilities* bufferCaps = nullptr;
	int64_t pConfigInfo = 0;
	::sun::java2d::pipe::hw::ContextCapabilities* oglCaps = nullptr;
	::sun::java2d::opengl::OGLContext* context = nullptr;
	$Object* disposerReferent = nullptr;
	int32_t maxTextureSize = 0;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_CGLGraphicsConfig_h_