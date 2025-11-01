#ifndef _sun_java2d_opengl_OGLGraphicsConfig_h_
#define _sun_java2d_opengl_OGLGraphicsConfig_h_
//$ interface sun.java2d.opengl.OGLGraphicsConfig
//$ extends sun.java2d.pipe.hw.AccelGraphicsConfig,sun.awt.image.SurfaceManager$ProxiedGraphicsConfig

#include <sun/awt/image/SurfaceManager$ProxiedGraphicsConfig.h>
#include <sun/java2d/pipe/hw/AccelGraphicsConfig.h>

namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class OGLGraphicsConfig : public ::sun::java2d::pipe::hw::AccelGraphicsConfig, public ::sun::awt::image::SurfaceManager$ProxiedGraphicsConfig {
	$interface(OGLGraphicsConfig, $NO_CLASS_INIT, ::sun::java2d::pipe::hw::AccelGraphicsConfig, ::sun::awt::image::SurfaceManager$ProxiedGraphicsConfig)
public:
	virtual $Object* clone() override;
	virtual ::sun::java2d::SurfaceData* createManagedSurface(int32_t w, int32_t h, int32_t transparency) {return nullptr;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::sun::java2d::pipe::BufferedContext* getContext() override {return nullptr;}
	virtual int64_t getNativeConfigInfo() {return 0;}
	virtual int32_t hashCode() override;
	virtual bool isCapPresent(int32_t cap) {return false;}
	virtual $String* toString() override;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_OGLGraphicsConfig_h_