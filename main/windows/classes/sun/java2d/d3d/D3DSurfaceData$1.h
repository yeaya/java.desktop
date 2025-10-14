#ifndef _sun_java2d_d3d_D3DSurfaceData$1_h_
#define _sun_java2d_d3d_D3DSurfaceData$1_h_
//$ class sun.java2d.d3d.D3DSurfaceData$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace java2d {
		namespace d3d {
			class D3DSurfaceData;
			class D3DSurfaceData$1Status;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DSurfaceData$1 : public ::java::lang::Runnable {
	$class(D3DSurfaceData$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	D3DSurfaceData$1();
	void init$(::sun::java2d::d3d::D3DSurfaceData* this$0, ::sun::java2d::d3d::D3DSurfaceData$1Status* val$status);
	virtual void run() override;
	::sun::java2d::d3d::D3DSurfaceData* this$0 = nullptr;
	::sun::java2d::d3d::D3DSurfaceData$1Status* val$status = nullptr;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DSurfaceData$1_h_