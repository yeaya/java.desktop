#ifndef _sun_java2d_opengl_OGLSurfaceData$1_h_
#define _sun_java2d_opengl_OGLSurfaceData$1_h_
//$ class sun.java2d.opengl.OGLSurfaceData$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace java2d {
		namespace opengl {
			class OGLSurfaceData;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class OGLSurfaceData$1 : public ::java::lang::Runnable {
	$class(OGLSurfaceData$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	OGLSurfaceData$1();
	void init$(::sun::java2d::opengl::OGLSurfaceData* this$0, int32_t val$width, int32_t val$height);
	virtual void run() override;
	::sun::java2d::opengl::OGLSurfaceData* this$0 = nullptr;
	int32_t val$height = 0;
	int32_t val$width = 0;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_OGLSurfaceData$1_h_