#include <sun/java2d/d3d/D3DSurfaceData.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Component.h>
#include <java/awt/Composite.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/SinglePixelPackedSampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/SunHints.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/image/DataBufferNative.h>
#include <sun/awt/image/PixelConverter$ArgbPre.h>
#include <sun/awt/image/PixelConverter.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/SurfaceManager.h>
#include <sun/awt/image/WritableRasterNative.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/SurfaceDataProxy.h>
#include <sun/java2d/d3d/D3DBlitLoops.h>
#include <sun/java2d/d3d/D3DContext.h>
#include <sun/java2d/d3d/D3DDrawImage.h>
#include <sun/java2d/d3d/D3DGraphicsConfig.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <sun/java2d/d3d/D3DMaskBlit.h>
#include <sun/java2d/d3d/D3DMaskFill.h>
#include <sun/java2d/d3d/D3DPaints.h>
#include <sun/java2d/d3d/D3DRenderQueue.h>
#include <sun/java2d/d3d/D3DRenderer.h>
#include <sun/java2d/d3d/D3DSurfaceData$1.h>
#include <sun/java2d/d3d/D3DSurfaceData$1Status.h>
#include <sun/java2d/d3d/D3DSurfaceData$2.h>
#include <sun/java2d/d3d/D3DSurfaceData$D3DDataBufferNative.h>
#include <sun/java2d/d3d/D3DSurfaceData$D3DWindowSurfaceData.h>
#include <sun/java2d/d3d/D3DSurfaceDataProxy.h>
#include <sun/java2d/d3d/D3DTextRenderer.h>
#include <sun/java2d/d3d/D3DVolatileSurfaceManager.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/MaskFill.h>
#include <sun/java2d/loops/SurfaceType.h>
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
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <sun/java2d/pipe/TextPipe.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType.h>
#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities.h>
#include <jcpp.h>

#undef COMP_ALPHA
#undef COMP_ISCOPY
#undef COMP_XOR
#undef COPIED
#undef D3D_DEVICE_RESOURCE
#undef DESC_D3D_SURFACE
#undef DESC_D3D_SURFACE_RTT
#undef DESC_D3D_TEXTURE
#undef FLIP_BACKBUFFER
#undef INTVAL_ANTIALIAS_ON
#undef OPAQUE
#undef PAINT_ALPHACOLOR
#undef PAINT_OPAQUECOLOR
#undef PRIOR
#undef RT_PLAIN
#undef RT_TEXTURE
#undef SRC_OVER
#undef STROKE_THIN
#undef ST_3BYTE_BGR
#undef ST_BYTE_INDEXED
#undef ST_BYTE_INDEXED_BM
#undef ST_INT_ARGB
#undef ST_INT_ARGB_BM
#undef ST_INT_ARGB_PRE
#undef ST_INT_BGR
#undef ST_INT_RGB
#undef ST_USHORT_555_RGB
#undef ST_USHORT_565_RGB
#undef SWAP_COPY
#undef SWAP_DISCARD
#undef SWAP_FLIP
#undef TEXTURE
#undef TRANSFORM_TRANSLATESCALE
#undef TYPE_INT
#undef TYPE_USHORT
#undef VSYNC_DEFAULT
#undef WINDOW

using $AlphaComposite = ::java::awt::AlphaComposite;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Component = ::java::awt::Component;
using $Composite = ::java::awt::Composite;
using $Dimension = ::java::awt::Dimension;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SunHints = ::sun::awt::SunHints;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Win32GraphicsConfig = ::sun::awt::Win32GraphicsConfig;
using $Win32GraphicsDevice = ::sun::awt::Win32GraphicsDevice;
using $DataBufferNative = ::sun::awt::image::DataBufferNative;
using $PixelConverter = ::sun::awt::image::PixelConverter;
using $PixelConverter$ArgbPre = ::sun::awt::image::PixelConverter$ArgbPre;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $WritableRasterNative = ::sun::awt::image::WritableRasterNative;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceDataProxy = ::sun::java2d::SurfaceDataProxy;
using $D3DBlitLoops = ::sun::java2d::d3d::D3DBlitLoops;
using $D3DContext = ::sun::java2d::d3d::D3DContext;
using $D3DDrawImage = ::sun::java2d::d3d::D3DDrawImage;
using $D3DGraphicsConfig = ::sun::java2d::d3d::D3DGraphicsConfig;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DMaskBlit = ::sun::java2d::d3d::D3DMaskBlit;
using $D3DMaskFill = ::sun::java2d::d3d::D3DMaskFill;
using $D3DPaints = ::sun::java2d::d3d::D3DPaints;
using $D3DRenderQueue = ::sun::java2d::d3d::D3DRenderQueue;
using $D3DRenderer = ::sun::java2d::d3d::D3DRenderer;
using $D3DSurfaceData$1 = ::sun::java2d::d3d::D3DSurfaceData$1;
using $D3DSurfaceData$1Status = ::sun::java2d::d3d::D3DSurfaceData$1Status;
using $D3DSurfaceData$2 = ::sun::java2d::d3d::D3DSurfaceData$2;
using $D3DSurfaceData$D3DDataBufferNative = ::sun::java2d::d3d::D3DSurfaceData$D3DDataBufferNative;
using $D3DSurfaceData$D3DWindowSurfaceData = ::sun::java2d::d3d::D3DSurfaceData$D3DWindowSurfaceData;
using $D3DSurfaceDataProxy = ::sun::java2d::d3d::D3DSurfaceDataProxy;
using $D3DTextRenderer = ::sun::java2d::d3d::D3DTextRenderer;
using $D3DVolatileSurfaceManager = ::sun::java2d::d3d::D3DVolatileSurfaceManager;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $MaskFill = ::sun::java2d::loops::MaskFill;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
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
using $Region = ::sun::java2d::pipe::Region;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;
using $TextPipe = ::sun::java2d::pipe::TextPipe;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;
using $ExtendedBufferCapabilities = ::sun::java2d::pipe::hw::ExtendedBufferCapabilities;
using $ExtendedBufferCapabilities$VSyncType = ::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DSurfaceData_FieldInfo_[] = {
	{"D3D_DEVICE_RESOURCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(D3DSurfaceData, D3D_DEVICE_RESOURCE)},
	{"ST_INT_ARGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(D3DSurfaceData, ST_INT_ARGB)},
	{"ST_INT_ARGB_PRE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(D3DSurfaceData, ST_INT_ARGB_PRE)},
	{"ST_INT_ARGB_BM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(D3DSurfaceData, ST_INT_ARGB_BM)},
	{"ST_INT_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(D3DSurfaceData, ST_INT_RGB)},
	{"ST_INT_BGR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(D3DSurfaceData, ST_INT_BGR)},
	{"ST_USHORT_565_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(D3DSurfaceData, ST_USHORT_565_RGB)},
	{"ST_USHORT_555_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(D3DSurfaceData, ST_USHORT_555_RGB)},
	{"ST_BYTE_INDEXED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(D3DSurfaceData, ST_BYTE_INDEXED)},
	{"ST_BYTE_INDEXED_BM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(D3DSurfaceData, ST_BYTE_INDEXED_BM)},
	{"ST_3BYTE_BGR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(D3DSurfaceData, ST_3BYTE_BGR)},
	{"SWAP_DISCARD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(D3DSurfaceData, SWAP_DISCARD)},
	{"SWAP_FLIP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(D3DSurfaceData, SWAP_FLIP)},
	{"SWAP_COPY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(D3DSurfaceData, SWAP_COPY)},
	{"DESC_D3D_SURFACE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(D3DSurfaceData, DESC_D3D_SURFACE)},
	{"DESC_D3D_SURFACE_RTT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(D3DSurfaceData, DESC_D3D_SURFACE_RTT)},
	{"DESC_D3D_TEXTURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(D3DSurfaceData, DESC_D3D_TEXTURE)},
	{"D3DSurface", "Lsun/java2d/loops/SurfaceType;", nullptr, $STATIC | $FINAL, $staticField(D3DSurfaceData, D3DSurface)},
	{"D3DSurfaceRTT", "Lsun/java2d/loops/SurfaceType;", nullptr, $STATIC | $FINAL, $staticField(D3DSurfaceData, D3DSurfaceRTT)},
	{"D3DTexture", "Lsun/java2d/loops/SurfaceType;", nullptr, $STATIC | $FINAL, $staticField(D3DSurfaceData, D3DTexture)},
	{"type", "I", nullptr, $PRIVATE, $field(D3DSurfaceData, type)},
	{"width", "I", nullptr, $PRIVATE, $field(D3DSurfaceData, width)},
	{"height", "I", nullptr, $PRIVATE, $field(D3DSurfaceData, height)},
	{"scaleX", "D", nullptr, $PRIVATE | $FINAL, $field(D3DSurfaceData, scaleX)},
	{"scaleY", "D", nullptr, $PRIVATE | $FINAL, $field(D3DSurfaceData, scaleY)},
	{"nativeWidth", "I", nullptr, $PRIVATE, $field(D3DSurfaceData, nativeWidth)},
	{"nativeHeight", "I", nullptr, $PRIVATE, $field(D3DSurfaceData, nativeHeight)},
	{"peer", "Lsun/awt/windows/WComponentPeer;", nullptr, $PROTECTED, $field(D3DSurfaceData, peer)},
	{"offscreenImage", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(D3DSurfaceData, offscreenImage)},
	{"graphicsDevice", "Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, $PROTECTED, $field(D3DSurfaceData, graphicsDevice)},
	{"swapEffect", "I", nullptr, $PRIVATE, $field(D3DSurfaceData, swapEffect)},
	{"syncType", "Lsun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType;", nullptr, $PRIVATE, $field(D3DSurfaceData, syncType)},
	{"backBuffersNum", "I", nullptr, $PRIVATE, $field(D3DSurfaceData, backBuffersNum)},
	{"wrn", "Lsun/awt/image/WritableRasterNative;", nullptr, $PRIVATE, $field(D3DSurfaceData, wrn)},
	{"d3dRenderPipe", "Lsun/java2d/d3d/D3DRenderer;", nullptr, $PROTECTED | $STATIC, $staticField(D3DSurfaceData, d3dRenderPipe)},
	{"d3dTxRenderPipe", "Lsun/java2d/pipe/PixelToParallelogramConverter;", nullptr, $PROTECTED | $STATIC, $staticField(D3DSurfaceData, d3dTxRenderPipe)},
	{"d3dAAPgramPipe", "Lsun/java2d/pipe/ParallelogramPipe;", nullptr, $PROTECTED | $STATIC, $staticField(D3DSurfaceData, d3dAAPgramPipe)},
	{"d3dTextPipe", "Lsun/java2d/d3d/D3DTextRenderer;", nullptr, $PROTECTED | $STATIC, $staticField(D3DSurfaceData, d3dTextPipe)},
	{"d3dImagePipe", "Lsun/java2d/d3d/D3DDrawImage;", nullptr, $PROTECTED | $STATIC, $staticField(D3DSurfaceData, d3dImagePipe)},
	{}
};

$MethodInfo _D3DSurfaceData_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getNativeOps", "()J", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/windows/WComponentPeer;Lsun/java2d/d3d/D3DGraphicsConfig;IILjava/awt/Image;Ljava/awt/image/ColorModel;IILsun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType;I)V", nullptr, $PROTECTED, $method(static_cast<void(D3DSurfaceData::*)($WComponentPeer*,$D3DGraphicsConfig*,int32_t,int32_t,$Image*,$ColorModel*,int32_t,int32_t,$ExtendedBufferCapabilities$VSyncType*,int32_t)>(&D3DSurfaceData::init$))},
	{"canRenderLCDText", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $PUBLIC},
	{"copyArea", "(Lsun/java2d/SunGraphics2D;IIIIII)Z", nullptr, $PUBLIC},
	{"createData", "(Lsun/awt/windows/WComponentPeer;Ljava/awt/Image;)Lsun/java2d/d3d/D3DSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<D3DSurfaceData*(*)($WComponentPeer*,$Image*)>(&D3DSurfaceData::createData))},
	{"createData", "(Lsun/awt/windows/WComponentPeer;)Lsun/java2d/d3d/D3DSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<D3DSurfaceData*(*)($WComponentPeer*)>(&D3DSurfaceData::createData))},
	{"createData", "(Lsun/java2d/d3d/D3DGraphicsConfig;IILjava/awt/image/ColorModel;Ljava/awt/Image;I)Lsun/java2d/d3d/D3DSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<D3DSurfaceData*(*)($D3DGraphicsConfig*,int32_t,int32_t,$ColorModel*,$Image*,int32_t)>(&D3DSurfaceData::createData))},
	{"dbGetPixelNative", "(JII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int32_t,int32_t)>(&D3DSurfaceData::dbGetPixelNative))},
	{"dbSetPixelNative", "(JIII)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t,int32_t,int32_t)>(&D3DSurfaceData::dbSetPixelNative))},
	{"disableAccelerationForSurface", "()V", nullptr, 0},
	{"dispose", "(J)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t)>(&D3DSurfaceData::dispose))},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getContext", "()Lsun/java2d/d3d/D3DContext;", nullptr, $PUBLIC | $FINAL},
	{"getCustomSurfaceType", "(I)Lsun/java2d/loops/SurfaceType;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SurfaceType*(*)(int32_t)>(&D3DSurfaceData::getCustomSurfaceType))},
	{"getDefaultScaleX", "()D", nullptr, $PUBLIC},
	{"getDefaultScaleY", "()D", nullptr, $PUBLIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getGC", "(Lsun/awt/windows/WComponentPeer;)Lsun/java2d/d3d/D3DGraphicsConfig;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$D3DGraphicsConfig*(*)($WComponentPeer*)>(&D3DSurfaceData::getGC))},
	{"getMaskFill", "(Lsun/java2d/SunGraphics2D;)Lsun/java2d/loops/MaskFill;", nullptr, $PROTECTED},
	{"getNativeBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getNativeResource", "(I)J", nullptr, $PUBLIC},
	{"getNativeResourceNative", "(JI)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&D3DSurfaceData::getNativeResourceNative))},
	{"getPeer", "()Lsun/awt/windows/WComponentPeer;", nullptr, 0},
	{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC | $FINAL},
	{"initFlipBackbuffer", "(JJIII)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(D3DSurfaceData::*)(int64_t,int64_t,int32_t,int32_t,int32_t)>(&D3DSurfaceData::initFlipBackbuffer))},
	{"initOps", "(III)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(D3DSurfaceData::*)(int32_t,int32_t,int32_t)>(&D3DSurfaceData::initOps))},
	{"initRTSurface", "(JZ)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(D3DSurfaceData::*)(int64_t,bool)>(&D3DSurfaceData::initRTSurface))},
	{"initSurface", "()V", nullptr, $PROTECTED},
	{"initSurfaceNow", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(D3DSurfaceData::*)()>(&D3DSurfaceData::initSurfaceNow))},
	{"initTexture", "(JZZ)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(D3DSurfaceData::*)(int64_t,bool,bool)>(&D3DSurfaceData::initTexture))},
	{"*isSurfaceLost", "()Z", nullptr, $PUBLIC},
	{"*isValid", "()Z", nullptr, $PUBLIC | $FINAL},
	{"makeProxyFor", "(Lsun/java2d/SurfaceData;)Lsun/java2d/SurfaceDataProxy;", nullptr, $PUBLIC},
	{"*markDirty", "()V", nullptr, $PUBLIC | $FINAL},
	{"restoreSurface", "()V", nullptr, 0},
	{"setSurfaceLost", "(Z)V", nullptr, $PUBLIC},
	{"swapBuffers", "(Lsun/java2d/d3d/D3DSurfaceData;IIII)V", nullptr, $STATIC, $method(static_cast<void(*)(D3DSurfaceData*,int32_t,int32_t,int32_t,int32_t)>(&D3DSurfaceData::swapBuffers))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateWindowAccelImpl", "(JJII)Z", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,int64_t,int32_t,int32_t)>(&D3DSurfaceData::updateWindowAccelImpl))},
	{"validatePipe", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_dbGetPixelNative 11
#define _METHOD_INDEX_dbSetPixelNative 12
#define _METHOD_INDEX_getNativeResourceNative 27
#define _METHOD_INDEX_initFlipBackbuffer 32
#define _METHOD_INDEX_initOps 33
#define _METHOD_INDEX_initRTSurface 34
#define _METHOD_INDEX_initTexture 37
#define _METHOD_INDEX_updateWindowAccelImpl 46

$InnerClassInfo _D3DSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DSurfaceData$D3DWindowSurfaceData", "sun.java2d.d3d.D3DSurfaceData", "D3DWindowSurfaceData", $PUBLIC | $STATIC},
	{"sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative", "sun.java2d.d3d.D3DSurfaceData", "D3DDataBufferNative", $STATIC},
	{"sun.java2d.d3d.D3DSurfaceData$2", nullptr, nullptr, 0},
	{"sun.java2d.d3d.D3DSurfaceData$1", nullptr, nullptr, 0},
	{"sun.java2d.d3d.D3DSurfaceData$1Status", nullptr, "Status", 0},
	{}
};

$ClassInfo _D3DSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.d3d.D3DSurfaceData",
	"sun.java2d.SurfaceData",
	"sun.java2d.pipe.hw.AccelSurface",
	_D3DSurfaceData_FieldInfo_,
	_D3DSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_D3DSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DSurfaceData$D3DWindowSurfaceData,sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative,sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative$2,sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative$1,sun.java2d.d3d.D3DSurfaceData$2,sun.java2d.d3d.D3DSurfaceData$1,sun.java2d.d3d.D3DSurfaceData$1Status"
};

$Object* allocate$D3DSurfaceData($Class* clazz) {
	return $of($alloc(D3DSurfaceData));
}

void D3DSurfaceData::markDirty() {
	this->$SurfaceData::markDirty();
}

bool D3DSurfaceData::isSurfaceLost() {
	 return this->$SurfaceData::isSurfaceLost();
}

bool D3DSurfaceData::isValid() {
	 return this->$SurfaceData::isValid();
}

int64_t D3DSurfaceData::getNativeOps() {
	 return this->$SurfaceData::getNativeOps();
}

int32_t D3DSurfaceData::hashCode() {
	 return this->$SurfaceData::hashCode();
}

bool D3DSurfaceData::equals(Object$* arg0) {
	 return this->$SurfaceData::equals(arg0);
}

$Object* D3DSurfaceData::clone() {
	 return this->$SurfaceData::clone();
}

$String* D3DSurfaceData::toString() {
	 return this->$SurfaceData::toString();
}

void D3DSurfaceData::finalize() {
	this->$SurfaceData::finalize();
}

$String* D3DSurfaceData::DESC_D3D_SURFACE = nullptr;
$String* D3DSurfaceData::DESC_D3D_SURFACE_RTT = nullptr;
$String* D3DSurfaceData::DESC_D3D_TEXTURE = nullptr;
$SurfaceType* D3DSurfaceData::D3DSurface = nullptr;
$SurfaceType* D3DSurfaceData::D3DSurfaceRTT = nullptr;
$SurfaceType* D3DSurfaceData::D3DTexture = nullptr;
$D3DRenderer* D3DSurfaceData::d3dRenderPipe = nullptr;
$PixelToParallelogramConverter* D3DSurfaceData::d3dTxRenderPipe = nullptr;
$ParallelogramPipe* D3DSurfaceData::d3dAAPgramPipe = nullptr;
$D3DTextRenderer* D3DSurfaceData::d3dTextPipe = nullptr;
$D3DDrawImage* D3DSurfaceData::d3dImagePipe = nullptr;

bool D3DSurfaceData::initTexture(int64_t pData, bool isRTT, bool isOpaque) {
	bool $ret = false;
	$prepareNative(D3DSurfaceData, initTexture, bool, int64_t pData, bool isRTT, bool isOpaque);
	$ret = $invokeNative(D3DSurfaceData, initTexture, pData, isRTT, isOpaque);
	$finishNative();
	return $ret;
}

bool D3DSurfaceData::initFlipBackbuffer(int64_t pData, int64_t pPeerData, int32_t numbuffers, int32_t swapEffect, int32_t syncType) {
	bool $ret = false;
	$prepareNative(D3DSurfaceData, initFlipBackbuffer, bool, int64_t pData, int64_t pPeerData, int32_t numbuffers, int32_t swapEffect, int32_t syncType);
	$ret = $invokeNative(D3DSurfaceData, initFlipBackbuffer, pData, pPeerData, numbuffers, swapEffect, syncType);
	$finishNative();
	return $ret;
}

bool D3DSurfaceData::initRTSurface(int64_t pData, bool isOpaque) {
	bool $ret = false;
	$prepareNative(D3DSurfaceData, initRTSurface, bool, int64_t pData, bool isOpaque);
	$ret = $invokeNative(D3DSurfaceData, initRTSurface, pData, isOpaque);
	$finishNative();
	return $ret;
}

void D3DSurfaceData::initOps(int32_t screen, int32_t width, int32_t height) {
	$prepareNative(D3DSurfaceData, initOps, void, int32_t screen, int32_t width, int32_t height);
	$invokeNative(D3DSurfaceData, initOps, screen, width, height);
	$finishNative();
}

void D3DSurfaceData::init$($WComponentPeer* peer, $D3DGraphicsConfig* gc, int32_t width, int32_t height, $Image* image, $ColorModel* cm, int32_t numBackBuffers, int32_t swapEffect, $ExtendedBufferCapabilities$VSyncType* vSyncType, int32_t type) {
	$SurfaceData::init$($(getCustomSurfaceType(type)), cm);
	$set(this, graphicsDevice, $nc(gc)->getD3DDevice());
	this->scaleX = type == $AccelSurface::TEXTURE ? (float)1 : $nc(this->graphicsDevice)->getDefaultScaleX();
	this->scaleY = type == $AccelSurface::TEXTURE ? (float)1 : $nc(this->graphicsDevice)->getDefaultScaleY();
	$set(this, peer, peer);
	this->type = type;
	if (this->scaleX == 1 && this->scaleY == 1) {
		this->width = width;
		this->height = height;
	} else if ($instanceOf($WWindowPeer, peer)) {
		$var($Dimension, scaledSize, $nc(($cast($WWindowPeer, peer)))->getScaledWindowSize());
		this->width = $nc(scaledSize)->width;
		this->height = scaledSize->height;
	} else {
		this->width = $Region::clipRound(width * this->scaleX);
		this->height = $Region::clipRound(height * this->scaleY);
	}
	$set(this, offscreenImage, image);
	this->backBuffersNum = numBackBuffers;
	this->swapEffect = swapEffect;
	$set(this, syncType, vSyncType);
	initOps($nc(this->graphicsDevice)->getScreen(), this->width, this->height);
	if (type == $AccelSurface::WINDOW) {
		setSurfaceLost(true);
	} else {
		initSurface();
	}
	setBlitProxyKey($(gc->getProxyKey()));
}

double D3DSurfaceData::getDefaultScaleX() {
	return this->scaleX;
}

double D3DSurfaceData::getDefaultScaleY() {
	return this->scaleY;
}

$SurfaceDataProxy* D3DSurfaceData::makeProxyFor($SurfaceData* srcData) {
	return $D3DSurfaceDataProxy::createProxy(srcData, $cast($D3DGraphicsConfig, $($nc(this->graphicsDevice)->getDefaultConfiguration())));
}

D3DSurfaceData* D3DSurfaceData::createData($WComponentPeer* peer, $Image* image) {
	$init(D3DSurfaceData);
	$var($D3DGraphicsConfig, gc, getGC(peer));
	if (gc == nullptr || !$nc(peer)->isAccelCapable()) {
		return nullptr;
	}
	$var($BufferCapabilities, caps, $nc(peer)->getBackBufferCaps());
	$init($ExtendedBufferCapabilities$VSyncType);
	$ExtendedBufferCapabilities$VSyncType* vSyncType = $ExtendedBufferCapabilities$VSyncType::VSYNC_DEFAULT;
	if ($instanceOf($ExtendedBufferCapabilities, caps)) {
		vSyncType = $nc(($cast($ExtendedBufferCapabilities, caps)))->getVSync();
	}
	$var($Rectangle, r, peer->getBounds());
	$var($BufferCapabilities$FlipContents, flip, $nc(caps)->getFlipContents());
	int32_t swapEffect = 0;
	$init($BufferCapabilities$FlipContents);
	if (flip == $BufferCapabilities$FlipContents::COPIED) {
		swapEffect = D3DSurfaceData::SWAP_COPY;
	} else {
		if (flip == $BufferCapabilities$FlipContents::PRIOR) {
			swapEffect = D3DSurfaceData::SWAP_FLIP;
		} else {
			swapEffect = D3DSurfaceData::SWAP_DISCARD;
		}
	}
	$var($WComponentPeer, var$0, peer);
	$var($D3DGraphicsConfig, var$1, gc);
	int32_t var$2 = $nc(r)->width;
	int32_t var$3 = r->height;
	$var($Image, var$4, image);
	$var($ColorModel, var$5, peer->getColorModel());
	return $new(D3DSurfaceData, var$0, var$1, var$2, var$3, var$4, var$5, peer->getBackBuffersNum(), swapEffect, vSyncType, $AccelSurface::FLIP_BACKBUFFER);
}

D3DSurfaceData* D3DSurfaceData::createData($WComponentPeer* peer) {
	$init(D3DSurfaceData);
	$var($D3DGraphicsConfig, gc, getGC(peer));
	if (gc == nullptr || !$nc(peer)->isAccelCapable()) {
		return nullptr;
	}
	return $new($D3DSurfaceData$D3DWindowSurfaceData, peer, gc);
}

D3DSurfaceData* D3DSurfaceData::createData($D3DGraphicsConfig* gc, int32_t width, int32_t height, $ColorModel* cm, $Image* image, int32_t type) {
	$init(D3DSurfaceData);
	if (type == $AccelSurface::RT_TEXTURE) {
		bool isOpaque = $nc(cm)->getTransparency() == $Transparency::OPAQUE;
		int32_t cap = isOpaque ? 8 : 4;
		if (!$nc($($nc(gc)->getD3DDevice()))->isCapPresent(cap)) {
			type = $AccelSurface::RT_PLAIN;
		}
	}
	$var(D3DSurfaceData, ret, nullptr);
	try {
		$init($ExtendedBufferCapabilities$VSyncType);
		$assign(ret, $new(D3DSurfaceData, nullptr, gc, width, height, image, cm, 0, D3DSurfaceData::SWAP_DISCARD, $ExtendedBufferCapabilities$VSyncType::VSYNC_DEFAULT, type));
	} catch ($InvalidPipeException&) {
		$var($InvalidPipeException, ipe, $catch());
		if (type == $AccelSurface::RT_TEXTURE) {
			if ($nc(($cast($SunVolatileImage, image)))->getForcedAccelSurfaceType() != $AccelSurface::RT_TEXTURE) {
				type = $AccelSurface::RT_PLAIN;
				$init($ExtendedBufferCapabilities$VSyncType);
				$assign(ret, $new(D3DSurfaceData, nullptr, gc, width, height, image, cm, 0, D3DSurfaceData::SWAP_DISCARD, $ExtendedBufferCapabilities$VSyncType::VSYNC_DEFAULT, type));
			}
		}
	}
	return ret;
}

$SurfaceType* D3DSurfaceData::getCustomSurfaceType(int32_t d3dType) {
	$init(D3DSurfaceData);
	switch (d3dType) {
	case $AccelSurface::TEXTURE:
		{
			return D3DSurfaceData::D3DTexture;
		}
	case $AccelSurface::RT_TEXTURE:
		{
			return D3DSurfaceData::D3DSurfaceRTT;
		}
	default:
		{
			return D3DSurfaceData::D3DSurface;
		}
	}
}

bool D3DSurfaceData::initSurfaceNow() {
	bool isOpaque = (getTransparency() == $Transparency::OPAQUE);
	switch (this->type) {
	case $AccelSurface::RT_PLAIN:
		{
			return initRTSurface(getNativeOps(), isOpaque);
		}
	case $AccelSurface::TEXTURE:
		{
			return initTexture(getNativeOps(), false, isOpaque);
		}
	case $AccelSurface::RT_TEXTURE:
		{
			return initTexture(getNativeOps(), true, isOpaque);
		}
	case $AccelSurface::WINDOW:
		{}
	case $AccelSurface::FLIP_BACKBUFFER:
		{
			int64_t var$0 = getNativeOps();
			int64_t var$1 = $nc(this->peer)->getData();
			int32_t var$2 = this->backBuffersNum;
			int32_t var$3 = this->swapEffect;
			return initFlipBackbuffer(var$0, var$1, var$2, var$3, $nc(this->syncType)->id());
		}
	default:
		{
			return false;
		}
	}
}

void D3DSurfaceData::initSurface() {
	$synchronized(this) {
		$set(this, wrn, nullptr);
	}
	{
	}
	$var($D3DSurfaceData$1Status, status, $new($D3DSurfaceData$1Status, this));
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			rq->flushAndInvokeNow($$new($D3DSurfaceData$1, this, status));
			if (!status->success) {
				$throwNew($InvalidPipeException, "Error creating D3DSurface"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$BufferedContext* D3DSurfaceData::getContext() {
	return $nc(this->graphicsDevice)->getContext();
}

int32_t D3DSurfaceData::getType() {
	return this->type;
}

int32_t D3DSurfaceData::dbGetPixelNative(int64_t pData, int32_t x, int32_t y) {
	$init(D3DSurfaceData);
	int32_t $ret = 0;
	$prepareNativeStatic(D3DSurfaceData, dbGetPixelNative, int32_t, int64_t pData, int32_t x, int32_t y);
	$ret = $invokeNativeStatic(D3DSurfaceData, dbGetPixelNative, pData, x, y);
	$finishNativeStatic();
	return $ret;
}

void D3DSurfaceData::dbSetPixelNative(int64_t pData, int32_t x, int32_t y, int32_t pixel) {
	$init(D3DSurfaceData);
	$prepareNativeStatic(D3DSurfaceData, dbSetPixelNative, void, int64_t pData, int32_t x, int32_t y, int32_t pixel);
	$invokeNativeStatic(D3DSurfaceData, dbSetPixelNative, pData, x, y, pixel);
	$finishNativeStatic();
}

$Raster* D3DSurfaceData::getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	$synchronized(this) {
		if (this->wrn == nullptr) {
			$var($DirectColorModel, dcm, $cast($DirectColorModel, getColorModel()));
			$var($SampleModel, smHw, nullptr);
			int32_t dataType = 0;
			int32_t scanStride = this->width;
			if ($nc(dcm)->getPixelSize() > 16) {
				dataType = $DataBuffer::TYPE_INT;
			} else {
				dataType = $DataBuffer::TYPE_USHORT;
			}
			$assign(smHw, $new($SinglePixelPackedSampleModel, dataType, this->width, this->height, scanStride, $($nc(dcm)->getMasks())));
			$var($DataBuffer, dbn, $new($D3DSurfaceData$D3DDataBufferNative, this, dataType, this->width, this->height));
			$set(this, wrn, $WritableRasterNative::createNativeRaster(smHw, dbn));
		}
		return this->wrn;
	}
}

bool D3DSurfaceData::canRenderLCDText($SunGraphics2D* sg2d) {
	bool var$0 = $nc(this->graphicsDevice)->isCapPresent(0x00010000) && $nc(sg2d)->compositeState <= $SunGraphics2D::COMP_ISCOPY && sg2d->paintState <= $SunGraphics2D::PAINT_OPAQUECOLOR;
	return var$0 && $nc(sg2d->surfaceData)->getTransparency() == $Transparency::OPAQUE;
}

void D3DSurfaceData::disableAccelerationForSurface() {
	if (this->offscreenImage != nullptr) {
		$var($SurfaceManager, sm, $SurfaceManager::getManager(this->offscreenImage));
		if ($instanceOf($D3DVolatileSurfaceManager, sm)) {
			setSurfaceLost(true);
			$nc(($cast($D3DVolatileSurfaceManager, sm)))->setAccelerationEnabled(false);
		}
	}
}

void D3DSurfaceData::validatePipe($SunGraphics2D* sg2d) {
	$var($TextPipe, textpipe, nullptr);
	bool validated = false;
	if ($nc(sg2d)->compositeState >= $SunGraphics2D::COMP_XOR) {
		$SurfaceData::validatePipe(sg2d);
		$set(sg2d, imagepipe, D3DSurfaceData::d3dImagePipe);
		disableAccelerationForSurface();
		return;
	}
	if (($nc(sg2d)->compositeState <= $SunGraphics2D::COMP_ISCOPY && sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR) || ($nc(sg2d)->compositeState == $SunGraphics2D::COMP_ALPHA && sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR && ($nc(($cast($AlphaComposite, sg2d->composite)))->getRule() == $AlphaComposite::SRC_OVER)) || ($nc(sg2d)->compositeState == $SunGraphics2D::COMP_XOR && sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR)) {
		$assign(textpipe, D3DSurfaceData::d3dTextPipe);
	} else {
		$SurfaceData::validatePipe(sg2d);
		$assign(textpipe, sg2d->textpipe);
		validated = true;
	}
	$var($PixelToParallelogramConverter, txPipe, nullptr);
	$var($D3DRenderer, nonTxPipe, nullptr);
	if ($nc(sg2d)->antialiasHint != $SunHints::INTVAL_ANTIALIAS_ON) {
		if (sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR) {
			if (sg2d->compositeState <= $SunGraphics2D::COMP_XOR) {
				$assign(txPipe, D3DSurfaceData::d3dTxRenderPipe);
				$assign(nonTxPipe, D3DSurfaceData::d3dRenderPipe);
			}
		} else if (sg2d->compositeState <= $SunGraphics2D::COMP_ALPHA) {
			if ($D3DPaints::isValid(sg2d)) {
				$assign(txPipe, D3DSurfaceData::d3dTxRenderPipe);
				$assign(nonTxPipe, D3DSurfaceData::d3dRenderPipe);
			}
		}
	} else if (sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR) {
		$init($CompositeType);
		if ($nc(this->graphicsDevice)->isCapPresent(0x00080000) && (sg2d->imageComp == $CompositeType::SrcOverNoEa || sg2d->imageComp == $CompositeType::SrcOver)) {
			if (!validated) {
				$SurfaceData::validatePipe(sg2d);
				validated = true;
			}
			$var($PixelToParallelogramConverter, aaConverter, $new($PixelToParallelogramConverter, sg2d->shapepipe, D3DSurfaceData::d3dAAPgramPipe, 1.0 / 8.0, 0.499, false));
			$set(sg2d, drawpipe, aaConverter);
			$set(sg2d, fillpipe, aaConverter);
			$set(sg2d, shapepipe, aaConverter);
		} else if (sg2d->compositeState == $SunGraphics2D::COMP_XOR) {
			$assign(txPipe, D3DSurfaceData::d3dTxRenderPipe);
			$assign(nonTxPipe, D3DSurfaceData::d3dRenderPipe);
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
	$set(sg2d, imagepipe, D3DSurfaceData::d3dImagePipe);
}

$MaskFill* D3DSurfaceData::getMaskFill($SunGraphics2D* sg2d) {
	if ($nc(sg2d)->paintState > $SunGraphics2D::PAINT_ALPHACOLOR) {
		bool var$0 = !$D3DPaints::isValid(sg2d);
		if (var$0 || !$nc(this->graphicsDevice)->isCapPresent(16)) {
			return nullptr;
		}
	}
	return $SurfaceData::getMaskFill(sg2d);
}

bool D3DSurfaceData::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	if ($nc(sg2d)->compositeState >= $SunGraphics2D::COMP_XOR) {
		return false;
	}
	$nc(D3DSurfaceData::d3dRenderPipe)->copyArea(sg2d, x, y, w, h, dx, dy);
	return true;
}

void D3DSurfaceData::flush() {
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($RenderBuffer, buf, rq->getBuffer());
			rq->ensureCapacityAndAlignment(12, 4);
			$nc(buf)->putInt(72);
			buf->putLong(getNativeOps());
			rq->flushNow();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void D3DSurfaceData::dispose(int64_t pData) {
	$init(D3DSurfaceData);
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($RenderBuffer, buf, rq->getBuffer());
			rq->ensureCapacityAndAlignment(12, 4);
			$nc(buf)->putInt(73);
			buf->putLong(pData);
			rq->flushNow();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void D3DSurfaceData::swapBuffers(D3DSurfaceData* sd, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$init(D3DSurfaceData);
	int64_t pData = $nc(sd)->getNativeOps();
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	if ($D3DRenderQueue::isRenderQueueThread()) {
		if (!$nc(rq)->tryLock()) {
			$var($Component, target, $cast($Component, $nc($(sd->getPeer()))->getTarget()));
			$SunToolkit::executeOnEventHandlerThread(target, $$new($D3DSurfaceData$2, sd, x1, y1, x2, y2, target));
			return;
		}
	} else {
		$nc(rq)->lock();
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($RenderBuffer, buf, $nc(rq)->getBuffer());
			rq->ensureCapacityAndAlignment(28, 4);
			$nc(buf)->putInt(80);
			buf->putLong(pData);
			buf->putInt(x1);
			buf->putInt(y1);
			buf->putInt(x2);
			buf->putInt(y2);
			rq->flushNow();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(rq)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Object* D3DSurfaceData::getDestination() {
	return $of(this->offscreenImage);
}

$Rectangle* D3DSurfaceData::getBounds() {
	if (this->type == $AccelSurface::FLIP_BACKBUFFER || this->type == $AccelSurface::WINDOW) {
		double scaleX = getDefaultScaleX();
		double scaleY = getDefaultScaleY();
		$var($Rectangle, r, $nc(this->peer)->getBounds());
		$nc(r)->x = (r->y = 0);
		r->width = $Region::clipRound(r->width * scaleX);
		r->height = $Region::clipRound(r->height * scaleY);
		return r;
	} else {
		return $new($Rectangle, this->width, this->height);
	}
}

$Rectangle* D3DSurfaceData::getNativeBounds() {
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Rectangle, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $new($Rectangle, this->nativeWidth, this->nativeHeight));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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

$GraphicsConfiguration* D3DSurfaceData::getDeviceConfiguration() {
	return $nc(this->graphicsDevice)->getDefaultConfiguration();
}

$SurfaceData* D3DSurfaceData::getReplacement() {
	return restoreContents(this->offscreenImage);
}

$D3DGraphicsConfig* D3DSurfaceData::getGC($WComponentPeer* peer) {
	$init(D3DSurfaceData);
	$var($GraphicsConfiguration, gc, nullptr);
	if (peer != nullptr) {
		$assign(gc, peer->getGraphicsConfiguration());
	} else {
		$var($GraphicsEnvironment, env, $GraphicsEnvironment::getLocalGraphicsEnvironment());
		$var($GraphicsDevice, gd, $nc(env)->getDefaultScreenDevice());
		$assign(gc, $nc(gd)->getDefaultConfiguration());
	}
	return ($instanceOf($D3DGraphicsConfig, gc)) ? $cast($D3DGraphicsConfig, gc) : ($D3DGraphicsConfig*)nullptr;
}

void D3DSurfaceData::restoreSurface() {
	initSurface();
}

$WComponentPeer* D3DSurfaceData::getPeer() {
	return this->peer;
}

void D3DSurfaceData::setSurfaceLost(bool lost) {
	$SurfaceData::setSurfaceLost(lost);
	if (lost && this->offscreenImage != nullptr) {
		$var($SurfaceManager, sm, $SurfaceManager::getManager(this->offscreenImage));
		$nc(sm)->acceleratedSurfaceLost();
	}
}

int64_t D3DSurfaceData::getNativeResourceNative(int64_t sdops, int32_t resType) {
	$init(D3DSurfaceData);
	int64_t $ret = 0;
	$prepareNativeStatic(D3DSurfaceData, getNativeResourceNative, int64_t, int64_t sdops, int32_t resType);
	$ret = $invokeNativeStatic(D3DSurfaceData, getNativeResourceNative, sdops, resType);
	$finishNativeStatic();
	return $ret;
}

int64_t D3DSurfaceData::getNativeResource(int32_t resType) {
	return getNativeResourceNative(getNativeOps(), resType);
}

bool D3DSurfaceData::updateWindowAccelImpl(int64_t pd3dsd, int64_t pData, int32_t w, int32_t h) {
	$init(D3DSurfaceData);
	bool $ret = false;
	$prepareNativeStatic(D3DSurfaceData, updateWindowAccelImpl, bool, int64_t pd3dsd, int64_t pData, int32_t w, int32_t h);
	$ret = $invokeNativeStatic(D3DSurfaceData, updateWindowAccelImpl, pd3dsd, pData, w, h);
	$finishNativeStatic();
	return $ret;
}

void clinit$D3DSurfaceData($Class* class$) {
	$assignStatic(D3DSurfaceData::DESC_D3D_SURFACE, "D3D Surface"_s);
	$assignStatic(D3DSurfaceData::DESC_D3D_SURFACE_RTT, "D3D Surface (render-to-texture)"_s);
	$assignStatic(D3DSurfaceData::DESC_D3D_TEXTURE, "D3D Texture"_s);
	$init($SurfaceType);
	$init($PixelConverter$ArgbPre);
	$assignStatic(D3DSurfaceData::D3DSurface, $nc($SurfaceType::Any)->deriveSubType(D3DSurfaceData::DESC_D3D_SURFACE, $PixelConverter$ArgbPre::instance));
	$assignStatic(D3DSurfaceData::D3DSurfaceRTT, $nc(D3DSurfaceData::D3DSurface)->deriveSubType(D3DSurfaceData::DESC_D3D_SURFACE_RTT));
	$assignStatic(D3DSurfaceData::D3DTexture, $nc($SurfaceType::Any)->deriveSubType(D3DSurfaceData::DESC_D3D_TEXTURE));
	{
		$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
		$assignStatic(D3DSurfaceData::d3dImagePipe, $new($D3DDrawImage));
		$assignStatic(D3DSurfaceData::d3dTextPipe, $new($D3DTextRenderer, rq));
		$assignStatic(D3DSurfaceData::d3dRenderPipe, $new($D3DRenderer, rq));
		if ($GraphicsPrimitive::tracingEnabled()) {
			$assignStatic(D3DSurfaceData::d3dTextPipe, $nc(D3DSurfaceData::d3dTextPipe)->traceWrap());
			$assignStatic(D3DSurfaceData::d3dRenderPipe, $nc(D3DSurfaceData::d3dRenderPipe)->traceWrap());
		}
		$assignStatic(D3DSurfaceData::d3dAAPgramPipe, $nc(D3DSurfaceData::d3dRenderPipe)->getAAParallelogramPipe());
		$assignStatic(D3DSurfaceData::d3dTxRenderPipe, $new($PixelToParallelogramConverter, D3DSurfaceData::d3dRenderPipe, D3DSurfaceData::d3dRenderPipe, 1.0, 0.25, true));
		$D3DBlitLoops::register$();
		$D3DMaskFill::register$();
		$D3DMaskBlit::register$();
	}
}

D3DSurfaceData::D3DSurfaceData() {
}

$Class* D3DSurfaceData::load$($String* name, bool initialize) {
	$loadClass(D3DSurfaceData, name, initialize, &_D3DSurfaceData_ClassInfo_, clinit$D3DSurfaceData, allocate$D3DSurfaceData);
	return class$;
}

$Class* D3DSurfaceData::class$ = nullptr;

		} // d3d
	} // java2d
} // sun