#ifndef _sun_java2d_d3d_D3DGraphicsDevice$2_h_
#define _sun_java2d_d3d_D3DGraphicsDevice$2_h_
//$ class sun.java2d.d3d.D3DGraphicsDevice$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace windows {
			class WWindowPeer;
		}
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

class D3DGraphicsDevice$2 : public ::java::lang::Runnable {
	$class(D3DGraphicsDevice$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	D3DGraphicsDevice$2();
	void init$(::sun::java2d::d3d::D3DGraphicsDevice* this$0, ::sun::awt::windows::WWindowPeer* val$wpeer, int32_t val$screen);
	virtual void run() override;
	::sun::java2d::d3d::D3DGraphicsDevice* this$0 = nullptr;
	int32_t val$screen = 0;
	::sun::awt::windows::WWindowPeer* val$wpeer = nullptr;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DGraphicsDevice$2_h_