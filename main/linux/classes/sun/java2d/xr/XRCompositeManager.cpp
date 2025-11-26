#include <sun/java2d/xr/XRCompositeManager.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <java/awt/Paint.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/lang/InternalError.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/font/XRTextRenderer.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/loops/XORComposite.h>
#include <sun/java2d/xr/GrowableEltArray.h>
#include <sun/java2d/xr/GrowableRectArray.h>
#include <sun/java2d/xr/MaskTileManager.h>
#include <sun/java2d/xr/XRBackend.h>
#include <sun/java2d/xr/XRBackendNative.h>
#include <sun/java2d/xr/XRColor.h>
#include <sun/java2d/xr/XRCompositeManager$1.h>
#include <sun/java2d/xr/XRMaskImage.h>
#include <sun/java2d/xr/XRPaints.h>
#include <sun/java2d/xr/XRSolidSrcPict.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef FULL_ALPHA
#undef GRADIENT
#undef MASK_SIZE
#undef NO_ALPHA
#undef PAINT_GRADIENT
#undef SOLID
#undef SRC_OVER
#undef TEXTURE

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $Paint = ::java::awt::Paint;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $XRTextRenderer = ::sun::font::XRTextRenderer;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $XORComposite = ::sun::java2d::loops::XORComposite;
using $GrowableEltArray = ::sun::java2d::xr::GrowableEltArray;
using $GrowableIntArray = ::sun::java2d::xr::GrowableIntArray;
using $GrowableRectArray = ::sun::java2d::xr::GrowableRectArray;
using $MaskTileManager = ::sun::java2d::xr::MaskTileManager;
using $XRBackend = ::sun::java2d::xr::XRBackend;
using $XRBackendNative = ::sun::java2d::xr::XRBackendNative;
using $XRColor = ::sun::java2d::xr::XRColor;
using $XRCompositeManager$1 = ::sun::java2d::xr::XRCompositeManager$1;
using $XRMaskImage = ::sun::java2d::xr::XRMaskImage;
using $XRPaints = ::sun::java2d::xr::XRPaints;
using $XRSolidSrcPict = ::sun::java2d::xr::XRSolidSrcPict;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XRCompositeManager_FieldInfo_[] = {
	{"enableGradCache", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XRCompositeManager, enableGradCache)},
	{"instance", "Lsun/java2d/xr/XRCompositeManager;", nullptr, $PRIVATE | $STATIC, $staticField(XRCompositeManager, instance)},
	{"SOLID", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XRCompositeManager, SOLID)},
	{"TEXTURE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XRCompositeManager, TEXTURE)},
	{"GRADIENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XRCompositeManager, GRADIENT)},
	{"srcType", "I", nullptr, 0, $field(XRCompositeManager, srcType)},
	{"solidSrc32", "Lsun/java2d/xr/XRSolidSrcPict;", nullptr, 0, $field(XRCompositeManager, solidSrc32)},
	{"texture", "Lsun/java2d/xr/XRSurfaceData;", nullptr, 0, $field(XRCompositeManager, texture)},
	{"gradient", "Lsun/java2d/xr/XRSurfaceData;", nullptr, 0, $field(XRCompositeManager, gradient)},
	{"alphaMask", "I", nullptr, 0, $field(XRCompositeManager, alphaMask)},
	{"solidColor", "Lsun/java2d/xr/XRColor;", nullptr, 0, $field(XRCompositeManager, solidColor)},
	{"extraAlpha", "F", nullptr, 0, $field(XRCompositeManager, extraAlpha)},
	{"compRule", "B", nullptr, 0, $field(XRCompositeManager, compRule)},
	{"alphaColor", "Lsun/java2d/xr/XRColor;", nullptr, 0, $field(XRCompositeManager, alphaColor)},
	{"solidSrcPict", "Lsun/java2d/xr/XRSurfaceData;", nullptr, 0, $field(XRCompositeManager, solidSrcPict)},
	{"alphaMaskPict", "I", nullptr, 0, $field(XRCompositeManager, alphaMaskPict)},
	{"gradCachePixmap", "I", nullptr, 0, $field(XRCompositeManager, gradCachePixmap)},
	{"gradCachePicture", "I", nullptr, 0, $field(XRCompositeManager, gradCachePicture)},
	{"xorEnabled", "Z", nullptr, 0, $field(XRCompositeManager, xorEnabled)},
	{"validatedPixel", "I", nullptr, 0, $field(XRCompositeManager, validatedPixel)},
	{"validatedComp", "Ljava/awt/Composite;", nullptr, 0, $field(XRCompositeManager, validatedComp)},
	{"validatedPaint", "Ljava/awt/Paint;", nullptr, 0, $field(XRCompositeManager, validatedPaint)},
	{"validatedExtraAlpha", "F", nullptr, 0, $field(XRCompositeManager, validatedExtraAlpha)},
	{"con", "Lsun/java2d/xr/XRBackend;", nullptr, 0, $field(XRCompositeManager, con)},
	{"maskBuffer", "Lsun/java2d/xr/MaskTileManager;", nullptr, 0, $field(XRCompositeManager, maskBuffer)},
	{"textRenderer", "Lsun/font/XRTextRenderer;", nullptr, 0, $field(XRCompositeManager, textRenderer)},
	{"maskImage", "Lsun/java2d/xr/XRMaskImage;", nullptr, 0, $field(XRCompositeManager, maskImage)},
	{}
};

$MethodInfo _XRCompositeManager_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/xr/XRSurfaceData;)V", nullptr, $PRIVATE, $method(static_cast<void(XRCompositeManager::*)($XRSurfaceData*)>(&XRCompositeManager::init$))},
	{"XRComposite", "(IIIIIIIIIII)V", nullptr, $PUBLIC},
	{"XRCompositeRectangles", "(Lsun/java2d/xr/XRSurfaceData;Lsun/java2d/xr/GrowableRectArray;)V", nullptr, $PUBLIC},
	{"XRRenderRectangles", "(Lsun/java2d/xr/XRSurfaceData;Lsun/java2d/xr/GrowableRectArray;)V", nullptr, $PUBLIC},
	{"XRResetPaint", "()V", nullptr, $PUBLIC},
	{"compositeBlit", "(Lsun/java2d/xr/XRSurfaceData;Lsun/java2d/xr/XRSurfaceData;IIIIII)V", nullptr, $PUBLIC},
	{"compositeText", "(Lsun/java2d/xr/XRSurfaceData;IIIILsun/java2d/xr/GrowableEltArray;)V", nullptr, $PUBLIC},
	{"getAlphaColor", "()Lsun/java2d/xr/XRColor;", nullptr, $PUBLIC},
	{"getBackend", "()Lsun/java2d/xr/XRBackend;", nullptr, $PUBLIC},
	{"getCompRule", "()B", nullptr, $PUBLIC},
	{"getCurrentSource", "()Lsun/java2d/xr/XRSurfaceData;", nullptr, $PROTECTED},
	{"getExtraAlpha", "()F", nullptr, $PUBLIC},
	{"getExtraAlphaMask", "()I", nullptr, $PUBLIC},
	{"getInstance", "(Lsun/java2d/xr/XRSurfaceData;)Lsun/java2d/xr/XRCompositeManager;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<XRCompositeManager*(*)($XRSurfaceData*)>(&XRCompositeManager::getInstance))},
	{"getMaskBuffer", "()Lsun/java2d/xr/MaskTileManager;", nullptr, $PUBLIC},
	{"getMaskColor", "()Lsun/java2d/xr/XRColor;", nullptr, $PUBLIC},
	{"getMaskImage", "()Lsun/java2d/xr/XRMaskImage;", nullptr, $PUBLIC},
	{"getTextRenderer", "()Lsun/font/XRTextRenderer;", nullptr, $PUBLIC},
	{"initResources", "(Lsun/java2d/xr/XRSurfaceData;)V", nullptr, $PUBLIC},
	{"isSolidPaintActive", "()Z", nullptr, $PUBLIC},
	{"isTexturePaintActive", "()Z", nullptr, $PUBLIC},
	{"maskRequired", "()Z", nullptr, $PUBLIC},
	{"setComposite", "(Ljava/awt/Composite;)V", nullptr, $PRIVATE, $method(static_cast<void(XRCompositeManager::*)($Composite*)>(&XRCompositeManager::setComposite))},
	{"setForeground", "(I)V", nullptr, $PUBLIC},
	{"setGradientPaint", "(Lsun/java2d/xr/XRSurfaceData;)V", nullptr, $PUBLIC},
	{"setTexturePaint", "(Lsun/java2d/xr/XRSurfaceData;)V", nullptr, $PUBLIC},
	{"validateCompositeState", "(Ljava/awt/Composite;Ljava/awt/geom/AffineTransform;Ljava/awt/Paint;Lsun/java2d/SunGraphics2D;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XRCompositeManager_InnerClassesInfo_[] = {
	{"sun.java2d.xr.XRCompositeManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XRCompositeManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRCompositeManager",
	"java.lang.Object",
	nullptr,
	_XRCompositeManager_FieldInfo_,
	_XRCompositeManager_MethodInfo_,
	nullptr,
	nullptr,
	_XRCompositeManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.xr.XRCompositeManager$1"
};

$Object* allocate$XRCompositeManager($Class* clazz) {
	return $of($alloc(XRCompositeManager));
}

bool XRCompositeManager::enableGradCache = false;
XRCompositeManager* XRCompositeManager::instance = nullptr;

XRCompositeManager* XRCompositeManager::getInstance($XRSurfaceData* surface) {
	$load(XRCompositeManager);
	$synchronized(class$) {
		$init(XRCompositeManager);
		if (XRCompositeManager::instance == nullptr) {
			$assignStatic(XRCompositeManager::instance, $new(XRCompositeManager, surface));
		}
		return XRCompositeManager::instance;
	}
}

void XRCompositeManager::init$($XRSurfaceData* surface) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	this->alphaMask = $XRUtils::None;
	$set(this, solidColor, $new($XRColor));
	this->extraAlpha = 1.0f;
	this->compRule = $XRUtils::PictOpOver;
	$set(this, alphaColor, $new($XRColor));
	this->xorEnabled = false;
	this->validatedPixel = 0;
	this->validatedExtraAlpha = 1.0f;
	$set(this, con, $new($XRBackendNative));
	$var($String, gradProp, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($XRCompositeManager$1, this)))));
	bool var$0 = gradProp == nullptr;
	if (!var$0) {
		bool var$1 = $nc(gradProp)->equalsIgnoreCase("false"_s);
		var$0 = !(var$1 || $nc(gradProp)->equalsIgnoreCase("f"_s));
	}
	XRCompositeManager::enableGradCache = var$0;
	$XRPaints::register$(this);
	initResources(surface);
	$set(this, maskBuffer, $new($MaskTileManager, this, $nc(surface)->getXid()));
	$set(this, textRenderer, $new($XRTextRenderer, this));
	$set(this, maskImage, $new($XRMaskImage, this, $nc(surface)->getXid()));
}

void XRCompositeManager::initResources($XRSurfaceData* surface) {
	int32_t parentXid = $nc(surface)->getXid();
	$set(this, solidSrc32, $new($XRSolidSrcPict, this->con, parentXid));
	setForeground(0);
	int32_t extraAlphaMask = $nc(this->con)->createPixmap(parentXid, 8, 1, 1);
	this->alphaMaskPict = $nc(this->con)->createPicture(extraAlphaMask, $XRUtils::PictStandardA8);
	$nc(this->con)->setPictureRepeat(this->alphaMaskPict, $XRUtils::RepeatNormal);
	$init($XRColor);
	$nc(this->con)->renderRectangle(this->alphaMaskPict, $XRUtils::PictOpClear, $XRColor::NO_ALPHA, 0, 0, 1, 1);
	if (XRCompositeManager::enableGradCache) {
		this->gradCachePixmap = $nc(this->con)->createPixmap(parentXid, 32, $MaskTileManager::MASK_SIZE, $MaskTileManager::MASK_SIZE);
		this->gradCachePicture = $nc(this->con)->createPicture(this->gradCachePixmap, $XRUtils::PictStandardARGB32);
	}
}

void XRCompositeManager::setForeground(int32_t pixel) {
	$nc(this->solidColor)->setColorValues(pixel);
}

void XRCompositeManager::setGradientPaint($XRSurfaceData* gradient) {
	if (this->gradient != nullptr) {
		$nc(this->con)->freePicture($nc(this->gradient)->picture);
	}
	$set(this, gradient, gradient);
	this->srcType = XRCompositeManager::GRADIENT;
}

void XRCompositeManager::setTexturePaint($XRSurfaceData* texture) {
	$set(this, texture, texture);
	this->srcType = XRCompositeManager::TEXTURE;
}

void XRCompositeManager::XRResetPaint() {
	this->srcType = XRCompositeManager::SOLID;
}

void XRCompositeManager::validateCompositeState($Composite* comp$renamed, $AffineTransform* xform, $Paint* paint, $SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($Composite, comp, comp$renamed);
	bool updatePaint = (paint != this->validatedPaint) || paint == nullptr;
	if (comp != this->validatedComp) {
		if (comp != nullptr) {
			setComposite(comp);
		} else {
			$assign(comp, $AlphaComposite::getInstance($AlphaComposite::SRC_OVER));
			setComposite(comp);
		}
		updatePaint = true;
		$set(this, validatedComp, comp);
	}
	if (sg2d != nullptr && (this->validatedPixel != sg2d->pixel || updatePaint)) {
		this->validatedPixel = $nc(sg2d)->pixel;
		setForeground(this->validatedPixel);
	}
	if (updatePaint) {
		if (paint != nullptr && sg2d != nullptr && sg2d->paintState >= $SunGraphics2D::PAINT_GRADIENT) {
			$XRPaints::setPaint(sg2d, paint);
		} else {
			XRResetPaint();
		}
		$set(this, validatedPaint, paint);
	}
	if (this->srcType != XRCompositeManager::SOLID) {
		$var($AffineTransform, at, $cast($AffineTransform, $nc(xform)->clone()));
		try {
			$nc(at)->invert();
		} catch ($NoninvertibleTransformException& e) {
			$nc(at)->setToIdentity();
		}
		$nc($(getCurrentSource()))->validateAsSource(at, -1, $XRUtils::ATransOpToXRQuality($nc(sg2d)->interpolationType));
	}
}

void XRCompositeManager::setComposite($Composite* comp) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($AlphaComposite, comp)) {
		$var($AlphaComposite, aComp, $cast($AlphaComposite, comp));
		this->validatedExtraAlpha = $nc(aComp)->getAlpha();
		this->compRule = $XRUtils::j2dAlphaCompToXR(aComp->getRule());
		this->extraAlpha = this->validatedExtraAlpha;
		if (this->extraAlpha == 1.0f) {
			this->alphaMask = $XRUtils::None;
			$init($XRColor);
			$nc(this->alphaColor)->alpha = $nc($XRColor::FULL_ALPHA)->alpha;
		} else {
			$nc(this->alphaColor)->alpha = $XRColor::byteToXRColorValue($cast(int32_t, (this->extraAlpha * 255)));
			this->alphaMask = this->alphaMaskPict;
			$nc(this->con)->renderRectangle(this->alphaMaskPict, $XRUtils::PictOpSrc, this->alphaColor, 0, 0, 1, 1);
		}
		this->xorEnabled = false;
	} else if ($instanceOf($XORComposite, comp)) {
		this->xorEnabled = true;
	} else {
		$throwNew($InternalError, $$str({"Composite accaleration not implemented for: "_s, $($nc($of(comp))->getClass()->getName())}));
	}
}

bool XRCompositeManager::maskRequired() {
	return (!this->xorEnabled) && ((this->srcType != XRCompositeManager::SOLID) || (this->srcType == XRCompositeManager::SOLID && ($nc(this->solidColor)->alpha != 0x0000FFFF) || (this->extraAlpha != 1.0f)));
}

void XRCompositeManager::XRComposite(int32_t src, int32_t mask, int32_t dst, int32_t srcX, int32_t srcY, int32_t maskX, int32_t maskY, int32_t dstX, int32_t dstY, int32_t width, int32_t height) {
	int32_t cachedSrc = (src == $XRUtils::None) ? $nc($(getCurrentSource()))->picture : src;
	int32_t cachedX = srcX;
	int32_t cachedY = srcY;
	if (XRCompositeManager::enableGradCache && this->gradient != nullptr && cachedSrc == $nc(this->gradient)->picture) {
		$nc(this->con)->renderComposite($XRUtils::PictOpSrc, $nc(this->gradient)->picture, $XRUtils::None, this->gradCachePicture, srcX, srcY, 0, 0, 0, 0, width, height);
		cachedX = 0;
		cachedY = 0;
		cachedSrc = this->gradCachePicture;
	}
	$nc(this->con)->renderComposite(this->compRule, cachedSrc, mask, dst, cachedX, cachedY, maskX, maskY, dstX, dstY, width, height);
}

void XRCompositeManager::XRRenderRectangles($XRSurfaceData* dst, $GrowableRectArray* rects) {
	if (this->xorEnabled) {
		int32_t var$0 = $nc(dst)->getXid();
		$nc(this->con)->GCRectangles(var$0, dst->getGC(), rects);
	} else if ($nc(rects)->getSize() == 1) {
		int32_t var$1 = $nc(dst)->getPicture();
		int8_t var$2 = this->compRule;
		$var($XRColor, var$3, this->solidColor);
		int32_t var$4 = rects->getX(0);
		int32_t var$5 = rects->getY(0);
		int32_t var$6 = rects->getWidth(0);
		$nc(this->con)->renderRectangle(var$1, var$2, var$3, var$4, var$5, var$6, rects->getHeight(0));
	} else {
		$nc(this->con)->renderRectangles($nc(dst)->getPicture(), this->compRule, this->solidColor, rects);
	}
}

void XRCompositeManager::XRCompositeRectangles($XRSurfaceData* dst, $GrowableRectArray* rects) {
	int32_t srcPict = $nc($(getCurrentSource()))->picture;
	for (int32_t i = 0; i < $nc(rects)->getSize(); ++i) {
		int32_t x = rects->getX(i);
		int32_t y = rects->getY(i);
		int32_t width = rects->getWidth(i);
		int32_t height = rects->getHeight(i);
		$nc(this->con)->renderComposite(this->compRule, srcPict, $XRUtils::None, $nc(dst)->picture, x, y, 0, 0, x, y, width, height);
	}
}

$XRSurfaceData* XRCompositeManager::getCurrentSource() {
	switch (this->srcType) {
	case XRCompositeManager::SOLID:
		{
			return $nc(this->solidSrc32)->prepareSrcPict(this->validatedPixel);
		}
	case XRCompositeManager::TEXTURE:
		{
			return this->texture;
		}
	case XRCompositeManager::GRADIENT:
		{
			return this->gradient;
		}
	}
	return nullptr;
}

void XRCompositeManager::compositeBlit($XRSurfaceData* src, $XRSurfaceData* dst, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$nc(this->con)->renderComposite(this->compRule, $nc(src)->picture, this->alphaMask, $nc(dst)->picture, sx, sy, 0, 0, dx, dy, w, h);
}

void XRCompositeManager::compositeText($XRSurfaceData* dst, int32_t sx, int32_t sy, int32_t glyphSet, int32_t maskFormat, $GrowableEltArray* elts) {
	int8_t textCompRule = (this->compRule != $XRUtils::PictOpSrc) ? this->compRule : $XRUtils::PictOpOver;
	$nc(this->con)->XRenderCompositeText(textCompRule, $nc($(getCurrentSource()))->picture, $nc(dst)->picture, maskFormat, sx, sy, 0, 0, glyphSet, elts);
}

$XRColor* XRCompositeManager::getMaskColor() {
	$init($XRColor);
	return !isTexturePaintActive() ? $XRColor::FULL_ALPHA : getAlphaColor();
}

int32_t XRCompositeManager::getExtraAlphaMask() {
	return this->alphaMask;
}

bool XRCompositeManager::isTexturePaintActive() {
	return this->srcType == XRCompositeManager::TEXTURE;
}

bool XRCompositeManager::isSolidPaintActive() {
	return this->srcType == XRCompositeManager::SOLID;
}

$XRColor* XRCompositeManager::getAlphaColor() {
	return this->alphaColor;
}

$XRBackend* XRCompositeManager::getBackend() {
	return this->con;
}

float XRCompositeManager::getExtraAlpha() {
	return this->validatedExtraAlpha;
}

int8_t XRCompositeManager::getCompRule() {
	return this->compRule;
}

$XRTextRenderer* XRCompositeManager::getTextRenderer() {
	return this->textRenderer;
}

$MaskTileManager* XRCompositeManager::getMaskBuffer() {
	return this->maskBuffer;
}

$XRMaskImage* XRCompositeManager::getMaskImage() {
	return this->maskImage;
}

void clinit$XRCompositeManager($Class* class$) {
	XRCompositeManager::enableGradCache = true;
}

XRCompositeManager::XRCompositeManager() {
}

$Class* XRCompositeManager::load$($String* name, bool initialize) {
	$loadClass(XRCompositeManager, name, initialize, &_XRCompositeManager_ClassInfo_, clinit$XRCompositeManager, allocate$XRCompositeManager);
	return class$;
}

$Class* XRCompositeManager::class$ = nullptr;

		} // xr
	} // java2d
} // sun