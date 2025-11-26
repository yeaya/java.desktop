#ifndef _sun_java2d_loops_MaskFill$General_h_
#define _sun_java2d_loops_MaskFill$General_h_
//$ class sun.java2d.loops.MaskFill$General
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
			class CompositeType;
			class FillRect;
			class MaskBlit;
			class SurfaceType;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class MaskFill$General : public ::sun::java2d::loops::MaskFill {
	$class(MaskFill$General, $NO_CLASS_INIT, ::sun::java2d::loops::MaskFill)
public:
	MaskFill$General();
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual void MaskFill$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, ::java::awt::Composite* comp, int32_t x, int32_t y, int32_t w, int32_t h, $bytes* mask, int32_t offset, int32_t scan) override;
	::sun::java2d::loops::FillRect* fillop = nullptr;
	::sun::java2d::loops::MaskBlit* maskop = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_MaskFill$General_h_