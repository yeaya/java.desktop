#ifndef _sun_java2d_opengl_OGLPaints_h_
#define _sun_java2d_opengl_OGLPaints_h_
//$ class sun.java2d.opengl.OGLPaints
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class OGLPaints : public ::java::lang::Object {
	$class(OGLPaints, 0, ::java::lang::Object)
public:
	OGLPaints();
	void init$();
	virtual bool isPaintValid(::sun::java2d::SunGraphics2D* sg2d) {return false;}
	static bool isValid(::sun::java2d::SunGraphics2D* sg2d);
	static ::java::util::Map* impls;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_OGLPaints_h_