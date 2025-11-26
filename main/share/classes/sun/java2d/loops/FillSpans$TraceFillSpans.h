#ifndef _sun_java2d_loops_FillSpans$TraceFillSpans_h_
#define _sun_java2d_loops_FillSpans$TraceFillSpans_h_
//$ class sun.java2d.loops.FillSpans$TraceFillSpans
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
		namespace loops {
			class GraphicsPrimitive;
		}
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

class FillSpans$TraceFillSpans : public ::sun::java2d::loops::FillSpans {
	$class(FillSpans$TraceFillSpans, $NO_CLASS_INIT, ::sun::java2d::loops::FillSpans)
public:
	FillSpans$TraceFillSpans();
	void init$(::sun::java2d::loops::FillSpans* target);
	virtual void FillSpans$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, ::sun::java2d::pipe::SpanIterator* si) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::FillSpans* target = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_FillSpans$TraceFillSpans_h_