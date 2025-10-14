#ifndef _sun_java2d_d3d_D3DGraphicsDevice$4_h_
#define _sun_java2d_d3d_D3DGraphicsDevice$4_h_
//$ class sun.java2d.d3d.D3DGraphicsDevice$4
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace java2d {
		namespace d3d {
			class D3DGraphicsDevice;
			class D3DGraphicsDevice$2Result;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DGraphicsDevice$4 : public ::java::lang::Runnable {
	$class(D3DGraphicsDevice$4, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	D3DGraphicsDevice$4();
	void init$(::sun::java2d::d3d::D3DGraphicsDevice* this$0, ::sun::java2d::d3d::D3DGraphicsDevice$2Result* val$res, int32_t val$screen);
	virtual void run() override;
	::sun::java2d::d3d::D3DGraphicsDevice* this$0 = nullptr;
	int32_t val$screen = 0;
	::sun::java2d::d3d::D3DGraphicsDevice$2Result* val$res = nullptr;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DGraphicsDevice$4_h_