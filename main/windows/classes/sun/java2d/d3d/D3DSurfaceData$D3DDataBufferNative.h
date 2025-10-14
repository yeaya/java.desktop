#ifndef _sun_java2d_d3d_D3DSurfaceData$D3DDataBufferNative_h_
#define _sun_java2d_d3d_D3DSurfaceData$D3DDataBufferNative_h_
//$ class sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative
//$ extends sun.awt.image.DataBufferNative

#include <sun/awt/image/DataBufferNative.h>

namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DSurfaceData$D3DDataBufferNative : public ::sun::awt::image::DataBufferNative {
	$class(D3DSurfaceData$D3DDataBufferNative, $NO_CLASS_INIT, ::sun::awt::image::DataBufferNative)
public:
	D3DSurfaceData$D3DDataBufferNative();
	using ::sun::awt::image::DataBufferNative::getElem;
	void init$(::sun::java2d::SurfaceData* sData, int32_t type, int32_t w, int32_t h);
	virtual int32_t getElem(int32_t x, int32_t y, ::sun::java2d::SurfaceData* sData) override;
	using ::sun::awt::image::DataBufferNative::setElem;
	virtual void setElem(int32_t x, int32_t y, int32_t pixel, ::sun::java2d::SurfaceData* sData) override;
	int32_t pixel = 0;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DSurfaceData$D3DDataBufferNative_h_