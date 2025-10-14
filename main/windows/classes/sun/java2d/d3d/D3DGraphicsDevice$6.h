#ifndef _sun_java2d_d3d_D3DGraphicsDevice$6_h_
#define _sun_java2d_d3d_D3DGraphicsDevice$6_h_
//$ class sun.java2d.d3d.D3DGraphicsDevice$6
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		class ArrayList;
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

class D3DGraphicsDevice$6 : public ::java::lang::Runnable {
	$class(D3DGraphicsDevice$6, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	D3DGraphicsDevice$6();
	void init$(::sun::java2d::d3d::D3DGraphicsDevice* this$0, int32_t val$screen, ::java::util::ArrayList* val$modes);
	virtual void run() override;
	::sun::java2d::d3d::D3DGraphicsDevice* this$0 = nullptr;
	::java::util::ArrayList* val$modes = nullptr;
	int32_t val$screen = 0;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DGraphicsDevice$6_h_