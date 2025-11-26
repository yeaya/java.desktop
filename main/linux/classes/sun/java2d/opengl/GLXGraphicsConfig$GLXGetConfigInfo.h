#ifndef _sun_java2d_opengl_GLXGraphicsConfig$GLXGetConfigInfo_h_
#define _sun_java2d_opengl_GLXGraphicsConfig$GLXGetConfigInfo_h_
//$ class sun.java2d.opengl.GLXGraphicsConfig$GLXGetConfigInfo
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace java2d {
		namespace opengl {

class GLXGraphicsConfig$GLXGetConfigInfo : public ::java::lang::Runnable {
	$class(GLXGraphicsConfig$GLXGetConfigInfo, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	GLXGraphicsConfig$GLXGetConfigInfo();
	void init$(int32_t screen, int32_t visual);
	virtual int64_t getConfigInfo();
	virtual void run() override;
	int32_t screen = 0;
	int32_t visual = 0;
	int64_t cfginfo = 0;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_GLXGraphicsConfig$GLXGetConfigInfo_h_