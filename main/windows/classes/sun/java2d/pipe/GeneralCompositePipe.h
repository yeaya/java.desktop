#ifndef _sun_java2d_pipe_GeneralCompositePipe_h_
#define _sun_java2d_pipe_GeneralCompositePipe_h_
//$ class sun.java2d.pipe.GeneralCompositePipe
//$ extends sun.java2d.pipe.CompositePipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/CompositePipe.h>

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

class GeneralCompositePipe : public ::sun::java2d::pipe::CompositePipe {
	$class(GeneralCompositePipe, $NO_CLASS_INIT, ::sun::java2d::pipe::CompositePipe)
public:
	GeneralCompositePipe();
	void init$();
	virtual void endSequence(Object$* ctx) override;
	virtual bool needTile(Object$* ctx, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void renderPathTile(Object$* ctx, $bytes* atile, int32_t offset, int32_t tilesize, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void skipTile(Object$* ctx, int32_t x, int32_t y) override;
	virtual $Object* startSequence(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s, ::java::awt::Rectangle* devR, $ints* abox) override;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_GeneralCompositePipe_h_