#ifndef _sun_java2d_xr_XRBackendNative_h_
#define _sun_java2d_xr_XRBackendNative_h_
//$ class sun.java2d.xr.XRBackendNative
//$ extends sun.java2d.xr.XRBackend

#include <java/lang/Array.h>
#include <sun/java2d/xr/XRBackend.h>

#pragma push_macro("FMTPTR_A8")
#undef FMTPTR_A8
#pragma push_macro("FMTPTR_ARGB32")
#undef FMTPTR_ARGB32
#pragma push_macro("MASK_XIMG")
#undef MASK_XIMG

namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Point2D;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace font {
		class GlyphList;
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace xr {
			class GrowableEltArray;
			class GrowableRectArray;
			class XRColor;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRBackendNative : public ::sun::java2d::xr::XRBackend {
	$class(XRBackendNative, 0, ::sun::java2d::xr::XRBackend)
public:
	XRBackendNative();
	void init$();
	virtual void GCRectangles(int32_t drawable, int64_t gc, ::sun::java2d::xr::GrowableRectArray* rects) override;
	static void GCRectanglesNative(int32_t drawable, int64_t gc, $ints* rectArray, int32_t rectCnt);
	static void XRAddGlyphsNative(int32_t glyphSet, $longs* glyphInfoPtrs, int32_t glyphCnt, $bytes* pixelData, int32_t pixelDataLength);
	static int32_t XRCreateLinearGradientPaintNative($floats* fractionsArray, $shorts* pixelsArray, int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t numStops, int32_t repeat);
	static int32_t XRCreateRadialGradientPaintNative($floats* fractionsArray, $shorts* pixelsArray, int32_t numStops, int32_t centerX, int32_t centerY, int32_t innerRadius, int32_t outerRadius, int32_t repeat);
	static void XRFreeGlyphsNative(int32_t glyphSet, $ints* gids, int32_t idCnt);
	static void XRSetClipNative(int64_t dst, int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::sun::java2d::pipe::Region* clip, bool isGC);
	void XRSetTransformNative(int32_t pic, int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12);
	virtual void XRenderAddGlyphs(int32_t glyphSet, ::sun::font::GlyphList* gl, ::java::util::List* cacheEntries, $bytes* pixelData) override;
	virtual void XRenderCompositeText(int8_t op, int32_t src, int32_t dst, int32_t maskFormatID, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t glyphset, ::sun::java2d::xr::GrowableEltArray* elts) override;
	static void XRenderCompositeTextNative(int32_t op, int32_t src, int32_t dst, int32_t srcX, int32_t srcY, int64_t maskFormat, $ints* eltArray, $ints* glyphIDs, int32_t eltCnt, int32_t glyphCnt);
	virtual int32_t XRenderCreateGlyphSet(int32_t formatID) override;
	static int32_t XRenderCreateGlyphSetNative(int64_t format);
	virtual void XRenderFreeGlyphs(int32_t glyphSet, $ints* gids) override;
	static void XRenderRectanglesNative(int32_t dst, int8_t op, int16_t red, int16_t green, int16_t blue, int16_t alpha, $ints* rects, int32_t rectCnt);
	virtual void copyArea(int32_t src, int32_t dst, int64_t gc, int32_t srcx, int32_t srcy, int32_t width, int32_t height, int32_t dstx, int32_t dsty) override;
	virtual int64_t createGC(int32_t drawable) override;
	virtual int32_t createLinearGradient(::java::awt::geom::Point2D* p1, ::java::awt::geom::Point2D* p2, $floats* fractions, $ints* pixels, int32_t repeat) override;
	virtual int32_t createPicture(int32_t drawable, int32_t formatID) override;
	int32_t createPictureNative(int32_t drawable, int64_t formatID);
	virtual int32_t createPixmap(int32_t drawable, int32_t depth, int32_t width, int32_t height) override;
	virtual int32_t createRadialGradient(float centerX, float centerY, float innerRadius, float outerRadius, $floats* fractions, $ints* pixels, int32_t repeat) override;
	virtual void freeGC(int64_t gc) override;
	virtual void freePicture(int32_t picture) override;
	virtual void freePixmap(int32_t pixmap) override;
	static int64_t getFormatPtr(int32_t formatID);
	static $longs* getGlyphInfoPtrs(::java::util::List* cacheEntries);
	$shorts* getRenderColors($ints* pixels);
	static void initIDs();
	virtual void padBlit(int8_t op, int32_t srcPict, int32_t maskPict, int32_t dstPict, ::java::awt::geom::AffineTransform* maskTrx, int32_t maskWidth, int32_t maskHeight, int32_t lastMaskWidth, int32_t lastMaskHeight, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h);
	static void padBlitNative(int8_t op, int32_t srcPict, int32_t maskPict, int32_t dstPict, int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t maskWidth, int32_t maskHeight, int32_t lastMaskWidth, int32_t lastMaskHeight, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h);
	virtual void putMaskImage(int32_t drawable, int64_t gc, $bytes* imageData, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t width, int32_t height, int32_t maskOff, int32_t maskScan, float ea) override;
	static void putMaskNative(int32_t drawable, int64_t gc, $bytes* imageData, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t width, int32_t height, int32_t maskOff, int32_t maskScan, float ea, int64_t xImg);
	virtual void renderComposite(int8_t op, int32_t src, int32_t mask, int32_t dst, int32_t srcX, int32_t srcY, int32_t maskX, int32_t maskY, int32_t dstX, int32_t dstY, int32_t width, int32_t height) override;
	void renderRectangle(int32_t dst, int8_t op, int16_t red, int16_t green, int16_t blue, int16_t alpha, int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void renderRectangle(int32_t dst, int8_t op, ::sun::java2d::xr::XRColor* color, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void renderRectangles(int32_t dst, int8_t op, ::sun::java2d::xr::XRColor* color, ::sun::java2d::xr::GrowableRectArray* rects) override;
	virtual void setClipRectangles(int32_t picture, ::sun::java2d::pipe::Region* clip) override;
	virtual void setFilter(int32_t picture, int32_t filter) override;
	virtual void setGCClipRectangles(int64_t gc, ::sun::java2d::pipe::Region* clip) override;
	virtual void setGCExposures(int64_t gc, bool exposure) override;
	virtual void setGCForeground(int64_t gc, int32_t pixel) override;
	virtual void setGCMode(int64_t gc, bool copy) override;
	virtual void setPictureRepeat(int32_t picture, int32_t repeat) override;
	virtual void setPictureTransform(int32_t picture, ::java::awt::geom::AffineTransform* transform) override;
	static int64_t FMTPTR_A8;
	static int64_t FMTPTR_ARGB32;
	static int64_t MASK_XIMG;
};

		} // xr
	} // java2d
} // sun

#pragma pop_macro("FMTPTR_A8")
#pragma pop_macro("FMTPTR_ARGB32")
#pragma pop_macro("MASK_XIMG")

#endif // _sun_java2d_xr_XRBackendNative_h_