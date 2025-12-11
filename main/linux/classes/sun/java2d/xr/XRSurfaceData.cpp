#include <sun/java2d/xr/XRSurfaceData.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/lang/InternalError.h>
#include <sun/awt/SunHints.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/awt/image/PixelConverter$ArgbPre.h>
#include <sun/awt/image/PixelConverter.h>
#include <sun/font/FontManagerNativeLibrary.h>
#include <sun/font/XRTextRenderer.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/SurfaceDataProxy.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/MaskFill.h>
#include <sun/java2d/loops/RenderLoops.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/XORComposite.h>
#include <sun/java2d/pipe/DrawImage.h>
#include <sun/java2d/pipe/DrawImagePipe.h>
#include <sun/java2d/pipe/GlyphListPipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/PixelFillPipe.h>
#include <sun/java2d/pipe/PixelToShapeConverter.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <sun/java2d/pipe/TextPipe.h>
#include <sun/java2d/x11/XSurfaceData.h>
#include <sun/java2d/xr/MaskTileManager.h>
#include <sun/java2d/xr/XRBackend.h>
#include <sun/java2d/xr/XRCompositeManager.h>
#include <sun/java2d/xr/XRDrawImage.h>
#include <sun/java2d/xr/XRGraphicsConfig.h>
#include <sun/java2d/xr/XRMaskBlit.h>
#include <sun/java2d/xr/XRMaskFill.h>
#include <sun/java2d/xr/XRPMBlitLoops.h>
#include <sun/java2d/xr/XRPaints.h>
#include <sun/java2d/xr/XRRenderer.h>
#include <sun/java2d/xr/XRSurfaceData$XRPixmapSurfaceData.h>
#include <sun/java2d/xr/XRSurfaceData$XRWindowSurfaceData.h>
#include <sun/java2d/xr/XRSurfaceDataProxy.h>
#include <sun/java2d/xr/XRUtils.h>
#include <jcpp.h>

#undef BITMASK
#undef COMP_ALPHA
#undef COMP_XOR
#undef DESC_BYTE_A8_X11
#undef DESC_INT_ARGB_X11
#undef DESC_INT_RGB_X11
#undef FAST
#undef INTVAL_ANTIALIAS_ON
#undef OPAQUE
#undef PAINT_ALPHACOLOR
#undef SRC
#undef STROKE_THIN
#undef TRANSFORM_TRANSLATESCALE
#undef TRANSLUCENT

using $AlphaComposite = ::java::awt::AlphaComposite;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ColorModel = ::java::awt::image::ColorModel;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $Raster = ::java::awt::image::Raster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;
using $SunToolkit = ::sun::awt::SunToolkit;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $PixelConverter$ArgbPre = ::sun::awt::image::PixelConverter$ArgbPre;
using $FontManagerNativeLibrary = ::sun::font::FontManagerNativeLibrary;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceDataProxy = ::sun::java2d::SurfaceDataProxy;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $MaskFill = ::sun::java2d::loops::MaskFill;
using $RenderLoops = ::sun::java2d::loops::RenderLoops;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $XORComposite = ::sun::java2d::loops::XORComposite;
using $DrawImage = ::sun::java2d::pipe::DrawImage;
using $DrawImagePipe = ::sun::java2d::pipe::DrawImagePipe;
using $GlyphListPipe = ::sun::java2d::pipe::GlyphListPipe;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;
using $PixelFillPipe = ::sun::java2d::pipe::PixelFillPipe;
using $PixelToShapeConverter = ::sun::java2d::pipe::PixelToShapeConverter;
using $Region = ::sun::java2d::pipe::Region;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;
using $TextPipe = ::sun::java2d::pipe::TextPipe;
using $XSurfaceData = ::sun::java2d::x11::XSurfaceData;
using $XRBackend = ::sun::java2d::xr::XRBackend;
using $XRCompositeManager = ::sun::java2d::xr::XRCompositeManager;
using $XRDrawImage = ::sun::java2d::xr::XRDrawImage;
using $XRGraphicsConfig = ::sun::java2d::xr::XRGraphicsConfig;
using $XRMaskBlit = ::sun::java2d::xr::XRMaskBlit;
using $XRMaskFill = ::sun::java2d::xr::XRMaskFill;
using $XRPMBlitLoops = ::sun::java2d::xr::XRPMBlitLoops;
using $XRPaints = ::sun::java2d::xr::XRPaints;
using $XRRenderer = ::sun::java2d::xr::XRRenderer;
using $XRSurfaceData$XRPixmapSurfaceData = ::sun::java2d::xr::XRSurfaceData$XRPixmapSurfaceData;
using $XRSurfaceData$XRWindowSurfaceData = ::sun::java2d::xr::XRSurfaceData$XRWindowSurfaceData;
using $XRSurfaceDataProxy = ::sun::java2d::xr::XRSurfaceDataProxy;
using $XRUtils = ::sun::java2d::xr::XRUtils;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XRSurfaceData_FieldInfo_[] = {
	{"peer", "Lsun/awt/X11ComponentPeer;", nullptr, 0, $field(XRSurfaceData, peer)},
	{"graphicsConfig", "Lsun/java2d/xr/XRGraphicsConfig;", nullptr, 0, $field(XRSurfaceData, graphicsConfig)},
	{"renderQueue", "Lsun/java2d/xr/XRBackend;", nullptr, 0, $field(XRSurfaceData, renderQueue)},
	{"solidloops", "Lsun/java2d/loops/RenderLoops;", nullptr, $PRIVATE, $field(XRSurfaceData, solidloops)},
	{"depth", "I", nullptr, $PROTECTED, $field(XRSurfaceData, depth)},
	{"DESC_BYTE_A8_X11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XRSurfaceData, DESC_BYTE_A8_X11)},
	{"DESC_INT_RGB_X11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XRSurfaceData, DESC_INT_RGB_X11)},
	{"DESC_INT_ARGB_X11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XRSurfaceData, DESC_INT_ARGB_X11)},
	{"ByteA8X11", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XRSurfaceData, ByteA8X11)},
	{"IntRgbX11", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XRSurfaceData, IntRgbX11)},
	{"IntArgbPreX11", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XRSurfaceData, IntArgbPreX11)},
	{"xrpipe", "Lsun/java2d/xr/XRRenderer;", nullptr, $PROTECTED, $field(XRSurfaceData, xrpipe)},
	{"xrtxpipe", "Lsun/java2d/pipe/PixelToShapeConverter;", nullptr, $PROTECTED, $field(XRSurfaceData, xrtxpipe)},
	{"xrtextpipe", "Lsun/java2d/pipe/TextPipe;", nullptr, $PROTECTED, $field(XRSurfaceData, xrtextpipe)},
	{"xrDrawImage", "Lsun/java2d/xr/XRDrawImage;", nullptr, $PROTECTED, $field(XRSurfaceData, xrDrawImage)},
	{"aaShapePipe", "Lsun/java2d/pipe/ShapeDrawPipe;", nullptr, $PROTECTED, $field(XRSurfaceData, aaShapePipe)},
	{"aaPixelToShapeConv", "Lsun/java2d/pipe/PixelToShapeConverter;", nullptr, $PROTECTED, $field(XRSurfaceData, aaPixelToShapeConv)},
	{"xgc", "J", nullptr, $PRIVATE, $field(XRSurfaceData, xgc)},
	{"validatedGCForegroundPixel", "I", nullptr, $PRIVATE, $field(XRSurfaceData, validatedGCForegroundPixel)},
	{"validatedXorComp", "Lsun/java2d/loops/XORComposite;", nullptr, $PRIVATE, $field(XRSurfaceData, validatedXorComp)},
	{"xid", "I", nullptr, $PRIVATE, $field(XRSurfaceData, xid)},
	{"picture", "I", nullptr, $PUBLIC, $field(XRSurfaceData, picture)},
	{"maskBuffer", "Lsun/java2d/xr/XRCompositeManager;", nullptr, $PUBLIC, $field(XRSurfaceData, maskBuffer)},
	{"validatedClip", "Lsun/java2d/pipe/Region;", nullptr, $PRIVATE, $field(XRSurfaceData, validatedClip)},
	{"validatedGCClip", "Lsun/java2d/pipe/Region;", nullptr, $PRIVATE, $field(XRSurfaceData, validatedGCClip)},
	{"validatedExposures", "Z", nullptr, $PRIVATE, $field(XRSurfaceData, validatedExposures)},
	{"transformInUse", "Z", nullptr, 0, $field(XRSurfaceData, transformInUse)},
	{"validatedSourceTransform", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(XRSurfaceData, validatedSourceTransform)},
	{"staticSrcTx", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(XRSurfaceData, staticSrcTx)},
	{"validatedRepeat", "I", nullptr, 0, $field(XRSurfaceData, validatedRepeat)},
	{"validatedFilter", "I", nullptr, 0, $field(XRSurfaceData, validatedFilter)},
	{}
};

$MethodInfo _XRSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11ComponentPeer;Lsun/java2d/xr/XRGraphicsConfig;Lsun/java2d/loops/SurfaceType;Ljava/awt/image/ColorModel;II)V", nullptr, $PROTECTED, $method(static_cast<void(XRSurfaceData::*)($X11ComponentPeer*,$XRGraphicsConfig*,$SurfaceType*,$ColorModel*,int32_t,int32_t)>(&XRSurfaceData::init$))},
	{"<init>", "(Lsun/java2d/xr/XRBackend;)V", nullptr, $PROTECTED, $method(static_cast<void(XRSurfaceData::*)($XRBackend*)>(&XRSurfaceData::init$))},
	{"XRInitSurface", "(IIIJI)V", nullptr, $PROTECTED | $NATIVE},
	{"canSourceSendExposures", "(IIII)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"copyArea", "(Lsun/java2d/SunGraphics2D;IIIIII)Z", nullptr, $PUBLIC},
	{"createData", "(Lsun/awt/X11ComponentPeer;)Lsun/java2d/xr/XRSurfaceData$XRWindowSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$XRSurfaceData$XRWindowSurfaceData*(*)($X11ComponentPeer*)>(&XRSurfaceData::createData))},
	{"createData", "(Lsun/java2d/xr/XRGraphicsConfig;IILjava/awt/image/ColorModel;Ljava/awt/Image;JIZ)Lsun/java2d/xr/XRSurfaceData$XRPixmapSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$XRSurfaceData$XRPixmapSurfaceData*(*)($XRGraphicsConfig*,int32_t,int32_t,$ColorModel*,$Image*,int64_t,int32_t,bool)>(&XRSurfaceData::createData))},
	{"freeXSDOPicture", "(J)V", nullptr, $NATIVE},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getGC", "(Lsun/awt/X11ComponentPeer;)Lsun/java2d/xr/XRGraphicsConfig;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$XRGraphicsConfig*(*)($X11ComponentPeer*)>(&XRSurfaceData::getGC))},
	{"getGC", "()J", nullptr, $PUBLIC},
	{"getGraphicsConfig", "()Lsun/java2d/xr/XRGraphicsConfig;", nullptr, $PUBLIC},
	{"getMaskFill", "(Lsun/java2d/SunGraphics2D;)Lsun/java2d/loops/MaskFill;", nullptr, $PROTECTED},
	{"getPicture", "()I", nullptr, $PUBLIC},
	{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getRenderLoops", "(Lsun/java2d/SunGraphics2D;)Lsun/java2d/loops/RenderLoops;", nullptr, $PUBLIC},
	{"getSurfaceType", "(Lsun/java2d/xr/XRGraphicsConfig;I)Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceType*(*)($XRGraphicsConfig*,int32_t)>(&XRSurfaceData::getSurfaceType))},
	{"getTextPipe", "(Lsun/java2d/SunGraphics2D;)Lsun/java2d/pipe/TextPipe;", nullptr, $PROTECTED},
	{"getXid", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&XRSurfaceData::initIDs))},
	{"initXRPicture", "(JI)V", nullptr, $NATIVE},
	{"initXRSurfaceData", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&XRSurfaceData::initXRSurfaceData))},
	{"initXRender", "(I)V", nullptr, $PUBLIC},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"isXRDrawableValid", "()Z", nullptr, $PROTECTED},
	{"makePipes", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"makeProxyFor", "(Lsun/java2d/SurfaceData;)Lsun/java2d/SurfaceDataProxy;", nullptr, $PUBLIC},
	{"setStaticSrcTx", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{"validateAsDestination", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"validateAsSource", "(Ljava/awt/geom/AffineTransform;II)V", nullptr, 0},
	{"validateCopyAreaGC", "(Lsun/java2d/pipe/Region;Z)V", nullptr, $PUBLIC},
	{"validatePipe", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_XRInitSurface 2
#define _METHOD_INDEX_freeXSDOPicture 7
#define _METHOD_INDEX_initIDs 19
#define _METHOD_INDEX_initXRPicture 20

$InnerClassInfo _XRSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.xr.XRSurfaceData$LazyPipe", "sun.java2d.xr.XRSurfaceData", "LazyPipe", $PUBLIC | $STATIC},
	{"sun.java2d.xr.XRSurfaceData$XRPixmapSurfaceData", "sun.java2d.xr.XRSurfaceData", "XRPixmapSurfaceData", $PUBLIC | $STATIC},
	{"sun.java2d.xr.XRSurfaceData$XRInternalSurfaceData", "sun.java2d.xr.XRSurfaceData", "XRInternalSurfaceData", $PUBLIC | $STATIC},
	{"sun.java2d.xr.XRSurfaceData$XRWindowSurfaceData", "sun.java2d.xr.XRSurfaceData", "XRWindowSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XRSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.xr.XRSurfaceData",
	"sun.java2d.x11.XSurfaceData",
	nullptr,
	_XRSurfaceData_FieldInfo_,
	_XRSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_XRSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.xr.XRSurfaceData$LazyPipe,sun.java2d.xr.XRSurfaceData$XRPixmapSurfaceData,sun.java2d.xr.XRSurfaceData$XRInternalSurfaceData,sun.java2d.xr.XRSurfaceData$XRWindowSurfaceData"
};

$Object* allocate$XRSurfaceData($Class* clazz) {
	return $of($alloc(XRSurfaceData));
}

$String* XRSurfaceData::DESC_BYTE_A8_X11 = nullptr;
$String* XRSurfaceData::DESC_INT_RGB_X11 = nullptr;
$String* XRSurfaceData::DESC_INT_ARGB_X11 = nullptr;
$SurfaceType* XRSurfaceData::ByteA8X11 = nullptr;
$SurfaceType* XRSurfaceData::IntRgbX11 = nullptr;
$SurfaceType* XRSurfaceData::IntArgbPreX11 = nullptr;

void XRSurfaceData::initIDs() {
	$init(XRSurfaceData);
	$prepareNativeStatic(XRSurfaceData, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void XRSurfaceData::XRInitSurface(int32_t depth, int32_t width, int32_t height, int64_t drawable, int32_t pictFormat) {
	$prepareNative(XRSurfaceData, XRInitSurface, void, int32_t depth, int32_t width, int32_t height, int64_t drawable, int32_t pictFormat);
	$invokeNative(depth, width, height, drawable, pictFormat);
	$finishNative();
}

void XRSurfaceData::initXRPicture(int64_t xsdo, int32_t pictForm) {
	$prepareNative(XRSurfaceData, initXRPicture, void, int64_t xsdo, int32_t pictForm);
	$invokeNative(xsdo, pictForm);
	$finishNative();
}

void XRSurfaceData::freeXSDOPicture(int64_t xsdo) {
	$prepareNative(XRSurfaceData, freeXSDOPicture, void, int64_t xsdo);
	$invokeNative(xsdo);
	$finishNative();
}

$Raster* XRSurfaceData::getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	$throwNew($InternalError, "not implemented yet"_s);
	$shouldNotReachHere();
}

void XRSurfaceData::initXRSurfaceData() {
	$init(XRSurfaceData);
	if (!isX11SurfaceDataInitialized()) {
		$FontManagerNativeLibrary::load();
		initIDs();
		$XRPMBlitLoops::register$();
		$XRMaskFill::register$();
		$XRMaskBlit::register$();
		setX11SurfaceDataInitialized();
	}
}

bool XRSurfaceData::isXRDrawableValid() {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$SunToolkit::awtLock();
			var$2 = isDrawableValid();
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$SurfaceDataProxy* XRSurfaceData::makeProxyFor($SurfaceData* srcData) {
	return $XRSurfaceDataProxy::createProxy(srcData, this->graphicsConfig);
}

void XRSurfaceData::validatePipe($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($TextPipe, textpipe, nullptr);
	bool validated = false;
	if (($assign(textpipe, getTextPipe(sg2d))) == nullptr) {
		$XSurfaceData::validatePipe(sg2d);
		$assign(textpipe, $nc(sg2d)->textpipe);
		validated = true;
	}
	$var($PixelToShapeConverter, txPipe, nullptr);
	$var($XRRenderer, nonTxPipe, nullptr);
	if ($nc(sg2d)->antialiasHint != $SunHints::INTVAL_ANTIALIAS_ON) {
		if (sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR) {
			if (sg2d->compositeState <= $SunGraphics2D::COMP_XOR) {
				$assign(txPipe, this->xrtxpipe);
				$assign(nonTxPipe, this->xrpipe);
			}
		} else if (sg2d->compositeState <= $SunGraphics2D::COMP_ALPHA) {
			if ($XRPaints::isValid(sg2d)) {
				$assign(txPipe, this->xrtxpipe);
				$assign(nonTxPipe, this->xrpipe);
			}
		}
	}
	if (txPipe != nullptr) {
		if ($nc(sg2d)->transformState >= $SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
			$set(sg2d, drawpipe, txPipe);
			$set(sg2d, fillpipe, txPipe);
		} else if (sg2d->strokeState != $SunGraphics2D::STROKE_THIN) {
			$set(sg2d, drawpipe, txPipe);
			$set(sg2d, fillpipe, nonTxPipe);
		} else {
			$set(sg2d, drawpipe, nonTxPipe);
			$set(sg2d, fillpipe, nonTxPipe);
		}
		$set($nc(sg2d), shapepipe, nonTxPipe);
	} else if (!validated) {
		$XSurfaceData::validatePipe(sg2d);
	}
	$set($nc(sg2d), textpipe, textpipe);
	$set(sg2d, imagepipe, this->xrDrawImage);
}

$TextPipe* XRSurfaceData::getTextPipe($SunGraphics2D* sg2d) {
	bool supportedPaint = $nc(sg2d)->compositeState <= $SunGraphics2D::COMP_ALPHA && (sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR || $nc(sg2d)->composite == nullptr);
	bool supportedCompOp = false;
	if ($instanceOf($AlphaComposite, sg2d->composite)) {
		int32_t compRule = $nc(($cast($AlphaComposite, sg2d->composite)))->getRule();
		supportedCompOp = $XRUtils::isMaskEvaluated($XRUtils::j2dAlphaCompToXR(compRule)) || (compRule == $AlphaComposite::SRC && sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR);
	}
	return (supportedPaint && supportedCompOp) ? this->xrtextpipe : ($TextPipe*)nullptr;
}

$MaskFill* XRSurfaceData::getMaskFill($SunGraphics2D* sg2d) {
	$var($AlphaComposite, aComp, nullptr);
	if ($nc(sg2d)->composite != nullptr && $instanceOf($AlphaComposite, sg2d->composite)) {
		$assign(aComp, $cast($AlphaComposite, sg2d->composite));
	}
	bool supportedPaint = $nc(sg2d)->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR || $XRPaints::isValid(sg2d);
	bool supportedCompOp = false;
	if (aComp != nullptr) {
		int32_t rule = aComp->getRule();
		supportedCompOp = $XRUtils::isMaskEvaluated($XRUtils::j2dAlphaCompToXR(rule));
	}
	return (supportedPaint && supportedCompOp) ? $XSurfaceData::getMaskFill(sg2d) : ($MaskFill*)nullptr;
}

$RenderLoops* XRSurfaceData::getRenderLoops($SunGraphics2D* sg2d) {
	if ($nc(sg2d)->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR && sg2d->compositeState <= $SunGraphics2D::COMP_ALPHA) {
		return this->solidloops;
	}
	return $XSurfaceData::getRenderLoops(sg2d);
}

$GraphicsConfiguration* XRSurfaceData::getDeviceConfiguration() {
	return this->graphicsConfig;
}

$XRSurfaceData$XRWindowSurfaceData* XRSurfaceData::createData($X11ComponentPeer* peer) {
	$init(XRSurfaceData);
	$useLocalCurrentObjectStackCache();
	$var($XRGraphicsConfig, gc, getGC(peer));
	return $new($XRSurfaceData$XRWindowSurfaceData, peer, gc, $($nc(gc)->getSurfaceType()));
}

$XRSurfaceData$XRPixmapSurfaceData* XRSurfaceData::createData($XRGraphicsConfig* gc, int32_t width, int32_t height, $ColorModel* cm$renamed, $Image* image, int64_t drawable, int32_t transparency, bool isTexture) {
	$init(XRSurfaceData);
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, cm, cm$renamed);
	int32_t depth = 0;
	if ($nc($($nc(gc)->getColorModel()))->getPixelSize() == 32) {
		depth = 32;
		transparency = $Transparency::TRANSLUCENT;
	} else {
		depth = transparency > $Transparency::OPAQUE ? 32 : 24;
	}
	if (depth == 24) {
		$assign(cm, $new($DirectColorModel, depth, 0x00FF0000, 0x0000FF00, 255));
	} else {
		$assign(cm, $new($DirectColorModel, depth, 0x00FF0000, 0x0000FF00, 255, (int32_t)0xFF000000));
	}
	$var($XRGraphicsConfig, var$0, gc);
	int32_t var$1 = width;
	int32_t var$2 = height;
	$var($Image, var$3, image);
	$var($SurfaceType, var$4, getSurfaceType(gc, transparency));
	$var($ColorModel, var$5, cm);
	int64_t var$6 = drawable;
	int32_t var$7 = transparency;
	return $new($XRSurfaceData$XRPixmapSurfaceData, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, $XRUtils::getPictureFormatForTransparency(transparency), depth, isTexture);
}

void XRSurfaceData::init$($X11ComponentPeer* peer, $XRGraphicsConfig* gc, $SurfaceType* sType, $ColorModel* cm, int32_t depth, int32_t transparency) {
	$XSurfaceData::init$(sType, cm);
	this->validatedGCForegroundPixel = 0;
	this->validatedExposures = true;
	this->transformInUse = false;
	$set(this, validatedSourceTransform, $new($AffineTransform));
	$set(this, staticSrcTx, nullptr);
	this->validatedRepeat = $XRUtils::RepeatNone;
	this->validatedFilter = $XRUtils::FAST;
	$set(this, peer, peer);
	$set(this, graphicsConfig, gc);
	$set(this, solidloops, $nc(this->graphicsConfig)->getSolidLoops(sType));
	this->depth = depth;
	initOps(peer, this->graphicsConfig, depth);
	setBlitProxyKey($($nc(gc)->getProxyKey()));
}

void XRSurfaceData::init$($XRBackend* renderQueue) {
	$XSurfaceData::init$(XRSurfaceData::IntRgbX11, $$new($DirectColorModel, 24, 0x00FF0000, 0x0000FF00, 255));
	this->validatedGCForegroundPixel = 0;
	this->validatedExposures = true;
	this->transformInUse = false;
	$set(this, validatedSourceTransform, $new($AffineTransform));
	$set(this, staticSrcTx, nullptr);
	this->validatedRepeat = $XRUtils::RepeatNone;
	this->validatedFilter = $XRUtils::FAST;
	$set(this, renderQueue, renderQueue);
}

void XRSurfaceData::initXRender(int32_t pictureFormat) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$SunToolkit::awtLock();
				initXRPicture(getNativeOps(), pictureFormat);
				$set(this, renderQueue, $nc($($XRCompositeManager::getInstance(this)))->getBackend());
				$set(this, maskBuffer, $XRCompositeManager::getInstance(this));
			} catch ($Throwable& ex) {
				ex->printStackTrace();
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

$XRGraphicsConfig* XRSurfaceData::getGC($X11ComponentPeer* peer) {
	$init(XRSurfaceData);
	$useLocalCurrentObjectStackCache();
	if (peer != nullptr) {
		return $cast($XRGraphicsConfig, peer->getGraphicsConfiguration());
	} else {
		$var($GraphicsEnvironment, env, $GraphicsEnvironment::getLocalGraphicsEnvironment());
		$var($GraphicsDevice, gd, $nc(env)->getDefaultScreenDevice());
		return $cast($XRGraphicsConfig, $nc(gd)->getDefaultConfiguration());
	}
}

void XRSurfaceData::validateCopyAreaGC($Region* gcClip, bool needExposures) {
	if (this->validatedGCClip != gcClip) {
		if (gcClip != nullptr) {
			$nc(this->renderQueue)->setGCClipRectangles(this->xgc, gcClip);
		}
		$set(this, validatedGCClip, gcClip);
	}
	if (this->validatedExposures != needExposures) {
		this->validatedExposures = needExposures;
		$nc(this->renderQueue)->setGCExposures(this->xgc, needExposures);
	}
	if (this->validatedXorComp != nullptr) {
		$nc(this->renderQueue)->setGCMode(this->xgc, true);
		$nc(this->renderQueue)->setGCForeground(this->xgc, this->validatedGCForegroundPixel);
		$set(this, validatedXorComp, nullptr);
	}
}

bool XRSurfaceData::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	$useLocalCurrentObjectStackCache();
	if (this->xrpipe == nullptr) {
		if (!isXRDrawableValid()) {
			return true;
		}
		makePipes();
	}
	$var($CompositeType, comptype, $nc(sg2d)->imageComp);
	$init($CompositeType);
	bool var$0 = $nc($CompositeType::SrcOverNoEa)->equals(comptype);
	if (var$0 || $nc($CompositeType::SrcNoEa)->equals(comptype)) {
		{
			$var($Throwable, var$1, nullptr);
			try {
				$SunToolkit::awtLock();
				bool needExposures = canSourceSendExposures(x, y, w, h);
				validateCopyAreaGC($(sg2d->getCompClip()), needExposures);
				$nc(this->renderQueue)->copyArea(this->xid, this->xid, this->xgc, x, y, w, h, x + dx, y + dy);
			} catch ($Throwable& var$2) {
				$assign(var$1, var$2);
			} /*finally*/ {
				$SunToolkit::awtUnlock();
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
		return true;
	}
	return false;
}

$SurfaceType* XRSurfaceData::getSurfaceType($XRGraphicsConfig* gc, int32_t transparency) {
	$init(XRSurfaceData);
	$var($SurfaceType, sType, nullptr);
	switch (transparency) {
	case $Transparency::OPAQUE:
		{
			$assign(sType, XRSurfaceData::IntRgbX11);
			break;
		}
	case $Transparency::BITMASK:
		{}
	case $Transparency::TRANSLUCENT:
		{
			$assign(sType, XRSurfaceData::IntArgbPreX11);
			break;
		}
	}
	return sType;
}

void XRSurfaceData::invalidate() {
	if (isValid()) {
		setInvalid();
		$XSurfaceData::invalidate();
	}
}

void XRSurfaceData::validateAsSource($AffineTransform* sxForm, int32_t repeat, int32_t filter) {
	if (this->validatedClip != nullptr) {
		$set(this, validatedClip, nullptr);
		$nc(this->renderQueue)->setClipRectangles(this->picture, nullptr);
	}
	if (this->validatedRepeat != repeat && repeat != -1) {
		this->validatedRepeat = repeat;
		$nc(this->renderQueue)->setPictureRepeat(this->picture, repeat);
	}
	if (sxForm == nullptr) {
		if (this->transformInUse) {
			$nc(this->validatedSourceTransform)->setToIdentity();
			$nc(this->renderQueue)->setPictureTransform(this->picture, this->validatedSourceTransform);
			this->transformInUse = false;
		}
	} else if (!this->transformInUse || (this->transformInUse && !$nc(sxForm)->equals(this->validatedSourceTransform))) {
		double var$0 = sxForm->getScaleX();
		double var$1 = sxForm->getShearY();
		double var$2 = sxForm->getShearX();
		double var$3 = sxForm->getScaleY();
		double var$4 = sxForm->getTranslateX();
		$nc(this->validatedSourceTransform)->setTransform(var$0, var$1, var$2, var$3, var$4, sxForm->getTranslateY());
		$var($AffineTransform, srcTransform, this->validatedSourceTransform);
		if (this->staticSrcTx != nullptr) {
			$assign(srcTransform, $new($AffineTransform, this->validatedSourceTransform));
			srcTransform->preConcatenate(this->staticSrcTx);
		}
		$nc(this->renderQueue)->setPictureTransform(this->picture, srcTransform);
		this->transformInUse = true;
	}
	if (filter != this->validatedFilter && filter != -1) {
		$nc(this->renderQueue)->setFilter(this->picture, filter);
		this->validatedFilter = filter;
	}
}

void XRSurfaceData::validateAsDestination($SunGraphics2D* sg2d, $Region* clip) {
	if (!isValid()) {
		$throwNew($InvalidPipeException, "bounds changed"_s);
	}
	bool updateGCClip = false;
	if (clip != this->validatedClip) {
		$nc(this->renderQueue)->setClipRectangles(this->picture, clip);
		$set(this, validatedClip, clip);
		updateGCClip = true;
	}
	if (sg2d != nullptr && sg2d->compositeState == $SunGraphics2D::COMP_XOR) {
		if (!$equals(this->validatedXorComp, sg2d->getComposite())) {
			$set(this, validatedXorComp, $cast($XORComposite, sg2d->getComposite()));
			$nc(this->renderQueue)->setGCMode(this->xgc, false);
		}
		int32_t pixel = sg2d->pixel;
		if (this->validatedGCForegroundPixel != pixel) {
			int32_t xorpixelmod = $nc(this->validatedXorComp)->getXorPixel();
			$nc(this->renderQueue)->setGCForeground(this->xgc, pixel ^ xorpixelmod);
			this->validatedGCForegroundPixel = pixel;
		}
		if (updateGCClip) {
			$nc(this->renderQueue)->setGCClipRectangles(this->xgc, clip);
		}
	}
}

void XRSurfaceData::makePipes() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->xrpipe == nullptr) {
			{
				$var($Throwable, var$0, nullptr);
				try {
					$SunToolkit::awtLock();
					this->xgc = XCreateGC(getNativeOps());
					$set(this, xrpipe, $new($XRRenderer, $($nc(this->maskBuffer)->getMaskBuffer())));
					$set(this, xrtxpipe, $new($PixelToShapeConverter, this->xrpipe));
					$set(this, xrtextpipe, $nc(this->maskBuffer)->getTextRenderer());
					$set(this, xrDrawImage, $new($XRDrawImage));
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
	}
}

int64_t XRSurfaceData::getGC() {
	return this->xgc;
}

int32_t XRSurfaceData::getPicture() {
	return this->picture;
}

int32_t XRSurfaceData::getXid() {
	return this->xid;
}

$XRGraphicsConfig* XRSurfaceData::getGraphicsConfig() {
	return this->graphicsConfig;
}

void XRSurfaceData::setStaticSrcTx($AffineTransform* staticSrcTx) {
	$set(this, staticSrcTx, staticSrcTx);
}

void clinit$XRSurfaceData($Class* class$) {
	$assignStatic(XRSurfaceData::DESC_BYTE_A8_X11, "Byte A8 Pixmap"_s);
	$assignStatic(XRSurfaceData::DESC_INT_RGB_X11, "Integer RGB Pixmap"_s);
	$assignStatic(XRSurfaceData::DESC_INT_ARGB_X11, "Integer ARGB-Pre Pixmap"_s);
	$init($SurfaceType);
	$assignStatic(XRSurfaceData::ByteA8X11, $nc($SurfaceType::ByteGray)->deriveSubType(XRSurfaceData::DESC_BYTE_A8_X11));
	$init($PixelConverter$ArgbPre);
	$assignStatic(XRSurfaceData::IntRgbX11, $nc($SurfaceType::IntRgb)->deriveSubType(XRSurfaceData::DESC_INT_RGB_X11, $PixelConverter$ArgbPre::instance));
	$assignStatic(XRSurfaceData::IntArgbPreX11, $nc($SurfaceType::IntArgbPre)->deriveSubType(XRSurfaceData::DESC_INT_ARGB_X11));
}

XRSurfaceData::XRSurfaceData() {
}

$Class* XRSurfaceData::load$($String* name, bool initialize) {
	$loadClass(XRSurfaceData, name, initialize, &_XRSurfaceData_ClassInfo_, clinit$XRSurfaceData, allocate$XRSurfaceData);
	return class$;
}

$Class* XRSurfaceData::class$ = nullptr;

		} // xr
	} // java2d
} // sun