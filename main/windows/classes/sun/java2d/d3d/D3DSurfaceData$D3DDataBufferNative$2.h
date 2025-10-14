#ifndef _sun_java2d_d3d_D3DSurfaceData$D3DDataBufferNative$2_h_
#define _sun_java2d_d3d_D3DSurfaceData$D3DDataBufferNative$2_h_
//$ class sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace d3d {
			class D3DSurfaceData$D3DDataBufferNative;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DSurfaceData$D3DDataBufferNative$2 : public ::java::lang::Runnable {
	$class(D3DSurfaceData$D3DDataBufferNative$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	D3DSurfaceData$D3DDataBufferNative$2();
	void init$(::sun::java2d::d3d::D3DSurfaceData$D3DDataBufferNative* this$0, ::sun::java2d::SurfaceData* val$sData, int32_t val$x, int32_t val$y, int32_t val$pixel);
	virtual void run() override;
	::sun::java2d::d3d::D3DSurfaceData$D3DDataBufferNative* this$0 = nullptr;
	int32_t val$pixel = 0;
	int32_t val$y = 0;
	int32_t val$x = 0;
	::sun::java2d::SurfaceData* val$sData = nullptr;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DSurfaceData$D3DDataBufferNative$2_h_