#ifndef _sun_java2d_d3d_D3DGraphicsDevice$5_h_
#define _sun_java2d_d3d_D3DGraphicsDevice$5_h_
//$ class sun.java2d.d3d.D3DGraphicsDevice$5
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

class D3DGraphicsDevice$5 : public ::java::lang::Runnable {
	$class(D3DGraphicsDevice$5, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	D3DGraphicsDevice$5();
	void init$(::sun::java2d::d3d::D3DGraphicsDevice* this$0, ::sun::awt::windows::WWindowPeer* val$wpeer, int32_t val$screen, int32_t val$width, int32_t val$height, int32_t val$bitDepth, int32_t val$refreshRate);
	virtual void run() override;
	::sun::java2d::d3d::D3DGraphicsDevice* this$0 = nullptr;
	int32_t val$refreshRate = 0;
	int32_t val$bitDepth = 0;
	int32_t val$height = 0;
	int32_t val$width = 0;
	int32_t val$screen = 0;
	::sun::awt::windows::WWindowPeer* val$wpeer = nullptr;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DGraphicsDevice$5_h_