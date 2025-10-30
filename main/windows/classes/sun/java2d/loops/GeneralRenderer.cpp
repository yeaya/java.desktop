#include <sun/java2d/loops/GeneralRenderer.h>

#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawGlyphList.h>
#include <sun/java2d/loops/DrawGlyphListAA.h>
#include <sun/java2d/loops/DrawLine.h>
#include <sun/java2d/loops/DrawPath.h>
#include <sun/java2d/loops/DrawPolygons.h>
#include <sun/java2d/loops/DrawRect.h>
#include <sun/java2d/loops/FillPath.h>
#include <sun/java2d/loops/FillRect.h>
#include <sun/java2d/loops/FillSpans.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/GraphicsPrimitiveProxy.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <sun/java2d/loops/SolidPixelWriter.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/XORComposite.h>
#include <sun/java2d/loops/XorPixelWriter$ByteData.h>
#include <sun/java2d/loops/XorPixelWriter$DoubleData.h>
#include <sun/java2d/loops/XorPixelWriter$FloatData.h>
#include <sun/java2d/loops/XorPixelWriter$IntData.h>
#include <sun/java2d/loops/XorPixelWriter$ShortData.h>
#include <sun/java2d/loops/XorPixelWriter.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef OUTCODE_BOTTOM
#undef OUTCODE_LEFT
#undef OUTCODE_RIGHT
#undef OUTCODE_TOP
#undef TYPE_BYTE
#undef TYPE_DOUBLE
#undef TYPE_FLOAT
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_USHORT

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $DrawGlyphList = ::sun::java2d::loops::DrawGlyphList;
using $DrawGlyphListAA = ::sun::java2d::loops::DrawGlyphListAA;
using $DrawLine = ::sun::java2d::loops::DrawLine;
using $DrawPath = ::sun::java2d::loops::DrawPath;
using $DrawPolygons = ::sun::java2d::loops::DrawPolygons;
using $DrawRect = ::sun::java2d::loops::DrawRect;
using $FillPath = ::sun::java2d::loops::FillPath;
using $FillRect = ::sun::java2d::loops::FillRect;
using $FillSpans = ::sun::java2d::loops::FillSpans;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $GraphicsPrimitiveProxy = ::sun::java2d::loops::GraphicsPrimitiveProxy;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;
using $SolidPixelWriter = ::sun::java2d::loops::SolidPixelWriter;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $XORComposite = ::sun::java2d::loops::XORComposite;
using $XorPixelWriter = ::sun::java2d::loops::XorPixelWriter;
using $XorPixelWriter$ByteData = ::sun::java2d::loops::XorPixelWriter$ByteData;
using $XorPixelWriter$DoubleData = ::sun::java2d::loops::XorPixelWriter$DoubleData;
using $XorPixelWriter$FloatData = ::sun::java2d::loops::XorPixelWriter$FloatData;
using $XorPixelWriter$IntData = ::sun::java2d::loops::XorPixelWriter$IntData;
using $XorPixelWriter$ShortData = ::sun::java2d::loops::XorPixelWriter$ShortData;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _GeneralRenderer_FieldInfo_[] = {
	{"OUTCODE_TOP", "I", nullptr, $STATIC | $FINAL, $constField(GeneralRenderer, OUTCODE_TOP)},
	{"OUTCODE_BOTTOM", "I", nullptr, $STATIC | $FINAL, $constField(GeneralRenderer, OUTCODE_BOTTOM)},
	{"OUTCODE_LEFT", "I", nullptr, $STATIC | $FINAL, $constField(GeneralRenderer, OUTCODE_LEFT)},
	{"OUTCODE_RIGHT", "I", nullptr, $STATIC | $FINAL, $constField(GeneralRenderer, OUTCODE_RIGHT)},
	{}
};

$MethodInfo _GeneralRenderer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GeneralRenderer::*)()>(&GeneralRenderer::init$))},
	{"adjustLine", "([IIIII)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ints*,int32_t,int32_t,int32_t,int32_t)>(&GeneralRenderer::adjustLine))},
	{"createSolidPixelWriter", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;)Lsun/java2d/loops/PixelWriter;", nullptr, $STATIC, $method(static_cast<$PixelWriter*(*)($SunGraphics2D*,$SurfaceData*)>(&GeneralRenderer::createSolidPixelWriter))},
	{"createXorPixelWriter", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;)Lsun/java2d/loops/PixelWriter;", nullptr, $STATIC, $method(static_cast<$PixelWriter*(*)($SunGraphics2D*,$SurfaceData*)>(&GeneralRenderer::createXorPixelWriter))},
	{"doDrawGlyphList", "(Lsun/java2d/SurfaceData;Lsun/java2d/loops/PixelWriter;Lsun/font/GlyphList;IILsun/java2d/pipe/Region;)V", nullptr, $STATIC, $method(static_cast<void(*)($SurfaceData*,$PixelWriter*,$GlyphList*,int32_t,int32_t,$Region*)>(&GeneralRenderer::doDrawGlyphList))},
	{"doDrawLine", "(Lsun/java2d/SurfaceData;Lsun/java2d/loops/PixelWriter;[ILsun/java2d/pipe/Region;IIII)[I", nullptr, $STATIC, $method(static_cast<$ints*(*)($SurfaceData*,$PixelWriter*,$ints*,$Region*,int32_t,int32_t,int32_t,int32_t)>(&GeneralRenderer::doDrawLine))},
	{"doDrawPoly", "(Lsun/java2d/SurfaceData;Lsun/java2d/loops/PixelWriter;[I[IIILsun/java2d/pipe/Region;IIZ)V", nullptr, $STATIC, $method(static_cast<void(*)($SurfaceData*,$PixelWriter*,$ints*,$ints*,int32_t,int32_t,$Region*,int32_t,int32_t,bool)>(&GeneralRenderer::doDrawPoly))},
	{"doDrawRect", "(Lsun/java2d/loops/PixelWriter;Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IIII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($PixelWriter*,$SunGraphics2D*,$SurfaceData*,int32_t,int32_t,int32_t,int32_t)>(&GeneralRenderer::doDrawRect))},
	{"doSetRect", "(Lsun/java2d/SurfaceData;Lsun/java2d/loops/PixelWriter;IIII)V", nullptr, $STATIC, $method(static_cast<void(*)($SurfaceData*,$PixelWriter*,int32_t,int32_t,int32_t,int32_t)>(&GeneralRenderer::doSetRect))},
	{"outcode", "(IIIIII)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&GeneralRenderer::outcode))},
	{"register", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&GeneralRenderer::register$))},
	{}
};

$ClassInfo _GeneralRenderer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.loops.GeneralRenderer",
	"java.lang.Object",
	nullptr,
	_GeneralRenderer_FieldInfo_,
	_GeneralRenderer_MethodInfo_
};

$Object* allocate$GeneralRenderer($Class* clazz) {
	return $of($alloc(GeneralRenderer));
}

void GeneralRenderer::init$() {
}

void GeneralRenderer::register$() {
	$useLocalCurrentObjectStackCache();
	$load(GeneralRenderer);
	$Class* owner = GeneralRenderer::class$;
	$init($FillRect);
	$init($SurfaceType);
	$init($CompositeType);
	$init($FillPath);
	$init($FillSpans);
	$init($DrawLine);
	$init($DrawPolygons);
	$init($DrawPath);
	$init($DrawRect);
	$init($DrawGlyphList);
	$init($DrawGlyphListAA);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "SetFillRectANY"_s, $FillRect::methodSignature, $FillRect::primTypeID, $SurfaceType::AnyColor, $CompositeType::SrcNoEa, $SurfaceType::Any)),
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "SetFillPathANY"_s, $FillPath::methodSignature, $FillPath::primTypeID, $SurfaceType::AnyColor, $CompositeType::SrcNoEa, $SurfaceType::Any)),
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "SetFillSpansANY"_s, $FillSpans::methodSignature, $FillSpans::primTypeID, $SurfaceType::AnyColor, $CompositeType::SrcNoEa, $SurfaceType::Any)),
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "SetDrawLineANY"_s, $DrawLine::methodSignature, $DrawLine::primTypeID, $SurfaceType::AnyColor, $CompositeType::SrcNoEa, $SurfaceType::Any)),
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "SetDrawPolygonsANY"_s, $DrawPolygons::methodSignature, $DrawPolygons::primTypeID, $SurfaceType::AnyColor, $CompositeType::SrcNoEa, $SurfaceType::Any)),
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "SetDrawPathANY"_s, $DrawPath::methodSignature, $DrawPath::primTypeID, $SurfaceType::AnyColor, $CompositeType::SrcNoEa, $SurfaceType::Any)),
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "SetDrawRectANY"_s, $DrawRect::methodSignature, $DrawRect::primTypeID, $SurfaceType::AnyColor, $CompositeType::SrcNoEa, $SurfaceType::Any)),
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "XorFillRectANY"_s, $FillRect::methodSignature, $FillRect::primTypeID, $SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any)),
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "XorFillPathANY"_s, $FillPath::methodSignature, $FillPath::primTypeID, $SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any)),
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "XorFillSpansANY"_s, $FillSpans::methodSignature, $FillSpans::primTypeID, $SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any)),
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "XorDrawLineANY"_s, $DrawLine::methodSignature, $DrawLine::primTypeID, $SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any)),
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "XorDrawPolygonsANY"_s, $DrawPolygons::methodSignature, $DrawPolygons::primTypeID, $SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any)),
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "XorDrawPathANY"_s, $DrawPath::methodSignature, $DrawPath::primTypeID, $SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any)),
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "XorDrawRectANY"_s, $DrawRect::methodSignature, $DrawRect::primTypeID, $SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any)),
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "XorDrawGlyphListANY"_s, $DrawGlyphList::methodSignature, $DrawGlyphList::primTypeID, $SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any)),
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "XorDrawGlyphListAAANY"_s, $DrawGlyphListAA::methodSignature, $DrawGlyphListAA::primTypeID, $SurfaceType::AnyColor, $CompositeType::Xor, $SurfaceType::Any))
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

void GeneralRenderer::doDrawPoly($SurfaceData* sData, $PixelWriter* pw, $ints* xPoints, $ints* yPoints, int32_t off, int32_t nPoints, $Region* clip, int32_t transx, int32_t transy, bool close) {
	int32_t mx = 0;
	int32_t my = 0;
	int32_t x1 = 0;
	int32_t y1 = 0;
	$var($ints, tmp, nullptr);
	if (nPoints <= 0) {
		return;
	}
	mx = (x1 = $nc(xPoints)->get(off) + transx);
	my = (y1 = $nc(yPoints)->get(off) + transy);
	while (--nPoints > 0) {
		++off;
		int32_t x2 = xPoints->get(off) + transx;
		int32_t y2 = yPoints->get(off) + transy;
		$assign(tmp, GeneralRenderer::doDrawLine(sData, pw, tmp, clip, x1, y1, x2, y2));
		x1 = x2;
		y1 = y2;
	}
	if (close && (x1 != mx || y1 != my)) {
		$assign(tmp, GeneralRenderer::doDrawLine(sData, pw, tmp, clip, x1, y1, mx, my));
	}
}

void GeneralRenderer::doSetRect($SurfaceData* sData, $PixelWriter* pw, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$var($WritableRaster, dstRast, $cast($WritableRaster, $nc(sData)->getRaster(x1, y1, x2 - x1, y2 - y1)));
	$nc(pw)->setRaster(dstRast);
	while (y1 < y2) {
		for (int32_t x = x1; x < x2; ++x) {
			pw->writePixel(x, y1);
		}
		++y1;
	}
}

$ints* GeneralRenderer::doDrawLine($SurfaceData* sData, $PixelWriter* pw, $ints* boundPts$renamed, $Region* clip, int32_t origx1, int32_t origy1, int32_t origx2, int32_t origy2) {
	$useLocalCurrentObjectStackCache();
	$var($ints, boundPts, boundPts$renamed);
	if (boundPts == nullptr) {
		$assign(boundPts, $new($ints, 8));
	}
	$nc(boundPts)->set(0, origx1);
	boundPts->set(1, origy1);
	boundPts->set(2, origx2);
	boundPts->set(3, origy2);
	$var($ints, var$0, boundPts);
	int32_t var$1 = $nc(clip)->getLoX();
	int32_t var$2 = clip->getLoY();
	int32_t var$3 = clip->getHiX();
	if (!adjustLine(var$0, var$1, var$2, var$3, clip->getHiY())) {
		return boundPts;
	}
	int32_t x1 = boundPts->get(0);
	int32_t y1 = boundPts->get(1);
	int32_t x2 = boundPts->get(2);
	int32_t y2 = boundPts->get(3);
	int32_t var$4 = $Math::min(x1, x2);
	int32_t var$5 = $Math::min(y1, y2);
	int32_t var$6 = $Math::abs(x1 - x2) + 1;
	$var($WritableRaster, dstRast, $cast($WritableRaster, $nc(sData)->getRaster(var$4, var$5, var$6, $Math::abs(y1 - y2) + 1)));
	$nc(pw)->setRaster(dstRast);
	if (x1 == x2) {
		if (y1 > y2) {
			do {
				pw->writePixel(x1, y1);
				--y1;
			} while (y1 >= y2);
		} else {
			do {
				pw->writePixel(x1, y1);
				++y1;
			} while (y1 <= y2);
		}
	} else if (y1 == y2) {
		if (x1 > x2) {
			do {
				pw->writePixel(x1, y1);
				--x1;
			} while (x1 >= x2);
		} else {
			do {
				pw->writePixel(x1, y1);
				++x1;
			} while (x1 <= x2);
		}
	} else {
		int32_t dx = boundPts->get(4);
		int32_t dy = boundPts->get(5);
		int32_t ax = boundPts->get(6);
		int32_t ay = boundPts->get(7);
		int32_t steps = 0;
		int32_t bumpmajor = 0;
		int32_t bumpminor = 0;
		int32_t errminor = 0;
		int32_t errmajor = 0;
		int32_t error = 0;
		bool xmajor = false;
		if (ax >= ay) {
			xmajor = true;
			errmajor = ay * 2;
			errminor = ax * 2;
			bumpmajor = (dx < 0) ? -1 : 1;
			bumpminor = (dy < 0) ? -1 : 1;
			ax = -ax;
			steps = x2 - x1;
		} else {
			xmajor = false;
			errmajor = ax * 2;
			errminor = ay * 2;
			bumpmajor = (dy < 0) ? -1 : 1;
			bumpminor = (dx < 0) ? -1 : 1;
			ay = -ay;
			steps = y2 - y1;
		}
		error = -(errminor / 2);
		if (y1 != origy1) {
			int32_t ysteps = y1 - origy1;
			if (ysteps < 0) {
				ysteps = -ysteps;
			}
			error += ysteps * ax * 2;
		}
		if (x1 != origx1) {
			int32_t xsteps = x1 - origx1;
			if (xsteps < 0) {
				xsteps = -xsteps;
			}
			error += xsteps * ay * 2;
		}
		if (steps < 0) {
			steps = -steps;
		}
		if (xmajor) {
			do {
				pw->writePixel(x1, y1);
				x1 += bumpmajor;
				error += errmajor;
				if (error >= 0) {
					y1 += bumpminor;
					error -= errminor;
				}
			} while (--steps >= 0);
		} else {
			do {
				pw->writePixel(x1, y1);
				y1 += bumpmajor;
				error += errmajor;
				if (error >= 0) {
					x1 += bumpminor;
					error -= errminor;
				}
			} while (--steps >= 0);
		}
	}
	return boundPts;
}

void GeneralRenderer::doDrawRect($PixelWriter* pw, $SunGraphics2D* sg2d, $SurfaceData* sData, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (w < 0 || h < 0) {
		return;
	}
	int32_t x2 = $Region::dimAdd($Region::dimAdd(x, w), 1);
	int32_t y2 = $Region::dimAdd($Region::dimAdd(y, h), 1);
	$var($Region, r, $nc($($nc(sg2d)->getCompClip()))->getBoundsIntersectionXYXY(x, y, x2, y2));
	if ($nc(r)->isEmpty()) {
		return;
	}
	int32_t cx1 = $nc(r)->getLoX();
	int32_t cy1 = r->getLoY();
	int32_t cx2 = r->getHiX();
	int32_t cy2 = r->getHiY();
	if (w < 2 || h < 2) {
		doSetRect(sData, pw, cx1, cy1, cx2, cy2);
		return;
	}
	if (cy1 == y) {
		doSetRect(sData, pw, cx1, cy1, cx2, cy1 + 1);
	}
	if (cx1 == x) {
		doSetRect(sData, pw, cx1, cy1 + 1, cx1 + 1, cy2 - 1);
	}
	if (cx2 == x2) {
		doSetRect(sData, pw, cx2 - 1, cy1 + 1, cx2, cy2 - 1);
	}
	if (cy2 == y2) {
		doSetRect(sData, pw, cx1, cy2 - 1, cx2, cy2);
	}
}

void GeneralRenderer::doDrawGlyphList($SurfaceData* sData, $PixelWriter* pw, $GlyphList* gl, int32_t fromGlyph, int32_t toGlyph, $Region* clip) {
	$useLocalCurrentObjectStackCache();
	$var($ints, bounds, $nc(gl)->getBounds(toGlyph));
	$nc(clip)->clipBoxToBounds(bounds);
	int32_t cx1 = $nc(bounds)->get(0);
	int32_t cy1 = bounds->get(1);
	int32_t cx2 = bounds->get(2);
	int32_t cy2 = bounds->get(3);
	$var($WritableRaster, dstRast, $cast($WritableRaster, $nc(sData)->getRaster(cx1, cy1, cx2 - cx1, cy2 - cy1)));
	$nc(pw)->setRaster(dstRast);
	for (int32_t i = fromGlyph; i < toGlyph; ++i) {
		gl->setGlyphIndex(i);
		$var($ints, metrics, gl->getMetrics());
		int32_t gx1 = $nc(metrics)->get(0);
		int32_t gy1 = metrics->get(1);
		int32_t w = metrics->get(2);
		int32_t gx2 = gx1 + w;
		int32_t gy2 = gy1 + metrics->get(3);
		int32_t off = 0;
		if (gx1 < cx1) {
			off = cx1 - gx1;
			gx1 = cx1;
		}
		if (gy1 < cy1) {
			off += (cy1 - gy1) * w;
			gy1 = cy1;
		}
		if (gx2 > cx2) {
			gx2 = cx2;
		}
		if (gy2 > cy2) {
			gy2 = cy2;
		}
		if (gx2 > gx1 && gy2 > gy1) {
			$var($bytes, alpha, gl->getGrayBits());
			w -= (gx2 - gx1);
			for (int32_t y = gy1; y < gy2; ++y) {
				for (int32_t x = gx1; x < gx2; ++x) {
					if ($nc(alpha)->get(off++) < 0) {
						pw->writePixel(x, y);
					}
				}
				off += w;
			}
		}
	}
}

int32_t GeneralRenderer::outcode(int32_t x, int32_t y, int32_t xmin, int32_t ymin, int32_t xmax, int32_t ymax) {
	int32_t code = 0;
	if (y < ymin) {
		code = GeneralRenderer::OUTCODE_TOP;
	} else if (y > ymax) {
		code = GeneralRenderer::OUTCODE_BOTTOM;
	} else {
		code = 0;
	}
	if (x < xmin) {
		code |= GeneralRenderer::OUTCODE_LEFT;
	} else if (x > xmax) {
		code |= GeneralRenderer::OUTCODE_RIGHT;
	}
	return code;
}

bool GeneralRenderer::adjustLine($ints* boundPts, int32_t cxmin, int32_t cymin, int32_t cx2, int32_t cy2) {
	int32_t cxmax = cx2 - 1;
	int32_t cymax = cy2 - 1;
	int32_t x1 = $nc(boundPts)->get(0);
	int32_t y1 = boundPts->get(1);
	int32_t x2 = boundPts->get(2);
	int32_t y2 = boundPts->get(3);
	if ((cxmax < cxmin) || (cymax < cymin)) {
		return false;
	}
	if (x1 == x2) {
		if (x1 < cxmin || x1 > cxmax) {
			return false;
		}
		if (y1 > y2) {
			int32_t t = y1;
			y1 = y2;
			y2 = t;
		}
		if (y1 < cymin) {
			y1 = cymin;
		}
		if (y2 > cymax) {
			y2 = cymax;
		}
		if (y1 > y2) {
			return false;
		}
		boundPts->set(1, y1);
		boundPts->set(3, y2);
	} else if (y1 == y2) {
		if (y1 < cymin || y1 > cymax) {
			return false;
		}
		if (x1 > x2) {
			int32_t t = x1;
			x1 = x2;
			x2 = t;
		}
		if (x1 < cxmin) {
			x1 = cxmin;
		}
		if (x2 > cxmax) {
			x2 = cxmax;
		}
		if (x1 > x2) {
			return false;
		}
		boundPts->set(0, x1);
		boundPts->set(2, x2);
	} else {
		int32_t outcode1 = 0;
		int32_t outcode2 = 0;
		int32_t dx = x2 - x1;
		int32_t dy = y2 - y1;
		int32_t ax = (dx < 0) ? -dx : dx;
		int32_t ay = (dy < 0) ? -dy : dy;
		bool xmajor = (ax >= ay);
		outcode1 = outcode(x1, y1, cxmin, cymin, cxmax, cymax);
		outcode2 = outcode(x2, y2, cxmin, cymin, cxmax, cymax);
		while ((outcode1 | outcode2) != 0) {
			int32_t xsteps = 0;
			int32_t ysteps = 0;
			if (((int32_t)(outcode1 & (uint32_t)outcode2)) != 0) {
				return false;
			}
			if (outcode1 != 0) {
				if (0 != ((int32_t)(outcode1 & (uint32_t)(GeneralRenderer::OUTCODE_TOP | GeneralRenderer::OUTCODE_BOTTOM)))) {
					if (0 != ((int32_t)(outcode1 & (uint32_t)GeneralRenderer::OUTCODE_TOP))) {
						y1 = cymin;
					} else {
						y1 = cymax;
					}
					ysteps = y1 - boundPts->get(1);
					if (ysteps < 0) {
						ysteps = -ysteps;
					}
					xsteps = 2 * ysteps * ax + ay;
					if (xmajor) {
						xsteps += ay - ax - 1;
					}
					xsteps = $div(xsteps, (2 * ay));
					if (dx < 0) {
						xsteps = -xsteps;
					}
					x1 = boundPts->get(0) + xsteps;
				} else if (0 != ((int32_t)(outcode1 & (uint32_t)(GeneralRenderer::OUTCODE_LEFT | GeneralRenderer::OUTCODE_RIGHT)))) {
					if (0 != ((int32_t)(outcode1 & (uint32_t)GeneralRenderer::OUTCODE_LEFT))) {
						x1 = cxmin;
					} else {
						x1 = cxmax;
					}
					xsteps = x1 - boundPts->get(0);
					if (xsteps < 0) {
						xsteps = -xsteps;
					}
					ysteps = 2 * xsteps * ay + ax;
					if (!xmajor) {
						ysteps += ax - ay - 1;
					}
					ysteps = $div(ysteps, (2 * ax));
					if (dy < 0) {
						ysteps = -ysteps;
					}
					y1 = boundPts->get(1) + ysteps;
				}
				outcode1 = outcode(x1, y1, cxmin, cymin, cxmax, cymax);
			} else {
				if (0 != ((int32_t)(outcode2 & (uint32_t)(GeneralRenderer::OUTCODE_TOP | GeneralRenderer::OUTCODE_BOTTOM)))) {
					if (0 != ((int32_t)(outcode2 & (uint32_t)GeneralRenderer::OUTCODE_TOP))) {
						y2 = cymin;
					} else {
						y2 = cymax;
					}
					ysteps = y2 - boundPts->get(3);
					if (ysteps < 0) {
						ysteps = -ysteps;
					}
					xsteps = 2 * ysteps * ax + ay;
					if (xmajor) {
						xsteps += ay - ax;
					} else {
						xsteps -= 1;
					}
					xsteps = $div(xsteps, (2 * ay));
					if (dx > 0) {
						xsteps = -xsteps;
					}
					x2 = boundPts->get(2) + xsteps;
				} else if (0 != ((int32_t)(outcode2 & (uint32_t)(GeneralRenderer::OUTCODE_LEFT | GeneralRenderer::OUTCODE_RIGHT)))) {
					if (0 != ((int32_t)(outcode2 & (uint32_t)GeneralRenderer::OUTCODE_LEFT))) {
						x2 = cxmin;
					} else {
						x2 = cxmax;
					}
					xsteps = x2 - boundPts->get(2);
					if (xsteps < 0) {
						xsteps = -xsteps;
					}
					ysteps = 2 * xsteps * ay + ax;
					if (xmajor) {
						ysteps -= 1;
					} else {
						ysteps += ax - ay;
					}
					ysteps = $div(ysteps, (2 * ax));
					if (dy > 0) {
						ysteps = -ysteps;
					}
					y2 = boundPts->get(3) + ysteps;
				}
				outcode2 = outcode(x2, y2, cxmin, cymin, cxmax, cymax);
			}
		}
		boundPts->set(0, x1);
		boundPts->set(1, y1);
		boundPts->set(2, x2);
		boundPts->set(3, y2);
		boundPts->set(4, dx);
		boundPts->set(5, dy);
		boundPts->set(6, ax);
		boundPts->set(7, ay);
	}
	return true;
}

$PixelWriter* GeneralRenderer::createSolidPixelWriter($SunGraphics2D* sg2d, $SurfaceData* sData) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, dstCM, $nc(sData)->getColorModel());
	$var($Object, srcPixel, $nc(dstCM)->getDataElements($nc(sg2d)->eargb, nullptr));
	return $new($SolidPixelWriter, srcPixel);
}

$PixelWriter* GeneralRenderer::createXorPixelWriter($SunGraphics2D* sg2d, $SurfaceData* sData) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, dstCM, $nc(sData)->getColorModel());
	$var($Object, srcPixel, $nc(dstCM)->getDataElements($nc(sg2d)->eargb, nullptr));
	$var($XORComposite, comp, $cast($XORComposite, $nc(sg2d)->getComposite()));
	int32_t xorrgb = $nc($($nc(comp)->getXorColor()))->getRGB();
	$var($Object, xorPixel, dstCM->getDataElements(xorrgb, nullptr));
	switch (dstCM->getTransferType()) {
	case $DataBuffer::TYPE_BYTE:
		{
			return $new($XorPixelWriter$ByteData, srcPixel, xorPixel);
		}
	case $DataBuffer::TYPE_SHORT:
		{}
	case $DataBuffer::TYPE_USHORT:
		{
			return $new($XorPixelWriter$ShortData, srcPixel, xorPixel);
		}
	case $DataBuffer::TYPE_INT:
		{
			return $new($XorPixelWriter$IntData, srcPixel, xorPixel);
		}
	case $DataBuffer::TYPE_FLOAT:
		{
			return $new($XorPixelWriter$FloatData, srcPixel, xorPixel);
		}
	case $DataBuffer::TYPE_DOUBLE:
		{
			return $new($XorPixelWriter$DoubleData, srcPixel, xorPixel);
		}
	default:
		{
			$throwNew($InternalError, "Unsupported XOR pixel type"_s);
		}
	}
}

GeneralRenderer::GeneralRenderer() {
}

$Class* GeneralRenderer::load$($String* name, bool initialize) {
	$loadClass(GeneralRenderer, name, initialize, &_GeneralRenderer_ClassInfo_, allocate$GeneralRenderer);
	return class$;
}

$Class* GeneralRenderer::class$ = nullptr;

		} // loops
	} // java2d
} // sun