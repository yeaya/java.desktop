#include <sun/java2d/metal/MTLSurfaceData.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/lang/InternalError.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/Runnable.h>
#include <sun/awt/CGraphicsConfig.h>
#include <sun/awt/CGraphicsDevice.h>
#include <sun/awt/SunHints.h>
#include <sun/awt/image/PixelConverter$ArgbPre.h>
#include <sun/awt/image/PixelConverter.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/SurfaceDataProxy.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/MaskFill.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/metal/MTLBlitLoops.h>
#include <sun/java2d/metal/MTLContext.h>
#include <sun/java2d/metal/MTLDrawImage.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <sun/java2d/metal/MTLLayer.h>
#include <sun/java2d/metal/MTLMaskBlit.h>
#include <sun/java2d/metal/MTLMaskFill.h>
#include <sun/java2d/metal/MTLPaints.h>
#include <sun/java2d/metal/MTLRenderQueue.h>
#include <sun/java2d/metal/MTLRenderer.h>
#include <sun/java2d/metal/MTLSurfaceData$1.h>
#include <sun/java2d/metal/MTLSurfaceData$MTLLayerSurfaceData.h>
#include <sun/java2d/metal/MTLSurfaceData$MTLOffScreenSurfaceData.h>
#include <sun/java2d/metal/MTLSurfaceDataProxy.h>
#include <sun/java2d/metal/MTLTextRenderer.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/BufferedRenderPipe.h>
#include <sun/java2d/pipe/BufferedTextPipe.h>
#include <sun/java2d/pipe/DrawImage.h>
#include <sun/java2d/pipe/DrawImagePipe.h>
#include <sun/java2d/pipe/GlyphListPipe.h>
#include <sun/java2d/pipe/ParallelogramPipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/PixelFillPipe.h>
#include <sun/java2d/pipe/PixelToParallelogramConverter.h>
#include <sun/java2d/pipe/PixelToShapeConverter.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <sun/java2d/pipe/TextPipe.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef COMP_ALPHA
#undef COMP_ISCOPY
#undef COMP_XOR
#undef DESC_MTL_SURFACE
#undef DESC_MTL_SURFACE_RTT
#undef DESC_MTL_TEXTURE
#undef FLIP_BACKBUFFER
#undef INTVAL_ANTIALIAS_ON
#undef OPAQUE
#undef PAINT_ALPHACOLOR
#undef PAINT_OPAQUECOLOR
#undef PF_3BYTE_BGR
#undef PF_BYTE_GRAY
#undef PF_INT_ARGB
#undef PF_INT_ARGB_PRE
#undef PF_INT_BGR
#undef PF_INT_BGRX
#undef PF_INT_RGB
#undef PF_INT_RGBX
#undef PF_USHORT_555_RGB
#undef PF_USHORT_555_RGBX
#undef PF_USHORT_565_RGB
#undef PF_USHORT_GRAY
#undef RT_TEXTURE
#undef SRC_OVER
#undef STROKE_THIN
#undef TEXTURE
#undef TRANSFORM_TRANSLATESCALE

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $Runnable = ::java::lang::Runnable;
using $CGraphicsConfig = ::sun::awt::CGraphicsConfig;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;
using $SunHints = ::sun::awt::SunHints;
using $PixelConverter$ArgbPre = ::sun::awt::image::PixelConverter$ArgbPre;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceDataProxy = ::sun::java2d::SurfaceDataProxy;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $MaskFill = ::sun::java2d::loops::MaskFill;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $MTLBlitLoops = ::sun::java2d::metal::MTLBlitLoops;
using $MTLContext = ::sun::java2d::metal::MTLContext;
using $MTLDrawImage = ::sun::java2d::metal::MTLDrawImage;
using $MTLGraphicsConfig = ::sun::java2d::metal::MTLGraphicsConfig;
using $MTLLayer = ::sun::java2d::metal::MTLLayer;
using $MTLMaskBlit = ::sun::java2d::metal::MTLMaskBlit;
using $MTLMaskFill = ::sun::java2d::metal::MTLMaskFill;
using $MTLPaints = ::sun::java2d::metal::MTLPaints;
using $MTLRenderQueue = ::sun::java2d::metal::MTLRenderQueue;
using $MTLRenderer = ::sun::java2d::metal::MTLRenderer;
using $MTLSurfaceData$1 = ::sun::java2d::metal::MTLSurfaceData$1;
using $MTLSurfaceData$MTLLayerSurfaceData = ::sun::java2d::metal::MTLSurfaceData$MTLLayerSurfaceData;
using $MTLSurfaceData$MTLOffScreenSurfaceData = ::sun::java2d::metal::MTLSurfaceData$MTLOffScreenSurfaceData;
using $MTLSurfaceDataProxy = ::sun::java2d::metal::MTLSurfaceDataProxy;
using $MTLTextRenderer = ::sun::java2d::metal::MTLTextRenderer;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $BufferedRenderPipe = ::sun::java2d::pipe::BufferedRenderPipe;
using $BufferedTextPipe = ::sun::java2d::pipe::BufferedTextPipe;
using $DrawImage = ::sun::java2d::pipe::DrawImage;
using $DrawImagePipe = ::sun::java2d::pipe::DrawImagePipe;
using $GlyphListPipe = ::sun::java2d::pipe::GlyphListPipe;
using $ParallelogramPipe = ::sun::java2d::pipe::ParallelogramPipe;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;
using $PixelFillPipe = ::sun::java2d::pipe::PixelFillPipe;
using $PixelToParallelogramConverter = ::sun::java2d::pipe::PixelToParallelogramConverter;
using $PixelToShapeConverter = ::sun::java2d::pipe::PixelToShapeConverter;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;
using $TextPipe = ::sun::java2d::pipe::TextPipe;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace metal {

$FieldInfo _MTLSurfaceData_FieldInfo_[] = {
	{"PF_INT_ARGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MTLSurfaceData, PF_INT_ARGB)},
	{"PF_INT_ARGB_PRE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MTLSurfaceData, PF_INT_ARGB_PRE)},
	{"PF_INT_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MTLSurfaceData, PF_INT_RGB)},
	{"PF_INT_RGBX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MTLSurfaceData, PF_INT_RGBX)},
	{"PF_INT_BGR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MTLSurfaceData, PF_INT_BGR)},
	{"PF_INT_BGRX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MTLSurfaceData, PF_INT_BGRX)},
	{"PF_USHORT_565_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MTLSurfaceData, PF_USHORT_565_RGB)},
	{"PF_USHORT_555_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MTLSurfaceData, PF_USHORT_555_RGB)},
	{"PF_USHORT_555_RGBX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MTLSurfaceData, PF_USHORT_555_RGBX)},
	{"PF_BYTE_GRAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MTLSurfaceData, PF_BYTE_GRAY)},
	{"PF_USHORT_GRAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MTLSurfaceData, PF_USHORT_GRAY)},
	{"PF_3BYTE_BGR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MTLSurfaceData, PF_3BYTE_BGR)},
	{"DESC_MTL_SURFACE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MTLSurfaceData, DESC_MTL_SURFACE)},
	{"DESC_MTL_SURFACE_RTT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MTLSurfaceData, DESC_MTL_SURFACE_RTT)},
	{"DESC_MTL_TEXTURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MTLSurfaceData, DESC_MTL_TEXTURE)},
	{"MTLSurface", "Lsun/java2d/loops/SurfaceType;", nullptr, $STATIC | $FINAL, $staticField(MTLSurfaceData, MTLSurface)},
	{"MTLSurfaceRTT", "Lsun/java2d/loops/SurfaceType;", nullptr, $STATIC | $FINAL, $staticField(MTLSurfaceData, MTLSurfaceRTT)},
	{"MTLTexture", "Lsun/java2d/loops/SurfaceType;", nullptr, $STATIC | $FINAL, $staticField(MTLSurfaceData, MTLTexture)},
	{"mtlRenderPipe", "Lsun/java2d/metal/MTLRenderer;", nullptr, $PROTECTED | $STATIC, $staticField(MTLSurfaceData, mtlRenderPipe)},
	{"mtlTxRenderPipe", "Lsun/java2d/pipe/PixelToParallelogramConverter;", nullptr, $PROTECTED | $STATIC, $staticField(MTLSurfaceData, mtlTxRenderPipe)},
	{"mtlAAPgramPipe", "Lsun/java2d/pipe/ParallelogramPipe;", nullptr, $PROTECTED | $STATIC, $staticField(MTLSurfaceData, mtlAAPgramPipe)},
	{"mtlTextPipe", "Lsun/java2d/metal/MTLTextRenderer;", nullptr, $PROTECTED | $STATIC, $staticField(MTLSurfaceData, mtlTextPipe)},
	{"mtlImagePipe", "Lsun/java2d/metal/MTLDrawImage;", nullptr, $PROTECTED | $STATIC, $staticField(MTLSurfaceData, mtlImagePipe)},
	{"scale", "I", nullptr, $PROTECTED | $FINAL, $field(MTLSurfaceData, scale)},
	{"width", "I", nullptr, $PROTECTED | $FINAL, $field(MTLSurfaceData, width)},
	{"height", "I", nullptr, $PROTECTED | $FINAL, $field(MTLSurfaceData, height)},
	{"type", "I", nullptr, $PROTECTED, $field(MTLSurfaceData, type)},
	{"graphicsConfig", "Lsun/java2d/metal/MTLGraphicsConfig;", nullptr, $PRIVATE, $field(MTLSurfaceData, graphicsConfig)},
	{"nativeWidth", "I", nullptr, $PRIVATE, $field(MTLSurfaceData, nativeWidth)},
	{"nativeHeight", "I", nullptr, $PRIVATE, $field(MTLSurfaceData, nativeHeight)},
	{}
};

$MethodInfo _MTLSurfaceData_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getNativeOps", "()J", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/metal/MTLLayer;Lsun/java2d/metal/MTLGraphicsConfig;Ljava/awt/image/ColorModel;III)V", nullptr, $PRIVATE, $method(static_cast<void(MTLSurfaceData::*)($MTLLayer*,$MTLGraphicsConfig*,$ColorModel*,int32_t,int32_t,int32_t)>(&MTLSurfaceData::init$))},
	{"canHandleComposite", "(Ljava/awt/Composite;)Z", nullptr, $PRIVATE, $method(static_cast<bool(MTLSurfaceData::*)($Composite*)>(&MTLSurfaceData::canHandleComposite))},
	{"canRenderLCDText", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $PUBLIC},
	{"clearWindow", "()V", nullptr, $PROTECTED | $NATIVE},
	{"copyArea", "(Lsun/java2d/SunGraphics2D;IIIIII)Z", nullptr, $PUBLIC},
	{"createData", "(Lsun/java2d/metal/MTLLayer;)Lsun/java2d/metal/MTLSurfaceData$MTLLayerSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MTLSurfaceData$MTLLayerSurfaceData*(*)($MTLLayer*)>(&MTLSurfaceData::createData))},
	{"createData", "(Lsun/java2d/metal/MTLGraphicsConfig;IILjava/awt/image/ColorModel;Ljava/awt/Image;I)Lsun/java2d/metal/MTLSurfaceData$MTLOffScreenSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MTLSurfaceData$MTLOffScreenSurfaceData*(*)($MTLGraphicsConfig*,int32_t,int32_t,$ColorModel*,$Image*,int32_t)>(&MTLSurfaceData::createData))},
	{"dispose", "(JLsun/java2d/metal/MTLGraphicsConfig;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int64_t,$MTLGraphicsConfig*)>(&MTLSurfaceData::dispose))},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getContext", "()Lsun/java2d/metal/MTLContext;", nullptr, $PUBLIC | $FINAL},
	{"getCustomSurfaceType", "(I)Lsun/java2d/loops/SurfaceType;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SurfaceType*(*)(int32_t)>(&MTLSurfaceData::getCustomSurfaceType))},
	{"getDefaultScaleX", "()D", nullptr, $PUBLIC},
	{"getDefaultScaleY", "()D", nullptr, $PUBLIC},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getMTLGraphicsConfig", "()Lsun/java2d/metal/MTLGraphicsConfig;", nullptr, $FINAL, $method(static_cast<$MTLGraphicsConfig*(MTLSurfaceData::*)()>(&MTLSurfaceData::getMTLGraphicsConfig))},
	{"getMTLTexturePointer", "(J)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(MTLSurfaceData::*)(int64_t)>(&MTLSurfaceData::getMTLTexturePointer))},
	{"getMaskFill", "(Lsun/java2d/SunGraphics2D;)Lsun/java2d/loops/MaskFill;", nullptr, $PROTECTED},
	{"getNativeBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getNativeResource", "(I)J", nullptr, $PUBLIC},
	{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC | $FINAL},
	{"initFlipBackbuffer", "(J)Z", nullptr, $PROTECTED | $NATIVE},
	{"initOps", "(Lsun/java2d/metal/MTLGraphicsConfig;JJJIIZ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(MTLSurfaceData::*)($MTLGraphicsConfig*,int64_t,int64_t,int64_t,int32_t,int32_t,bool)>(&MTLSurfaceData::initOps))},
	{"initRTexture", "(JZII)Z", nullptr, $PROTECTED | $NATIVE},
	{"initSurface", "(II)V", nullptr, $PROTECTED},
	{"initSurfaceNow", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(MTLSurfaceData::*)(int32_t,int32_t)>(&MTLSurfaceData::initSurfaceNow))},
	{"initTexture", "(JZII)Z", nullptr, $PROTECTED | $NATIVE},
	{"isOnScreen", "()Z", nullptr, $PUBLIC},
	{"*isSurfaceLost", "()Z", nullptr, $PUBLIC},
	{"*isValid", "()Z", nullptr, $PUBLIC | $FINAL},
	{"makeProxyFor", "(Lsun/java2d/SurfaceData;)Lsun/java2d/SurfaceDataProxy;", nullptr, $PUBLIC},
	{"*markDirty", "()V", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validatePipe", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_clearWindow 8
#define _METHOD_INDEX_getMTLTexturePointer 21
#define _METHOD_INDEX_initFlipBackbuffer 27
#define _METHOD_INDEX_initOps 28
#define _METHOD_INDEX_initRTexture 29
#define _METHOD_INDEX_initTexture 32

$InnerClassInfo _MTLSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLSurfaceData$MTLOffScreenSurfaceData", "sun.java2d.metal.MTLSurfaceData", "MTLOffScreenSurfaceData", $PUBLIC | $STATIC},
	{"sun.java2d.metal.MTLSurfaceData$MTLLayerSurfaceData", "sun.java2d.metal.MTLSurfaceData", "MTLLayerSurfaceData", $PUBLIC | $STATIC},
	{"sun.java2d.metal.MTLSurfaceData$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MTLSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.metal.MTLSurfaceData",
	"sun.java2d.SurfaceData",
	"sun.java2d.pipe.hw.AccelSurface",
	_MTLSurfaceData_FieldInfo_,
	_MTLSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_MTLSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLSurfaceData$MTLOffScreenSurfaceData,sun.java2d.metal.MTLSurfaceData$MTLLayerSurfaceData,sun.java2d.metal.MTLSurfaceData$1"
};

$Object* allocate$MTLSurfaceData($Class* clazz) {
	return $of($alloc(MTLSurfaceData));
}

void MTLSurfaceData::markDirty() {
	this->$SurfaceData::markDirty();
}

bool MTLSurfaceData::isSurfaceLost() {
	 return this->$SurfaceData::isSurfaceLost();
}

bool MTLSurfaceData::isValid() {
	 return this->$SurfaceData::isValid();
}

int64_t MTLSurfaceData::getNativeOps() {
	 return this->$SurfaceData::getNativeOps();
}

int32_t MTLSurfaceData::hashCode() {
	 return this->$SurfaceData::hashCode();
}

bool MTLSurfaceData::equals(Object$* arg0) {
	 return this->$SurfaceData::equals(arg0);
}

$Object* MTLSurfaceData::clone() {
	 return this->$SurfaceData::clone();
}

$String* MTLSurfaceData::toString() {
	 return this->$SurfaceData::toString();
}

void MTLSurfaceData::finalize() {
	this->$SurfaceData::finalize();
}

$String* MTLSurfaceData::DESC_MTL_SURFACE = nullptr;
$String* MTLSurfaceData::DESC_MTL_SURFACE_RTT = nullptr;
$String* MTLSurfaceData::DESC_MTL_TEXTURE = nullptr;
$SurfaceType* MTLSurfaceData::MTLSurface = nullptr;
$SurfaceType* MTLSurfaceData::MTLSurfaceRTT = nullptr;
$SurfaceType* MTLSurfaceData::MTLTexture = nullptr;
$MTLRenderer* MTLSurfaceData::mtlRenderPipe = nullptr;
$PixelToParallelogramConverter* MTLSurfaceData::mtlTxRenderPipe = nullptr;
$ParallelogramPipe* MTLSurfaceData::mtlAAPgramPipe = nullptr;
$MTLTextRenderer* MTLSurfaceData::mtlTextPipe = nullptr;
$MTLDrawImage* MTLSurfaceData::mtlImagePipe = nullptr;

$SurfaceType* MTLSurfaceData::getCustomSurfaceType(int32_t mtlType) {
	$init(MTLSurfaceData);
	switch (mtlType) {
	case $AccelSurface::TEXTURE:
		{
			return MTLSurfaceData::MTLTexture;
		}
	case $AccelSurface::RT_TEXTURE:
		{
			return MTLSurfaceData::MTLSurfaceRTT;
		}
	default:
		{
			return MTLSurfaceData::MTLSurface;
		}
	}
}

void MTLSurfaceData::initOps($MTLGraphicsConfig* gc, int64_t pConfigInfo, int64_t pPeerData, int64_t layerPtr, int32_t xoff, int32_t yoff, bool isOpaque) {
	$prepareNative(MTLSurfaceData, initOps, void, $MTLGraphicsConfig* gc, int64_t pConfigInfo, int64_t pPeerData, int64_t layerPtr, int32_t xoff, int32_t yoff, bool isOpaque);
	$invokeNative(gc, pConfigInfo, pPeerData, layerPtr, xoff, yoff, isOpaque);
	$finishNative();
}

void MTLSurfaceData::init$($MTLLayer* layer, $MTLGraphicsConfig* gc, $ColorModel* cm, int32_t type, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$SurfaceData::init$($(getCustomSurfaceType(type)), cm);
	$set(this, graphicsConfig, gc);
	this->type = type;
	setBlitProxyKey($($nc(gc)->getProxyKey()));
	this->scale = type == $AccelSurface::TEXTURE ? 1 : $nc($($cast($CGraphicsDevice, $nc(gc)->getDevice())))->getScaleFactor();
	this->width = width * this->scale;
	this->height = height * this->scale;
	int64_t pConfigInfo = gc->getNativeConfigInfo();
	int64_t layerPtr = 0;
	bool isOpaque = true;
	if (layer != nullptr) {
		layerPtr = layer->getPointer();
		isOpaque = layer->isOpaque();
	}
	initOps(gc, pConfigInfo, 0, layerPtr, 0, 0, isOpaque);
}

$GraphicsConfiguration* MTLSurfaceData::getDeviceConfiguration() {
	return this->graphicsConfig;
}

$MTLSurfaceData$MTLLayerSurfaceData* MTLSurfaceData::createData($MTLLayer* layer) {
	$init(MTLSurfaceData);
	$useLocalCurrentObjectStackCache();
	$var($MTLGraphicsConfig, gc, $cast($MTLGraphicsConfig, $nc(layer)->getGraphicsConfiguration()));
	$var($Rectangle, r, layer->getBounds());
	return $new($MTLSurfaceData$MTLLayerSurfaceData, layer, gc, $nc(r)->width, r->height);
}

$MTLSurfaceData$MTLOffScreenSurfaceData* MTLSurfaceData::createData($MTLGraphicsConfig* gc, int32_t width, int32_t height, $ColorModel* cm, $Image* image, int32_t type) {
	$init(MTLSurfaceData);
	return $new($MTLSurfaceData$MTLOffScreenSurfaceData, gc, width, height, image, cm, type);
}

double MTLSurfaceData::getDefaultScaleX() {
	return (double)this->scale;
}

double MTLSurfaceData::getDefaultScaleY() {
	return (double)this->scale;
}

$Rectangle* MTLSurfaceData::getBounds() {
	return $new($Rectangle, this->width, this->height);
}

void MTLSurfaceData::clearWindow() {
	$prepareNative(MTLSurfaceData, clearWindow, void);
	$invokeNative();
	$finishNative();
}

bool MTLSurfaceData::initTexture(int64_t pData, bool isOpaque, int32_t width, int32_t height) {
	bool $ret = false;
	$prepareNative(MTLSurfaceData, initTexture, bool, int64_t pData, bool isOpaque, int32_t width, int32_t height);
	$ret = $invokeNative(pData, isOpaque, width, height);
	$finishNative();
	return $ret;
}

bool MTLSurfaceData::initRTexture(int64_t pData, bool isOpaque, int32_t width, int32_t height) {
	bool $ret = false;
	$prepareNative(MTLSurfaceData, initRTexture, bool, int64_t pData, bool isOpaque, int32_t width, int32_t height);
	$ret = $invokeNative(pData, isOpaque, width, height);
	$finishNative();
	return $ret;
}

bool MTLSurfaceData::initFlipBackbuffer(int64_t pData) {
	bool $ret = false;
	$prepareNative(MTLSurfaceData, initFlipBackbuffer, bool, int64_t pData);
	$ret = $invokeNative(pData);
	$finishNative();
	return $ret;
}

$SurfaceDataProxy* MTLSurfaceData::makeProxyFor($SurfaceData* srcData) {
	return $MTLSurfaceDataProxy::createProxy(srcData, this->graphicsConfig);
}

void MTLSurfaceData::initSurfaceNow(int32_t width, int32_t height) {
	bool isOpaque = (getTransparency() == $Transparency::OPAQUE);
	bool success = false;
	switch (this->type) {
	case $AccelSurface::TEXTURE:
		{
			success = initTexture(getNativeOps(), isOpaque, width, height);
			break;
		}
	case $AccelSurface::RT_TEXTURE:
		{
			success = initRTexture(getNativeOps(), isOpaque, width, height);
			break;
		}
	case $AccelSurface::FLIP_BACKBUFFER:
		{
			success = initFlipBackbuffer(getNativeOps());
			break;
		}
	default:
		{
			break;
		}
	}
	if (!success) {
		$throwNew($OutOfMemoryError, "can\'t create offscreen surface"_s);
	}
}

void MTLSurfaceData::initSurface(int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($MTLRenderQueue, rq, $MTLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			switch (this->type) {
			case $AccelSurface::TEXTURE:
				{}
			case $AccelSurface::RT_TEXTURE:
				{
					$MTLContext::setScratchSurface(this->graphicsConfig);
					break;
				}
			default:
				{
					break;
				}
			}
			rq->flushAndInvokeNow($$new($MTLSurfaceData$1, this, width, height));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$BufferedContext* MTLSurfaceData::getContext() {
	return $nc(this->graphicsConfig)->getContext();
}

$MTLGraphicsConfig* MTLSurfaceData::getMTLGraphicsConfig() {
	return this->graphicsConfig;
}

int32_t MTLSurfaceData::getType() {
	return this->type;
}

bool MTLSurfaceData::canRenderLCDText($SunGraphics2D* sg2d) {
	bool var$0 = $nc($nc(sg2d)->surfaceData)->getTransparency() == $Transparency::OPAQUE && sg2d->paintState <= $SunGraphics2D::PAINT_OPAQUECOLOR;
	return var$0 && (sg2d->compositeState <= $SunGraphics2D::COMP_ISCOPY || ($nc(sg2d)->compositeState <= $SunGraphics2D::COMP_ALPHA && canHandleComposite(sg2d->composite)));
}

bool MTLSurfaceData::canHandleComposite($Composite* c) {
	if ($instanceOf($AlphaComposite, c)) {
		$var($AlphaComposite, ac, $cast($AlphaComposite, c));
		bool var$0 = $nc(ac)->getRule() == $AlphaComposite::SRC_OVER;
		return var$0 && ac->getAlpha() >= 1.0f;
	}
	return false;
}

void MTLSurfaceData::validatePipe($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($TextPipe, textpipe, nullptr);
	bool validated = false;
	if (($nc(sg2d)->compositeState <= $SunGraphics2D::COMP_ISCOPY && sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR) || ($nc(sg2d)->compositeState == $SunGraphics2D::COMP_ALPHA && sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR && ($nc(($cast($AlphaComposite, sg2d->composite)))->getRule() == $AlphaComposite::SRC_OVER)) || ($nc(sg2d)->compositeState == $SunGraphics2D::COMP_XOR && sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR)) {
		$assign(textpipe, MTLSurfaceData::mtlTextPipe);
	} else {
		$SurfaceData::validatePipe(sg2d);
		$assign(textpipe, sg2d->textpipe);
		validated = true;
	}
	$var($PixelToParallelogramConverter, txPipe, nullptr);
	$var($MTLRenderer, nonTxPipe, nullptr);
	if ($nc(sg2d)->antialiasHint != $SunHints::INTVAL_ANTIALIAS_ON) {
		if (sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR) {
			if (sg2d->compositeState <= $SunGraphics2D::COMP_XOR) {
				$assign(txPipe, MTLSurfaceData::mtlTxRenderPipe);
				$assign(nonTxPipe, MTLSurfaceData::mtlRenderPipe);
			}
		} else if (sg2d->compositeState <= $SunGraphics2D::COMP_ALPHA) {
			if ($MTLPaints::isValid(sg2d)) {
				$assign(txPipe, MTLSurfaceData::mtlTxRenderPipe);
				$assign(nonTxPipe, MTLSurfaceData::mtlRenderPipe);
			}
		}
	} else if (sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR) {
		$init($CompositeType);
		if ($nc(this->graphicsConfig)->isCapPresent(256) && (sg2d->imageComp == $CompositeType::SrcOverNoEa || sg2d->imageComp == $CompositeType::SrcOver)) {
			if (!validated) {
				$SurfaceData::validatePipe(sg2d);
				validated = true;
			}
			$var($PixelToParallelogramConverter, aaConverter, $new($PixelToParallelogramConverter, sg2d->shapepipe, MTLSurfaceData::mtlAAPgramPipe, 1.0 / 8.0, 0.499, false));
			$set(sg2d, drawpipe, aaConverter);
			$set(sg2d, fillpipe, aaConverter);
			$set(sg2d, shapepipe, aaConverter);
		} else if (sg2d->compositeState == $SunGraphics2D::COMP_XOR) {
			$assign(txPipe, MTLSurfaceData::mtlTxRenderPipe);
			$assign(nonTxPipe, MTLSurfaceData::mtlRenderPipe);
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
		$set($nc(sg2d), shapepipe, txPipe);
	} else if (!validated) {
		$SurfaceData::validatePipe(sg2d);
	}
	$set($nc(sg2d), textpipe, textpipe);
	$set(sg2d, imagepipe, MTLSurfaceData::mtlImagePipe);
}

$MaskFill* MTLSurfaceData::getMaskFill($SunGraphics2D* sg2d) {
	if ($nc(sg2d)->paintState > $SunGraphics2D::PAINT_ALPHACOLOR) {
		bool var$0 = !$MTLPaints::isValid(sg2d);
		if (var$0 || !$nc(this->graphicsConfig)->isCapPresent(16)) {
			return nullptr;
		}
	}
	return $SurfaceData::getMaskFill(sg2d);
}

void MTLSurfaceData::flush() {
	$useLocalCurrentObjectStackCache();
	invalidate();
	$var($MTLRenderQueue, rq, $MTLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$MTLContext::setScratchSurface(this->graphicsConfig);
			$var($RenderBuffer, buf, rq->getBuffer());
			rq->ensureCapacityAndAlignment(12, 4);
			$nc(buf)->putInt(72);
			buf->putLong(getNativeOps());
			rq->flushNow();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool MTLSurfaceData::isOnScreen() {
	return false;
}

int64_t MTLSurfaceData::getMTLTexturePointer(int64_t pData) {
	int64_t $ret = 0;
	$prepareNative(MTLSurfaceData, getMTLTexturePointer, int64_t, int64_t pData);
	$ret = $invokeNative(pData);
	$finishNative();
	return $ret;
}

int64_t MTLSurfaceData::getNativeResource(int32_t resType) {
	if (resType == $AccelSurface::TEXTURE) {
		return getMTLTexturePointer(getNativeOps());
	}
	return 0;
}

$Raster* MTLSurfaceData::getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	$throwNew($InternalError, "not implemented yet"_s);
	$shouldNotReachHere();
}

bool MTLSurfaceData::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	if ($nc(sg2d)->compositeState >= $SunGraphics2D::COMP_XOR) {
		return false;
	}
	$nc(MTLSurfaceData::mtlRenderPipe)->copyArea(sg2d, x, y, w, h, dx, dy);
	return true;
}

$Rectangle* MTLSurfaceData::getNativeBounds() {
	$useLocalCurrentObjectStackCache();
	$var($MTLRenderQueue, rq, $MTLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Rectangle, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $new($Rectangle, this->nativeWidth, this->nativeHeight));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			rq->unlock();
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

void MTLSurfaceData::dispose(int64_t pData, $MTLGraphicsConfig* gc) {
	$init(MTLSurfaceData);
	$useLocalCurrentObjectStackCache();
	$var($MTLRenderQueue, rq, $MTLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$MTLContext::setScratchSurface(gc);
			$var($RenderBuffer, buf, rq->getBuffer());
			rq->ensureCapacityAndAlignment(12, 4);
			$nc(buf)->putInt(73);
			buf->putLong(pData);
			rq->flushNow();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$MTLSurfaceData($Class* class$) {
	$assignStatic(MTLSurfaceData::DESC_MTL_SURFACE, "MTL Surface"_s);
	$assignStatic(MTLSurfaceData::DESC_MTL_SURFACE_RTT, "MTL Surface (render-to-texture)"_s);
	$assignStatic(MTLSurfaceData::DESC_MTL_TEXTURE, "MTL Texture"_s);
	$init($SurfaceType);
	$init($PixelConverter$ArgbPre);
	$assignStatic(MTLSurfaceData::MTLSurface, $nc($SurfaceType::Any)->deriveSubType(MTLSurfaceData::DESC_MTL_SURFACE, $PixelConverter$ArgbPre::instance));
	$assignStatic(MTLSurfaceData::MTLSurfaceRTT, $nc(MTLSurfaceData::MTLSurface)->deriveSubType(MTLSurfaceData::DESC_MTL_SURFACE_RTT));
	$assignStatic(MTLSurfaceData::MTLTexture, $nc($SurfaceType::Any)->deriveSubType(MTLSurfaceData::DESC_MTL_TEXTURE));
	{
		if (!$GraphicsEnvironment::isHeadless()) {
			$var($MTLRenderQueue, rq, $MTLRenderQueue::getInstance());
			$assignStatic(MTLSurfaceData::mtlImagePipe, $new($MTLDrawImage));
			$assignStatic(MTLSurfaceData::mtlTextPipe, $new($MTLTextRenderer, rq));
			$assignStatic(MTLSurfaceData::mtlRenderPipe, $new($MTLRenderer, rq));
			if ($GraphicsPrimitive::tracingEnabled()) {
				$assignStatic(MTLSurfaceData::mtlTextPipe, $nc(MTLSurfaceData::mtlTextPipe)->traceWrap());
			}
			$assignStatic(MTLSurfaceData::mtlAAPgramPipe, $nc(MTLSurfaceData::mtlRenderPipe)->getAAParallelogramPipe());
			$assignStatic(MTLSurfaceData::mtlTxRenderPipe, $new($PixelToParallelogramConverter, MTLSurfaceData::mtlRenderPipe, MTLSurfaceData::mtlRenderPipe, 1.0, 0.25, true));
			$MTLBlitLoops::register$();
			$MTLMaskFill::register$();
			$MTLMaskBlit::register$();
		}
	}
}

MTLSurfaceData::MTLSurfaceData() {
}

$Class* MTLSurfaceData::load$($String* name, bool initialize) {
	$loadClass(MTLSurfaceData, name, initialize, &_MTLSurfaceData_ClassInfo_, clinit$MTLSurfaceData, allocate$MTLSurfaceData);
	return class$;
}

$Class* MTLSurfaceData::class$ = nullptr;

		} // metal
	} // java2d
} // sun