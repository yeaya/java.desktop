#ifndef _sun_java2d_pipe_AlphaColorPipe_h_
#define _sun_java2d_pipe_AlphaColorPipe_h_
//$ class sun.java2d.pipe.AlphaColorPipe
//$ extends sun.java2d.pipe.CompositePipe
//$ implements sun.java2d.pipe.ParallelogramPipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/CompositePipe.h>
#include <sun/java2d/pipe/ParallelogramPipe.h>

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

class AlphaColorPipe : public ::sun::java2d::pipe::CompositePipe, public ::sun::java2d::pipe::ParallelogramPipe {
	$class(AlphaColorPipe, $NO_CLASS_INIT, ::sun::java2d::pipe::CompositePipe, ::sun::java2d::pipe::ParallelogramPipe)
public:
	AlphaColorPipe();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void drawParallelogram(::sun::java2d::SunGraphics2D* sg, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) override;
	virtual void endSequence(Object$* context) override;
	virtual void fillParallelogram(::sun::java2d::SunGraphics2D* sg, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) override;
	virtual bool needTile(Object$* context, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void renderPathTile(Object$* context, $bytes* atile, int32_t offset, int32_t tilesize, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void skipTile(Object$* context, int32_t x, int32_t y) override;
	virtual $Object* startSequence(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s, ::java::awt::Rectangle* dev, $ints* abox) override;
	virtual $String* toString() override;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_AlphaColorPipe_h_