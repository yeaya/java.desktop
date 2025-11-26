#ifndef _sun_java2d_pipe_ShapeDrawPipe_h_
#define _sun_java2d_pipe_ShapeDrawPipe_h_
//$ interface sun.java2d.pipe.ShapeDrawPipe
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Shape;
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class ShapeDrawPipe : public ::java::lang::Object {
	$interface(ShapeDrawPipe, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void draw(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s) {}
	virtual void fill(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s) {}
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_ShapeDrawPipe_h_