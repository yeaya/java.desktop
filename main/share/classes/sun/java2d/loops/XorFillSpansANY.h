#ifndef _sun_java2d_loops_XorFillSpansANY_h_
#define _sun_java2d_loops_XorFillSpansANY_h_
//$ class sun.java2d.loops.XorFillSpansANY
//$ extends sun.java2d.loops.FillSpans

#include <sun/java2d/loops/FillSpans.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class SpanIterator;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class XorFillSpansANY : public ::sun::java2d::loops::FillSpans {
	$class(XorFillSpansANY, $NO_CLASS_INIT, ::sun::java2d::loops::FillSpans)
public:
	XorFillSpansANY();
	void init$();
	virtual void FillSpans$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, ::sun::java2d::pipe::SpanIterator* si) override;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_XorFillSpansANY_h_