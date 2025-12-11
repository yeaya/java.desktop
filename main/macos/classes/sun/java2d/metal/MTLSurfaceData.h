#ifndef _sun_java2d_metal_MTLSurfaceData_h_
#define _sun_java2d_metal_MTLSurfaceData_h_
//$ class sun.java2d.metal.MTLSurfaceData
//$ extends sun.java2d.SurfaceData
//$ implements sun.java2d.pipe.hw.AccelSurface

#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>

#pragma push_macro("DESC_MTL_SURFACE")
#undef DESC_MTL_SURFACE
#pragma push_macro("DESC_MTL_SURFACE_RTT")
#undef DESC_MTL_SURFACE_RTT
#pragma push_macro("DESC_MTL_TEXTURE")
#undef DESC_MTL_TEXTURE
#pragma push_macro("PF_3BYTE_BGR")
#undef PF_3BYTE_BGR
#pragma push_macro("PF_BYTE_GRAY")
#undef PF_BYTE_GRAY
#pragma push_macro("PF_INT_ARGB")
#undef PF_INT_ARGB
#pragma push_macro("PF_INT_ARGB_PRE")
#undef PF_INT_ARGB_PRE
#pragma push_macro("PF_INT_BGR")
#undef PF_INT_BGR
#pragma push_macro("PF_INT_BGRX")
#undef PF_INT_BGRX
#pragma push_macro("PF_INT_RGB")
#undef PF_INT_RGB
#pragma push_macro("PF_INT_RGBX")
#undef PF_INT_RGBX
#pragma push_macro("PF_USHORT_555_RGB")
#undef PF_USHORT_555_RGB
#pragma push_macro("PF_USHORT_555_RGBX")
#undef PF_USHORT_555_RGBX
#pragma push_macro("PF_USHORT_565_RGB")
#undef PF_USHORT_565_RGB
#pragma push_macro("PF_USHORT_GRAY")
#undef PF_USHORT_GRAY

namespace java {
	namespace awt {
		class Composite;
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
	namespace java2d {
		class SunGraphics2D;
		class SurfaceDataProxy;
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
		namespace metal {
			class MTLDrawImage;
			class MTLGraphicsConfig;
			class MTLLayer;
			class MTLRenderer;
			class MTLSurfaceData$MTLLayerSurfaceData;
			class MTLSurfaceData$MTLOffScreenSurfaceData;
			class MTLTextRenderer;
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
		namespace metal {

class MTLSurfaceData : public ::sun::java2d::SurfaceData, public ::sun::java2d::pipe::hw::AccelSurface {
	$class(MTLSurfaceData, 0, ::sun::java2d::SurfaceData, ::sun::java2d::pipe::hw::AccelSurface)
public:
	MTLSurfaceData();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int64_t getNativeOps() override;
	virtual int32_t hashCode() override;
	virtual bool isSurfaceLost() override;
	virtual bool isValid() override;
	void init$(::sun::java2d::metal::MTLLayer* layer, ::sun::java2d::metal::MTLGraphicsConfig* gc, ::java::awt::image::ColorModel* cm, int32_t type, int32_t width, int32_t height);
	bool canHandleComposite(::java::awt::Composite* c);
	virtual bool canRenderLCDText(::sun::java2d::SunGraphics2D* sg2d) override;
	virtual void clearWindow();
	virtual bool copyArea(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) override;
	static ::sun::java2d::metal::MTLSurfaceData$MTLLayerSurfaceData* createData(::sun::java2d::metal::MTLLayer* layer);
	static ::sun::java2d::metal::MTLSurfaceData$MTLOffScreenSurfaceData* createData(::sun::java2d::metal::MTLGraphicsConfig* gc, int32_t width, int32_t height, ::java::awt::image::ColorModel* cm, ::java::awt::Image* image, int32_t type);
	static void dispose(int64_t pData, ::sun::java2d::metal::MTLGraphicsConfig* gc);
	virtual void flush() override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::sun::java2d::pipe::BufferedContext* getContext() override;
	static ::sun::java2d::loops::SurfaceType* getCustomSurfaceType(int32_t mtlType);
	virtual double getDefaultScaleX() override;
	virtual double getDefaultScaleY() override;
	virtual ::java::awt::GraphicsConfiguration* getDeviceConfiguration() override;
	::sun::java2d::metal::MTLGraphicsConfig* getMTLGraphicsConfig();
	int64_t getMTLTexturePointer(int64_t pData);
	virtual ::sun::java2d::loops::MaskFill* getMaskFill(::sun::java2d::SunGraphics2D* sg2d) override;
	virtual ::java::awt::Rectangle* getNativeBounds() override;
	virtual int64_t getNativeResource(int32_t resType) override;
	virtual ::java::awt::image::Raster* getRaster(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual int32_t getType() override;
	virtual bool initFlipBackbuffer(int64_t pData);
	void initOps(::sun::java2d::metal::MTLGraphicsConfig* gc, int64_t pConfigInfo, int64_t pPeerData, int64_t layerPtr, int32_t xoff, int32_t yoff, bool isOpaque);
	virtual bool initRTexture(int64_t pData, bool isOpaque, int32_t width, int32_t height);
	virtual void initSurface(int32_t width, int32_t height);
	void initSurfaceNow(int32_t width, int32_t height);
	virtual bool initTexture(int64_t pData, bool isOpaque, int32_t width, int32_t height);
	virtual bool isOnScreen();
	virtual ::sun::java2d::SurfaceDataProxy* makeProxyFor(::sun::java2d::SurfaceData* srcData) override;
	virtual void markDirty() override;
	virtual $String* toString() override;
	virtual void validatePipe(::sun::java2d::SunGraphics2D* sg2d) override;
	static const int32_t PF_INT_ARGB = 0;
	static const int32_t PF_INT_ARGB_PRE = 1;
	static const int32_t PF_INT_RGB = 2;
	static const int32_t PF_INT_RGBX = 3;
	static const int32_t PF_INT_BGR = 4;
	static const int32_t PF_INT_BGRX = 5;
	static const int32_t PF_USHORT_565_RGB = 6;
	static const int32_t PF_USHORT_555_RGB = 7;
	static const int32_t PF_USHORT_555_RGBX = 8;
	static const int32_t PF_BYTE_GRAY = 9;
	static const int32_t PF_USHORT_GRAY = 10;
	static const int32_t PF_3BYTE_BGR = 11;
	static $String* DESC_MTL_SURFACE;
	static $String* DESC_MTL_SURFACE_RTT;
	static $String* DESC_MTL_TEXTURE;
	static ::sun::java2d::loops::SurfaceType* MTLSurface;
	static ::sun::java2d::loops::SurfaceType* MTLSurfaceRTT;
	static ::sun::java2d::loops::SurfaceType* MTLTexture;
	static ::sun::java2d::metal::MTLRenderer* mtlRenderPipe;
	static ::sun::java2d::pipe::PixelToParallelogramConverter* mtlTxRenderPipe;
	static ::sun::java2d::pipe::ParallelogramPipe* mtlAAPgramPipe;
	static ::sun::java2d::metal::MTLTextRenderer* mtlTextPipe;
	static ::sun::java2d::metal::MTLDrawImage* mtlImagePipe;
	int32_t scale = 0;
	int32_t width = 0;
	int32_t height = 0;
	int32_t type = 0;
	::sun::java2d::metal::MTLGraphicsConfig* graphicsConfig = nullptr;
	int32_t nativeWidth = 0;
	int32_t nativeHeight = 0;
};

		} // metal
	} // java2d
} // sun

#pragma pop_macro("DESC_MTL_SURFACE")
#pragma pop_macro("DESC_MTL_SURFACE_RTT")
#pragma pop_macro("DESC_MTL_TEXTURE")
#pragma pop_macro("PF_3BYTE_BGR")
#pragma pop_macro("PF_BYTE_GRAY")
#pragma pop_macro("PF_INT_ARGB")
#pragma pop_macro("PF_INT_ARGB_PRE")
#pragma pop_macro("PF_INT_BGR")
#pragma pop_macro("PF_INT_BGRX")
#pragma pop_macro("PF_INT_RGB")
#pragma pop_macro("PF_INT_RGBX")
#pragma pop_macro("PF_USHORT_555_RGB")
#pragma pop_macro("PF_USHORT_555_RGBX")
#pragma pop_macro("PF_USHORT_565_RGB")
#pragma pop_macro("PF_USHORT_GRAY")

#endif // _sun_java2d_metal_MTLSurfaceData_h_