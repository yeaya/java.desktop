#ifndef _sun_java2d_pipe_RenderingEngine_h_
#define _sun_java2d_pipe_RenderingEngine_h_
//$ class sun.java2d.pipe.RenderingEngine
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class BasicStroke;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class PathIterator;
		}
	}
}
namespace sun {
	namespace awt {
		namespace geom {
			class PathConsumer2D;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class AATileGenerator;
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class RenderingEngine : public ::java::lang::Object {
	$class(RenderingEngine, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RenderingEngine();
	void init$();
	virtual ::java::awt::Shape* createStrokedShape(::java::awt::Shape* src, float width, int32_t caps, int32_t join, float miterlimit, $floats* dashes, float dashphase) {return nullptr;}
	static void feedConsumer(::java::awt::geom::PathIterator* pi, ::sun::awt::geom::PathConsumer2D* consumer);
	virtual ::sun::java2d::pipe::AATileGenerator* getAATileGenerator(::java::awt::Shape* s, ::java::awt::geom::AffineTransform* at, ::sun::java2d::pipe::Region* clip, ::java::awt::BasicStroke* bs, bool thin, bool normalize, $ints* bbox) {return nullptr;}
	virtual ::sun::java2d::pipe::AATileGenerator* getAATileGenerator(double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2, ::sun::java2d::pipe::Region* clip, $ints* bbox) {return nullptr;}
	static ::sun::java2d::pipe::RenderingEngine* getInstance();
	virtual float getMinimumAAPenSize() {return 0.0;}
	virtual void strokeTo(::java::awt::Shape* src, ::java::awt::geom::AffineTransform* at, ::java::awt::BasicStroke* bs, bool thin, bool normalize, bool antialias, ::sun::awt::geom::PathConsumer2D* consumer) {}
	virtual void strokeTo(::java::awt::Shape* src, ::java::awt::geom::AffineTransform* at, ::sun::java2d::pipe::Region* clip, ::java::awt::BasicStroke* bs, bool thin, bool normalize, bool antialias, ::sun::awt::geom::PathConsumer2D* consumer);
	static ::sun::java2d::pipe::RenderingEngine* reImpl;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_RenderingEngine_h_