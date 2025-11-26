#ifndef _sun_java2d_loops_FillRect$General_h_
#define _sun_java2d_loops_FillRect$General_h_
//$ class sun.java2d.loops.FillRect$General
//$ extends sun.java2d.loops.FillRect

#include <sun/java2d/loops/FillRect.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class CompositeType;
			class MaskFill;
			class SurfaceType;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class FillRect$General : public ::sun::java2d::loops::FillRect {
	$class(FillRect$General, $NO_CLASS_INIT, ::sun::java2d::loops::FillRect)
public:
	FillRect$General();
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual void FillRect$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* dest, int32_t x, int32_t y, int32_t w, int32_t h) override;
	::sun::java2d::loops::MaskFill* fillop = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_FillRect$General_h_