#ifndef _sun_java2d_loops_FillPath_h_
#define _sun_java2d_loops_FillPath_h_
//$ class sun.java2d.loops.FillPath
//$ extends sun.java2d.loops.GraphicsPrimitive

#include <sun/java2d/loops/GraphicsPrimitive.h>

namespace java {
	namespace awt {
		namespace geom {
			class Path2D$Float;
		}
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
			class SurfaceType;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class FillPath : public ::sun::java2d::loops::GraphicsPrimitive {
	$class(FillPath, 0, ::sun::java2d::loops::GraphicsPrimitive)
public:
	FillPath();
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	void init$(int64_t pNativePrim, ::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual void FillPath$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, int32_t transX, int32_t transY, ::java::awt::geom::Path2D$Float* p2df);
	static ::sun::java2d::loops::FillPath* locate(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	static $String* methodSignature;
	static int32_t primTypeID;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_FillPath_h_