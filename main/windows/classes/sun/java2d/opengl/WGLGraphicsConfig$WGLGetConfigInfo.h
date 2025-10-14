#ifndef _sun_java2d_opengl_WGLGraphicsConfig$WGLGetConfigInfo_h_
#define _sun_java2d_opengl_WGLGraphicsConfig$WGLGetConfigInfo_h_
//$ class sun.java2d.opengl.WGLGraphicsConfig$WGLGetConfigInfo
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace java2d {
		namespace opengl {

class WGLGraphicsConfig$WGLGetConfigInfo : public ::java::lang::Runnable {
	$class(WGLGraphicsConfig$WGLGetConfigInfo, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WGLGraphicsConfig$WGLGetConfigInfo();
	void init$(int32_t screen, int32_t pixfmt);
	virtual int64_t getConfigInfo();
	virtual void run() override;
	int32_t screen = 0;
	int32_t pixfmt = 0;
	int64_t cfginfo = 0;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_WGLGraphicsConfig$WGLGetConfigInfo_h_