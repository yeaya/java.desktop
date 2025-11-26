#ifndef _sun_java2d_pipe_SpanShapeRenderer$Composite_h_
#define _sun_java2d_pipe_SpanShapeRenderer$Composite_h_
//$ class sun.java2d.pipe.SpanShapeRenderer$Composite
//$ extends sun.java2d.pipe.SpanShapeRenderer

#include <java/lang/Array.h>
#include <sun/java2d/pipe/SpanShapeRenderer.h>

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
			class CompositePipe;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class SpanShapeRenderer$Composite : public ::sun::java2d::pipe::SpanShapeRenderer {
	$class(SpanShapeRenderer$Composite, $NO_CLASS_INIT, ::sun::java2d::pipe::SpanShapeRenderer)
public:
	SpanShapeRenderer$Composite();
	void init$(::sun::java2d::pipe::CompositePipe* pipe);
	virtual void endSequence(Object$* ctx) override;
	virtual void renderBox(Object$* ctx, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual $Object* startSequence(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s, ::java::awt::Rectangle* devR, $ints* bbox) override;
	::sun::java2d::pipe::CompositePipe* comppipe = nullptr;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_SpanShapeRenderer$Composite_h_