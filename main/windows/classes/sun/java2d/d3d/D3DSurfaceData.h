#ifndef _sun_java2d_d3d_D3DSurfaceData_h_
#define _sun_java2d_d3d_D3DSurfaceData_h_
//$ class sun.java2d.d3d.D3DSurfaceData
//$ extends sun.java2d.SurfaceData
//$ implements sun.java2d.pipe.hw.AccelSurface

#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>

#pragma push_macro("D3D_DEVICE_RESOURCE")
#undef D3D_DEVICE_RESOURCE
#pragma push_macro("DESC_D3D_SURFACE")
#undef DESC_D3D_SURFACE
#pragma push_macro("DESC_D3D_SURFACE_RTT")
#undef DESC_D3D_SURFACE_RTT
#pragma push_macro("DESC_D3D_TEXTURE")
#undef DESC_D3D_TEXTURE
#pragma push_macro("ST_3BYTE_BGR")
#undef ST_3BYTE_BGR
#pragma push_macro("ST_BYTE_INDEXED")
#undef ST_BYTE_INDEXED
#pragma push_macro("ST_BYTE_INDEXED_BM")
#undef ST_BYTE_INDEXED_BM
#pragma push_macro("ST_INT_ARGB")
#undef ST_INT_ARGB
#pragma push_macro("ST_INT_ARGB_BM")
#undef ST_INT_ARGB_BM
#pragma push_macro("ST_INT_ARGB_PRE")
#undef ST_INT_ARGB_PRE
#pragma push_macro("ST_INT_BGR")
#undef ST_INT_BGR
#pragma push_macro("ST_INT_RGB")
#undef ST_INT_RGB
#pragma push_macro("ST_USHORT_555_RGB")
#undef ST_USHORT_555_RGB
#pragma push_macro("ST_USHORT_565_RGB")
#undef ST_USHORT_565_RGB
#pragma push_macro("SWAP_COPY")
#undef SWAP_COPY
#pragma push_macro("SWAP_DISCARD")
#undef SWAP_DISCARD
#pragma push_macro("SWAP_FLIP")
#undef SWAP_FLIP

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Image;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class Raster;
		}
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class WritableRasterNative;
		}
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WComponentPeer;
		}
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
		class SurfaceDataProxy;
	}
}
namespace sun {
	namespace java2d {
		namespace d3d {
			class D3DDrawImage;
			class D3DGraphicsConfig;
			class D3DGraphicsDevice;
			class D3DRenderer;
			class D3DTextRenderer;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class MaskFill;
			class SurfaceType;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class BufferedContext;
			class ParallelogramPipe;
			class PixelToParallelogramConverter;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {
				class ExtendedBufferCapabilities$VSyncType;
			}
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DSurfaceData : public ::sun::java2d::SurfaceData, public ::sun::java2d::pipe::hw::AccelSurface {
	$class(D3DSurfaceData, 0, ::sun::java2d::SurfaceData, ::sun::java2d::pipe::hw::AccelSurface)
public:
	D3DSurfaceData();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int64_t getNativeOps() override;
	virtual int32_t hashCode() override;
	virtual bool isSurfaceLost() override;
	virtual bool isValid() override;
	void init$(::sun::awt::windows::WComponentPeer* peer, ::sun::java2d::d3d::D3DGraphicsConfig* gc, int32_t width, int32_t height, ::java::awt::Image* image, ::java::awt::image::ColorModel* cm, int32_t numBackBuffers, int32_t swapEffect, ::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType* vSyncType, int32_t type);
	virtual bool canRenderLCDText(::sun::java2d::SunGraphics2D* sg2d) override;
	virtual bool copyArea(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) override;
	static ::sun::java2d::d3d::D3DSurfaceData* createData(::sun::awt::windows::WComponentPeer* peer, ::java::awt::Image* image);
	static ::sun::java2d::d3d::D3DSurfaceData* createData(::sun::awt::windows::WComponentPeer* peer);
	static ::sun::java2d::d3d::D3DSurfaceData* createData(::sun::java2d::d3d::D3DGraphicsConfig* gc, int32_t width, int32_t height, ::java::awt::image::ColorModel* cm, ::java::awt::Image* image, int32_t type);
	static int32_t dbGetPixelNative(int64_t pData, int32_t x, int32_t y);
	static void dbSetPixelNative(int64_t pData, int32_t x, int32_t y, int32_t pixel);
	virtual void disableAccelerationForSurface();
	static void dispose(int64_t pData);
	virtual void flush() override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::sun::java2d::pipe::BufferedContext* getContext() override;
	static ::sun::java2d::loops::SurfaceType* getCustomSurfaceType(int32_t d3dType);
	virtual double getDefaultScaleX() override;
	virtual double getDefaultScaleY() override;
	virtual $Object* getDestination() override;
	virtual ::java::awt::GraphicsConfiguration* getDeviceConfiguration() override;
	static ::sun::java2d::d3d::D3DGraphicsConfig* getGC(::sun::awt::windows::WComponentPeer* peer);
	virtual ::sun::java2d::loops::MaskFill* getMaskFill(::sun::java2d::SunGraphics2D* sg2d) override;
	virtual ::java::awt::Rectangle* getNativeBounds() override;
	virtual int64_t getNativeResource(int32_t resType) override;
	static int64_t getNativeResourceNative(int64_t sdops, int32_t resType);
	virtual ::sun::awt::windows::WComponentPeer* getPeer();
	virtual ::java::awt::image::Raster* getRaster(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	virtual int32_t getType() override;
	bool initFlipBackbuffer(int64_t pData, int64_t pPeerData, int32_t numbuffers, int32_t swapEffect, int32_t syncType);
	void initOps(int32_t screen, int32_t width, int32_t height);
	bool initRTSurface(int64_t pData, bool isOpaque);
	virtual void initSurface();
	bool initSurfaceNow();
	bool initTexture(int64_t pData, bool isRTT, bool isOpaque);
	virtual ::sun::java2d::SurfaceDataProxy* makeProxyFor(::sun::java2d::SurfaceData* srcData) override;
	virtual void markDirty() override;
	virtual void restoreSurface();
	virtual void setSurfaceLost(bool lost) override;
	static void swapBuffers(::sun::java2d::d3d::D3DSurfaceData* sd, int32_t x1, int32_t y1, int32_t x2, int32_t y2);
	virtual $String* toString() override;
	static bool updateWindowAccelImpl(int64_t pd3dsd, int64_t pData, int32_t w, int32_t h);
	virtual void validatePipe(::sun::java2d::SunGraphics2D* sg2d) override;
	static const int32_t D3D_DEVICE_RESOURCE = 100;
	static const int32_t ST_INT_ARGB = 0;
	static const int32_t ST_INT_ARGB_PRE = 1;
	static const int32_t ST_INT_ARGB_BM = 2;
	static const int32_t ST_INT_RGB = 3;
	static const int32_t ST_INT_BGR = 4;
	static const int32_t ST_USHORT_565_RGB = 5;
	static const int32_t ST_USHORT_555_RGB = 6;
	static const int32_t ST_BYTE_INDEXED = 7;
	static const int32_t ST_BYTE_INDEXED_BM = 8;
	static const int32_t ST_3BYTE_BGR = 9;
	static const int32_t SWAP_DISCARD = 1;
	static const int32_t SWAP_FLIP = 2;
	static const int32_t SWAP_COPY = 3;
	static $String* DESC_D3D_SURFACE;
	static $String* DESC_D3D_SURFACE_RTT;
	static $String* DESC_D3D_TEXTURE;
	static ::sun::java2d::loops::SurfaceType* D3DSurface;
	static ::sun::java2d::loops::SurfaceType* D3DSurfaceRTT;
	static ::sun::java2d::loops::SurfaceType* D3DTexture;
	int32_t type = 0;
	int32_t width = 0;
	int32_t height = 0;
	double scaleX = 0.0;
	double scaleY = 0.0;
	int32_t nativeWidth = 0;
	int32_t nativeHeight = 0;
	::sun::awt::windows::WComponentPeer* peer = nullptr;
	::java::awt::Image* offscreenImage = nullptr;
	::sun::java2d::d3d::D3DGraphicsDevice* graphicsDevice = nullptr;
	int32_t swapEffect = 0;
	::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType* syncType = nullptr;
	int32_t backBuffersNum = 0;
	::sun::awt::image::WritableRasterNative* wrn = nullptr;
	static ::sun::java2d::d3d::D3DRenderer* d3dRenderPipe;
	static ::sun::java2d::pipe::PixelToParallelogramConverter* d3dTxRenderPipe;
	static ::sun::java2d::pipe::ParallelogramPipe* d3dAAPgramPipe;
	static ::sun::java2d::d3d::D3DTextRenderer* d3dTextPipe;
	static ::sun::java2d::d3d::D3DDrawImage* d3dImagePipe;
};

		} // d3d
	} // java2d
} // sun

#pragma pop_macro("D3D_DEVICE_RESOURCE")
#pragma pop_macro("DESC_D3D_SURFACE")
#pragma pop_macro("DESC_D3D_SURFACE_RTT")
#pragma pop_macro("DESC_D3D_TEXTURE")
#pragma pop_macro("ST_3BYTE_BGR")
#pragma pop_macro("ST_BYTE_INDEXED")
#pragma pop_macro("ST_BYTE_INDEXED_BM")
#pragma pop_macro("ST_INT_ARGB")
#pragma pop_macro("ST_INT_ARGB_BM")
#pragma pop_macro("ST_INT_ARGB_PRE")
#pragma pop_macro("ST_INT_BGR")
#pragma pop_macro("ST_INT_RGB")
#pragma pop_macro("ST_USHORT_555_RGB")
#pragma pop_macro("ST_USHORT_565_RGB")
#pragma pop_macro("SWAP_COPY")
#pragma pop_macro("SWAP_DISCARD")
#pragma pop_macro("SWAP_FLIP")

#endif // _sun_java2d_d3d_D3DSurfaceData_h_