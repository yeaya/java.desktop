#ifndef _sun_java2d_d3d_D3DGraphicsDevice$1_h_
#define _sun_java2d_d3d_D3DGraphicsDevice$1_h_
//$ class sun.java2d.d3d.D3DGraphicsDevice$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace java2d {
		namespace d3d {
			class D3DGraphicsDevice$1Result;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DGraphicsDevice$1 : public ::java::lang::Runnable {
	$class(D3DGraphicsDevice$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	D3DGraphicsDevice$1();
	void init$(::sun::java2d::d3d::D3DGraphicsDevice$1Result* val$res, int32_t val$screen);
	virtual void run() override;
	int32_t val$screen = 0;
	::sun::java2d::d3d::D3DGraphicsDevice$1Result* val$res = nullptr;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DGraphicsDevice$1_h_