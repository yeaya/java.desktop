#ifndef _sun_java2d_pipe_RegionSpanIterator_h_
#define _sun_java2d_pipe_RegionSpanIterator_h_
//$ class sun.java2d.pipe.RegionSpanIterator
//$ extends sun.java2d.pipe.SpanIterator

#include <java/lang/Array.h>
#include <sun/java2d/pipe/SpanIterator.h>

namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
			class RegionIterator;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class RegionSpanIterator : public ::sun::java2d::pipe::SpanIterator {
	$class(RegionSpanIterator, $NO_CLASS_INIT, ::sun::java2d::pipe::SpanIterator)
public:
	RegionSpanIterator();
	void init$(::sun::java2d::pipe::Region* r);
	virtual int64_t getNativeIterator() override;
	virtual void getPathBox($ints* pathbox) override;
	virtual void intersectClipBox(int32_t clox, int32_t cloy, int32_t chix, int32_t chiy) override;
	virtual bool nextSpan($ints* spanbox) override;
	virtual void skipDownTo(int32_t y) override;
	::sun::java2d::pipe::RegionIterator* ri = nullptr;
	int32_t lox = 0;
	int32_t loy = 0;
	int32_t hix = 0;
	int32_t hiy = 0;
	int32_t curloy = 0;
	int32_t curhiy = 0;
	bool done = false;
	bool isrect = false;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_RegionSpanIterator_h_