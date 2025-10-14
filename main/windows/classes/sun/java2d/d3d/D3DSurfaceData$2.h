#ifndef _sun_java2d_d3d_D3DSurfaceData$2_h_
#define _sun_java2d_d3d_D3DSurfaceData$2_h_
//$ class sun.java2d.d3d.D3DSurfaceData$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace sun {
	namespace java2d {
		namespace d3d {
			class D3DSurfaceData;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DSurfaceData$2 : public ::java::lang::Runnable {
	$class(D3DSurfaceData$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	D3DSurfaceData$2();
	void init$(::sun::java2d::d3d::D3DSurfaceData* val$sd, int32_t val$x1, int32_t val$y1, int32_t val$x2, int32_t val$y2, ::java::awt::Component* val$target);
	virtual void run() override;
	::java::awt::Component* val$target = nullptr;
	int32_t val$y2 = 0;
	int32_t val$x2 = 0;
	int32_t val$y1 = 0;
	int32_t val$x1 = 0;
	::sun::java2d::d3d::D3DSurfaceData* val$sd = nullptr;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DSurfaceData$2_h_