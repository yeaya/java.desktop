#ifndef _sun_java2d_pipe_AlphaPaintPipe_h_
#define _sun_java2d_pipe_AlphaPaintPipe_h_
//$ class sun.java2d.pipe.AlphaPaintPipe
//$ extends sun.java2d.pipe.CompositePipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/CompositePipe.h>

#pragma push_macro("TILE_SIZE")
#undef TILE_SIZE

namespace java {
	namespace awt {
		class Rectangle;
		class Shape;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
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

class AlphaPaintPipe : public ::sun::java2d::pipe::CompositePipe {
	$class(AlphaPaintPipe, $NO_CLASS_INIT, ::sun::java2d::pipe::CompositePipe)
public:
	AlphaPaintPipe();
	void init$();
	virtual void endSequence(Object$* ctx) override;
	virtual bool needTile(Object$* context, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void renderPathTile(Object$* ctx, $bytes* atile, int32_t offset, int32_t tilesize, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void skipTile(Object$* context, int32_t x, int32_t y) override;
	virtual $Object* startSequence(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s, ::java::awt::Rectangle* devR, $ints* abox) override;
	static ::java::lang::ref::WeakReference* cachedLastRaster;
	static ::java::lang::ref::WeakReference* cachedLastColorModel;
	static ::java::lang::ref::WeakReference* cachedLastData;
	static const int32_t TILE_SIZE = 32;
};

		} // pipe
	} // java2d
} // sun

#pragma pop_macro("TILE_SIZE")

#endif // _sun_java2d_pipe_AlphaPaintPipe_h_