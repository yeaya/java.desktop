#ifndef _sun_java2d_d3d_D3DGraphicsDevice$3Result_h_
#define _sun_java2d_d3d_D3DGraphicsDevice$3Result_h_
//$ class sun.java2d.d3d.D3DGraphicsDevice$3Result
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class D3DGraphicsDevice$3Result : public ::java::lang::Object {
	$class(D3DGraphicsDevice$3Result, $NO_CLASS_INIT, ::java::lang::Object)
public:
	D3DGraphicsDevice$3Result();
	void init$(::sun::java2d::d3d::D3DGraphicsDevice* this$0);
	::sun::java2d::d3d::D3DGraphicsDevice* this$0 = nullptr;
	int64_t mem = 0;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DGraphicsDevice$3Result_h_