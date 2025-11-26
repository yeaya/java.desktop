#include <sun/java2d/xr/XRPMTransformedBlit.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/Rectangle.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/lang/Math.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/xr/XRBackend.h>
#include <sun/java2d/xr/XRCompositeManager.h>
#include <sun/java2d/xr/XRMaskImage.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef FAST

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $Paint = ::java::awt::Paint;
using $Rectangle = ::java::awt::Rectangle;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $TransformBlit = ::sun::java2d::loops::TransformBlit;
using $Region = ::sun::java2d::pipe::Region;
using $XRBackend = ::sun::java2d::xr::XRBackend;
using $XRCompositeManager = ::sun::java2d::xr::XRCompositeManager;
using $XRMaskImage = ::sun::java2d::xr::XRMaskImage;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XRPMTransformedBlit_FieldInfo_[] = {
	{"compositeBounds", "Ljava/awt/Rectangle;", nullptr, $FINAL, $field(XRPMTransformedBlit, compositeBounds)},
	{"srcCoords", "[D", nullptr, $FINAL, $field(XRPMTransformedBlit, srcCoords)},
	{"dstCoords", "[D", nullptr, $FINAL, $field(XRPMTransformedBlit, dstCoords)},
	{}
};

$MethodInfo _XRPMTransformedBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(XRPMTransformedBlit::*)($SurfaceType*,$SurfaceType*)>(&XRPMTransformedBlit::init$))},
	{"Transform", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIII)V", nullptr, $PUBLIC},
	{"adjustCompositeBounds", "(ZLjava/awt/geom/AffineTransform;IIII)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _XRPMTransformedBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.xr.XRPMTransformedBlit",
	"sun.java2d.loops.TransformBlit",
	nullptr,
	_XRPMTransformedBlit_FieldInfo_,
	_XRPMTransformedBlit_MethodInfo_
};

$Object* allocate$XRPMTransformedBlit($Class* clazz) {
	return $of($alloc(XRPMTransformedBlit));
}

void XRPMTransformedBlit::init$($SurfaceType* srcType, $SurfaceType* dstType) {
	$init($CompositeType);
	$TransformBlit::init$(srcType, $CompositeType::AnyAlpha, dstType);
	$set(this, compositeBounds, $new($Rectangle));
	$set(this, srcCoords, $new($doubles, 8));
	$set(this, dstCoords, $new($doubles, 8));
}

void XRPMTransformedBlit::adjustCompositeBounds(bool isQuadrantRotated, $AffineTransform* tr, int32_t dstx, int32_t dsty, int32_t width, int32_t height) {
	$nc(this->srcCoords)->set(0, (double)dstx);
	$nc(this->srcCoords)->set(1, (double)dsty);
	$nc(this->srcCoords)->set(2, (double)(dstx + width));
	$nc(this->srcCoords)->set(3, (double)(dsty + height));
	double minX = 0.0;
	double minY = 0.0;
	double maxX = 0.0;
	double maxY = 0.0;
	if (isQuadrantRotated) {
		$nc(tr)->transform(this->srcCoords, 0, this->dstCoords, 0, 2);
		minX = $Math::min($nc(this->dstCoords)->get(0), $nc(this->dstCoords)->get(2));
		minY = $Math::min($nc(this->dstCoords)->get(1), $nc(this->dstCoords)->get(3));
		maxX = $Math::max($nc(this->dstCoords)->get(0), $nc(this->dstCoords)->get(2));
		maxY = $Math::max($nc(this->dstCoords)->get(1), $nc(this->dstCoords)->get(3));
		minX = $Math::ceil(minX - 0.5);
		minY = $Math::ceil(minY - 0.5);
		maxX = $Math::ceil(maxX - 0.5);
		maxY = $Math::ceil(maxY - 0.5);
	} else {
		$nc(this->srcCoords)->set(4, (double)dstx);
		$nc(this->srcCoords)->set(5, (double)(dsty + height));
		$nc(this->srcCoords)->set(6, (double)(dstx + width));
		$nc(this->srcCoords)->set(7, (double)dsty);
		$nc(tr)->transform(this->srcCoords, 0, this->dstCoords, 0, 4);
		minX = $Math::min($nc(this->dstCoords)->get(0), $Math::min($nc(this->dstCoords)->get(2), $Math::min($nc(this->dstCoords)->get(4), $nc(this->dstCoords)->get(6))));
		minY = $Math::min($nc(this->dstCoords)->get(1), $Math::min($nc(this->dstCoords)->get(3), $Math::min($nc(this->dstCoords)->get(5), $nc(this->dstCoords)->get(7))));
		maxX = $Math::max($nc(this->dstCoords)->get(0), $Math::max($nc(this->dstCoords)->get(2), $Math::max($nc(this->dstCoords)->get(4), $nc(this->dstCoords)->get(6))));
		maxY = $Math::max($nc(this->dstCoords)->get(1), $Math::max($nc(this->dstCoords)->get(3), $Math::max($nc(this->dstCoords)->get(5), $nc(this->dstCoords)->get(7))));
		minX = $Math::floor(minX);
		minY = $Math::floor(minY);
		maxX = $Math::ceil(maxX);
		maxY = $Math::ceil(maxY);
	}
	$nc(this->compositeBounds)->x = $cast(int32_t, minX);
	$nc(this->compositeBounds)->y = $cast(int32_t, minY);
	$nc(this->compositeBounds)->width = $cast(int32_t, (maxX - minX));
	$nc(this->compositeBounds)->height = $cast(int32_t, (maxY - minY));
}

void XRPMTransformedBlit::Transform($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, $AffineTransform* xform, int32_t hint, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SunToolkit::awtLock();
			$var($XRSurfaceData, x11sdDst, $cast($XRSurfaceData, dst));
			$var($XRSurfaceData, x11sdSrc, $cast($XRSurfaceData, src));
			$var($XRCompositeManager, xrMgr, $XRCompositeManager::getInstance(x11sdSrc));
			float extraAlpha = $nc(($cast($AlphaComposite, comp)))->getAlpha();
			int32_t filter = $XRUtils::ATransOpToXRQuality(hint);
			bool isQuadrantRotated = $XRUtils::isTransformQuadrantRotated(xform);
			adjustCompositeBounds(isQuadrantRotated, xform, dstx, dsty, width, height);
			$nc(x11sdDst)->validateAsDestination(nullptr, clip);
			$nc(x11sdDst->maskBuffer)->validateCompositeState(comp, nullptr, nullptr, nullptr);
			$var($AffineTransform, trx, $AffineTransform::getTranslateInstance((double)(-$nc(this->compositeBounds)->x), (double)(-$nc(this->compositeBounds)->y)));
			$nc(trx)->concatenate(xform);
			$var($AffineTransform, maskTX, $cast($AffineTransform, trx->clone()));
			trx->translate((double)(-srcx), (double)(-srcy));
			try {
				trx->invert();
			} catch ($NoninvertibleTransformException& ex) {
				trx->setToIdentity();
			}
			if (filter != $XRUtils::FAST && (!isQuadrantRotated || extraAlpha != 1.0f)) {
				$var($XRMaskImage, mask, $nc($nc(x11sdSrc)->maskBuffer)->getMaskImage());
				int32_t maskPicture = isQuadrantRotated ? $nc(xrMgr)->getExtraAlphaMask() : $nc(mask)->prepareBlitMask(x11sdDst, maskTX, width, height);
				x11sdSrc->validateAsSource(trx, $XRUtils::RepeatPad, filter);
				$nc($nc(x11sdDst->maskBuffer)->con)->renderComposite(xrMgr->getCompRule(), x11sdSrc->picture, maskPicture, x11sdDst->picture, 0, 0, 0, 0, $nc(this->compositeBounds)->x, $nc(this->compositeBounds)->y, $nc(this->compositeBounds)->width, $nc(this->compositeBounds)->height);
			} else {
				int32_t repeat = filter == $XRUtils::FAST ? $XRUtils::RepeatNone : $XRUtils::RepeatPad;
				$nc(x11sdSrc)->validateAsSource(trx, repeat, filter);
				$nc(x11sdDst->maskBuffer)->compositeBlit(x11sdSrc, x11sdDst, 0, 0, $nc(this->compositeBounds)->x, $nc(this->compositeBounds)->y, $nc(this->compositeBounds)->width, $nc(this->compositeBounds)->height);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

XRPMTransformedBlit::XRPMTransformedBlit() {
}

$Class* XRPMTransformedBlit::load$($String* name, bool initialize) {
	$loadClass(XRPMTransformedBlit, name, initialize, &_XRPMTransformedBlit_ClassInfo_, allocate$XRPMTransformedBlit);
	return class$;
}

$Class* XRPMTransformedBlit::class$ = nullptr;

		} // xr
	} // java2d
} // sun