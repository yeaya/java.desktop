#include <sun/java2d/xr/XRMaskImage.h>

#include <java/awt/Dimension.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/lang/Math.h>
#include <sun/java2d/xr/XRBackend.h>
#include <sun/java2d/xr/XRColor.h>
#include <sun/java2d/xr/XRCompositeManager.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef BLIT_MASK_SIZE
#undef MASK_SCALE_FACTOR
#undef NO_ALPHA

using $Dimension = ::java::awt::Dimension;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $XRBackend = ::sun::java2d::xr::XRBackend;
using $XRColor = ::sun::java2d::xr::XRColor;
using $XRCompositeManager = ::sun::java2d::xr::XRCompositeManager;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XRMaskImage_FieldInfo_[] = {
	{"MASK_SCALE_FACTOR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XRMaskImage, MASK_SCALE_FACTOR)},
	{"BLIT_MASK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XRMaskImage, BLIT_MASK_SIZE)},
	{"blitMaskDimensions", "Ljava/awt/Dimension;", nullptr, 0, $field(XRMaskImage, blitMaskDimensions)},
	{"blitMaskPixmap", "I", nullptr, 0, $field(XRMaskImage, blitMaskPixmap)},
	{"blitMaskPicture", "I", nullptr, 0, $field(XRMaskImage, blitMaskPicture)},
	{"lastMaskWidth", "I", nullptr, 0, $field(XRMaskImage, lastMaskWidth)},
	{"lastMaskHeight", "I", nullptr, 0, $field(XRMaskImage, lastMaskHeight)},
	{"lastEA", "I", nullptr, 0, $field(XRMaskImage, lastEA)},
	{"lastMaskTransform", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(XRMaskImage, lastMaskTransform)},
	{"xrMgr", "Lsun/java2d/xr/XRCompositeManager;", nullptr, 0, $field(XRMaskImage, xrMgr)},
	{"con", "Lsun/java2d/xr/XRBackend;", nullptr, 0, $field(XRMaskImage, con)},
	{}
};

$MethodInfo _XRMaskImage_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/xr/XRCompositeManager;I)V", nullptr, $PUBLIC, $method(static_cast<void(XRMaskImage::*)($XRCompositeManager*,int32_t)>(&XRMaskImage::init$))},
	{"ensureBlitMaskSize", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(XRMaskImage::*)(int32_t,int32_t)>(&XRMaskImage::ensureBlitMaskSize))},
	{"initBlitMask", "(III)V", nullptr, $PRIVATE, $method(static_cast<void(XRMaskImage::*)(int32_t,int32_t,int32_t)>(&XRMaskImage::initBlitMask))},
	{"prepareBlitMask", "(Lsun/java2d/xr/XRSurfaceData;Ljava/awt/geom/AffineTransform;II)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XRMaskImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRMaskImage",
	"java.lang.Object",
	nullptr,
	_XRMaskImage_FieldInfo_,
	_XRMaskImage_MethodInfo_
};

$Object* allocate$XRMaskImage($Class* clazz) {
	return $of($alloc(XRMaskImage));
}

void XRMaskImage::init$($XRCompositeManager* xrMgr, int32_t parentDrawable) {
	$set(this, blitMaskDimensions, $new($Dimension, XRMaskImage::BLIT_MASK_SIZE, XRMaskImage::BLIT_MASK_SIZE));
	this->lastMaskWidth = 0;
	this->lastMaskHeight = 0;
	this->lastEA = -1;
	$set(this, xrMgr, xrMgr);
	$set(this, con, $nc(xrMgr)->getBackend());
	initBlitMask(parentDrawable, XRMaskImage::BLIT_MASK_SIZE, XRMaskImage::BLIT_MASK_SIZE);
}

int32_t XRMaskImage::prepareBlitMask($XRSurfaceData* dst, $AffineTransform* maskTX, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	int32_t maskWidth = $Math::max($div(width, XRMaskImage::MASK_SCALE_FACTOR), 1);
	int32_t maskHeight = $Math::max($div(height, XRMaskImage::MASK_SCALE_FACTOR), 1);
	$nc(maskTX)->scale(((double)width) / maskWidth, ((double)height) / maskHeight);
	try {
		maskTX->invert();
	} catch ($NoninvertibleTransformException& ex) {
		maskTX->setToIdentity();
	}
	ensureBlitMaskSize(maskWidth, maskHeight);
	if (this->lastMaskTransform == nullptr || !$nc(this->lastMaskTransform)->equals(maskTX)) {
		$nc(this->con)->setPictureTransform(this->blitMaskPicture, maskTX);
		$set(this, lastMaskTransform, maskTX);
	}
	int32_t currentEA = $nc($($nc(this->xrMgr)->getAlphaColor()))->getAlpha();
	if (this->lastMaskWidth != maskWidth || this->lastMaskHeight != maskHeight || this->lastEA != currentEA) {
		if (this->lastMaskWidth > maskWidth || this->lastMaskHeight > maskHeight) {
			$nc(this->con)->renderRectangle(this->blitMaskPicture, $XRUtils::PictOpClear, $XRColor::NO_ALPHA, 0, 0, this->lastMaskWidth, this->lastMaskHeight);
		}
		$nc(this->con)->renderRectangle(this->blitMaskPicture, $XRUtils::PictOpSrc, $($nc(this->xrMgr)->getAlphaColor()), 0, 0, maskWidth, maskHeight);
		this->lastEA = currentEA;
	}
	this->lastMaskWidth = maskWidth;
	this->lastMaskHeight = maskHeight;
	return this->blitMaskPicture;
}

void XRMaskImage::initBlitMask(int32_t parentDrawable, int32_t width, int32_t height) {
	int32_t newPM = $nc(this->con)->createPixmap(parentDrawable, 8, width, height);
	int32_t newPict = $nc(this->con)->createPicture(newPM, $XRUtils::PictStandardA8);
	if (this->blitMaskPixmap != 0) {
		$nc(this->con)->freePixmap(this->blitMaskPixmap);
		$nc(this->con)->freePicture(this->blitMaskPicture);
	}
	this->blitMaskPixmap = newPM;
	this->blitMaskPicture = newPict;
	$init($XRColor);
	$nc(this->con)->renderRectangle(this->blitMaskPicture, $XRUtils::PictOpClear, $XRColor::NO_ALPHA, 0, 0, width, height);
	$nc(this->blitMaskDimensions)->width = width;
	$nc(this->blitMaskDimensions)->height = height;
	this->lastMaskWidth = 0;
	this->lastMaskHeight = 0;
	$set(this, lastMaskTransform, nullptr);
}

void XRMaskImage::ensureBlitMaskSize(int32_t minSizeX, int32_t minSizeY) {
	if (minSizeX > $nc(this->blitMaskDimensions)->width || minSizeY > $nc(this->blitMaskDimensions)->height) {
		int32_t newWidth = $Math::max(minSizeX, $nc(this->blitMaskDimensions)->width);
		int32_t newHeight = $Math::max(minSizeY, $nc(this->blitMaskDimensions)->height);
		initBlitMask(this->blitMaskPixmap, newWidth, newHeight);
	}
}

XRMaskImage::XRMaskImage() {
}

$Class* XRMaskImage::load$($String* name, bool initialize) {
	$loadClass(XRMaskImage, name, initialize, &_XRMaskImage_ClassInfo_, allocate$XRMaskImage);
	return class$;
}

$Class* XRMaskImage::class$ = nullptr;

		} // xr
	} // java2d
} // sun