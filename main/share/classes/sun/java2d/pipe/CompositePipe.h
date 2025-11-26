#ifndef _sun_java2d_pipe_CompositePipe_h_
#define _sun_java2d_pipe_CompositePipe_h_
//$ interface sun.java2d.pipe.CompositePipe
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Rectangle;
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

class CompositePipe : public ::java::lang::Object {
	$interface(CompositePipe, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void endSequence(Object$* context) {}
	virtual bool needTile(Object$* context, int32_t x, int32_t y, int32_t w, int32_t h) {return false;}
	virtual void renderPathTile(Object$* context, $bytes* atile, int32_t offset, int32_t tilesize, int32_t x, int32_t y, int32_t w, int32_t h) {}
	virtual void skipTile(Object$* context, int32_t x, int32_t y) {}
	virtual $Object* startSequence(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s, ::java::awt::Rectangle* dev, $ints* abox) {return nullptr;}
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_CompositePipe_h_