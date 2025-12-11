#ifndef _sun_java2d_metal_MTLSurfaceData$1_h_
#define _sun_java2d_metal_MTLSurfaceData$1_h_
//$ class sun.java2d.metal.MTLSurfaceData$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace java2d {
		namespace metal {
			class MTLSurfaceData;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace metal {

class MTLSurfaceData$1 : public ::java::lang::Runnable {
	$class(MTLSurfaceData$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	MTLSurfaceData$1();
	void init$(::sun::java2d::metal::MTLSurfaceData* this$0, int32_t val$width, int32_t val$height);
	virtual void run() override;
	::sun::java2d::metal::MTLSurfaceData* this$0 = nullptr;
	int32_t val$height = 0;
	int32_t val$width = 0;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLSurfaceData$1_h_