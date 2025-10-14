#ifndef _sun_java2d_pipe_RenderingEngine$Tracer_h_
#define _sun_java2d_pipe_RenderingEngine$Tracer_h_
//$ class sun.java2d.pipe.RenderingEngine$Tracer
//$ extends sun.java2d.pipe.RenderingEngine

#include <java/lang/Array.h>
#include <sun/java2d/pipe/RenderingEngine.h>

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

class RenderingEngine$Tracer : public ::sun::java2d::pipe::RenderingEngine {
	$class(RenderingEngine$Tracer, $NO_CLASS_INIT, ::sun::java2d::pipe::RenderingEngine)
public:
	RenderingEngine$Tracer();
	void init$(::sun::java2d::pipe::RenderingEngine* target);
	virtual ::java::awt::Shape* createStrokedShape(::java::awt::Shape* src, float width, int32_t caps, int32_t join, float miterlimit, $floats* dashes, float dashphase) override;
	virtual ::sun::java2d::pipe::AATileGenerator* getAATileGenerator(::java::awt::Shape* s, ::java::awt::geom::AffineTransform* at, ::sun::java2d::pipe::Region* clip, ::java::awt::BasicStroke* bs, bool thin, bool normalize, $ints* bbox) override;
	virtual ::sun::java2d::pipe::AATileGenerator* getAATileGenerator(double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2, ::sun::java2d::pipe::Region* clip, $ints* bbox) override;
	virtual float getMinimumAAPenSize() override;
	virtual void strokeTo(::java::awt::Shape* src, ::java::awt::geom::AffineTransform* at, ::java::awt::BasicStroke* bs, bool thin, bool normalize, bool antialias, ::sun::awt::geom::PathConsumer2D* consumer) override;
	virtual void strokeTo(::java::awt::Shape* src, ::java::awt::geom::AffineTransform* at, ::sun::java2d::pipe::Region* clip, ::java::awt::BasicStroke* bs, bool thin, bool normalize, bool antialias, ::sun::awt::geom::PathConsumer2D* consumer) override;
	::sun::java2d::pipe::RenderingEngine* target = nullptr;
	$String* name = nullptr;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_RenderingEngine$Tracer_h_