#ifndef _sun_java2d_opengl_OGLSurfaceData_h_
#define _sun_java2d_opengl_OGLSurfaceData_h_
//$ class sun.java2d.opengl.OGLSurfaceData
//$ extends sun.java2d.SurfaceData
//$ implements sun.java2d.pipe.hw.AccelSurface

#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>

#pragma push_macro("DESC_OPENGL_SURFACE")
#undef DESC_OPENGL_SURFACE
#pragma push_macro("DESC_OPENGL_SURFACE_RTT")
#undef DESC_OPENGL_SURFACE_RTT
#pragma push_macro("DESC_OPENGL_TEXTURE")
#undef DESC_OPENGL_TEXTURE
#pragma push_macro("FBOBJECT")
#undef FBOBJECT
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
#pragma push_macro("RT_TEXTURE")
#undef RT_TEXTURE

namespace java {
	namespace awt {
		class Composite;
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
		namespace opengl {
			class OGLDrawImage;
			class OGLGraphicsConfig;
			class OGLRenderer;
			class OGLTextRenderer;
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
		namespace opengl {

class OGLSurfaceData : public ::sun::java2d::SurfaceData, public ::sun::java2d::pipe::hw::AccelSurface {
	$class(OGLSurfaceData, 0, ::sun::java2d::SurfaceData, ::sun::java2d::pipe::hw::AccelSurface)
public:
	OGLSurfaceData();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::awt::Rectangle* getBounds() override {return nullptr;}
	virtual int64_t getNativeOps() override;
	virtual int32_t hashCode() override;
	virtual bool isSurfaceLost() override;
	virtual bool isValid() override;
	void init$(::sun::java2d::opengl::OGLGraphicsConfig* gc, ::java::awt::image::ColorModel* cm, int32_t type);
	bool canHandleComposite(::java::awt::Composite* c);
	virtual bool canRenderLCDText(::sun::java2d::SunGraphics2D* sg2d) override;
	virtual bool copyArea(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) override;
	static void dispose(int64_t pData, ::sun::java2d::opengl::OGLGraphicsConfig* gc);
	virtual void flush() override;
	virtual ::sun::java2d::pipe::BufferedContext* getContext() override;
	static ::sun::java2d::loops::SurfaceType* getCustomSurfaceType(int32_t oglType);
	virtual ::sun::java2d::loops::MaskFill* getMaskFill(::sun::java2d::SunGraphics2D* sg2d) override;
	virtual ::java::awt::Rectangle* getNativeBounds() override;
	virtual int64_t getNativeResource(int32_t resType) override;
	::sun::java2d::opengl::OGLGraphicsConfig* getOGLGraphicsConfig();
	virtual ::java::awt::image::Raster* getRaster(int32_t x, int32_t y, int32_t w, int32_t h) override;
	int32_t getTextureID(int64_t pData);
	int32_t getTextureID();
	int32_t getTextureTarget(int64_t pData);
	int32_t getTextureTarget();
	virtual int32_t getType() override;
	virtual bool initFBObject(int64_t pData, bool isOpaque, bool texNonPow2, bool texRect, int32_t width, int32_t height);
	virtual bool initFlipBackbuffer(int64_t pData);
	virtual void initSurface(int32_t width, int32_t height);
	void initSurfaceNow(int32_t width, int32_t height);
	virtual bool initTexture(int64_t pData, bool isOpaque, bool texNonPow2, bool texRect, int32_t width, int32_t height);
	virtual bool isOnScreen();
	virtual bool isTexNonPow2Available();
	virtual bool isTexRectAvailable();
	virtual ::sun::java2d::SurfaceDataProxy* makeProxyFor(::sun::java2d::SurfaceData* srcData) override;
	virtual void markDirty() override;
	static void swapBuffers(int64_t window);
	virtual $String* toString() override;
	virtual void validatePipe(::sun::java2d::SunGraphics2D* sg2d) override;
	static const int32_t FBOBJECT = RT_TEXTURE;
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
	static $String* DESC_OPENGL_SURFACE;
	static $String* DESC_OPENGL_SURFACE_RTT;
	static $String* DESC_OPENGL_TEXTURE;
	static ::sun::java2d::loops::SurfaceType* OpenGLSurface;
	static ::sun::java2d::loops::SurfaceType* OpenGLSurfaceRTT;
	static ::sun::java2d::loops::SurfaceType* OpenGLTexture;
	static bool isFBObjectEnabled;
	static bool isLCDShaderEnabled;
	static bool isBIOpShaderEnabled;
	static bool isGradShaderEnabled;
	::sun::java2d::opengl::OGLGraphicsConfig* graphicsConfig = nullptr;
	int32_t type = 0;
	int32_t nativeWidth = 0;
	int32_t nativeHeight = 0;
	static ::sun::java2d::opengl::OGLRenderer* oglRenderPipe;
	static ::sun::java2d::pipe::PixelToParallelogramConverter* oglTxRenderPipe;
	static ::sun::java2d::pipe::ParallelogramPipe* oglAAPgramPipe;
	static ::sun::java2d::opengl::OGLTextRenderer* oglTextPipe;
	static ::sun::java2d::opengl::OGLDrawImage* oglImagePipe;
};

		} // opengl
	} // java2d
} // sun

#pragma pop_macro("DESC_OPENGL_SURFACE")
#pragma pop_macro("DESC_OPENGL_SURFACE_RTT")
#pragma pop_macro("DESC_OPENGL_TEXTURE")
#pragma pop_macro("FBOBJECT")
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
#pragma pop_macro("RT_TEXTURE")

#endif // _sun_java2d_opengl_OGLSurfaceData_h_