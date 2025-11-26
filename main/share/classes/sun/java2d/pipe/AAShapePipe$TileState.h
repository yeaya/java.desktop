#ifndef _sun_java2d_pipe_AAShapePipe$TileState_h_
#define _sun_java2d_pipe_AAShapePipe$TileState_h_
//$ class sun.java2d.pipe.AAShapePipe$TileState
//$ extends sun.java2d.ReentrantContext

#include <java/lang/Array.h>
#include <sun/java2d/ReentrantContext.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Rectangle2D;
			class Rectangle2D$Double;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class AAShapePipe$TileState : public ::sun::java2d::ReentrantContext {
	$class(AAShapePipe$TileState, $NO_CLASS_INIT, ::sun::java2d::ReentrantContext)
public:
	AAShapePipe$TileState();
	void init$();
	::java::awt::geom::Rectangle2D* computeBBox(double ux1, double uy1, double ux2, double uy2);
	::java::awt::Rectangle* computeDevBox($ints* abox);
	$bytes* getAlphaTile(int32_t len);
	$bytes* theTile = nullptr;
	$ints* abox = nullptr;
	::java::awt::Rectangle* dev = nullptr;
	::java::awt::geom::Rectangle2D$Double* bbox2D = nullptr;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_AAShapePipe$TileState_h_