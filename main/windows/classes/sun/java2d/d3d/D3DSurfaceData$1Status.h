#ifndef _sun_java2d_d3d_D3DSurfaceData$1Status_h_
#define _sun_java2d_d3d_D3DSurfaceData$1Status_h_
//$ class sun.java2d.d3d.D3DSurfaceData$1Status
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class D3DSurfaceData$1Status : public ::java::lang::Object {
	$class(D3DSurfaceData$1Status, $NO_CLASS_INIT, ::java::lang::Object)
public:
	D3DSurfaceData$1Status();
	void init$(::sun::java2d::d3d::D3DSurfaceData* this$0);
	::sun::java2d::d3d::D3DSurfaceData* this$0 = nullptr;
	bool success = false;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DSurfaceData$1Status_h_