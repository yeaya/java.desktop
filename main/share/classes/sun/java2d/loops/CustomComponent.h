#ifndef _sun_java2d_loops_CustomComponent_h_
#define _sun_java2d_loops_CustomComponent_h_
//$ class sun.java2d.loops.CustomComponent
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class CustomComponent : public ::java::lang::Object {
	$class(CustomComponent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CustomComponent();
	void init$();
	static ::sun::java2d::pipe::Region* getRegionOfInterest(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::sun::java2d::pipe::Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t w, int32_t h);
	static void register$();
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_CustomComponent_h_