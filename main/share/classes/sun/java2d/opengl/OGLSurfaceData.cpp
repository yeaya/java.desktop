#include <sun/java2d/opengl/OGLSurfaceData.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/lang/InternalError.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
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
#include <sun/java2d/opengl/OGLBlitLoops.h>
#include <sun/java2d/opengl/OGLContext.h>
#include <sun/java2d/opengl/OGLDrawImage.h>
#include <sun/java2d/opengl/OGLGraphicsConfig.h>
#include <sun/java2d/opengl/OGLMaskBlit.h>
#include <sun/java2d/opengl/OGLMaskFill.h>
#include <sun/java2d/opengl/OGLPaints.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/java2d/opengl/OGLRenderer.h>
#include <sun/java2d/opengl/OGLSurfaceData$1.h>
#include <sun/java2d/opengl/OGLSurfaceDataProxy.h>
#include <sun/java2d/opengl/OGLTextRenderer.h>
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
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef COMP_ALPHA
#undef COMP_ISCOPY
#undef COMP_XOR
#undef DESC_OPENGL_SURFACE
#undef DESC_OPENGL_SURFACE_RTT
#undef DESC_OPENGL_TEXTURE
#undef FBOBJECT
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
#undef SRC_OVER
#undef STROKE_THIN
#undef TEXTURE
#undef TRANSFORM_TRANSLATESCALE
#undef WINDOW

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
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
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SunHints = ::sun::awt::SunHints;
using $PixelConverter = ::sun::awt::image::PixelConverter;
using $PixelConverter$ArgbPre = ::sun::awt::image::PixelConverter$ArgbPre;
using $SurfaceManager$ProxiedGraphicsConfig = ::sun::awt::image::SurfaceManager$ProxiedGraphicsConfig;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceDataProxy = ::sun::java2d::SurfaceDataProxy;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $MaskFill = ::sun::java2d::loops::MaskFill;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $OGLBlitLoops = ::sun::java2d::opengl::OGLBlitLoops;
using $OGLContext = ::sun::java2d::opengl::OGLContext;
using $OGLDrawImage = ::sun::java2d::opengl::OGLDrawImage;
using $OGLGraphicsConfig = ::sun::java2d::opengl::OGLGraphicsConfig;
using $OGLMaskBlit = ::sun::java2d::opengl::OGLMaskBlit;
using $OGLMaskFill = ::sun::java2d::opengl::OGLMaskFill;
using $OGLPaints = ::sun::java2d::opengl::OGLPaints;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;
using $OGLRenderer = ::sun::java2d::opengl::OGLRenderer;
using $OGLSurfaceData$1 = ::sun::java2d::opengl::OGLSurfaceData$1;
using $OGLSurfaceDataProxy = ::sun::java2d::opengl::OGLSurfaceDataProxy;
using $OGLTextRenderer = ::sun::java2d::opengl::OGLTextRenderer;
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
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _OGLSurfaceData_FieldInfo_[] = {
	{"FBOBJECT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLSurfaceData, FBOBJECT)},
	{"PF_INT_ARGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLSurfaceData, PF_INT_ARGB)},
	{"PF_INT_ARGB_PRE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLSurfaceData, PF_INT_ARGB_PRE)},
	{"PF_INT_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLSurfaceData, PF_INT_RGB)},
	{"PF_INT_RGBX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLSurfaceData, PF_INT_RGBX)},
	{"PF_INT_BGR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLSurfaceData, PF_INT_BGR)},
	{"PF_INT_BGRX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLSurfaceData, PF_INT_BGRX)},
	{"PF_USHORT_565_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLSurfaceData, PF_USHORT_565_RGB)},
	{"PF_USHORT_555_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLSurfaceData, PF_USHORT_555_RGB)},
	{"PF_USHORT_555_RGBX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLSurfaceData, PF_USHORT_555_RGBX)},
	{"PF_BYTE_GRAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLSurfaceData, PF_BYTE_GRAY)},
	{"PF_USHORT_GRAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLSurfaceData, PF_USHORT_GRAY)},
	{"PF_3BYTE_BGR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLSurfaceData, PF_3BYTE_BGR)},
	{"DESC_OPENGL_SURFACE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OGLSurfaceData, DESC_OPENGL_SURFACE)},
	{"DESC_OPENGL_SURFACE_RTT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OGLSurfaceData, DESC_OPENGL_SURFACE_RTT)},
	{"DESC_OPENGL_TEXTURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OGLSurfaceData, DESC_OPENGL_TEXTURE)},
	{"OpenGLSurface", "Lsun/java2d/loops/SurfaceType;", nullptr, $STATIC | $FINAL, $staticField(OGLSurfaceData, OpenGLSurface)},
	{"OpenGLSurfaceRTT", "Lsun/java2d/loops/SurfaceType;", nullptr, $STATIC | $FINAL, $staticField(OGLSurfaceData, OpenGLSurfaceRTT)},
	{"OpenGLTexture", "Lsun/java2d/loops/SurfaceType;", nullptr, $STATIC | $FINAL, $staticField(OGLSurfaceData, OpenGLTexture)},
	{"isFBObjectEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(OGLSurfaceData, isFBObjectEnabled)},
	{"isLCDShaderEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(OGLSurfaceData, isLCDShaderEnabled)},
	{"isBIOpShaderEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(OGLSurfaceData, isBIOpShaderEnabled)},
	{"isGradShaderEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(OGLSurfaceData, isGradShaderEnabled)},
	{"graphicsConfig", "Lsun/java2d/opengl/OGLGraphicsConfig;", nullptr, $PRIVATE, $field(OGLSurfaceData, graphicsConfig)},
	{"type", "I", nullptr, $PROTECTED, $field(OGLSurfaceData, type)},
	{"nativeWidth", "I", nullptr, $PRIVATE, $field(OGLSurfaceData, nativeWidth)},
	{"nativeHeight", "I", nullptr, $PRIVATE, $field(OGLSurfaceData, nativeHeight)},
	{"oglRenderPipe", "Lsun/java2d/opengl/OGLRenderer;", nullptr, $PROTECTED | $STATIC, $staticField(OGLSurfaceData, oglRenderPipe)},
	{"oglTxRenderPipe", "Lsun/java2d/pipe/PixelToParallelogramConverter;", nullptr, $PROTECTED | $STATIC, $staticField(OGLSurfaceData, oglTxRenderPipe)},
	{"oglAAPgramPipe", "Lsun/java2d/pipe/ParallelogramPipe;", nullptr, $PROTECTED | $STATIC, $staticField(OGLSurfaceData, oglAAPgramPipe)},
	{"oglTextPipe", "Lsun/java2d/opengl/OGLTextRenderer;", nullptr, $PROTECTED | $STATIC, $staticField(OGLSurfaceData, oglTextPipe)},
	{"oglImagePipe", "Lsun/java2d/opengl/OGLDrawImage;", nullptr, $PROTECTED | $STATIC, $staticField(OGLSurfaceData, oglImagePipe)},
	{}
};

$MethodInfo _OGLSurfaceData_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getNativeOps", "()J", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/opengl/OGLGraphicsConfig;Ljava/awt/image/ColorModel;I)V", nullptr, $PROTECTED, $method(static_cast<void(OGLSurfaceData::*)($OGLGraphicsConfig*,$ColorModel*,int32_t)>(&OGLSurfaceData::init$))},
	{"canHandleComposite", "(Ljava/awt/Composite;)Z", nullptr, $PRIVATE, $method(static_cast<bool(OGLSurfaceData::*)($Composite*)>(&OGLSurfaceData::canHandleComposite))},
	{"canRenderLCDText", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $PUBLIC},
	{"copyArea", "(Lsun/java2d/SunGraphics2D;IIIIII)Z", nullptr, $PUBLIC},
	{"dispose", "(JLsun/java2d/opengl/OGLGraphicsConfig;)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,$OGLGraphicsConfig*)>(&OGLSurfaceData::dispose))},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getContext", "()Lsun/java2d/opengl/OGLContext;", nullptr, $PUBLIC | $FINAL},
	{"getCustomSurfaceType", "(I)Lsun/java2d/loops/SurfaceType;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SurfaceType*(*)(int32_t)>(&OGLSurfaceData::getCustomSurfaceType))},
	{"getMaskFill", "(Lsun/java2d/SunGraphics2D;)Lsun/java2d/loops/MaskFill;", nullptr, $PROTECTED},
	{"getNativeBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getNativeResource", "(I)J", nullptr, $PUBLIC},
	{"getOGLGraphicsConfig", "()Lsun/java2d/opengl/OGLGraphicsConfig;", nullptr, $FINAL, $method(static_cast<$OGLGraphicsConfig*(OGLSurfaceData::*)()>(&OGLSurfaceData::getOGLGraphicsConfig))},
	{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getTextureID", "(J)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(OGLSurfaceData::*)(int64_t)>(&OGLSurfaceData::getTextureID))},
	{"getTextureID", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(OGLSurfaceData::*)()>(&OGLSurfaceData::getTextureID))},
	{"getTextureTarget", "(J)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(OGLSurfaceData::*)(int64_t)>(&OGLSurfaceData::getTextureTarget))},
	{"getTextureTarget", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(OGLSurfaceData::*)()>(&OGLSurfaceData::getTextureTarget))},
	{"getType", "()I", nullptr, $PUBLIC | $FINAL},
	{"initFBObject", "(JZZZII)Z", nullptr, $PROTECTED | $NATIVE},
	{"initFlipBackbuffer", "(J)Z", nullptr, $PROTECTED | $NATIVE},
	{"initSurface", "(II)V", nullptr, $PROTECTED},
	{"initSurfaceNow", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(OGLSurfaceData::*)(int32_t,int32_t)>(&OGLSurfaceData::initSurfaceNow))},
	{"initTexture", "(JZZZII)Z", nullptr, $PROTECTED | $NATIVE},
	{"isOnScreen", "()Z", nullptr, 0},
	{"*isSurfaceLost", "()Z", nullptr, $PUBLIC},
	{"isTexNonPow2Available", "()Z", nullptr, 0},
	{"isTexRectAvailable", "()Z", nullptr, 0},
	{"*isValid", "()Z", nullptr, $PUBLIC | $FINAL},
	{"makeProxyFor", "(Lsun/java2d/SurfaceData;)Lsun/java2d/SurfaceDataProxy;", nullptr, $PUBLIC},
	{"*markDirty", "()V", nullptr, $PUBLIC | $FINAL},
	{"swapBuffers", "(J)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t)>(&OGLSurfaceData::swapBuffers))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validatePipe", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_getTextureID 19
#define _METHOD_INDEX_getTextureTarget 21
#define _METHOD_INDEX_initFBObject 24
#define _METHOD_INDEX_initFlipBackbuffer 25
#define _METHOD_INDEX_initTexture 28

$InnerClassInfo _OGLSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.OGLSurfaceData$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _OGLSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.opengl.OGLSurfaceData",
	"sun.java2d.SurfaceData",
	"sun.java2d.pipe.hw.AccelSurface",
	_OGLSurfaceData_FieldInfo_,
	_OGLSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_OGLSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.opengl.OGLSurfaceData$1"
};

$Object* allocate$OGLSurfaceData($Class* clazz) {
	return $of($alloc(OGLSurfaceData));
}

void OGLSurfaceData::markDirty() {
	this->$SurfaceData::markDirty();
}

bool OGLSurfaceData::isSurfaceLost() {
	 return this->$SurfaceData::isSurfaceLost();
}

bool OGLSurfaceData::isValid() {
	 return this->$SurfaceData::isValid();
}

int64_t OGLSurfaceData::getNativeOps() {
	 return this->$SurfaceData::getNativeOps();
}

int32_t OGLSurfaceData::hashCode() {
	 return this->$SurfaceData::hashCode();
}

bool OGLSurfaceData::equals(Object$* arg0) {
	 return this->$SurfaceData::equals(arg0);
}

$Object* OGLSurfaceData::clone() {
	 return this->$SurfaceData::clone();
}

$String* OGLSurfaceData::toString() {
	 return this->$SurfaceData::toString();
}

void OGLSurfaceData::finalize() {
	this->$SurfaceData::finalize();
}

$String* OGLSurfaceData::DESC_OPENGL_SURFACE = nullptr;
$String* OGLSurfaceData::DESC_OPENGL_SURFACE_RTT = nullptr;
$String* OGLSurfaceData::DESC_OPENGL_TEXTURE = nullptr;
$SurfaceType* OGLSurfaceData::OpenGLSurface = nullptr;
$SurfaceType* OGLSurfaceData::OpenGLSurfaceRTT = nullptr;
$SurfaceType* OGLSurfaceData::OpenGLTexture = nullptr;
bool OGLSurfaceData::isFBObjectEnabled = false;
bool OGLSurfaceData::isLCDShaderEnabled = false;
bool OGLSurfaceData::isBIOpShaderEnabled = false;
bool OGLSurfaceData::isGradShaderEnabled = false;
$OGLRenderer* OGLSurfaceData::oglRenderPipe = nullptr;
$PixelToParallelogramConverter* OGLSurfaceData::oglTxRenderPipe = nullptr;
$ParallelogramPipe* OGLSurfaceData::oglAAPgramPipe = nullptr;
$OGLTextRenderer* OGLSurfaceData::oglTextPipe = nullptr;
$OGLDrawImage* OGLSurfaceData::oglImagePipe = nullptr;

bool OGLSurfaceData::initTexture(int64_t pData, bool isOpaque, bool texNonPow2, bool texRect, int32_t width, int32_t height) {
	bool $ret = false;
	$prepareNative(OGLSurfaceData, initTexture, bool, int64_t pData, bool isOpaque, bool texNonPow2, bool texRect, int32_t width, int32_t height);
	$ret = $invokeNative(OGLSurfaceData, initTexture, pData, isOpaque, texNonPow2, texRect, width, height);
	$finishNative();
	return $ret;
}

bool OGLSurfaceData::initFBObject(int64_t pData, bool isOpaque, bool texNonPow2, bool texRect, int32_t width, int32_t height) {
	bool $ret = false;
	$prepareNative(OGLSurfaceData, initFBObject, bool, int64_t pData, bool isOpaque, bool texNonPow2, bool texRect, int32_t width, int32_t height);
	$ret = $invokeNative(OGLSurfaceData, initFBObject, pData, isOpaque, texNonPow2, texRect, width, height);
	$finishNative();
	return $ret;
}

bool OGLSurfaceData::initFlipBackbuffer(int64_t pData) {
	bool $ret = false;
	$prepareNative(OGLSurfaceData, initFlipBackbuffer, bool, int64_t pData);
	$ret = $invokeNative(OGLSurfaceData, initFlipBackbuffer, pData);
	$finishNative();
	return $ret;
}

int32_t OGLSurfaceData::getTextureTarget(int64_t pData) {
	int32_t $ret = 0;
	$prepareNative(OGLSurfaceData, getTextureTarget, int32_t, int64_t pData);
	$ret = $invokeNative(OGLSurfaceData, getTextureTarget, pData);
	$finishNative();
	return $ret;
}

int32_t OGLSurfaceData::getTextureID(int64_t pData) {
	int32_t $ret = 0;
	$prepareNative(OGLSurfaceData, getTextureID, int32_t, int64_t pData);
	$ret = $invokeNative(OGLSurfaceData, getTextureID, pData);
	$finishNative();
	return $ret;
}

void OGLSurfaceData::init$($OGLGraphicsConfig* gc, $ColorModel* cm, int32_t type) {
	$useLocalCurrentObjectStackCache();
	$SurfaceData::init$($(getCustomSurfaceType(type)), cm);
	$set(this, graphicsConfig, gc);
	this->type = type;
	setBlitProxyKey($($nc(gc)->getProxyKey()));
}

$SurfaceDataProxy* OGLSurfaceData::makeProxyFor($SurfaceData* srcData) {
	return $OGLSurfaceDataProxy::createProxy(srcData, this->graphicsConfig);
}

$SurfaceType* OGLSurfaceData::getCustomSurfaceType(int32_t oglType) {
	$init(OGLSurfaceData);
	switch (oglType) {
	case $AccelSurface::TEXTURE:
		{
			return OGLSurfaceData::OpenGLTexture;
		}
	case OGLSurfaceData::FBOBJECT:
		{
			return OGLSurfaceData::OpenGLSurfaceRTT;
		}
	default:
		{
			return OGLSurfaceData::OpenGLSurface;
		}
	}
}

void OGLSurfaceData::initSurfaceNow(int32_t width, int32_t height) {
	bool isOpaque = (getTransparency() == $Transparency::OPAQUE);
	bool success = false;
	switch (this->type) {
	case $AccelSurface::TEXTURE:
		{
			int64_t var$0 = getNativeOps();
			bool var$1 = isOpaque;
			bool var$2 = isTexNonPow2Available();
			success = initTexture(var$0, var$1, var$2, isTexRectAvailable(), width, height);
			break;
		}
	case OGLSurfaceData::FBOBJECT:
		{
			int64_t var$3 = getNativeOps();
			bool var$4 = isOpaque;
			bool var$5 = isTexNonPow2Available();
			success = initFBObject(var$3, var$4, var$5, isTexRectAvailable(), width, height);
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

void OGLSurfaceData::initSurface(int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			switch (this->type) {
			case $AccelSurface::TEXTURE:
				{}
			case OGLSurfaceData::FBOBJECT:
				{
					$OGLContext::setScratchSurface(this->graphicsConfig);
					break;
				}
			default:
				{
					break;
				}
			}
			rq->flushAndInvokeNow($$new($OGLSurfaceData$1, this, width, height));
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

$BufferedContext* OGLSurfaceData::getContext() {
	return $nc(this->graphicsConfig)->getContext();
}

$OGLGraphicsConfig* OGLSurfaceData::getOGLGraphicsConfig() {
	return this->graphicsConfig;
}

int32_t OGLSurfaceData::getType() {
	return this->type;
}

int32_t OGLSurfaceData::getTextureTarget() {
	return getTextureTarget(getNativeOps());
}

int32_t OGLSurfaceData::getTextureID() {
	return getTextureID(getNativeOps());
}

int64_t OGLSurfaceData::getNativeResource(int32_t resType) {
	if (resType == $AccelSurface::TEXTURE) {
		return getTextureID();
	}
	return 0;
}

$Raster* OGLSurfaceData::getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	$throwNew($InternalError, "not implemented yet"_s);
	$shouldNotReachHere();
}

bool OGLSurfaceData::canRenderLCDText($SunGraphics2D* sg2d) {
	bool var$1 = $nc(this->graphicsConfig)->isCapPresent(0x00020000);
	bool var$0 = var$1 && $nc($nc(sg2d)->surfaceData)->getTransparency() == $Transparency::OPAQUE && sg2d->paintState <= $SunGraphics2D::PAINT_OPAQUECOLOR;
	return var$0 && (sg2d->compositeState <= $SunGraphics2D::COMP_ISCOPY || ($nc(sg2d)->compositeState <= $SunGraphics2D::COMP_ALPHA && canHandleComposite(sg2d->composite)));
}

bool OGLSurfaceData::canHandleComposite($Composite* c) {
	if ($instanceOf($AlphaComposite, c)) {
		$var($AlphaComposite, ac, $cast($AlphaComposite, c));
		bool var$0 = $nc(ac)->getRule() == $AlphaComposite::SRC_OVER;
		return var$0 && ac->getAlpha() >= 1.0f;
	}
	return false;
}

void OGLSurfaceData::validatePipe($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($TextPipe, textpipe, nullptr);
	bool validated = false;
	if (($nc(sg2d)->compositeState <= $SunGraphics2D::COMP_ISCOPY && sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR) || ($nc(sg2d)->compositeState == $SunGraphics2D::COMP_ALPHA && sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR && ($nc(($cast($AlphaComposite, sg2d->composite)))->getRule() == $AlphaComposite::SRC_OVER)) || ($nc(sg2d)->compositeState == $SunGraphics2D::COMP_XOR && sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR)) {
		$assign(textpipe, OGLSurfaceData::oglTextPipe);
	} else {
		$SurfaceData::validatePipe(sg2d);
		$assign(textpipe, sg2d->textpipe);
		validated = true;
	}
	$var($PixelToParallelogramConverter, txPipe, nullptr);
	$var($OGLRenderer, nonTxPipe, nullptr);
	if ($nc(sg2d)->antialiasHint != $SunHints::INTVAL_ANTIALIAS_ON) {
		if (sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR) {
			if (sg2d->compositeState <= $SunGraphics2D::COMP_XOR) {
				$assign(txPipe, OGLSurfaceData::oglTxRenderPipe);
				$assign(nonTxPipe, OGLSurfaceData::oglRenderPipe);
			}
		} else if (sg2d->compositeState <= $SunGraphics2D::COMP_ALPHA) {
			if ($OGLPaints::isValid(sg2d)) {
				$assign(txPipe, OGLSurfaceData::oglTxRenderPipe);
				$assign(nonTxPipe, OGLSurfaceData::oglRenderPipe);
			}
		}
	} else if (sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR) {
		$init($CompositeType);
		if ($nc(this->graphicsConfig)->isCapPresent(256) && (sg2d->imageComp == $CompositeType::SrcOverNoEa || sg2d->imageComp == $CompositeType::SrcOver)) {
			if (!validated) {
				$SurfaceData::validatePipe(sg2d);
				validated = true;
			}
			$var($PixelToParallelogramConverter, aaConverter, $new($PixelToParallelogramConverter, sg2d->shapepipe, OGLSurfaceData::oglAAPgramPipe, 1.0 / 8.0, 0.499, false));
			$set(sg2d, drawpipe, aaConverter);
			$set(sg2d, fillpipe, aaConverter);
			$set(sg2d, shapepipe, aaConverter);
		} else if (sg2d->compositeState == $SunGraphics2D::COMP_XOR) {
			$assign(txPipe, OGLSurfaceData::oglTxRenderPipe);
			$assign(nonTxPipe, OGLSurfaceData::oglRenderPipe);
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
	$set(sg2d, imagepipe, OGLSurfaceData::oglImagePipe);
}

$MaskFill* OGLSurfaceData::getMaskFill($SunGraphics2D* sg2d) {
	if ($nc(sg2d)->paintState > $SunGraphics2D::PAINT_ALPHACOLOR) {
		bool var$0 = !$OGLPaints::isValid(sg2d);
		if (var$0 || !$nc(this->graphicsConfig)->isCapPresent(16)) {
			return nullptr;
		}
	}
	return $SurfaceData::getMaskFill(sg2d);
}

bool OGLSurfaceData::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	if ($nc(sg2d)->compositeState >= $SunGraphics2D::COMP_XOR) {
		return false;
	}
	$nc(OGLSurfaceData::oglRenderPipe)->copyArea(sg2d, x, y, w, h, dx, dy);
	return true;
}

void OGLSurfaceData::flush() {
	$useLocalCurrentObjectStackCache();
	invalidate();
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$OGLContext::setScratchSurface(this->graphicsConfig);
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

void OGLSurfaceData::dispose(int64_t pData, $OGLGraphicsConfig* gc) {
	$init(OGLSurfaceData);
	$useLocalCurrentObjectStackCache();
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$OGLContext::setScratchSurface(gc);
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

void OGLSurfaceData::swapBuffers(int64_t window) {
	$init(OGLSurfaceData);
	$useLocalCurrentObjectStackCache();
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($RenderBuffer, buf, rq->getBuffer());
			rq->ensureCapacityAndAlignment(12, 4);
			$nc(buf)->putInt(80);
			buf->putLong(window);
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

bool OGLSurfaceData::isTexNonPow2Available() {
	return $nc(this->graphicsConfig)->isCapPresent(32);
}

bool OGLSurfaceData::isTexRectAvailable() {
	return $nc(this->graphicsConfig)->isCapPresent(0x00100000);
}

$Rectangle* OGLSurfaceData::getNativeBounds() {
	$useLocalCurrentObjectStackCache();
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
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

bool OGLSurfaceData::isOnScreen() {
	return getType() == $AccelSurface::WINDOW;
}

void clinit$OGLSurfaceData($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(OGLSurfaceData::DESC_OPENGL_SURFACE, "OpenGL Surface"_s);
	$assignStatic(OGLSurfaceData::DESC_OPENGL_SURFACE_RTT, "OpenGL Surface (render-to-texture)"_s);
	$assignStatic(OGLSurfaceData::DESC_OPENGL_TEXTURE, "OpenGL Texture"_s);
	$beforeCallerSensitive();
	$init($SurfaceType);
	$init($PixelConverter$ArgbPre);
	$assignStatic(OGLSurfaceData::OpenGLSurface, $nc($SurfaceType::Any)->deriveSubType(OGLSurfaceData::DESC_OPENGL_SURFACE, $PixelConverter$ArgbPre::instance));
	$assignStatic(OGLSurfaceData::OpenGLSurfaceRTT, $nc(OGLSurfaceData::OpenGLSurface)->deriveSubType(OGLSurfaceData::DESC_OPENGL_SURFACE_RTT));
	$assignStatic(OGLSurfaceData::OpenGLTexture, $nc($SurfaceType::Any)->deriveSubType(OGLSurfaceData::DESC_OPENGL_TEXTURE));
	{
		if (!$GraphicsEnvironment::isHeadless()) {
			$var($String, fbo, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.opengl.fbobject"_s)))));
			OGLSurfaceData::isFBObjectEnabled = !"false"_s->equals(fbo);
			$var($String, lcd, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.opengl.lcdshader"_s)))));
			OGLSurfaceData::isLCDShaderEnabled = !"false"_s->equals(lcd);
			$var($String, biop, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.opengl.biopshader"_s)))));
			OGLSurfaceData::isBIOpShaderEnabled = !"false"_s->equals(biop);
			$var($String, grad, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.opengl.gradshader"_s)))));
			OGLSurfaceData::isGradShaderEnabled = !"false"_s->equals(grad);
			$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
			$assignStatic(OGLSurfaceData::oglImagePipe, $new($OGLDrawImage));
			$assignStatic(OGLSurfaceData::oglTextPipe, $new($OGLTextRenderer, rq));
			$assignStatic(OGLSurfaceData::oglRenderPipe, $new($OGLRenderer, rq));
			if ($GraphicsPrimitive::tracingEnabled()) {
				$assignStatic(OGLSurfaceData::oglTextPipe, $nc(OGLSurfaceData::oglTextPipe)->traceWrap());
			}
			$assignStatic(OGLSurfaceData::oglAAPgramPipe, $nc(OGLSurfaceData::oglRenderPipe)->getAAParallelogramPipe());
			$assignStatic(OGLSurfaceData::oglTxRenderPipe, $new($PixelToParallelogramConverter, OGLSurfaceData::oglRenderPipe, OGLSurfaceData::oglRenderPipe, 1.0, 0.25, true));
			$OGLBlitLoops::register$();
			$OGLMaskFill::register$();
			$OGLMaskBlit::register$();
		}
	}
}

OGLSurfaceData::OGLSurfaceData() {
}

$Class* OGLSurfaceData::load$($String* name, bool initialize) {
	$loadClass(OGLSurfaceData, name, initialize, &_OGLSurfaceData_ClassInfo_, clinit$OGLSurfaceData, allocate$OGLSurfaceData);
	return class$;
}

$Class* OGLSurfaceData::class$ = nullptr;

		} // opengl
	} // java2d
} // sun