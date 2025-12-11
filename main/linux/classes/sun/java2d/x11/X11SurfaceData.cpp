#include <sun/java2d/x11/X11SurfaceData.h>

#include <java/awt/Composite.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/lang/InternalError.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/SunHints.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/awt/image/PixelConverter$Ushort555Rgb.h>
#include <sun/awt/image/PixelConverter$Ushort565Rgb.h>
#include <sun/awt/image/PixelConverter$Xbgr.h>
#include <sun/awt/image/PixelConverter$Xrgb.h>
#include <sun/awt/image/PixelConverter.h>
#include <sun/font/X11TextRenderer.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/SurfaceDataProxy.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FontInfo.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/RenderLoops.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/XORComposite.h>
#include <sun/java2d/pipe/DrawImagePipe.h>
#include <sun/java2d/pipe/GlyphListPipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/PixelFillPipe.h>
#include <sun/java2d/pipe/PixelToShapeConverter.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <sun/java2d/pipe/TextPipe.h>
#include <sun/java2d/pipe/ValidatePipe.h>
#include <sun/java2d/x11/X11PMBlitBgLoops.h>
#include <sun/java2d/x11/X11PMBlitLoops.h>
#include <sun/java2d/x11/X11Renderer.h>
#include <sun/java2d/x11/X11SurfaceData$LazyPipe.h>
#include <sun/java2d/x11/X11SurfaceData$X11PixmapSurfaceData.h>
#include <sun/java2d/x11/X11SurfaceData$X11WindowSurfaceData.h>
#include <sun/java2d/x11/X11SurfaceDataProxy.h>
#include <sun/java2d/x11/XSurfaceData.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef BITMASK
#undef CLIP_SHAPE
#undef COMP_ISCOPY
#undef COMP_XOR
#undef DESC_3BYTE_BGR_X11
#undef DESC_3BYTE_BGR_X11_BM
#undef DESC_3BYTE_RGB_X11
#undef DESC_3BYTE_RGB_X11_BM
#undef DESC_4BYTE_ABGR_PRE_X11
#undef DESC_BYTE_GRAY_X11
#undef DESC_BYTE_GRAY_X11_BM
#undef DESC_BYTE_IND_OPQ_X11
#undef DESC_BYTE_IND_X11_BM
#undef DESC_INDEX8_GRAY_X11
#undef DESC_INDEX8_GRAY_X11_BM
#undef DESC_INT_ARGB_PRE_X11
#undef DESC_INT_BGR_X11
#undef DESC_INT_BGR_X11_BM
#undef DESC_INT_RGB_X11
#undef DESC_INT_RGB_X11_BM
#undef DESC_USHORT_INDEXED_X11
#undef DESC_USHORT_INDEXED_X11_BM
#undef FALSE
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

using $Composite = ::java::awt::Composite;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SunHints = ::sun::awt::SunHints;
using $SunToolkit = ::sun::awt::SunToolkit;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $PixelConverter$Ushort555Rgb = ::sun::awt::image::PixelConverter$Ushort555Rgb;
using $PixelConverter$Ushort565Rgb = ::sun::awt::image::PixelConverter$Ushort565Rgb;
using $PixelConverter$Xbgr = ::sun::awt::image::PixelConverter$Xbgr;
using $PixelConverter$Xrgb = ::sun::awt::image::PixelConverter$Xrgb;
using $X11TextRenderer = ::sun::font::X11TextRenderer;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceDataProxy = ::sun::java2d::SurfaceDataProxy;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $RenderLoops = ::sun::java2d::loops::RenderLoops;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $XORComposite = ::sun::java2d::loops::XORComposite;
using $DrawImagePipe = ::sun::java2d::pipe::DrawImagePipe;
using $GlyphListPipe = ::sun::java2d::pipe::GlyphListPipe;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;
using $PixelFillPipe = ::sun::java2d::pipe::PixelFillPipe;
using $PixelToShapeConverter = ::sun::java2d::pipe::PixelToShapeConverter;
using $Region = ::sun::java2d::pipe::Region;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;
using $TextPipe = ::sun::java2d::pipe::TextPipe;
using $ValidatePipe = ::sun::java2d::pipe::ValidatePipe;
using $X11PMBlitBgLoops = ::sun::java2d::x11::X11PMBlitBgLoops;
using $X11PMBlitLoops = ::sun::java2d::x11::X11PMBlitLoops;
using $X11Renderer = ::sun::java2d::x11::X11Renderer;
using $X11SurfaceData$LazyPipe = ::sun::java2d::x11::X11SurfaceData$LazyPipe;
using $X11SurfaceData$X11PixmapSurfaceData = ::sun::java2d::x11::X11SurfaceData$X11PixmapSurfaceData;
using $X11SurfaceData$X11WindowSurfaceData = ::sun::java2d::x11::X11SurfaceData$X11WindowSurfaceData;
using $X11SurfaceDataProxy = ::sun::java2d::x11::X11SurfaceDataProxy;
using $XSurfaceData = ::sun::java2d::x11::XSurfaceData;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace java2d {
		namespace x11 {

$FieldInfo _X11SurfaceData_FieldInfo_[] = {
	{"peer", "Lsun/awt/X11ComponentPeer;", nullptr, 0, $field(X11SurfaceData, peer)},
	{"graphicsConfig", "Lsun/awt/X11GraphicsConfig;", nullptr, 0, $field(X11SurfaceData, graphicsConfig)},
	{"solidloops", "Lsun/java2d/loops/RenderLoops;", nullptr, $PRIVATE, $field(X11SurfaceData, solidloops)},
	{"depth", "I", nullptr, $PROTECTED, $field(X11SurfaceData, depth)},
	{"DESC_INT_BGR_X11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_INT_BGR_X11)},
	{"DESC_INT_RGB_X11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_INT_RGB_X11)},
	{"DESC_4BYTE_ABGR_PRE_X11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_4BYTE_ABGR_PRE_X11)},
	{"DESC_INT_ARGB_PRE_X11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_INT_ARGB_PRE_X11)},
	{"DESC_BYTE_IND_OPQ_X11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_BYTE_IND_OPQ_X11)},
	{"DESC_INT_BGR_X11_BM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_INT_BGR_X11_BM)},
	{"DESC_INT_RGB_X11_BM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_INT_RGB_X11_BM)},
	{"DESC_BYTE_IND_X11_BM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_BYTE_IND_X11_BM)},
	{"DESC_BYTE_GRAY_X11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_BYTE_GRAY_X11)},
	{"DESC_INDEX8_GRAY_X11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_INDEX8_GRAY_X11)},
	{"DESC_BYTE_GRAY_X11_BM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_BYTE_GRAY_X11_BM)},
	{"DESC_INDEX8_GRAY_X11_BM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_INDEX8_GRAY_X11_BM)},
	{"DESC_3BYTE_RGB_X11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_3BYTE_RGB_X11)},
	{"DESC_3BYTE_BGR_X11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_3BYTE_BGR_X11)},
	{"DESC_3BYTE_RGB_X11_BM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_3BYTE_RGB_X11_BM)},
	{"DESC_3BYTE_BGR_X11_BM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_3BYTE_BGR_X11_BM)},
	{"DESC_USHORT_555_RGB_X11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_USHORT_555_RGB_X11)},
	{"DESC_USHORT_565_RGB_X11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_USHORT_565_RGB_X11)},
	{"DESC_USHORT_555_RGB_X11_BM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_USHORT_555_RGB_X11_BM)},
	{"DESC_USHORT_565_RGB_X11_BM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_USHORT_565_RGB_X11_BM)},
	{"DESC_USHORT_INDEXED_X11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_USHORT_INDEXED_X11)},
	{"DESC_USHORT_INDEXED_X11_BM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, DESC_USHORT_INDEXED_X11_BM)},
	{"IntBgrX11", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, IntBgrX11)},
	{"IntRgbX11", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, IntRgbX11)},
	{"FourByteAbgrPreX11", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, FourByteAbgrPreX11)},
	{"IntArgbPreX11", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, IntArgbPreX11)},
	{"ThreeByteRgbX11", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, ThreeByteRgbX11)},
	{"ThreeByteBgrX11", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, ThreeByteBgrX11)},
	{"UShort555RgbX11", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, UShort555RgbX11)},
	{"UShort565RgbX11", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, UShort565RgbX11)},
	{"UShortIndexedX11", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, UShortIndexedX11)},
	{"ByteIndexedOpaqueX11", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, ByteIndexedOpaqueX11)},
	{"ByteGrayX11", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, ByteGrayX11)},
	{"Index8GrayX11", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, Index8GrayX11)},
	{"IntBgrX11_BM", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, IntBgrX11_BM)},
	{"IntRgbX11_BM", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, IntRgbX11_BM)},
	{"ThreeByteRgbX11_BM", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, ThreeByteRgbX11_BM)},
	{"ThreeByteBgrX11_BM", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, ThreeByteBgrX11_BM)},
	{"UShort555RgbX11_BM", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, UShort555RgbX11_BM)},
	{"UShort565RgbX11_BM", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, UShort565RgbX11_BM)},
	{"UShortIndexedX11_BM", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, UShortIndexedX11_BM)},
	{"ByteIndexedX11_BM", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, ByteIndexedX11_BM)},
	{"ByteGrayX11_BM", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, ByteGrayX11_BM)},
	{"Index8GrayX11_BM", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X11SurfaceData, Index8GrayX11_BM)},
	{"accelerationEnabled", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC, $staticField(X11SurfaceData, accelerationEnabled)},
	{"x11pipe", "Lsun/java2d/x11/X11Renderer;", nullptr, $PROTECTED, $field(X11SurfaceData, x11pipe)},
	{"x11txpipe", "Lsun/java2d/pipe/PixelToShapeConverter;", nullptr, $PROTECTED, $field(X11SurfaceData, x11txpipe)},
	{"x11textpipe", "Lsun/java2d/pipe/TextPipe;", nullptr, $PROTECTED | $STATIC, $staticField(X11SurfaceData, x11textpipe)},
	{"xgc", "J", nullptr, $PRIVATE, $field(X11SurfaceData, xgc)},
	{"validatedClip", "Lsun/java2d/pipe/Region;", nullptr, $PRIVATE, $field(X11SurfaceData, validatedClip)},
	{"validatedXorComp", "Lsun/java2d/loops/XORComposite;", nullptr, $PRIVATE, $field(X11SurfaceData, validatedXorComp)},
	{"xorpixelmod", "I", nullptr, $PRIVATE, $field(X11SurfaceData, xorpixelmod)},
	{"validatedPixel", "I", nullptr, $PRIVATE, $field(X11SurfaceData, validatedPixel)},
	{"validatedExposures", "Z", nullptr, $PRIVATE, $field(X11SurfaceData, validatedExposures)},
	{"lazypipe", "Lsun/java2d/x11/X11SurfaceData$LazyPipe;", nullptr, $PRIVATE | $STATIC, $staticField(X11SurfaceData, lazypipe)},
	{}
};

$MethodInfo _X11SurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11ComponentPeer;Lsun/awt/X11GraphicsConfig;Lsun/java2d/loops/SurfaceType;Ljava/awt/image/ColorModel;)V", nullptr, $PROTECTED, $method(static_cast<void(X11SurfaceData::*)($X11ComponentPeer*,$X11GraphicsConfig*,$SurfaceType*,$ColorModel*)>(&X11SurfaceData::init$))},
	{"XSetCopyMode", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&X11SurfaceData::XSetCopyMode))},
	{"XSetForeground", "(JI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t)>(&X11SurfaceData::XSetForeground))},
	{"XSetXorMode", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&X11SurfaceData::XSetXorMode))},
	{"canSourceSendExposures", "(IIII)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"copyArea", "(Lsun/java2d/SunGraphics2D;IIIIII)Z", nullptr, $PUBLIC},
	{"createData", "(Lsun/awt/X11ComponentPeer;)Lsun/java2d/x11/X11SurfaceData$X11WindowSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$X11SurfaceData$X11WindowSurfaceData*(*)($X11ComponentPeer*)>(&X11SurfaceData::createData))},
	{"createData", "(Lsun/awt/X11GraphicsConfig;IILjava/awt/image/ColorModel;Ljava/awt/Image;JIZ)Lsun/java2d/x11/X11SurfaceData$X11PixmapSurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$X11SurfaceData$X11PixmapSurfaceData*(*)($X11GraphicsConfig*,int32_t,int32_t,$ColorModel*,$Image*,int64_t,int32_t,bool)>(&X11SurfaceData::createData))},
	{"getBlitGC", "(Lsun/java2d/pipe/Region;Z)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(X11SurfaceData::*)($Region*,bool)>(&X11SurfaceData::getBlitGC))},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getGC", "(Lsun/awt/X11ComponentPeer;)Lsun/awt/X11GraphicsConfig;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$X11GraphicsConfig*(*)($X11ComponentPeer*)>(&X11SurfaceData::getGC))},
	{"getGC", "(Lsun/java2d/pipe/Region;ILjava/awt/Composite;IZ)J", nullptr, $FINAL, $method(static_cast<int64_t(X11SurfaceData::*)($Region*,int32_t,$Composite*,int32_t,bool)>(&X11SurfaceData::getGC))},
	{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getRenderGC", "(Lsun/java2d/pipe/Region;ILjava/awt/Composite;I)J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(X11SurfaceData::*)($Region*,int32_t,$Composite*,int32_t)>(&X11SurfaceData::getRenderGC))},
	{"getRenderLoops", "(Lsun/java2d/SunGraphics2D;)Lsun/java2d/loops/RenderLoops;", nullptr, $PUBLIC},
	{"getSurfaceType", "(Lsun/awt/X11GraphicsConfig;I)Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceType*(*)($X11GraphicsConfig*,int32_t)>(&X11SurfaceData::getSurfaceType))},
	{"getSurfaceType", "(Lsun/awt/X11GraphicsConfig;IZ)Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceType*(*)($X11GraphicsConfig*,int32_t,bool)>(&X11SurfaceData::getSurfaceType))},
	{"initIDs", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($Class*)>(&X11SurfaceData::initIDs))},
	{"initSurface", "(IIIJ)V", nullptr, $PROTECTED | $NATIVE},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"isAccelerationEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&X11SurfaceData::isAccelerationEnabled))},
	{"isShmPMAvailable", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&X11SurfaceData::isShmPMAvailable))},
	{"makePipes", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"makeProxyFor", "(Lsun/java2d/SurfaceData;)Lsun/java2d/SurfaceDataProxy;", nullptr, $PUBLIC},
	{"validatePipe", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_XSetCopyMode 1
#define _METHOD_INDEX_XSetForeground 2
#define _METHOD_INDEX_XSetXorMode 3
#define _METHOD_INDEX_initIDs 17
#define _METHOD_INDEX_initSurface 18
#define _METHOD_INDEX_isShmPMAvailable 21

$InnerClassInfo _X11SurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.x11.X11SurfaceData$LazyPipe", "sun.java2d.x11.X11SurfaceData", "LazyPipe", $PUBLIC | $STATIC},
	{"sun.java2d.x11.X11SurfaceData$X11PixmapSurfaceData", "sun.java2d.x11.X11SurfaceData", "X11PixmapSurfaceData", $PRIVATE | $STATIC | $FINAL},
	{"sun.java2d.x11.X11SurfaceData$X11WindowSurfaceData", "sun.java2d.x11.X11SurfaceData", "X11WindowSurfaceData", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _X11SurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.x11.X11SurfaceData",
	"sun.java2d.x11.XSurfaceData",
	nullptr,
	_X11SurfaceData_FieldInfo_,
	_X11SurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_X11SurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.x11.X11SurfaceData$LazyPipe,sun.java2d.x11.X11SurfaceData$X11PixmapSurfaceData,sun.java2d.x11.X11SurfaceData$X11WindowSurfaceData"
};

$Object* allocate$X11SurfaceData($Class* clazz) {
	return $of($alloc(X11SurfaceData));
}

$String* X11SurfaceData::DESC_INT_BGR_X11 = nullptr;
$String* X11SurfaceData::DESC_INT_RGB_X11 = nullptr;
$String* X11SurfaceData::DESC_4BYTE_ABGR_PRE_X11 = nullptr;
$String* X11SurfaceData::DESC_INT_ARGB_PRE_X11 = nullptr;
$String* X11SurfaceData::DESC_BYTE_IND_OPQ_X11 = nullptr;
$String* X11SurfaceData::DESC_INT_BGR_X11_BM = nullptr;
$String* X11SurfaceData::DESC_INT_RGB_X11_BM = nullptr;
$String* X11SurfaceData::DESC_BYTE_IND_X11_BM = nullptr;
$String* X11SurfaceData::DESC_BYTE_GRAY_X11 = nullptr;
$String* X11SurfaceData::DESC_INDEX8_GRAY_X11 = nullptr;
$String* X11SurfaceData::DESC_BYTE_GRAY_X11_BM = nullptr;
$String* X11SurfaceData::DESC_INDEX8_GRAY_X11_BM = nullptr;
$String* X11SurfaceData::DESC_3BYTE_RGB_X11 = nullptr;
$String* X11SurfaceData::DESC_3BYTE_BGR_X11 = nullptr;
$String* X11SurfaceData::DESC_3BYTE_RGB_X11_BM = nullptr;
$String* X11SurfaceData::DESC_3BYTE_BGR_X11_BM = nullptr;
$String* X11SurfaceData::DESC_USHORT_555_RGB_X11 = nullptr;
$String* X11SurfaceData::DESC_USHORT_565_RGB_X11 = nullptr;
$String* X11SurfaceData::DESC_USHORT_555_RGB_X11_BM = nullptr;
$String* X11SurfaceData::DESC_USHORT_565_RGB_X11_BM = nullptr;
$String* X11SurfaceData::DESC_USHORT_INDEXED_X11 = nullptr;
$String* X11SurfaceData::DESC_USHORT_INDEXED_X11_BM = nullptr;
$SurfaceType* X11SurfaceData::IntBgrX11 = nullptr;
$SurfaceType* X11SurfaceData::IntRgbX11 = nullptr;
$SurfaceType* X11SurfaceData::FourByteAbgrPreX11 = nullptr;
$SurfaceType* X11SurfaceData::IntArgbPreX11 = nullptr;
$SurfaceType* X11SurfaceData::ThreeByteRgbX11 = nullptr;
$SurfaceType* X11SurfaceData::ThreeByteBgrX11 = nullptr;
$SurfaceType* X11SurfaceData::UShort555RgbX11 = nullptr;
$SurfaceType* X11SurfaceData::UShort565RgbX11 = nullptr;
$SurfaceType* X11SurfaceData::UShortIndexedX11 = nullptr;
$SurfaceType* X11SurfaceData::ByteIndexedOpaqueX11 = nullptr;
$SurfaceType* X11SurfaceData::ByteGrayX11 = nullptr;
$SurfaceType* X11SurfaceData::Index8GrayX11 = nullptr;
$SurfaceType* X11SurfaceData::IntBgrX11_BM = nullptr;
$SurfaceType* X11SurfaceData::IntRgbX11_BM = nullptr;
$SurfaceType* X11SurfaceData::ThreeByteRgbX11_BM = nullptr;
$SurfaceType* X11SurfaceData::ThreeByteBgrX11_BM = nullptr;
$SurfaceType* X11SurfaceData::UShort555RgbX11_BM = nullptr;
$SurfaceType* X11SurfaceData::UShort565RgbX11_BM = nullptr;
$SurfaceType* X11SurfaceData::UShortIndexedX11_BM = nullptr;
$SurfaceType* X11SurfaceData::ByteIndexedX11_BM = nullptr;
$SurfaceType* X11SurfaceData::ByteGrayX11_BM = nullptr;
$SurfaceType* X11SurfaceData::Index8GrayX11_BM = nullptr;
$Boolean* X11SurfaceData::accelerationEnabled = nullptr;
$TextPipe* X11SurfaceData::x11textpipe = nullptr;
$X11SurfaceData$LazyPipe* X11SurfaceData::lazypipe = nullptr;

void X11SurfaceData::initIDs($Class* xorComp) {
	$init(X11SurfaceData);
	$prepareNativeStatic(X11SurfaceData, initIDs, void, $Class* xorComp);
	$invokeNativeStatic(xorComp);
	$finishNativeStatic();
}

void X11SurfaceData::initSurface(int32_t depth, int32_t width, int32_t height, int64_t drawable) {
	$prepareNative(X11SurfaceData, initSurface, void, int32_t depth, int32_t width, int32_t height, int64_t drawable);
	$invokeNative(depth, width, height, drawable);
	$finishNative();
}

$Raster* X11SurfaceData::getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	$throwNew($InternalError, "not implemented yet"_s);
	$shouldNotReachHere();
}

bool X11SurfaceData::isShmPMAvailable() {
	$init(X11SurfaceData);
	bool $ret = false;
	$prepareNativeStatic(X11SurfaceData, isShmPMAvailable, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool X11SurfaceData::isAccelerationEnabled() {
	$init(X11SurfaceData);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (X11SurfaceData::accelerationEnabled == nullptr) {
		if ($GraphicsEnvironment::isHeadless()) {
			$init($Boolean);
			$assignStatic(X11SurfaceData::accelerationEnabled, $Boolean::FALSE);
		} else {
			$var($String, prop, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.pmoffscreen"_s)))));
			if (prop != nullptr) {
				$assignStatic(X11SurfaceData::accelerationEnabled, $Boolean::valueOf(prop));
			} else {
				bool isDisplayLocal = false;
				$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
				if ($instanceOf($SunGraphicsEnvironment, ge)) {
					isDisplayLocal = $nc(($cast($SunGraphicsEnvironment, ge)))->isDisplayLocal();
				}
				$assignStatic(X11SurfaceData::accelerationEnabled, $Boolean::valueOf(!(isDisplayLocal && !isShmPMAvailable())));
			}
		}
	}
	return $nc(X11SurfaceData::accelerationEnabled)->booleanValue();
}

$SurfaceDataProxy* X11SurfaceData::makeProxyFor($SurfaceData* srcData) {
	return $X11SurfaceDataProxy::createProxy(srcData, this->graphicsConfig);
}

void X11SurfaceData::validatePipe($SunGraphics2D* sg2d) {
	if ($nc(sg2d)->antialiasHint != $SunHints::INTVAL_ANTIALIAS_ON && sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR && (sg2d->compositeState <= $SunGraphics2D::COMP_ISCOPY || $nc(sg2d)->compositeState == $SunGraphics2D::COMP_XOR)) {
		if (this->x11txpipe == nullptr) {
			$set(sg2d, drawpipe, X11SurfaceData::lazypipe);
			$set(sg2d, fillpipe, X11SurfaceData::lazypipe);
			$set(sg2d, shapepipe, X11SurfaceData::lazypipe);
			$set(sg2d, imagepipe, X11SurfaceData::lazypipe);
			$set(sg2d, textpipe, X11SurfaceData::lazypipe);
			return;
		}
		if (sg2d->clipState == $SunGraphics2D::CLIP_SHAPE) {
			$XSurfaceData::validatePipe(sg2d);
		} else {
			switch (sg2d->textAntialiasHint) {
			case $SunHints::INTVAL_TEXT_ANTIALIAS_DEFAULT:
				{}
			case $SunHints::INTVAL_TEXT_ANTIALIAS_OFF:
				{
					if (sg2d->compositeState == $SunGraphics2D::COMP_ISCOPY) {
						$set(sg2d, textpipe, X11SurfaceData::x11textpipe);
					} else {
						$init($SurfaceData);
						$set(sg2d, textpipe, $SurfaceData::solidTextRenderer);
					}
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
					case $SunHints::INTVAL_TEXT_ANTIALIAS_OFF:
						{
							if (sg2d->compositeState == $SunGraphics2D::COMP_ISCOPY) {
								$set(sg2d, textpipe, X11SurfaceData::x11textpipe);
							} else {
								$init($SurfaceData);
								$set(sg2d, textpipe, $SurfaceData::solidTextRenderer);
							}
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
		if (sg2d->transformState >= $SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
			$set(sg2d, drawpipe, this->x11txpipe);
			$set(sg2d, fillpipe, this->x11txpipe);
		} else if (sg2d->strokeState != $SunGraphics2D::STROKE_THIN) {
			$set(sg2d, drawpipe, this->x11txpipe);
			$set(sg2d, fillpipe, this->x11pipe);
		} else {
			$set(sg2d, drawpipe, this->x11pipe);
			$set(sg2d, fillpipe, this->x11pipe);
		}
		$set(sg2d, shapepipe, this->x11pipe);
		$init($SurfaceData);
		$set(sg2d, imagepipe, $SurfaceData::imagepipe);
		if (sg2d->loops == nullptr) {
			$set(sg2d, loops, getRenderLoops(sg2d));
		}
	} else {
		$XSurfaceData::validatePipe(sg2d);
	}
}

$RenderLoops* X11SurfaceData::getRenderLoops($SunGraphics2D* sg2d) {
	if ($nc(sg2d)->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR && sg2d->compositeState <= $SunGraphics2D::COMP_ISCOPY) {
		return this->solidloops;
	}
	return $XSurfaceData::getRenderLoops(sg2d);
}

$GraphicsConfiguration* X11SurfaceData::getDeviceConfiguration() {
	return this->graphicsConfig;
}

$X11SurfaceData$X11WindowSurfaceData* X11SurfaceData::createData($X11ComponentPeer* peer) {
	$init(X11SurfaceData);
	$useLocalCurrentObjectStackCache();
	$var($X11GraphicsConfig, gc, getGC(peer));
	return $new($X11SurfaceData$X11WindowSurfaceData, peer, gc, $($nc(gc)->getSurfaceType()));
}

$X11SurfaceData$X11PixmapSurfaceData* X11SurfaceData::createData($X11GraphicsConfig* gc, int32_t width, int32_t height, $ColorModel* cm, $Image* image, int64_t drawable, int32_t transparency, bool isTexture) {
	$init(X11SurfaceData);
	return $new($X11SurfaceData$X11PixmapSurfaceData, gc, width, height, image, $(getSurfaceType(gc, transparency, true)), cm, drawable, transparency, isTexture);
}

void X11SurfaceData::init$($X11ComponentPeer* peer, $X11GraphicsConfig* gc, $SurfaceType* sType, $ColorModel* cm) {
	$XSurfaceData::init$(sType, cm);
	this->validatedExposures = true;
	$set(this, peer, peer);
	$set(this, graphicsConfig, gc);
	$set(this, solidloops, $nc(this->graphicsConfig)->getSolidLoops(sType));
	this->depth = $nc(cm)->getPixelSize();
	initOps(peer, this->graphicsConfig, this->depth);
	if (isAccelerationEnabled()) {
		setBlitProxyKey($($nc(gc)->getProxyKey()));
	}
}

$X11GraphicsConfig* X11SurfaceData::getGC($X11ComponentPeer* peer) {
	$init(X11SurfaceData);
	$useLocalCurrentObjectStackCache();
	if (peer != nullptr) {
		return $cast($X11GraphicsConfig, peer->getGraphicsConfiguration());
	} else {
		$var($GraphicsEnvironment, env, $GraphicsEnvironment::getLocalGraphicsEnvironment());
		$var($GraphicsDevice, gd, $nc(env)->getDefaultScreenDevice());
		return $cast($X11GraphicsConfig, $nc(gd)->getDefaultConfiguration());
	}
}

bool X11SurfaceData::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	$useLocalCurrentObjectStackCache();
	if (this->x11pipe == nullptr) {
		if (!isDrawableValid()) {
			return true;
		}
		makePipes();
	}
	$var($CompositeType, comptype, $nc(sg2d)->imageComp);
	$init($CompositeType);
	bool var$0 = $nc($CompositeType::SrcOverNoEa)->equals(comptype);
	if (var$0 || $nc($CompositeType::SrcNoEa)->equals(comptype)) {
		$SunToolkit::awtLock();
		{
			$var($Throwable, var$1, nullptr);
			try {
				bool needExposures = canSourceSendExposures(x, y, w, h);
				int64_t xgc = getBlitGC($(sg2d->getCompClip()), needExposures);
				$nc(this->x11pipe)->devCopyArea(getNativeOps(), xgc, x, y, x + dx, y + dy, w, h);
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

$SurfaceType* X11SurfaceData::getSurfaceType($X11GraphicsConfig* gc, int32_t transparency) {
	$init(X11SurfaceData);
	return getSurfaceType(gc, transparency, false);
}

$SurfaceType* X11SurfaceData::getSurfaceType($X11GraphicsConfig* gc, int32_t transparency, bool pixmapSurface) {
	$init(X11SurfaceData);
	$useLocalCurrentObjectStackCache();
	bool transparent = (transparency == $Transparency::BITMASK);
	$var($SurfaceType, sType, nullptr);
	$var($ColorModel, cm, $nc(gc)->getColorModel());
	switch ($nc(cm)->getPixelSize()) {
	case 24:
		{
			if (gc->getBitsPerPixel() == 24) {
				if ($instanceOf($DirectColorModel, cm)) {
					$assign(sType, transparent ? X11SurfaceData::ThreeByteBgrX11_BM : X11SurfaceData::ThreeByteBgrX11);
				} else {
					$throwNew($InvalidPipeException, $$str({"Unsupported bit depth/cm combo: "_s, $$str(cm->getPixelSize()), ", "_s, cm}));
				}
				break;
			}
		}
	case 32:
		{
			if ($instanceOf($DirectColorModel, cm)) {
				if ($nc(($cast($SunToolkit, $($Toolkit::getDefaultToolkit()))))->isTranslucencyCapable(gc) && !pixmapSurface) {
					$assign(sType, X11SurfaceData::IntArgbPreX11);
				} else if ($nc(($cast($DirectColorModel, cm)))->getRedMask() == 0x00FF0000) {
					$assign(sType, transparent ? X11SurfaceData::IntRgbX11_BM : X11SurfaceData::IntRgbX11);
				} else {
					$assign(sType, transparent ? X11SurfaceData::IntBgrX11_BM : X11SurfaceData::IntBgrX11);
				}
			} else if ($instanceOf($ComponentColorModel, cm)) {
				$assign(sType, X11SurfaceData::FourByteAbgrPreX11);
			} else {
				$throwNew($InvalidPipeException, $$str({"Unsupported bit depth/cm combo: "_s, $$str(cm->getPixelSize()), ", "_s, cm}));
			}
			break;
		}
	case 15:
		{
			$assign(sType, transparent ? X11SurfaceData::UShort555RgbX11_BM : X11SurfaceData::UShort555RgbX11);
			break;
		}
	case 16:
		{
			if (($instanceOf($DirectColorModel, cm)) && ($nc(($cast($DirectColorModel, cm)))->getGreenMask() == 992)) {
				$assign(sType, transparent ? X11SurfaceData::UShort555RgbX11_BM : X11SurfaceData::UShort555RgbX11);
			} else {
				$assign(sType, transparent ? X11SurfaceData::UShort565RgbX11_BM : X11SurfaceData::UShort565RgbX11);
			}
			break;
		}
	case 12:
		{
			if ($instanceOf($IndexColorModel, cm)) {
				$assign(sType, transparent ? X11SurfaceData::UShortIndexedX11_BM : X11SurfaceData::UShortIndexedX11);
			} else {
				$throwNew($InvalidPipeException, $$str({"Unsupported bit depth: "_s, $$str(cm->getPixelSize()), " cm="_s, cm}));
			}
			break;
		}
	case 8:
		{
			if ($nc($(cm->getColorSpace()))->getType() == $ColorSpace::TYPE_GRAY && $instanceOf($ComponentColorModel, cm)) {
				$assign(sType, transparent ? X11SurfaceData::ByteGrayX11_BM : X11SurfaceData::ByteGrayX11);
			} else if ($instanceOf($IndexColorModel, cm) && isOpaqueGray($cast($IndexColorModel, cm))) {
				$assign(sType, transparent ? X11SurfaceData::Index8GrayX11_BM : X11SurfaceData::Index8GrayX11);
			} else {
				$assign(sType, transparent ? X11SurfaceData::ByteIndexedX11_BM : X11SurfaceData::ByteIndexedOpaqueX11);
			}
			break;
		}
	default:
		{
			$throwNew($InvalidPipeException, $$str({"Unsupported bit depth: "_s, $$str(cm->getPixelSize())}));
		}
	}
	return sType;
}

void X11SurfaceData::invalidate() {
	if (isValid()) {
		setInvalid();
		$XSurfaceData::invalidate();
	}
}

void X11SurfaceData::XSetCopyMode(int64_t xgc) {
	$init(X11SurfaceData);
	$prepareNativeStatic(X11SurfaceData, XSetCopyMode, void, int64_t xgc);
	$invokeNativeStatic(xgc);
	$finishNativeStatic();
}

void X11SurfaceData::XSetXorMode(int64_t xgc) {
	$init(X11SurfaceData);
	$prepareNativeStatic(X11SurfaceData, XSetXorMode, void, int64_t xgc);
	$invokeNativeStatic(xgc);
	$finishNativeStatic();
}

void X11SurfaceData::XSetForeground(int64_t xgc, int32_t pixel) {
	$init(X11SurfaceData);
	$prepareNativeStatic(X11SurfaceData, XSetForeground, void, int64_t xgc, int32_t pixel);
	$invokeNativeStatic(xgc, pixel);
	$finishNativeStatic();
}

int64_t X11SurfaceData::getRenderGC($Region* clip, int32_t compState, $Composite* comp, int32_t pixel) {
	return getGC(clip, compState, comp, pixel, this->validatedExposures);
}

int64_t X11SurfaceData::getBlitGC($Region* clip, bool needExposures) {
	return getGC(clip, $SunGraphics2D::COMP_ISCOPY, nullptr, this->validatedPixel, needExposures);
}

int64_t X11SurfaceData::getGC($Region* clip, int32_t compState, $Composite* comp, int32_t pixel, bool needExposures) {
	if (!isValid()) {
		$throwNew($InvalidPipeException, "bounds changed"_s);
	}
	if (clip != this->validatedClip) {
		$set(this, validatedClip, clip);
		if (clip != nullptr) {
			int64_t var$0 = this->xgc;
			int32_t var$1 = clip->getLoX();
			int32_t var$2 = clip->getLoY();
			int32_t var$3 = clip->getHiX();
			int32_t var$4 = clip->getHiY();
			XSetClip(var$0, var$1, var$2, var$3, var$4, (clip->isRectangular() ? ($Region*)nullptr : clip));
		} else {
			XResetClip(this->xgc);
		}
	}
	if (compState == $SunGraphics2D::COMP_ISCOPY) {
		if (this->validatedXorComp != nullptr) {
			$set(this, validatedXorComp, nullptr);
			this->xorpixelmod = 0;
			XSetCopyMode(this->xgc);
		}
	} else if (!$equals(this->validatedXorComp, comp)) {
		$set(this, validatedXorComp, $cast($XORComposite, comp));
		this->xorpixelmod = $nc(this->validatedXorComp)->getXorPixel();
		XSetXorMode(this->xgc);
	}
	pixel ^= this->xorpixelmod;
	if (pixel != this->validatedPixel) {
		this->validatedPixel = pixel;
		XSetForeground(this->xgc, pixel);
	}
	if (this->validatedExposures != needExposures) {
		this->validatedExposures = needExposures;
		XSetGraphicsExposures(this->xgc, needExposures);
	}
	return this->xgc;
}

void X11SurfaceData::makePipes() {
	$synchronized(this) {
		if (this->x11pipe == nullptr) {
			$SunToolkit::awtLock();
			{
				$var($Throwable, var$0, nullptr);
				try {
					this->xgc = XCreateGC(getNativeOps());
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					$SunToolkit::awtUnlock();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
			$set(this, x11pipe, $X11Renderer::getInstance());
			$set(this, x11txpipe, $new($PixelToShapeConverter, this->x11pipe));
		}
	}
}

void clinit$X11SurfaceData($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(X11SurfaceData::DESC_INT_BGR_X11, "Integer BGR Pixmap"_s);
	$assignStatic(X11SurfaceData::DESC_INT_RGB_X11, "Integer RGB Pixmap"_s);
	$assignStatic(X11SurfaceData::DESC_4BYTE_ABGR_PRE_X11, "4 byte ABGR Pixmap with pre-multplied alpha"_s);
	$assignStatic(X11SurfaceData::DESC_INT_ARGB_PRE_X11, "Integer ARGB Pixmap with pre-multiplied alpha"_s);
	$assignStatic(X11SurfaceData::DESC_BYTE_IND_OPQ_X11, "Byte Indexed Opaque Pixmap"_s);
	$assignStatic(X11SurfaceData::DESC_INT_BGR_X11_BM, "Integer BGR Pixmap with 1-bit transp"_s);
	$assignStatic(X11SurfaceData::DESC_INT_RGB_X11_BM, "Integer RGB Pixmap with 1-bit transp"_s);
	$assignStatic(X11SurfaceData::DESC_BYTE_IND_X11_BM, "Byte Indexed Pixmap with 1-bit transp"_s);
	$assignStatic(X11SurfaceData::DESC_BYTE_GRAY_X11, "Byte Gray Opaque Pixmap"_s);
	$assignStatic(X11SurfaceData::DESC_INDEX8_GRAY_X11, "Index8 Gray Opaque Pixmap"_s);
	$assignStatic(X11SurfaceData::DESC_BYTE_GRAY_X11_BM, "Byte Gray Opaque Pixmap with 1-bit transp"_s);
	$assignStatic(X11SurfaceData::DESC_INDEX8_GRAY_X11_BM, "Index8 Gray Opaque Pixmap with 1-bit transp"_s);
	$assignStatic(X11SurfaceData::DESC_3BYTE_RGB_X11, "3 Byte RGB Pixmap"_s);
	$assignStatic(X11SurfaceData::DESC_3BYTE_BGR_X11, "3 Byte BGR Pixmap"_s);
	$assignStatic(X11SurfaceData::DESC_3BYTE_RGB_X11_BM, "3 Byte RGB Pixmap with 1-bit transp"_s);
	$assignStatic(X11SurfaceData::DESC_3BYTE_BGR_X11_BM, "3 Byte BGR Pixmap with 1-bit transp"_s);
	$assignStatic(X11SurfaceData::DESC_USHORT_555_RGB_X11, "Ushort 555 RGB Pixmap"_s);
	$assignStatic(X11SurfaceData::DESC_USHORT_565_RGB_X11, "Ushort 565 RGB Pixmap"_s);
	$assignStatic(X11SurfaceData::DESC_USHORT_555_RGB_X11_BM, "Ushort 555 RGB Pixmap with 1-bit transp"_s);
	$assignStatic(X11SurfaceData::DESC_USHORT_565_RGB_X11_BM, "Ushort 565 RGB Pixmap with 1-bit transp"_s);
	$assignStatic(X11SurfaceData::DESC_USHORT_INDEXED_X11, "Ushort Indexed Pixmap"_s);
	$assignStatic(X11SurfaceData::DESC_USHORT_INDEXED_X11_BM, "Ushort Indexed Pixmap with 1-bit transp"_s);
	$beforeCallerSensitive();
	$init($SurfaceType);
	$assignStatic(X11SurfaceData::IntBgrX11, $nc($SurfaceType::IntBgr)->deriveSubType(X11SurfaceData::DESC_INT_BGR_X11));
	$assignStatic(X11SurfaceData::IntRgbX11, $nc($SurfaceType::IntRgb)->deriveSubType(X11SurfaceData::DESC_INT_RGB_X11));
	$assignStatic(X11SurfaceData::FourByteAbgrPreX11, $nc($SurfaceType::FourByteAbgrPre)->deriveSubType(X11SurfaceData::DESC_4BYTE_ABGR_PRE_X11));
	$assignStatic(X11SurfaceData::IntArgbPreX11, $nc($SurfaceType::IntArgbPre)->deriveSubType(X11SurfaceData::DESC_INT_ARGB_PRE_X11));
	$assignStatic(X11SurfaceData::ThreeByteRgbX11, $nc($SurfaceType::ThreeByteRgb)->deriveSubType(X11SurfaceData::DESC_3BYTE_RGB_X11));
	$assignStatic(X11SurfaceData::ThreeByteBgrX11, $nc($SurfaceType::ThreeByteBgr)->deriveSubType(X11SurfaceData::DESC_3BYTE_BGR_X11));
	$assignStatic(X11SurfaceData::UShort555RgbX11, $nc($SurfaceType::Ushort555Rgb)->deriveSubType(X11SurfaceData::DESC_USHORT_555_RGB_X11));
	$assignStatic(X11SurfaceData::UShort565RgbX11, $nc($SurfaceType::Ushort565Rgb)->deriveSubType(X11SurfaceData::DESC_USHORT_565_RGB_X11));
	$assignStatic(X11SurfaceData::UShortIndexedX11, $nc($SurfaceType::UshortIndexed)->deriveSubType(X11SurfaceData::DESC_USHORT_INDEXED_X11));
	$assignStatic(X11SurfaceData::ByteIndexedOpaqueX11, $nc($SurfaceType::ByteIndexedOpaque)->deriveSubType(X11SurfaceData::DESC_BYTE_IND_OPQ_X11));
	$assignStatic(X11SurfaceData::ByteGrayX11, $nc($SurfaceType::ByteGray)->deriveSubType(X11SurfaceData::DESC_BYTE_GRAY_X11));
	$assignStatic(X11SurfaceData::Index8GrayX11, $nc($SurfaceType::Index8Gray)->deriveSubType(X11SurfaceData::DESC_INDEX8_GRAY_X11));
	$init($PixelConverter$Xbgr);
	$assignStatic(X11SurfaceData::IntBgrX11_BM, $nc($SurfaceType::Custom)->deriveSubType(X11SurfaceData::DESC_INT_BGR_X11_BM, $PixelConverter$Xbgr::instance));
	$init($PixelConverter$Xrgb);
	$assignStatic(X11SurfaceData::IntRgbX11_BM, $nc($SurfaceType::Custom)->deriveSubType(X11SurfaceData::DESC_INT_RGB_X11_BM, $PixelConverter$Xrgb::instance));
	$assignStatic(X11SurfaceData::ThreeByteRgbX11_BM, $nc($SurfaceType::Custom)->deriveSubType(X11SurfaceData::DESC_3BYTE_RGB_X11_BM, $PixelConverter$Xbgr::instance));
	$assignStatic(X11SurfaceData::ThreeByteBgrX11_BM, $nc($SurfaceType::Custom)->deriveSubType(X11SurfaceData::DESC_3BYTE_BGR_X11_BM, $PixelConverter$Xrgb::instance));
	$init($PixelConverter$Ushort555Rgb);
	$assignStatic(X11SurfaceData::UShort555RgbX11_BM, $nc($SurfaceType::Custom)->deriveSubType(X11SurfaceData::DESC_USHORT_555_RGB_X11_BM, $PixelConverter$Ushort555Rgb::instance));
	$init($PixelConverter$Ushort565Rgb);
	$assignStatic(X11SurfaceData::UShort565RgbX11_BM, $nc($SurfaceType::Custom)->deriveSubType(X11SurfaceData::DESC_USHORT_565_RGB_X11_BM, $PixelConverter$Ushort565Rgb::instance));
	$assignStatic(X11SurfaceData::UShortIndexedX11_BM, $nc($SurfaceType::Custom)->deriveSubType(X11SurfaceData::DESC_USHORT_INDEXED_X11_BM));
	$assignStatic(X11SurfaceData::ByteIndexedX11_BM, $nc($SurfaceType::Custom)->deriveSubType(X11SurfaceData::DESC_BYTE_IND_X11_BM));
	$assignStatic(X11SurfaceData::ByteGrayX11_BM, $nc($SurfaceType::Custom)->deriveSubType(X11SurfaceData::DESC_BYTE_GRAY_X11_BM));
	$assignStatic(X11SurfaceData::Index8GrayX11_BM, $nc($SurfaceType::Custom)->deriveSubType(X11SurfaceData::DESC_INDEX8_GRAY_X11_BM));
	$assignStatic(X11SurfaceData::accelerationEnabled, nullptr);
	{
		bool var$0 = !$XSurfaceData::isX11SurfaceDataInitialized();
		if (var$0 && !$GraphicsEnvironment::isHeadless()) {
			$load($XORComposite);
			X11SurfaceData::initIDs($XORComposite::class$);
			$var($String, xtextpipe, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.xtextpipe"_s)))));
			if (xtextpipe == nullptr || "true"_s->startsWith(xtextpipe)) {
				if ("true"_s->equals(xtextpipe)) {
					$nc($System::out)->println("using X11 text renderer"_s);
				}
				$assignStatic(X11SurfaceData::x11textpipe, $new($X11TextRenderer));
				if ($GraphicsPrimitive::tracingEnabled()) {
					$assignStatic(X11SurfaceData::x11textpipe, $nc(($cast($X11TextRenderer, X11SurfaceData::x11textpipe)))->traceWrap());
				}
			} else {
				if ("false"_s->equals(xtextpipe)) {
					$nc($System::out)->println("using DGA text renderer"_s);
				}
				$init($SurfaceData);
				$assignStatic(X11SurfaceData::x11textpipe, $SurfaceData::solidTextRenderer);
			}
			if (X11SurfaceData::isAccelerationEnabled()) {
				$X11PMBlitLoops::register$();
				$X11PMBlitBgLoops::register$();
			}
		}
	}
	$assignStatic(X11SurfaceData::lazypipe, $new($X11SurfaceData$LazyPipe));
}

X11SurfaceData::X11SurfaceData() {
}

$Class* X11SurfaceData::load$($String* name, bool initialize) {
	$loadClass(X11SurfaceData, name, initialize, &_X11SurfaceData_ClassInfo_, clinit$X11SurfaceData, allocate$X11SurfaceData);
	return class$;
}

$Class* X11SurfaceData::class$ = nullptr;

		} // x11
	} // java2d
} // sun