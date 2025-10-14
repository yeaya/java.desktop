#include <sun/java2d/windows/GDIWindowSurfaceData.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Rectangle.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/SunHints.h>
#include <sun/awt/Win32GraphicsConfig.h>
#include <sun/awt/Win32GraphicsDevice.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/ScreenUpdateManager.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/SurfaceDataProxy.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FontInfo.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/RenderLoops.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/XORComposite.h>
#include <sun/java2d/pipe/DrawImagePipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/PixelFillPipe.h>
#include <sun/java2d/pipe/PixelToShapeConverter.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <sun/java2d/pipe/TextPipe.h>
#include <sun/java2d/windows/GDIBlitLoops.h>
#include <sun/java2d/windows/GDIRenderer.h>
#include <sun/java2d/windows/WindowsFlags.h>
#include <jcpp.h>

#undef CLIP_SHAPE
#undef COMP_ISCOPY
#undef COMP_XOR
#undef DESC_GDI
#undef INTVAL_ANTIALIAS_ON
#undef INTVAL_TEXT_ANTIALIAS_DEFAULT
#undef INTVAL_TEXT_ANTIALIAS_LCD_HRGB
#undef INTVAL_TEXT_ANTIALIAS_LCD_VRGB
#undef INTVAL_TEXT_ANTIALIAS_OFF
#undef INTVAL_TEXT_ANTIALIAS_ON
#undef PAINT_ALPHACOLOR
#undef STROKE_THIN
#undef TRANSFORM_TRANSLATESCALE
#undef TYPE_GRAY
#undef UNCACHED

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Rectangle = ::java::awt::Rectangle;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;
using $Win32GraphicsConfig = ::sun::awt::Win32GraphicsConfig;
using $Win32GraphicsDevice = ::sun::awt::Win32GraphicsDevice;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $ScreenUpdateManager = ::sun::java2d::ScreenUpdateManager;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceDataProxy = ::sun::java2d::SurfaceDataProxy;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FontInfo = ::sun::java2d::loops::FontInfo;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $RenderLoops = ::sun::java2d::loops::RenderLoops;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $XORComposite = ::sun::java2d::loops::XORComposite;
using $DrawImagePipe = ::sun::java2d::pipe::DrawImagePipe;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;
using $PixelFillPipe = ::sun::java2d::pipe::PixelFillPipe;
using $PixelToShapeConverter = ::sun::java2d::pipe::PixelToShapeConverter;
using $Region = ::sun::java2d::pipe::Region;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;
using $TextPipe = ::sun::java2d::pipe::TextPipe;
using $GDIBlitLoops = ::sun::java2d::windows::GDIBlitLoops;
using $GDIRenderer = ::sun::java2d::windows::GDIRenderer;
using $WindowsFlags = ::sun::java2d::windows::WindowsFlags;

namespace sun {
	namespace java2d {
		namespace windows {

$FieldInfo _GDIWindowSurfaceData_FieldInfo_[] = {
	{"peer", "Lsun/awt/windows/WComponentPeer;", nullptr, $PRIVATE, $field(GDIWindowSurfaceData, peer)},
	{"graphicsConfig", "Lsun/awt/Win32GraphicsConfig;", nullptr, $PRIVATE, $field(GDIWindowSurfaceData, graphicsConfig)},
	{"solidloops", "Lsun/java2d/loops/RenderLoops;", nullptr, $PRIVATE, $field(GDIWindowSurfaceData, solidloops)},
	{"DESC_GDI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GDIWindowSurfaceData, DESC_GDI)},
	{"AnyGdi", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GDIWindowSurfaceData, AnyGdi)},
	{"IntRgbGdi", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GDIWindowSurfaceData, IntRgbGdi)},
	{"Ushort565RgbGdi", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GDIWindowSurfaceData, Ushort565RgbGdi)},
	{"Ushort555RgbGdi", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GDIWindowSurfaceData, Ushort555RgbGdi)},
	{"ThreeByteBgrGdi", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GDIWindowSurfaceData, ThreeByteBgrGdi)},
	{"scaleX", "D", nullptr, $PRIVATE | $FINAL, $field(GDIWindowSurfaceData, scaleX)},
	{"scaleY", "D", nullptr, $PRIVATE | $FINAL, $field(GDIWindowSurfaceData, scaleY)},
	{"gdiPipe", "Lsun/java2d/windows/GDIRenderer;", nullptr, $PROTECTED | $STATIC, $staticField(GDIWindowSurfaceData, gdiPipe)},
	{"gdiTxPipe", "Lsun/java2d/pipe/PixelToShapeConverter;", nullptr, $PROTECTED | $STATIC, $staticField(GDIWindowSurfaceData, gdiTxPipe)},
	{}
};

$MethodInfo _GDIWindowSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WComponentPeer;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PRIVATE, $method(static_cast<void(GDIWindowSurfaceData::*)($WComponentPeer*,$SurfaceType*)>(&GDIWindowSurfaceData::init$))},
	{"copyArea", "(Lsun/java2d/SunGraphics2D;IIIIII)Z", nullptr, $PUBLIC},
	{"createData", "(Lsun/awt/windows/WComponentPeer;)Lsun/java2d/windows/GDIWindowSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GDIWindowSurfaceData*(*)($WComponentPeer*)>(&GDIWindowSurfaceData::createData))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getDefaultScaleX", "()D", nullptr, $PUBLIC},
	{"getDefaultScaleY", "()D", nullptr, $PUBLIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getPeer", "()Lsun/awt/windows/WComponentPeer;", nullptr, $PUBLIC},
	{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getRenderLoops", "(Lsun/java2d/SunGraphics2D;)Lsun/java2d/loops/RenderLoops;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"getSurfaceType", "(Ljava/awt/image/ColorModel;)Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceType*(*)($ColorModel*)>(&GDIWindowSurfaceData::getSurfaceType))},
	{"initIDs", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($Class*)>(&GDIWindowSurfaceData::initIDs))},
	{"initOps", "(Lsun/awt/windows/WComponentPeer;IIIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GDIWindowSurfaceData::*)($WComponentPeer*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&GDIWindowSurfaceData::initOps))},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"invalidateSD", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GDIWindowSurfaceData::*)()>(&GDIWindowSurfaceData::invalidateSD))},
	{"makeProxyFor", "(Lsun/java2d/SurfaceData;)Lsun/java2d/SurfaceDataProxy;", nullptr, $PUBLIC},
	{"validatePipe", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 13
#define _METHOD_INDEX_initOps 14
#define _METHOD_INDEX_invalidateSD 16

$ClassInfo _GDIWindowSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.windows.GDIWindowSurfaceData",
	"sun.java2d.SurfaceData",
	nullptr,
	_GDIWindowSurfaceData_FieldInfo_,
	_GDIWindowSurfaceData_MethodInfo_
};

$Object* allocate$GDIWindowSurfaceData($Class* clazz) {
	return $of($alloc(GDIWindowSurfaceData));
}

$String* GDIWindowSurfaceData::DESC_GDI = nullptr;
$SurfaceType* GDIWindowSurfaceData::AnyGdi = nullptr;
$SurfaceType* GDIWindowSurfaceData::IntRgbGdi = nullptr;
$SurfaceType* GDIWindowSurfaceData::Ushort565RgbGdi = nullptr;
$SurfaceType* GDIWindowSurfaceData::Ushort555RgbGdi = nullptr;
$SurfaceType* GDIWindowSurfaceData::ThreeByteBgrGdi = nullptr;
$GDIRenderer* GDIWindowSurfaceData::gdiPipe = nullptr;
$PixelToShapeConverter* GDIWindowSurfaceData::gdiTxPipe = nullptr;

void GDIWindowSurfaceData::initIDs($Class* xorComp) {
	$init(GDIWindowSurfaceData);
	$prepareNativeStatic(GDIWindowSurfaceData, initIDs, void, $Class* xorComp);
	$invokeNativeStatic(GDIWindowSurfaceData, initIDs, xorComp);
	$finishNativeStatic();
}

$SurfaceType* GDIWindowSurfaceData::getSurfaceType($ColorModel* cm) {
	$init(GDIWindowSurfaceData);
	switch ($nc(cm)->getPixelSize()) {
	case 32:
		{}
	case 24:
		{
			if ($instanceOf($DirectColorModel, cm)) {
				if ($nc(($cast($DirectColorModel, cm)))->getRedMask() == 0x00FF0000) {
					return GDIWindowSurfaceData::IntRgbGdi;
				} else {
					$init($SurfaceType);
					return $SurfaceType::IntRgbx;
				}
			} else {
				return GDIWindowSurfaceData::ThreeByteBgrGdi;
			}
		}
	case 15:
		{
			return GDIWindowSurfaceData::Ushort555RgbGdi;
		}
	case 16:
		{
			if (($instanceOf($DirectColorModel, cm)) && ($nc(($cast($DirectColorModel, cm)))->getBlueMask() == 62)) {
				$init($SurfaceType);
				return $SurfaceType::Ushort555Rgbx;
			} else {
				return GDIWindowSurfaceData::Ushort565RgbGdi;
			}
		}
	case 8:
		{
			if ($nc($(cm->getColorSpace()))->getType() == $ColorSpace::TYPE_GRAY && $instanceOf($ComponentColorModel, cm)) {
				$init($SurfaceType);
				return $SurfaceType::ByteGray;
			} else if ($instanceOf($IndexColorModel, cm) && isOpaqueGray($cast($IndexColorModel, cm))) {
				$init($SurfaceType);
				return $SurfaceType::Index8Gray;
			} else {
				$init($SurfaceType);
				return $SurfaceType::ByteIndexedOpaque;
			}
		}
	default:
		{
			$throwNew($InvalidPipeException, $$str({"Unsupported bit depth: "_s, $$str(cm->getPixelSize())}));
		}
	}
}

GDIWindowSurfaceData* GDIWindowSurfaceData::createData($WComponentPeer* peer) {
	$init(GDIWindowSurfaceData);
	$var($SurfaceType, sType, getSurfaceType($($nc(peer)->getDeviceColorModel())));
	return $new(GDIWindowSurfaceData, peer, sType);
}

$SurfaceDataProxy* GDIWindowSurfaceData::makeProxyFor($SurfaceData* srcData) {
	$init($SurfaceDataProxy);
	return $SurfaceDataProxy::UNCACHED;
}

$Raster* GDIWindowSurfaceData::getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	$throwNew($InternalError, "not implemented yet"_s);
	$shouldNotReachHere();
}

void GDIWindowSurfaceData::validatePipe($SunGraphics2D* sg2d) {
	if ($nc(sg2d)->antialiasHint != $SunHints::INTVAL_ANTIALIAS_ON && sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR && (sg2d->compositeState <= $SunGraphics2D::COMP_ISCOPY || $nc(sg2d)->compositeState == $SunGraphics2D::COMP_XOR)) {
		if (sg2d->clipState == $SunGraphics2D::CLIP_SHAPE) {
			$SurfaceData::validatePipe(sg2d);
		} else {
			switch (sg2d->textAntialiasHint) {
			case $SunHints::INTVAL_TEXT_ANTIALIAS_DEFAULT:
				{}
			case $SunHints::INTVAL_TEXT_ANTIALIAS_OFF:
				{
					$init($SurfaceData);
					$set(sg2d, textpipe, $SurfaceData::solidTextRenderer);
					break;
				}
			case $SunHints::INTVAL_TEXT_ANTIALIAS_ON:
				{
					$init($SurfaceData);
					$set(sg2d, textpipe, $SurfaceData::aaTextRenderer);
					break;
				}
			default:
				{
					switch ($nc($(sg2d->getFontInfo()))->aaHint) {
					case $SunHints::INTVAL_TEXT_ANTIALIAS_LCD_HRGB:
						{}
					case $SunHints::INTVAL_TEXT_ANTIALIAS_LCD_VRGB:
						{
							$init($SurfaceData);
							$set(sg2d, textpipe, $SurfaceData::lcdTextRenderer);
							break;
						}
					case $SunHints::INTVAL_TEXT_ANTIALIAS_ON:
						{
							$init($SurfaceData);
							$set(sg2d, textpipe, $SurfaceData::aaTextRenderer);
							break;
						}
					default:
						{
							$init($SurfaceData);
							$set(sg2d, textpipe, $SurfaceData::solidTextRenderer);
						}
					}
				}
			}
		}
		$init($SurfaceData);
		$set(sg2d, imagepipe, $SurfaceData::imagepipe);
		if (sg2d->transformState >= $SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
			$set(sg2d, drawpipe, GDIWindowSurfaceData::gdiTxPipe);
			$set(sg2d, fillpipe, GDIWindowSurfaceData::gdiTxPipe);
		} else if (sg2d->strokeState != $SunGraphics2D::STROKE_THIN) {
			$set(sg2d, drawpipe, GDIWindowSurfaceData::gdiTxPipe);
			$set(sg2d, fillpipe, GDIWindowSurfaceData::gdiPipe);
		} else {
			$set(sg2d, drawpipe, GDIWindowSurfaceData::gdiPipe);
			$set(sg2d, fillpipe, GDIWindowSurfaceData::gdiPipe);
		}
		$set(sg2d, shapepipe, GDIWindowSurfaceData::gdiPipe);
		if (sg2d->loops == nullptr) {
			$set(sg2d, loops, getRenderLoops(sg2d));
		}
	} else {
		$SurfaceData::validatePipe(sg2d);
	}
}

$RenderLoops* GDIWindowSurfaceData::getRenderLoops($SunGraphics2D* sg2d) {
	if ($nc(sg2d)->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR && sg2d->compositeState <= $SunGraphics2D::COMP_ISCOPY) {
		return this->solidloops;
	}
	return $SurfaceData::getRenderLoops(sg2d);
}

$GraphicsConfiguration* GDIWindowSurfaceData::getDeviceConfiguration() {
	return this->graphicsConfig;
}

void GDIWindowSurfaceData::initOps($WComponentPeer* peer, int32_t depth, int32_t redMask, int32_t greenMask, int32_t blueMask, int32_t screen) {
	$prepareNative(GDIWindowSurfaceData, initOps, void, $WComponentPeer* peer, int32_t depth, int32_t redMask, int32_t greenMask, int32_t blueMask, int32_t screen);
	$invokeNative(GDIWindowSurfaceData, initOps, peer, depth, redMask, greenMask, blueMask, screen);
	$finishNative();
}

void GDIWindowSurfaceData::init$($WComponentPeer* peer, $SurfaceType* sType) {
	$SurfaceData::init$(sType, $($nc(peer)->getDeviceColorModel()));
	$var($ColorModel, cm, $nc(peer)->getDeviceColorModel());
	$set(this, peer, peer);
	int32_t rMask = 0;
	int32_t gMask = 0;
	int32_t bMask = 0;
	int32_t depth = 0;
	switch ($nc(cm)->getPixelSize()) {
	case 32:
		{}
	case 24:
		{
			if ($instanceOf($DirectColorModel, cm)) {
				depth = 32;
			} else {
				depth = 24;
			}
			break;
		}
	default:
		{
			depth = cm->getPixelSize();
		}
	}
	if ($instanceOf($DirectColorModel, cm)) {
		$var($DirectColorModel, dcm, $cast($DirectColorModel, cm));
		rMask = dcm->getRedMask();
		gMask = dcm->getGreenMask();
		bMask = dcm->getBlueMask();
	}
	$set(this, graphicsConfig, $cast($Win32GraphicsConfig, peer->getGraphicsConfiguration()));
	$set(this, solidloops, $nc(this->graphicsConfig)->getSolidLoops(sType));
	$var($Win32GraphicsDevice, gd, $cast($Win32GraphicsDevice, $nc(this->graphicsConfig)->getDevice()));
	this->scaleX = $nc(gd)->getDefaultScaleX();
	this->scaleY = gd->getDefaultScaleY();
	initOps(peer, depth, rMask, gMask, bMask, gd->getScreen());
	setBlitProxyKey($($nc(this->graphicsConfig)->getProxyKey()));
}

double GDIWindowSurfaceData::getDefaultScaleX() {
	return this->scaleX;
}

double GDIWindowSurfaceData::getDefaultScaleY() {
	return this->scaleY;
}

$SurfaceData* GDIWindowSurfaceData::getReplacement() {
	$var($ScreenUpdateManager, mgr, $ScreenUpdateManager::getInstance());
	return $nc(mgr)->getReplacementScreenSurface(this->peer, this);
}

$Rectangle* GDIWindowSurfaceData::getBounds() {
	$var($Rectangle, r, $nc(this->peer)->getBounds());
	$nc(r)->x = (r->y = 0);
	r->width = $Region::clipRound(r->width * this->scaleX);
	r->height = $Region::clipRound(r->height * this->scaleY);
	return r;
}

bool GDIWindowSurfaceData::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	$var($CompositeType, comptype, $nc(sg2d)->imageComp);
	bool var$0 = sg2d->clipState != $SunGraphics2D::CLIP_SHAPE;
	if (var$0) {
		$init($CompositeType);
		bool var$1 = $nc($CompositeType::SrcOverNoEa)->equals(comptype);
		var$0 = (var$1 || $nc($CompositeType::SrcNoEa)->equals(comptype));
	}
	if (var$0) {
		int32_t dstx1 = x + dx;
		int32_t dsty1 = y + dy;
		int32_t dstx2 = dstx1 + w;
		int32_t dsty2 = dsty1 + h;
		$var($Region, clip, sg2d->getCompClip());
		if (dstx1 < $nc(clip)->getLoX()) {
			dstx1 = clip->getLoX();
		}
		if (dsty1 < $nc(clip)->getLoY()) {
			dsty1 = clip->getLoY();
		}
		if (dstx2 > $nc(clip)->getHiX()) {
			dstx2 = clip->getHiX();
		}
		if (dsty2 > $nc(clip)->getHiY()) {
			dsty2 = clip->getHiY();
		}
		if (dstx1 < dstx2 && dsty1 < dsty2) {
			$nc(GDIWindowSurfaceData::gdiPipe)->devCopyArea(this, dstx1 - dx, dsty1 - dy, dx, dy, dstx2 - dstx1, dsty2 - dsty1);
		}
		return true;
	}
	return false;
}

void GDIWindowSurfaceData::invalidateSD() {
	$prepareNative(GDIWindowSurfaceData, invalidateSD, void);
	$invokeNative(GDIWindowSurfaceData, invalidateSD);
	$finishNative();
}

void GDIWindowSurfaceData::invalidate() {
	if (isValid()) {
		invalidateSD();
		$SurfaceData::invalidate();
	}
}

$Object* GDIWindowSurfaceData::getDestination() {
	return $of($nc(this->peer)->getTarget());
}

$WComponentPeer* GDIWindowSurfaceData::getPeer() {
	return this->peer;
}

void clinit$GDIWindowSurfaceData($Class* class$) {
	$assignStatic(GDIWindowSurfaceData::DESC_GDI, "GDI"_s);
	$init($SurfaceType);
	$assignStatic(GDIWindowSurfaceData::AnyGdi, $nc($SurfaceType::IntRgb)->deriveSubType(GDIWindowSurfaceData::DESC_GDI));
	$assignStatic(GDIWindowSurfaceData::IntRgbGdi, $nc($SurfaceType::IntRgb)->deriveSubType(GDIWindowSurfaceData::DESC_GDI));
	$assignStatic(GDIWindowSurfaceData::Ushort565RgbGdi, $nc($SurfaceType::Ushort565Rgb)->deriveSubType(GDIWindowSurfaceData::DESC_GDI));
	$assignStatic(GDIWindowSurfaceData::Ushort555RgbGdi, $nc($SurfaceType::Ushort555Rgb)->deriveSubType(GDIWindowSurfaceData::DESC_GDI));
	$assignStatic(GDIWindowSurfaceData::ThreeByteBgrGdi, $nc($SurfaceType::ThreeByteBgr)->deriveSubType(GDIWindowSurfaceData::DESC_GDI));
	{
		$load($XORComposite);
		GDIWindowSurfaceData::initIDs($XORComposite::class$);
		if ($WindowsFlags::isGdiBlitEnabled()) {
			$GDIBlitLoops::register$();
		}
	}
	{
		$assignStatic(GDIWindowSurfaceData::gdiPipe, $new($GDIRenderer));
		if ($GraphicsPrimitive::tracingEnabled()) {
			$assignStatic(GDIWindowSurfaceData::gdiPipe, $nc(GDIWindowSurfaceData::gdiPipe)->traceWrap());
		}
		$assignStatic(GDIWindowSurfaceData::gdiTxPipe, $new($PixelToShapeConverter, GDIWindowSurfaceData::gdiPipe));
	}
}

GDIWindowSurfaceData::GDIWindowSurfaceData() {
}

$Class* GDIWindowSurfaceData::load$($String* name, bool initialize) {
	$loadClass(GDIWindowSurfaceData, name, initialize, &_GDIWindowSurfaceData_ClassInfo_, clinit$GDIWindowSurfaceData, allocate$GDIWindowSurfaceData);
	return class$;
}

$Class* GDIWindowSurfaceData::class$ = nullptr;

		} // windows
	} // java2d
} // sun