#ifndef _sun_java2d_d3d_D3DGraphicsDevice$2Result_h_
#define _sun_java2d_d3d_D3DGraphicsDevice$2Result_h_
//$ class sun.java2d.d3d.D3DGraphicsDevice$2Result
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class DisplayMode;
	}
}
namespace sun {
	namespace java2d {
		namespace d3d {
			class D3DGraphicsDevice;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DGraphicsDevice$2Result : public ::java::lang::Object {
	$class(D3DGraphicsDevice$2Result, $NO_CLASS_INIT, ::java::lang::Object)
public:
	D3DGraphicsDevice$2Result();
	void init$(::sun::java2d::d3d::D3DGraphicsDevice* this$0);
	::sun::java2d::d3d::D3DGraphicsDevice* this$0 = nullptr;
	::java::awt::DisplayMode* dm = nullptr;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DGraphicsDevice$2Result_h_