#ifndef _sun_java2d_pipe_SpanClipRenderer$SCRcontext_h_
#define _sun_java2d_pipe_SpanClipRenderer$SCRcontext_h_
//$ class sun.java2d.pipe.SpanClipRenderer$SCRcontext
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace java2d {
		namespace pipe {
			class RegionIterator;
			class SpanClipRenderer;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class SpanClipRenderer$SCRcontext : public ::java::lang::Object {
	$class(SpanClipRenderer$SCRcontext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SpanClipRenderer$SCRcontext();
	void init$(::sun::java2d::pipe::SpanClipRenderer* this$0, ::sun::java2d::pipe::RegionIterator* ri, Object$* outctx);
	::sun::java2d::pipe::SpanClipRenderer* this$0 = nullptr;
	::sun::java2d::pipe::RegionIterator* iterator = nullptr;
	$Object* outcontext = nullptr;
	$ints* band = nullptr;
	$bytes* tile = nullptr;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_SpanClipRenderer$SCRcontext_h_