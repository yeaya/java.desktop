#include <sun/java2d/xr/XRBackendNative.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Point2D.h>
#include <java/util/List.h>
#include <sun/font/GlyphList.h>
#include <sun/font/XRGlyphCacheEntry.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/xr/GrowableEltArray.h>
#include <sun/java2d/xr/GrowableIntArray.h>
#include <sun/java2d/xr/GrowableRectArray.h>
#include <sun/java2d/xr/XRColor.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef FMTPTR_A8
#undef FMTPTR_ARGB32
#undef MASK_XIMG

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D = ::java::awt::geom::Point2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $GlyphList = ::sun::font::GlyphList;
using $XRGlyphCacheEntry = ::sun::font::XRGlyphCacheEntry;
using $Region = ::sun::java2d::pipe::Region;
using $GrowableEltArray = ::sun::java2d::xr::GrowableEltArray;
using $GrowableIntArray = ::sun::java2d::xr::GrowableIntArray;
using $GrowableRectArray = ::sun::java2d::xr::GrowableRectArray;
using $XRBackend = ::sun::java2d::xr::XRBackend;
using $XRColor = ::sun::java2d::xr::XRColor;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XRBackendNative_FieldInfo_[] = {
	{"FMTPTR_A8", "J", nullptr, $PRIVATE | $STATIC, $staticField(XRBackendNative, FMTPTR_A8)},
	{"FMTPTR_ARGB32", "J", nullptr, $PRIVATE | $STATIC, $staticField(XRBackendNative, FMTPTR_ARGB32)},
	{"MASK_XIMG", "J", nullptr, $PRIVATE | $STATIC, $staticField(XRBackendNative, MASK_XIMG)},
	{}
};

$MethodInfo _XRBackendNative_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XRBackendNative::*)()>(&XRBackendNative::init$))},
	{"GCRectangles", "(IJLsun/java2d/xr/GrowableRectArray;)V", nullptr, $PUBLIC},
	{"GCRectanglesNative", "(IJ[II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int64_t,$ints*,int32_t)>(&XRBackendNative::GCRectanglesNative))},
	{"XRAddGlyphsNative", "(I[JI[BI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,$longs*,int32_t,$bytes*,int32_t)>(&XRBackendNative::XRAddGlyphsNative))},
	{"XRCreateLinearGradientPaintNative", "([F[SIIIIII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($floats*,$shorts*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&XRBackendNative::XRCreateLinearGradientPaintNative))},
	{"XRCreateRadialGradientPaintNative", "([F[SIIIIII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($floats*,$shorts*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&XRBackendNative::XRCreateRadialGradientPaintNative))},
	{"XRFreeGlyphsNative", "(I[II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,$ints*,int32_t)>(&XRBackendNative::XRFreeGlyphsNative))},
	{"XRSetClipNative", "(JIIIILsun/java2d/pipe/Region;Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t,int32_t,int32_t,int32_t,$Region*,bool)>(&XRBackendNative::XRSetClipNative))},
	{"XRSetTransformNative", "(IIIIIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(XRBackendNative::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&XRBackendNative::XRSetTransformNative))},
	{"XRenderAddGlyphs", "(ILsun/font/GlyphList;Ljava/util/List;[B)V", "(ILsun/font/GlyphList;Ljava/util/List<Lsun/font/XRGlyphCacheEntry;>;[B)V", $PUBLIC},
	{"XRenderCompositeText", "(BIIIIIIIILsun/java2d/xr/GrowableEltArray;)V", nullptr, $PUBLIC},
	{"XRenderCompositeTextNative", "(IIIIIJ[I[III)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t,int32_t,int32_t,int32_t,int64_t,$ints*,$ints*,int32_t,int32_t)>(&XRBackendNative::XRenderCompositeTextNative))},
	{"XRenderCreateGlyphSet", "(I)I", nullptr, $PUBLIC},
	{"XRenderCreateGlyphSetNative", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&XRBackendNative::XRenderCreateGlyphSetNative))},
	{"XRenderFreeGlyphs", "(I[I)V", nullptr, $PUBLIC},
	{"XRenderRectanglesNative", "(IBSSSS[II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int8_t,int16_t,int16_t,int16_t,int16_t,$ints*,int32_t)>(&XRBackendNative::XRenderRectanglesNative))},
	{"copyArea", "(IIJIIIIII)V", nullptr, $PUBLIC | $NATIVE},
	{"createGC", "(I)J", nullptr, $PUBLIC | $NATIVE},
	{"createLinearGradient", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;[F[II)I", nullptr, $PUBLIC},
	{"createPicture", "(II)I", nullptr, $PUBLIC},
	{"createPictureNative", "(IJ)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(XRBackendNative::*)(int32_t,int64_t)>(&XRBackendNative::createPictureNative))},
	{"createPixmap", "(IIII)I", nullptr, $PUBLIC | $NATIVE},
	{"createRadialGradient", "(FFFF[F[II)I", nullptr, $PUBLIC},
	{"freeGC", "(J)V", nullptr, $PUBLIC | $NATIVE},
	{"freePicture", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"freePixmap", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"getFormatPtr", "(I)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int32_t)>(&XRBackendNative::getFormatPtr))},
	{"getGlyphInfoPtrs", "(Ljava/util/List;)[J", "(Ljava/util/List<Lsun/font/XRGlyphCacheEntry;>;)[J", $PRIVATE | $STATIC, $method(static_cast<$longs*(*)($List*)>(&XRBackendNative::getGlyphInfoPtrs))},
	{"getRenderColors", "([I)[S", nullptr, $PRIVATE, $method(static_cast<$shorts*(XRBackendNative::*)($ints*)>(&XRBackendNative::getRenderColors))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&XRBackendNative::initIDs))},
	{"padBlit", "(BIIILjava/awt/geom/AffineTransform;IIIIIIIIII)V", nullptr, $PUBLIC},
	{"padBlitNative", "(BIIIIIIIIIIIIIIIIIII)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int8_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&XRBackendNative::padBlitNative))},
	{"putMaskImage", "(IJ[BIIIIIIIIF)V", nullptr, $PUBLIC},
	{"putMaskNative", "(IJ[BIIIIIIIIFJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int64_t,$bytes*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,float,int64_t)>(&XRBackendNative::putMaskNative))},
	{"renderComposite", "(BIIIIIIIIIII)V", nullptr, $PUBLIC | $NATIVE},
	{"renderRectangle", "(IBSSSSIIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(XRBackendNative::*)(int32_t,int8_t,int16_t,int16_t,int16_t,int16_t,int32_t,int32_t,int32_t,int32_t)>(&XRBackendNative::renderRectangle))},
	{"renderRectangle", "(IBLsun/java2d/xr/XRColor;IIII)V", nullptr, $PUBLIC},
	{"renderRectangles", "(IBLsun/java2d/xr/XRColor;Lsun/java2d/xr/GrowableRectArray;)V", nullptr, $PUBLIC},
	{"setClipRectangles", "(ILsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"setFilter", "(II)V", nullptr, $PUBLIC | $NATIVE},
	{"setGCClipRectangles", "(JLsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"setGCExposures", "(JZ)V", nullptr, $PUBLIC | $NATIVE},
	{"setGCForeground", "(JI)V", nullptr, $PUBLIC | $NATIVE},
	{"setGCMode", "(JZ)V", nullptr, $PUBLIC | $NATIVE},
	{"setPictureRepeat", "(II)V", nullptr, $PUBLIC | $NATIVE},
	{"setPictureTransform", "(ILjava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_GCRectanglesNative 2
#define _METHOD_INDEX_XRAddGlyphsNative 3
#define _METHOD_INDEX_XRCreateLinearGradientPaintNative 4
#define _METHOD_INDEX_XRCreateRadialGradientPaintNative 5
#define _METHOD_INDEX_XRFreeGlyphsNative 6
#define _METHOD_INDEX_XRSetClipNative 7
#define _METHOD_INDEX_XRSetTransformNative 8
#define _METHOD_INDEX_XRenderCompositeTextNative 11
#define _METHOD_INDEX_XRenderCreateGlyphSetNative 13
#define _METHOD_INDEX_XRenderRectanglesNative 15
#define _METHOD_INDEX_copyArea 16
#define _METHOD_INDEX_createGC 17
#define _METHOD_INDEX_createPictureNative 20
#define _METHOD_INDEX_createPixmap 21
#define _METHOD_INDEX_freeGC 23
#define _METHOD_INDEX_freePicture 24
#define _METHOD_INDEX_freePixmap 25
#define _METHOD_INDEX_initIDs 29
#define _METHOD_INDEX_padBlitNative 31
#define _METHOD_INDEX_putMaskNative 33
#define _METHOD_INDEX_renderComposite 34
#define _METHOD_INDEX_renderRectangle 35
#define _METHOD_INDEX_setFilter 39
#define _METHOD_INDEX_setGCExposures 41
#define _METHOD_INDEX_setGCForeground 42
#define _METHOD_INDEX_setGCMode 43
#define _METHOD_INDEX_setPictureRepeat 44

$ClassInfo _XRBackendNative_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRBackendNative",
	"java.lang.Object",
	"sun.java2d.xr.XRBackend",
	_XRBackendNative_FieldInfo_,
	_XRBackendNative_MethodInfo_
};

$Object* allocate$XRBackendNative($Class* clazz) {
	return $of($alloc(XRBackendNative));
}

int64_t XRBackendNative::FMTPTR_A8 = 0;
int64_t XRBackendNative::FMTPTR_ARGB32 = 0;
int64_t XRBackendNative::MASK_XIMG = 0;

void XRBackendNative::init$() {
}

void XRBackendNative::initIDs() {
	$init(XRBackendNative);
	$prepareNativeStatic(XRBackendNative, initIDs, void);
	$invokeNativeStatic(XRBackendNative, initIDs);
	$finishNativeStatic();
}

int64_t XRBackendNative::createGC(int32_t drawable) {
	int64_t $ret = 0;
	$prepareNative(XRBackendNative, createGC, int64_t, int32_t drawable);
	$ret = $invokeNative(XRBackendNative, createGC, drawable);
	$finishNative();
	return $ret;
}

void XRBackendNative::freeGC(int64_t gc) {
	$prepareNative(XRBackendNative, freeGC, void, int64_t gc);
	$invokeNative(XRBackendNative, freeGC, gc);
	$finishNative();
}

int32_t XRBackendNative::createPixmap(int32_t drawable, int32_t depth, int32_t width, int32_t height) {
	int32_t $ret = 0;
	$prepareNative(XRBackendNative, createPixmap, int32_t, int32_t drawable, int32_t depth, int32_t width, int32_t height);
	$ret = $invokeNative(XRBackendNative, createPixmap, drawable, depth, width, height);
	$finishNative();
	return $ret;
}

int32_t XRBackendNative::createPictureNative(int32_t drawable, int64_t formatID) {
	int32_t $ret = 0;
	$prepareNative(XRBackendNative, createPictureNative, int32_t, int32_t drawable, int64_t formatID);
	$ret = $invokeNative(XRBackendNative, createPictureNative, drawable, formatID);
	$finishNative();
	return $ret;
}

void XRBackendNative::freePicture(int32_t picture) {
	$prepareNative(XRBackendNative, freePicture, void, int32_t picture);
	$invokeNative(XRBackendNative, freePicture, picture);
	$finishNative();
}

void XRBackendNative::freePixmap(int32_t pixmap) {
	$prepareNative(XRBackendNative, freePixmap, void, int32_t pixmap);
	$invokeNative(XRBackendNative, freePixmap, pixmap);
	$finishNative();
}

void XRBackendNative::setGCExposures(int64_t gc, bool exposure) {
	$prepareNative(XRBackendNative, setGCExposures, void, int64_t gc, bool exposure);
	$invokeNative(XRBackendNative, setGCExposures, gc, exposure);
	$finishNative();
}

void XRBackendNative::setGCForeground(int64_t gc, int32_t pixel) {
	$prepareNative(XRBackendNative, setGCForeground, void, int64_t gc, int32_t pixel);
	$invokeNative(XRBackendNative, setGCForeground, gc, pixel);
	$finishNative();
}

void XRBackendNative::setPictureRepeat(int32_t picture, int32_t repeat) {
	$prepareNative(XRBackendNative, setPictureRepeat, void, int32_t picture, int32_t repeat);
	$invokeNative(XRBackendNative, setPictureRepeat, picture, repeat);
	$finishNative();
}

void XRBackendNative::copyArea(int32_t src, int32_t dst, int64_t gc, int32_t srcx, int32_t srcy, int32_t width, int32_t height, int32_t dstx, int32_t dsty) {
	$prepareNative(XRBackendNative, copyArea, void, int32_t src, int32_t dst, int64_t gc, int32_t srcx, int32_t srcy, int32_t width, int32_t height, int32_t dstx, int32_t dsty);
	$invokeNative(XRBackendNative, copyArea, src, dst, gc, srcx, srcy, width, height, dstx, dsty);
	$finishNative();
}

void XRBackendNative::setGCMode(int64_t gc, bool copy) {
	$prepareNative(XRBackendNative, setGCMode, void, int64_t gc, bool copy);
	$invokeNative(XRBackendNative, setGCMode, gc, copy);
	$finishNative();
}

void XRBackendNative::GCRectanglesNative(int32_t drawable, int64_t gc, $ints* rectArray, int32_t rectCnt) {
	$init(XRBackendNative);
	$prepareNativeStatic(XRBackendNative, GCRectanglesNative, void, int32_t drawable, int64_t gc, $ints* rectArray, int32_t rectCnt);
	$invokeNativeStatic(XRBackendNative, GCRectanglesNative, drawable, gc, rectArray, rectCnt);
	$finishNativeStatic();
}

void XRBackendNative::renderComposite(int8_t op, int32_t src, int32_t mask, int32_t dst, int32_t srcX, int32_t srcY, int32_t maskX, int32_t maskY, int32_t dstX, int32_t dstY, int32_t width, int32_t height) {
	$prepareNative(XRBackendNative, renderComposite, void, int8_t op, int32_t src, int32_t mask, int32_t dst, int32_t srcX, int32_t srcY, int32_t maskX, int32_t maskY, int32_t dstX, int32_t dstY, int32_t width, int32_t height);
	$invokeNative(XRBackendNative, renderComposite, op, src, mask, dst, srcX, srcY, maskX, maskY, dstX, dstY, width, height);
	$finishNative();
}

void XRBackendNative::renderRectangle(int32_t dst, int8_t op, int16_t red, int16_t green, int16_t blue, int16_t alpha, int32_t x, int32_t y, int32_t width, int32_t height) {
	$prepareNative(XRBackendNative, renderRectangle, void, int32_t dst, int8_t op, int16_t red, int16_t green, int16_t blue, int16_t alpha, int32_t x, int32_t y, int32_t width, int32_t height);
	$invokeNative(XRBackendNative, renderRectangle, dst, op, red, green, blue, alpha, x, y, width, height);
	$finishNative();
}

void XRBackendNative::XRenderRectanglesNative(int32_t dst, int8_t op, int16_t red, int16_t green, int16_t blue, int16_t alpha, $ints* rects, int32_t rectCnt) {
	$init(XRBackendNative);
	$prepareNativeStatic(XRBackendNative, XRenderRectanglesNative, void, int32_t dst, int8_t op, int16_t red, int16_t green, int16_t blue, int16_t alpha, $ints* rects, int32_t rectCnt);
	$invokeNativeStatic(XRBackendNative, XRenderRectanglesNative, dst, op, red, green, blue, alpha, rects, rectCnt);
	$finishNativeStatic();
}

void XRBackendNative::XRSetTransformNative(int32_t pic, int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12) {
	$prepareNative(XRBackendNative, XRSetTransformNative, void, int32_t pic, int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12);
	$invokeNative(XRBackendNative, XRSetTransformNative, pic, m00, m01, m02, m10, m11, m12);
	$finishNative();
}

int32_t XRBackendNative::XRCreateLinearGradientPaintNative($floats* fractionsArray, $shorts* pixelsArray, int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t numStops, int32_t repeat) {
	$init(XRBackendNative);
	int32_t $ret = 0;
	$prepareNativeStatic(XRBackendNative, XRCreateLinearGradientPaintNative, int32_t, $floats* fractionsArray, $shorts* pixelsArray, int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t numStops, int32_t repeat);
	$ret = $invokeNativeStatic(XRBackendNative, XRCreateLinearGradientPaintNative, fractionsArray, pixelsArray, x1, y1, x2, y2, numStops, repeat);
	$finishNativeStatic();
	return $ret;
}

int32_t XRBackendNative::XRCreateRadialGradientPaintNative($floats* fractionsArray, $shorts* pixelsArray, int32_t numStops, int32_t centerX, int32_t centerY, int32_t innerRadius, int32_t outerRadius, int32_t repeat) {
	$init(XRBackendNative);
	int32_t $ret = 0;
	$prepareNativeStatic(XRBackendNative, XRCreateRadialGradientPaintNative, int32_t, $floats* fractionsArray, $shorts* pixelsArray, int32_t numStops, int32_t centerX, int32_t centerY, int32_t innerRadius, int32_t outerRadius, int32_t repeat);
	$ret = $invokeNativeStatic(XRBackendNative, XRCreateRadialGradientPaintNative, fractionsArray, pixelsArray, numStops, centerX, centerY, innerRadius, outerRadius, repeat);
	$finishNativeStatic();
	return $ret;
}

void XRBackendNative::setFilter(int32_t picture, int32_t filter) {
	$prepareNative(XRBackendNative, setFilter, void, int32_t picture, int32_t filter);
	$invokeNative(XRBackendNative, setFilter, picture, filter);
	$finishNative();
}

void XRBackendNative::XRSetClipNative(int64_t dst, int32_t x1, int32_t y1, int32_t x2, int32_t y2, $Region* clip, bool isGC) {
	$init(XRBackendNative);
	$prepareNativeStatic(XRBackendNative, XRSetClipNative, void, int64_t dst, int32_t x1, int32_t y1, int32_t x2, int32_t y2, $Region* clip, bool isGC);
	$invokeNativeStatic(XRBackendNative, XRSetClipNative, dst, x1, y1, x2, y2, clip, isGC);
	$finishNativeStatic();
}

void XRBackendNative::GCRectangles(int32_t drawable, int64_t gc, $GrowableRectArray* rects) {
	int32_t var$0 = drawable;
	int64_t var$1 = gc;
	$var($ints, var$2, $nc(rects)->getArray());
	GCRectanglesNative(var$0, var$1, var$2, rects->getSize());
}

int32_t XRBackendNative::createPicture(int32_t drawable, int32_t formatID) {
	return createPictureNative(drawable, getFormatPtr(formatID));
}

void XRBackendNative::setPictureTransform(int32_t picture, $AffineTransform* transform) {
	int32_t var$0 = picture;
	int32_t var$1 = $XRUtils::XDoubleToFixed($nc(transform)->getScaleX());
	int32_t var$2 = $XRUtils::XDoubleToFixed($nc(transform)->getShearX());
	int32_t var$3 = $XRUtils::XDoubleToFixed($nc(transform)->getTranslateX());
	int32_t var$4 = $XRUtils::XDoubleToFixed($nc(transform)->getShearY());
	int32_t var$5 = $XRUtils::XDoubleToFixed($nc(transform)->getScaleY());
	XRSetTransformNative(var$0, var$1, var$2, var$3, var$4, var$5, $XRUtils::XDoubleToFixed($nc(transform)->getTranslateY()));
}

void XRBackendNative::renderRectangle(int32_t dst, int8_t op, $XRColor* color, int32_t x, int32_t y, int32_t width, int32_t height) {
	renderRectangle(dst, op, (int16_t)$nc(color)->red, (int16_t)color->green, (int16_t)color->blue, (int16_t)color->alpha, x, y, width, height);
}

$shorts* XRBackendNative::getRenderColors($ints* pixels) {
	$useLocalCurrentObjectStackCache();
	$var($shorts, renderColors, $new($shorts, $nc(pixels)->length * 4));
	$var($XRColor, c, $new($XRColor));
	for (int32_t i = 0; i < pixels->length; ++i) {
		c->setColorValues(pixels->get(i));
		renderColors->set(i * 4 + 0, (int16_t)c->alpha);
		renderColors->set(i * 4 + 1, (int16_t)c->red);
		renderColors->set(i * 4 + 2, (int16_t)c->green);
		renderColors->set(i * 4 + 3, (int16_t)c->blue);
	}
	return renderColors;
}

int64_t XRBackendNative::getFormatPtr(int32_t formatID) {
	$init(XRBackendNative);
	switch (formatID) {
	case $XRUtils::PictStandardA8:
		{
			return XRBackendNative::FMTPTR_A8;
		}
	case $XRUtils::PictStandardARGB32:
		{
			return XRBackendNative::FMTPTR_ARGB32;
		}
	}
	return 0;
}

int32_t XRBackendNative::createLinearGradient($Point2D* p1, $Point2D* p2, $floats* fractions, $ints* pixels, int32_t repeat) {
	$useLocalCurrentObjectStackCache();
	$var($shorts, colorValues, getRenderColors(pixels));
	$var($floats, var$0, fractions);
	$var($shorts, var$1, colorValues);
	int32_t var$2 = $XRUtils::XDoubleToFixed($nc(p1)->getX());
	int32_t var$3 = $XRUtils::XDoubleToFixed($nc(p1)->getY());
	int32_t var$4 = $XRUtils::XDoubleToFixed($nc(p2)->getX());
	int32_t gradient = XRCreateLinearGradientPaintNative(var$0, var$1, var$2, var$3, var$4, $XRUtils::XDoubleToFixed($nc(p2)->getY()), $nc(fractions)->length, repeat);
	return gradient;
}

int32_t XRBackendNative::createRadialGradient(float centerX, float centerY, float innerRadius, float outerRadius, $floats* fractions, $ints* pixels, int32_t repeat) {
	$useLocalCurrentObjectStackCache();
	$var($shorts, colorValues, getRenderColors(pixels));
	$var($floats, var$0, fractions);
	$var($shorts, var$1, colorValues);
	int32_t var$2 = $nc(fractions)->length;
	int32_t var$3 = $XRUtils::XDoubleToFixed(centerX);
	int32_t var$4 = $XRUtils::XDoubleToFixed(centerY);
	int32_t var$5 = $XRUtils::XDoubleToFixed(innerRadius);
	return XRCreateRadialGradientPaintNative(var$0, var$1, var$2, var$3, var$4, var$5, $XRUtils::XDoubleToFixed(outerRadius), repeat);
}

void XRBackendNative::setGCClipRectangles(int64_t gc, $Region* clip) {
	int64_t var$0 = gc;
	int32_t var$1 = $nc(clip)->getLoX();
	int32_t var$2 = clip->getLoY();
	int32_t var$3 = clip->getHiX();
	int32_t var$4 = clip->getHiY();
	XRSetClipNative(var$0, var$1, var$2, var$3, var$4, clip->isRectangular() ? ($Region*)nullptr : clip, true);
}

void XRBackendNative::setClipRectangles(int32_t picture, $Region* clip) {
	if (clip != nullptr) {
		int64_t var$0 = (int64_t)picture;
		int32_t var$1 = clip->getLoX();
		int32_t var$2 = clip->getLoY();
		int32_t var$3 = clip->getHiX();
		int32_t var$4 = clip->getHiY();
		XRSetClipNative(var$0, var$1, var$2, var$3, var$4, clip->isRectangular() ? ($Region*)nullptr : clip, false);
	} else {
		XRSetClipNative(picture, 0, 0, 32767, 32767, nullptr, false);
	}
}

void XRBackendNative::renderRectangles(int32_t dst, int8_t op, $XRColor* color, $GrowableRectArray* rects) {
	int32_t var$0 = dst;
	int8_t var$1 = op;
	int16_t var$2 = (int16_t)$nc(color)->red;
	int16_t var$3 = (int16_t)color->green;
	int16_t var$4 = (int16_t)color->blue;
	int16_t var$5 = (int16_t)color->alpha;
	$var($ints, var$6, $nc(rects)->getArray());
	XRenderRectanglesNative(var$0, var$1, var$2, var$3, var$4, var$5, var$6, rects->getSize());
}

$longs* XRBackendNative::getGlyphInfoPtrs($List* cacheEntries) {
	$init(XRBackendNative);
	$useLocalCurrentObjectStackCache();
	$var($longs, glyphInfoPtrs, $new($longs, $nc(cacheEntries)->size()));
	for (int32_t i = 0; i < cacheEntries->size(); ++i) {
		glyphInfoPtrs->set(i, $nc(($cast($XRGlyphCacheEntry, $(cacheEntries->get(i)))))->getGlyphInfoPtr());
	}
	return glyphInfoPtrs;
}

void XRBackendNative::XRenderAddGlyphs(int32_t glyphSet, $GlyphList* gl, $List* cacheEntries, $bytes* pixelData) {
	$var($longs, glyphInfoPtrs, getGlyphInfoPtrs(cacheEntries));
	XRAddGlyphsNative(glyphSet, glyphInfoPtrs, $nc(glyphInfoPtrs)->length, pixelData, $nc(pixelData)->length);
}

void XRBackendNative::XRenderFreeGlyphs(int32_t glyphSet, $ints* gids) {
	XRFreeGlyphsNative(glyphSet, gids, $nc(gids)->length);
}

void XRBackendNative::XRAddGlyphsNative(int32_t glyphSet, $longs* glyphInfoPtrs, int32_t glyphCnt, $bytes* pixelData, int32_t pixelDataLength) {
	$init(XRBackendNative);
	$prepareNativeStatic(XRBackendNative, XRAddGlyphsNative, void, int32_t glyphSet, $longs* glyphInfoPtrs, int32_t glyphCnt, $bytes* pixelData, int32_t pixelDataLength);
	$invokeNativeStatic(XRBackendNative, XRAddGlyphsNative, glyphSet, glyphInfoPtrs, glyphCnt, pixelData, pixelDataLength);
	$finishNativeStatic();
}

void XRBackendNative::XRFreeGlyphsNative(int32_t glyphSet, $ints* gids, int32_t idCnt) {
	$init(XRBackendNative);
	$prepareNativeStatic(XRBackendNative, XRFreeGlyphsNative, void, int32_t glyphSet, $ints* gids, int32_t idCnt);
	$invokeNativeStatic(XRBackendNative, XRFreeGlyphsNative, glyphSet, gids, idCnt);
	$finishNativeStatic();
}

void XRBackendNative::XRenderCompositeTextNative(int32_t op, int32_t src, int32_t dst, int32_t srcX, int32_t srcY, int64_t maskFormat, $ints* eltArray, $ints* glyphIDs, int32_t eltCnt, int32_t glyphCnt) {
	$init(XRBackendNative);
	$prepareNativeStatic(XRBackendNative, XRenderCompositeTextNative, void, int32_t op, int32_t src, int32_t dst, int32_t srcX, int32_t srcY, int64_t maskFormat, $ints* eltArray, $ints* glyphIDs, int32_t eltCnt, int32_t glyphCnt);
	$invokeNativeStatic(XRBackendNative, XRenderCompositeTextNative, op, src, dst, srcX, srcY, maskFormat, eltArray, glyphIDs, eltCnt, glyphCnt);
	$finishNativeStatic();
}

int32_t XRBackendNative::XRenderCreateGlyphSet(int32_t formatID) {
	return XRenderCreateGlyphSetNative(getFormatPtr(formatID));
}

int32_t XRBackendNative::XRenderCreateGlyphSetNative(int64_t format) {
	$init(XRBackendNative);
	int32_t $ret = 0;
	$prepareNativeStatic(XRBackendNative, XRenderCreateGlyphSetNative, int32_t, int64_t format);
	$ret = $invokeNativeStatic(XRBackendNative, XRenderCreateGlyphSetNative, format);
	$finishNativeStatic();
	return $ret;
}

void XRBackendNative::XRenderCompositeText(int8_t op, int32_t src, int32_t dst, int32_t maskFormatID, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t glyphset, $GrowableEltArray* elts) {
	$useLocalCurrentObjectStackCache();
	$var($GrowableIntArray, glyphs, $nc(elts)->getGlyphs());
	int32_t var$0 = (int32_t)op;
	int32_t var$1 = src;
	int32_t var$2 = dst;
	int32_t var$3 = sx;
	int32_t var$4 = sy;
	$var($ints, var$5, elts->getArray());
	$var($ints, var$6, $nc(glyphs)->getArray());
	int32_t var$7 = elts->getSize();
	XRenderCompositeTextNative(var$0, var$1, var$2, var$3, var$4, 0, var$5, var$6, var$7, glyphs->getSize());
}

void XRBackendNative::putMaskImage(int32_t drawable, int64_t gc, $bytes* imageData, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t width, int32_t height, int32_t maskOff, int32_t maskScan, float ea) {
	putMaskNative(drawable, gc, imageData, sx, sy, dx, dy, width, height, maskOff, maskScan, ea, XRBackendNative::MASK_XIMG);
}

void XRBackendNative::putMaskNative(int32_t drawable, int64_t gc, $bytes* imageData, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t width, int32_t height, int32_t maskOff, int32_t maskScan, float ea, int64_t xImg) {
	$init(XRBackendNative);
	$prepareNativeStatic(XRBackendNative, putMaskNative, void, int32_t drawable, int64_t gc, $bytes* imageData, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t width, int32_t height, int32_t maskOff, int32_t maskScan, float ea, int64_t xImg);
	$invokeNativeStatic(XRBackendNative, putMaskNative, drawable, gc, imageData, sx, sy, dx, dy, width, height, maskOff, maskScan, ea, xImg);
	$finishNativeStatic();
}

void XRBackendNative::padBlit(int8_t op, int32_t srcPict, int32_t maskPict, int32_t dstPict, $AffineTransform* maskTrx, int32_t maskWidth, int32_t maskHeight, int32_t lastMaskWidth, int32_t lastMaskHeight, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	int8_t var$0 = op;
	int32_t var$1 = srcPict;
	int32_t var$2 = maskPict;
	int32_t var$3 = dstPict;
	int32_t var$4 = $XRUtils::XDoubleToFixed($nc(maskTrx)->getScaleX());
	int32_t var$5 = $XRUtils::XDoubleToFixed($nc(maskTrx)->getShearX());
	int32_t var$6 = $XRUtils::XDoubleToFixed($nc(maskTrx)->getTranslateX());
	int32_t var$7 = $XRUtils::XDoubleToFixed($nc(maskTrx)->getShearY());
	int32_t var$8 = $XRUtils::XDoubleToFixed($nc(maskTrx)->getScaleY());
	padBlitNative(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, $XRUtils::XDoubleToFixed($nc(maskTrx)->getTranslateY()), maskWidth, maskHeight, lastMaskWidth, lastMaskHeight, sx, sy, dx, dy, w, h);
}

void XRBackendNative::padBlitNative(int8_t op, int32_t srcPict, int32_t maskPict, int32_t dstPict, int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t maskWidth, int32_t maskHeight, int32_t lastMaskWidth, int32_t lastMaskHeight, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$init(XRBackendNative);
	$prepareNativeStatic(XRBackendNative, padBlitNative, void, int8_t op, int32_t srcPict, int32_t maskPict, int32_t dstPict, int32_t m00, int32_t m01, int32_t m02, int32_t m10, int32_t m11, int32_t m12, int32_t maskWidth, int32_t maskHeight, int32_t lastMaskWidth, int32_t lastMaskHeight, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h);
	$invokeNativeStatic(XRBackendNative, padBlitNative, op, srcPict, maskPict, dstPict, m00, m01, m02, m10, m11, m12, maskWidth, maskHeight, lastMaskWidth, lastMaskHeight, sx, sy, dx, dy, w, h);
	$finishNativeStatic();
}

void clinit$XRBackendNative($Class* class$) {
	{
		XRBackendNative::initIDs();
	}
}

XRBackendNative::XRBackendNative() {
}

$Class* XRBackendNative::load$($String* name, bool initialize) {
	$loadClass(XRBackendNative, name, initialize, &_XRBackendNative_ClassInfo_, clinit$XRBackendNative, allocate$XRBackendNative);
	return class$;
}

$Class* XRBackendNative::class$ = nullptr;

		} // xr
	} // java2d
} // sun