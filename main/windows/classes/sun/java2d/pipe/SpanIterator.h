#ifndef _sun_java2d_pipe_SpanIterator_h_
#define _sun_java2d_pipe_SpanIterator_h_
//$ interface sun.java2d.pipe.SpanIterator
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace java2d {
		namespace pipe {

class SpanIterator : public ::java::lang::Object {
	$interface(SpanIterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t getNativeIterator() {return 0;}
	virtual void getPathBox($ints* pathbox) {}
	virtual void intersectClipBox(int32_t lox, int32_t loy, int32_t hix, int32_t hiy) {}
	virtual bool nextSpan($ints* spanbox) {return false;}
	virtual void skipDownTo(int32_t y) {}
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_SpanIterator_h_