#ifndef _sun_java2d_opengl_CGLLayer_h_
#define _sun_java2d_opengl_CGLLayer_h_
//$ class sun.java2d.opengl.CGLLayer
//$ extends sun.lwawt.macosx.CFLayer

#include <sun/lwawt/macosx/CFLayer.h>

namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace opengl {
			class CGLSurfaceData;
		}
	}
}
namespace sun {
	namespace lwawt {
		class LWWindowPeer;
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class CGLLayer : public ::sun::lwawt::macosx::CFLayer {
	$class(CGLLayer, $NO_CLASS_INIT, ::sun::lwawt::macosx::CFLayer)
public:
	CGLLayer();
	void init$(::sun::lwawt::LWWindowPeer* peer);
	static void blitTexture(int64_t layerPtr);
	virtual void dispose() override;
	void drawInCGLContext();
	static void lambda$drawInCGLContext$2(int64_t ptr);
	void lambda$setScale$1(int64_t ptr);
	static void lambda$validate$0(::sun::java2d::opengl::CGLSurfaceData* cglsd, int64_t ptr);
	int64_t nativeCreateLayer();
	static void nativeSetScale(int64_t layerPtr, double scale);
	virtual ::sun::java2d::SurfaceData* replaceSurfaceData() override;
	void setScale(int32_t _scale);
	static void validate(int64_t layerPtr, ::sun::java2d::opengl::CGLSurfaceData* cglsd);
	virtual void validate(::sun::java2d::opengl::CGLSurfaceData* cglsd);
	int32_t scale = 0;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_CGLLayer_h_