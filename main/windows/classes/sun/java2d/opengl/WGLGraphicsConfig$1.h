#ifndef _sun_java2d_opengl_WGLGraphicsConfig$1_h_
#define _sun_java2d_opengl_WGLGraphicsConfig$1_h_
//$ class sun.java2d.opengl.WGLGraphicsConfig$1
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace sun {
	namespace java2d {
		namespace opengl {

class WGLGraphicsConfig$1 : public ::java::lang::Runnable {
	$class(WGLGraphicsConfig$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WGLGraphicsConfig$1();
	void init$($StringArray* val$ids);
	virtual void run() override;
	$StringArray* val$ids = nullptr;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_WGLGraphicsConfig$1_h_