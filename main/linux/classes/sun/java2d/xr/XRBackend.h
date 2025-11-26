#ifndef _sun_java2d_xr_XRBackend_h_
#define _sun_java2d_xr_XRBackend_h_
//$ interface sun.java2d.xr.XRBackend
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class XRBackend : public ::java::lang::Object {
	$interface(XRBackend, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void GCRectangles(int32_t drawable, int64_t gc, ::sun::java2d::xr::GrowableRectArray* rects) {}
	virtual void XRenderAddGlyphs(int32_t glyphSet, ::sun::font::GlyphList* gl, ::java::util::List* cacheEntries, $bytes* pixelData) {}
	virtual void XRenderCompositeText(int8_t op, int32_t src, int32_t dst, int32_t maskFormatID, int32_t xSrc, int32_t ySrc, int32_t xDst, int32_t yDst, int32_t glyphset, ::sun::java2d::xr::GrowableEltArray* elts) {}
	virtual int32_t XRenderCreateGlyphSet(int32_t formatID) {return 0;}
	virtual void XRenderFreeGlyphs(int32_t glyphSet, $ints* gids) {}
	virtual void copyArea(int32_t src, int32_t dst, int64_t gc, int32_t srcx, int32_t srcy, int32_t width, int32_t height, int32_t dstx, int32_t dsty) {}
	virtual int64_t createGC(int32_t drawable) {return 0;}
	virtual int32_t createLinearGradient(::java::awt::geom::Point2D* p1, ::java::awt::geom::Point2D* p2, $floats* fractions, $ints* pixels, int32_t repeat) {return 0;}
	virtual int32_t createPicture(int32_t drawable, int32_t formatID) {return 0;}
	virtual int32_t createPixmap(int32_t drawable, int32_t depth, int32_t width, int32_t height) {return 0;}
	virtual int32_t createRadialGradient(float centerX, float centerY, float innerRadius, float outerRadius, $floats* fractions, $ints* pixels, int32_t repeat) {return 0;}
	virtual void freeGC(int64_t gc) {}
	virtual void freePicture(int32_t picture) {}
	virtual void freePixmap(int32_t pixmap) {}
	virtual void putMaskImage(int32_t drawable, int64_t gc, $bytes* imageData, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t width, int32_t height, int32_t maskOff, int32_t maskScan, float ea) {}
	virtual void renderComposite(int8_t op, int32_t src, int32_t mask, int32_t dst, int32_t srcX, int32_t srcY, int32_t maskX, int32_t maskY, int32_t dstX, int32_t dstY, int32_t width, int32_t height) {}
	virtual void renderRectangle(int32_t dst, int8_t op, ::sun::java2d::xr::XRColor* color, int32_t x, int32_t y, int32_t width, int32_t height) {}
	virtual void renderRectangles(int32_t dst, int8_t op, ::sun::java2d::xr::XRColor* color, ::sun::java2d::xr::GrowableRectArray* rects) {}
	virtual void setClipRectangles(int32_t picture, ::sun::java2d::pipe::Region* clip) {}
	virtual void setFilter(int32_t picture, int32_t filter) {}
	virtual void setGCClipRectangles(int64_t gc, ::sun::java2d::pipe::Region* clip) {}
	virtual void setGCExposures(int64_t gc, bool exposure) {}
	virtual void setGCForeground(int64_t gc, int32_t pixel) {}
	virtual void setGCMode(int64_t gc, bool copy) {}
	virtual void setPictureRepeat(int32_t picture, int32_t repeat) {}
	virtual void setPictureTransform(int32_t picture, ::java::awt::geom::AffineTransform* transform) {}
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRBackend_h_