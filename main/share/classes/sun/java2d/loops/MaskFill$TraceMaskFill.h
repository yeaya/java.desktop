#ifndef _sun_java2d_loops_MaskFill$TraceMaskFill_h_
#define _sun_java2d_loops_MaskFill$TraceMaskFill_h_
//$ class sun.java2d.loops.MaskFill$TraceMaskFill
//$ extends sun.java2d.loops.MaskFill

#include <java/lang/Array.h>
#include <sun/java2d/loops/MaskFill.h>

namespace java {
	namespace awt {
		class Composite;
	}
}
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
		namespace loops {

class MaskFill$TraceMaskFill : public ::sun::java2d::loops::MaskFill {
	$class(MaskFill$TraceMaskFill, $NO_CLASS_INIT, ::sun::java2d::loops::MaskFill)
public:
	MaskFill$TraceMaskFill();
	void init$(::sun::java2d::loops::MaskFill* target);
	virtual void DrawAAPgram(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, ::java::awt::Composite* comp, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) override;
	virtual void FillAAPgram(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, ::java::awt::Composite* comp, double x, double y, double dx1, double dy1, double dx2, double dy2) override;
	virtual void MaskFill$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, ::java::awt::Composite* comp, int32_t x, int32_t y, int32_t w, int32_t h, $bytes* mask, int32_t maskoff, int32_t maskscan) override;
	virtual bool canDoParallelograms() override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	::sun::java2d::loops::MaskFill* target = nullptr;
	::sun::java2d::loops::MaskFill* fillPgramTarget = nullptr;
	::sun::java2d::loops::MaskFill* drawPgramTarget = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_MaskFill$TraceMaskFill_h_