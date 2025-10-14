#ifndef _sun_java2d_pipe_SpanShapeRenderer$Simple_h_
#define _sun_java2d_pipe_SpanShapeRenderer$Simple_h_
//$ class sun.java2d.pipe.SpanShapeRenderer$Simple
//$ extends sun.java2d.pipe.SpanShapeRenderer
//$ implements sun.java2d.pipe.LoopBasedPipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/LoopBasedPipe.h>
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

class SpanShapeRenderer$Simple : public ::sun::java2d::pipe::SpanShapeRenderer, public ::sun::java2d::pipe::LoopBasedPipe {
	$class(SpanShapeRenderer$Simple, $NO_CLASS_INIT, ::sun::java2d::pipe::SpanShapeRenderer, ::sun::java2d::pipe::LoopBasedPipe)
public:
	SpanShapeRenderer$Simple();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void endSequence(Object$* ctx) override;
	virtual void renderBox(Object$* ctx, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual $Object* startSequence(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s, ::java::awt::Rectangle* devR, $ints* bbox) override;
	virtual $String* toString() override;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_SpanShapeRenderer$Simple_h_