#ifndef _sun_java2d_xr_XRCompositeManager_h_
#define _sun_java2d_xr_XRCompositeManager_h_
//$ class sun.java2d.xr.XRCompositeManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("GRADIENT")
#undef GRADIENT
#pragma push_macro("SOLID")
#undef SOLID
#pragma push_macro("TEXTURE")
#undef TEXTURE

namespace java {
	namespace awt {
		class Composite;
		class Paint;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace sun {
	namespace font {
		class XRTextRenderer;
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}
namespace sun {
	namespace java2d {
		namespace xr {
			class GrowableEltArray;
			class GrowableRectArray;
			class MaskTileManager;
			class XRBackend;
			class XRColor;
			class XRMaskImage;
			class XRSolidSrcPict;
			class XRSurfaceData;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRCompositeManager : public ::java::lang::Object {
	$class(XRCompositeManager, 0, ::java::lang::Object)
public:
	XRCompositeManager();
	void init$(::sun::java2d::xr::XRSurfaceData* surface);
	virtual void XRComposite(int32_t src, int32_t mask, int32_t dst, int32_t srcX, int32_t srcY, int32_t maskX, int32_t maskY, int32_t dstX, int32_t dstY, int32_t width, int32_t height);
	virtual void XRCompositeRectangles(::sun::java2d::xr::XRSurfaceData* dst, ::sun::java2d::xr::GrowableRectArray* rects);
	virtual void XRRenderRectangles(::sun::java2d::xr::XRSurfaceData* dst, ::sun::java2d::xr::GrowableRectArray* rects);
	virtual void XRResetPaint();
	virtual void compositeBlit(::sun::java2d::xr::XRSurfaceData* src, ::sun::java2d::xr::XRSurfaceData* dst, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h);
	virtual void compositeText(::sun::java2d::xr::XRSurfaceData* dst, int32_t sx, int32_t sy, int32_t glyphSet, int32_t maskFormat, ::sun::java2d::xr::GrowableEltArray* elts);
	virtual ::sun::java2d::xr::XRColor* getAlphaColor();
	virtual ::sun::java2d::xr::XRBackend* getBackend();
	virtual int8_t getCompRule();
	virtual ::sun::java2d::xr::XRSurfaceData* getCurrentSource();
	virtual float getExtraAlpha();
	virtual int32_t getExtraAlphaMask();
	static ::sun::java2d::xr::XRCompositeManager* getInstance(::sun::java2d::xr::XRSurfaceData* surface);
	virtual ::sun::java2d::xr::MaskTileManager* getMaskBuffer();
	virtual ::sun::java2d::xr::XRColor* getMaskColor();
	virtual ::sun::java2d::xr::XRMaskImage* getMaskImage();
	virtual ::sun::font::XRTextRenderer* getTextRenderer();
	virtual void initResources(::sun::java2d::xr::XRSurfaceData* surface);
	virtual bool isSolidPaintActive();
	virtual bool isTexturePaintActive();
	virtual bool maskRequired();
	void setComposite(::java::awt::Composite* comp);
	virtual void setForeground(int32_t pixel);
	virtual void setGradientPaint(::sun::java2d::xr::XRSurfaceData* gradient);
	virtual void setTexturePaint(::sun::java2d::xr::XRSurfaceData* texture);
	virtual void validateCompositeState(::java::awt::Composite* comp, ::java::awt::geom::AffineTransform* xform, ::java::awt::Paint* paint, ::sun::java2d::SunGraphics2D* sg2d);
	static bool enableGradCache;
	static ::sun::java2d::xr::XRCompositeManager* instance;
	static const int32_t SOLID = 0;
	static const int32_t TEXTURE = 1;
	static const int32_t GRADIENT = 2;
	int32_t srcType = 0;
	::sun::java2d::xr::XRSolidSrcPict* solidSrc32 = nullptr;
	::sun::java2d::xr::XRSurfaceData* texture = nullptr;
	::sun::java2d::xr::XRSurfaceData* gradient = nullptr;
	int32_t alphaMask = 0;
	::sun::java2d::xr::XRColor* solidColor = nullptr;
	float extraAlpha = 0.0;
	int8_t compRule = 0;
	::sun::java2d::xr::XRColor* alphaColor = nullptr;
	::sun::java2d::xr::XRSurfaceData* solidSrcPict = nullptr;
	int32_t alphaMaskPict = 0;
	int32_t gradCachePixmap = 0;
	int32_t gradCachePicture = 0;
	bool xorEnabled = false;
	int32_t validatedPixel = 0;
	::java::awt::Composite* validatedComp = nullptr;
	::java::awt::Paint* validatedPaint = nullptr;
	float validatedExtraAlpha = 0.0;
	::sun::java2d::xr::XRBackend* con = nullptr;
	::sun::java2d::xr::MaskTileManager* maskBuffer = nullptr;
	::sun::font::XRTextRenderer* textRenderer = nullptr;
	::sun::java2d::xr::XRMaskImage* maskImage = nullptr;
};

		} // xr
	} // java2d
} // sun

#pragma pop_macro("GRADIENT")
#pragma pop_macro("SOLID")
#pragma pop_macro("TEXTURE")

#endif // _sun_java2d_xr_XRCompositeManager_h_