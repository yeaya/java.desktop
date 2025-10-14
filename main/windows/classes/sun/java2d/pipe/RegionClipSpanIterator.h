#ifndef _sun_java2d_pipe_RegionClipSpanIterator_h_
#define _sun_java2d_pipe_RegionClipSpanIterator_h_
//$ class sun.java2d.pipe.RegionClipSpanIterator
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

class RegionClipSpanIterator : public ::sun::java2d::pipe::SpanIterator {
	$class(RegionClipSpanIterator, $NO_CLASS_INIT, ::sun::java2d::pipe::SpanIterator)
public:
	RegionClipSpanIterator();
	void init$(::sun::java2d::pipe::Region* rgn, ::sun::java2d::pipe::SpanIterator* spanIter);
	virtual int64_t getNativeIterator() override;
	virtual void getPathBox($ints* pathbox) override;
	virtual void intersectClipBox(int32_t lox, int32_t loy, int32_t hix, int32_t hiy) override;
	virtual bool nextSpan($ints* resultbox) override;
	virtual void skipDownTo(int32_t y) override;
	::sun::java2d::pipe::Region* rgn = nullptr;
	::sun::java2d::pipe::SpanIterator* spanIter = nullptr;
	::sun::java2d::pipe::RegionIterator* resetState = nullptr;
	::sun::java2d::pipe::RegionIterator* lwm = nullptr;
	::sun::java2d::pipe::RegionIterator* row = nullptr;
	::sun::java2d::pipe::RegionIterator* box = nullptr;
	int32_t spanlox = 0;
	int32_t spanhix = 0;
	int32_t spanloy = 0;
	int32_t spanhiy = 0;
	int32_t lwmloy = 0;
	int32_t lwmhiy = 0;
	int32_t rgnlox = 0;
	int32_t rgnloy = 0;
	int32_t rgnhix = 0;
	int32_t rgnhiy = 0;
	int32_t rgnbndslox = 0;
	int32_t rgnbndsloy = 0;
	int32_t rgnbndshix = 0;
	int32_t rgnbndshiy = 0;
	$ints* rgnbox = nullptr;
	$ints* spanbox = nullptr;
	bool doNextSpan = false;
	bool doNextBox = false;
	bool done = false;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_RegionClipSpanIterator_h_