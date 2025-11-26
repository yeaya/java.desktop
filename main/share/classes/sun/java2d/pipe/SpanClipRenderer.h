#ifndef _sun_java2d_pipe_SpanClipRenderer_h_
#define _sun_java2d_pipe_SpanClipRenderer_h_
//$ class sun.java2d.pipe.SpanClipRenderer
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
			class RegionIterator;
			class ShapeSpanIterator;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class SpanClipRenderer : public ::sun::java2d::pipe::CompositePipe {
	$class(SpanClipRenderer, 0, ::sun::java2d::pipe::CompositePipe)
public:
	SpanClipRenderer();
	void init$(::sun::java2d::pipe::CompositePipe* pipe);
	virtual void endSequence(Object$* ctx) override;
	virtual void eraseTile(::sun::java2d::pipe::RegionIterator* ri, $bytes* alpha, int32_t offset, int32_t tsize, $ints* band);
	virtual void fillTile(::sun::java2d::pipe::RegionIterator* ri, $bytes* alpha, int32_t offset, int32_t tsize, $ints* band);
	static void initIDs($Class* rc, $Class* ric);
	virtual bool needTile(Object$* ctx, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void renderPathTile(Object$* ctx, $bytes* atile, int32_t offset, int32_t tsize, int32_t x, int32_t y, int32_t w, int32_t h, ::sun::java2d::pipe::ShapeSpanIterator* sr);
	virtual void renderPathTile(Object$* ctx, $bytes* atile, int32_t offset, int32_t tsize, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void skipTile(Object$* ctx, int32_t x, int32_t y) override;
	virtual $Object* startSequence(::sun::java2d::SunGraphics2D* sg, ::java::awt::Shape* s, ::java::awt::Rectangle* devR, $ints* abox) override;
	::sun::java2d::pipe::CompositePipe* outpipe = nullptr;
	static $Class* RegionClass;
	static $Class* RegionIteratorClass;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_SpanClipRenderer_h_