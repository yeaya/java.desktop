#ifndef _sun_java2d_pipe_AAShapePipe_h_
#define _sun_java2d_pipe_AAShapePipe_h_
//$ class sun.java2d.pipe.AAShapePipe
//$ extends sun.java2d.pipe.ShapeDrawPipe
//$ implements sun.java2d.pipe.ParallelogramPipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/ParallelogramPipe.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>

#pragma push_macro("RDR_ENGINE")
#undef RDR_ENGINE
#pragma push_macro("TILE_STATE_PROVIDER")
#undef TILE_STATE_PROVIDER

namespace java {
	namespace awt {
		class BasicStroke;
		class Shape;
	}
}
namespace sun {
	namespace java2d {
		class ReentrantContextProvider;
		class SunGraphics2D;
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class AAShapePipe$TileState;
			class AATileGenerator;
			class CompositePipe;
			class RenderingEngine;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class AAShapePipe : public ::sun::java2d::pipe::ShapeDrawPipe, public ::sun::java2d::pipe::ParallelogramPipe {
	$class(AAShapePipe, 0, ::sun::java2d::pipe::ShapeDrawPipe, ::sun::java2d::pipe::ParallelogramPipe)
public:
	AAShapePipe();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::java2d::pipe::CompositePipe* pipe);
	virtual void draw(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s) override;
	virtual void drawParallelogram(::sun::java2d::SunGraphics2D* sg, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) override;
	virtual void fill(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s) override;
	virtual void fillParallelogram(::sun::java2d::SunGraphics2D* sg, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) override;
	void renderPath(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s, ::java::awt::BasicStroke* bs);
	void renderTiles(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s, ::sun::java2d::pipe::AATileGenerator* aatg, $ints* abox, ::sun::java2d::pipe::AAShapePipe$TileState* ts);
	virtual $String* toString() override;
	static ::sun::java2d::pipe::RenderingEngine* RDR_ENGINE;
	static ::sun::java2d::ReentrantContextProvider* TILE_STATE_PROVIDER;
	::sun::java2d::pipe::CompositePipe* outpipe = nullptr;
};

		} // pipe
	} // java2d
} // sun

#pragma pop_macro("RDR_ENGINE")
#pragma pop_macro("TILE_STATE_PROVIDER")

#endif // _sun_java2d_pipe_AAShapePipe_h_