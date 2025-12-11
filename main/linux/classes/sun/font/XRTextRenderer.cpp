#include <sun/font/XRTextRenderer.h>

#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/Math.h>
#include <sun/awt/SunToolkit.h>
#include <sun/font/GlyphList.h>
#include <sun/font/XRGlyphCache.h>
#include <sun/font/XRGlyphCacheEntry.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/GlyphListPipe.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/xr/GrowableEltArray.h>
#include <sun/java2d/xr/GrowableIntArray.h>
#include <sun/java2d/xr/XRBackend.h>
#include <sun/java2d/xr/XRCompositeManager.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef MAX_ELT_GLYPH_COUNT

using $XRGlyphCacheEntryArray = $Array<::sun::font::XRGlyphCacheEntry>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $GlyphList = ::sun::font::GlyphList;
using $XRGlyphCache = ::sun::font::XRGlyphCache;
using $XRGlyphCacheEntry = ::sun::font::XRGlyphCacheEntry;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $GlyphListPipe = ::sun::java2d::pipe::GlyphListPipe;
using $GrowableEltArray = ::sun::java2d::xr::GrowableEltArray;
using $GrowableIntArray = ::sun::java2d::xr::GrowableIntArray;
using $XRCompositeManager = ::sun::java2d::xr::XRCompositeManager;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace font {

$FieldInfo _XRTextRenderer_FieldInfo_[] = {
	{"MAX_ELT_GLYPH_COUNT", "I", nullptr, $STATIC | $FINAL, $constField(XRTextRenderer, MAX_ELT_GLYPH_COUNT)},
	{"glyphCache", "Lsun/font/XRGlyphCache;", nullptr, 0, $field(XRTextRenderer, glyphCache)},
	{"maskBuffer", "Lsun/java2d/xr/XRCompositeManager;", nullptr, 0, $field(XRTextRenderer, maskBuffer)},
	{"backend", "Lsun/java2d/xr/XRBackend;", nullptr, 0, $field(XRTextRenderer, backend)},
	{"eltList", "Lsun/java2d/xr/GrowableEltArray;", nullptr, 0, $field(XRTextRenderer, eltList)},
	{}
};

$MethodInfo _XRTextRenderer_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/xr/XRCompositeManager;)V", nullptr, $PUBLIC, $method(static_cast<void(XRTextRenderer::*)($XRCompositeManager*)>(&XRTextRenderer::init$))},
	{"drawGlyphList", "(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _XRTextRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.XRTextRenderer",
	"sun.java2d.pipe.GlyphListPipe",
	nullptr,
	_XRTextRenderer_FieldInfo_,
	_XRTextRenderer_MethodInfo_
};

$Object* allocate$XRTextRenderer($Class* clazz) {
	return $of($alloc(XRTextRenderer));
}

void XRTextRenderer::init$($XRCompositeManager* buffer) {
	$GlyphListPipe::init$();
	$set(this, glyphCache, $new($XRGlyphCache, buffer));
	$set(this, maskBuffer, buffer);
	$set(this, backend, $nc(buffer)->getBackend());
	$set(this, eltList, $new($GrowableEltArray, 64));
}

void XRTextRenderer::drawGlyphList($SunGraphics2D* sg2d, $GlyphList* gl) {
	$useLocalCurrentObjectStackCache();
	if ($nc(gl)->getNumGlyphs() == 0) {
		return;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SunToolkit::awtLock();
			$var($XRSurfaceData, x11sd, $cast($XRSurfaceData, $nc(sg2d)->surfaceData));
			$nc(x11sd)->validateAsDestination(nullptr, $(sg2d->getCompClip()));
			$nc(x11sd->maskBuffer)->validateCompositeState(sg2d->composite, sg2d->transform$, sg2d->paint, sg2d);
			float advX = $nc(gl)->getX();
			float advY = gl->getY();
			int32_t oldPosX = 0;
			int32_t oldPosY = 0;
			if (gl->isSubPixPos()) {
				advX += 0.1666667f;
				advY += 0.1666667f;
			} else {
				advX += 0.5f;
				advY += 0.5f;
			}
			$var($XRGlyphCacheEntryArray, cachedGlyphs, $nc(this->glyphCache)->cacheGlyphs(gl));
			bool containsLCDGlyphs = false;
			int32_t activeGlyphSet = $nc($nc(cachedGlyphs)->get(0))->getGlyphSet();
			int32_t eltIndex = -1;
			gl->startGlyphIteration();
			$var($floats, positions, gl->getPositions());
			for (int32_t i = 0; i < gl->getNumGlyphs(); ++i) {
				gl->setGlyphIndex(i);
				$var($XRGlyphCacheEntry, cacheEntry, cachedGlyphs->get(i));
				if (cacheEntry == nullptr) {
					continue;
				}
				$nc($($nc(this->eltList)->getGlyphs()))->addInt($nc(cacheEntry)->getGlyphID());
				int32_t glyphSet = $nc(cacheEntry)->getGlyphSet();
				containsLCDGlyphs |= (glyphSet == $nc(this->glyphCache)->lcdGlyphSet);
				int32_t posX = 0;
				int32_t posY = 0;
				bool var$3 = gl->usePositions();
				if (!var$3) {
					float var$4 = cacheEntry->getXAdvance();
					var$3 = var$4 != ((float)cacheEntry->getXOff());
				}
				bool var$2 = var$3;
				if (!var$2) {
					float var$5 = cacheEntry->getYAdvance();
					var$2 = var$5 != ((float)cacheEntry->getYOff());
				}
				bool var$1 = var$2 || glyphSet != activeGlyphSet || eltIndex < 0;
				if (var$1 || $nc(this->eltList)->getCharCnt(eltIndex) == XRTextRenderer::MAX_ELT_GLYPH_COUNT) {
					eltIndex = $nc(this->eltList)->getNextIndex();
					$nc(this->eltList)->setCharCnt(eltIndex, 1);
					activeGlyphSet = glyphSet;
					$nc(this->eltList)->setGlyphSet(eltIndex, glyphSet);
					if (gl->usePositions()) {
						float x = $nc(positions)->get(i * 2) + advX;
						float y = positions->get(i * 2 + 1) + advY;
						posX = $cast(int32_t, $Math::floor(x));
						posY = $cast(int32_t, $Math::floor(y));
						advX -= cacheEntry->getXOff();
						advY -= cacheEntry->getYOff();
					} else {
						posX = $cast(int32_t, $Math::floor(advX));
						posY = $cast(int32_t, $Math::floor(advY));
						float var$6 = cacheEntry->getXAdvance();
						advX += (var$6 - cacheEntry->getXOff());
						float var$7 = cacheEntry->getYAdvance();
						advY += (var$7 - cacheEntry->getYOff());
					}
					$nc(this->eltList)->setXOff(eltIndex, (posX - oldPosX));
					$nc(this->eltList)->setYOff(eltIndex, (posY - oldPosY));
					oldPosX = posX;
					oldPosY = posY;
				} else {
					$nc(this->eltList)->setCharCnt(eltIndex, $nc(this->eltList)->getCharCnt(eltIndex) + 1);
				}
			}
			int32_t maskFormat = containsLCDGlyphs ? $XRUtils::PictStandardARGB32 : $XRUtils::PictStandardA8;
			$var($XRSurfaceData, var$8, x11sd);
			int32_t var$9 = $cast(int32_t, gl->getX());
			$nc(this->maskBuffer)->compositeText(var$8, var$9, $cast(int32_t, gl->getY()), 0, maskFormat, this->eltList);
			$nc(this->eltList)->clear();
		} catch ($Throwable& var$10) {
			$assign(var$0, var$10);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

XRTextRenderer::XRTextRenderer() {
}

$Class* XRTextRenderer::load$($String* name, bool initialize) {
	$loadClass(XRTextRenderer, name, initialize, &_XRTextRenderer_ClassInfo_, allocate$XRTextRenderer);
	return class$;
}

$Class* XRTextRenderer::class$ = nullptr;

	} // font
} // sun