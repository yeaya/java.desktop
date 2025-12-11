#include <sun/java2d/opengl/CGLGraphicsConfig.h>

#include <java/awt/AWTException.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Image.h>
#include <java/awt/ImageCapabilities.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/image/WritableRaster.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Hashtable.h>
#include <sun/awt/CGraphicsConfig.h>
#include <sun/awt/CGraphicsDevice.h>
#include <sun/awt/image/OffScreenImage.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <sun/java2d/Surface.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/CGLGraphicsConfig$CGLBufferCaps.h>
#include <sun/java2d/opengl/CGLGraphicsConfig$CGLGCDisposerRecord.h>
#include <sun/java2d/opengl/CGLGraphicsConfig$CGLImageCaps.h>
#include <sun/java2d/opengl/CGLLayer.h>
#include <sun/java2d/opengl/CGLSurfaceData$CGLLayerSurfaceData.h>
#include <sun/java2d/opengl/CGLSurfaceData$CGLOffScreenSurfaceData.h>
#include <sun/java2d/opengl/CGLSurfaceData.h>
#include <sun/java2d/opengl/OGLContext$OGLContextCaps.h>
#include <sun/java2d/opengl/OGLContext.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <sun/java2d/pipe/hw/AccelTypedVolatileImage.h>
#include <sun/java2d/pipe/hw/ContextCapabilities.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <jcpp.h>

#undef BACKGROUND
#undef BITMASK
#undef OPAQUE
#undef PRIOR
#undef TEXTURE
#undef TRANSLUCENT
#undef TYPE_INT

using $AWTException = ::java::awt::AWTException;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Hashtable = ::java::util::Hashtable;
using $CGraphicsConfig = ::sun::awt::CGraphicsConfig;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;
using $OffScreenImage = ::sun::awt::image::OffScreenImage;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;
using $Surface = ::sun::java2d::Surface;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CGLGraphicsConfig$CGLBufferCaps = ::sun::java2d::opengl::CGLGraphicsConfig$CGLBufferCaps;
using $CGLGraphicsConfig$CGLGCDisposerRecord = ::sun::java2d::opengl::CGLGraphicsConfig$CGLGCDisposerRecord;
using $CGLGraphicsConfig$CGLImageCaps = ::sun::java2d::opengl::CGLGraphicsConfig$CGLImageCaps;
using $CGLLayer = ::sun::java2d::opengl::CGLLayer;
using $CGLSurfaceData = ::sun::java2d::opengl::CGLSurfaceData;
using $OGLContext = ::sun::java2d::opengl::OGLContext;
using $OGLContext$OGLContextCaps = ::sun::java2d::opengl::OGLContext$OGLContextCaps;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;
using $AccelTypedVolatileImage = ::sun::java2d::pipe::hw::AccelTypedVolatileImage;
using $ContextCapabilities = ::sun::java2d::pipe::hw::ContextCapabilities;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $CFRetainedResource = ::sun::lwawt::macosx::CFRetainedResource;

namespace sun {
	namespace java2d {
		namespace opengl {

class CGLGraphicsConfig$$Lambda$lambda$getConfig$0 : public $Runnable {
	$class(CGLGraphicsConfig$$Lambda$lambda$getConfig$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($StringArray* ids) {
		$set(this, ids, ids);
	}
	virtual void run() override {
		CGLGraphicsConfig::lambda$getConfig$0(ids);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CGLGraphicsConfig$$Lambda$lambda$getConfig$0>());
	}
	$StringArray* ids = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CGLGraphicsConfig$$Lambda$lambda$getConfig$0::fieldInfos[2] = {
	{"ids", "[Ljava/lang/String;", nullptr, $PUBLIC, $field(CGLGraphicsConfig$$Lambda$lambda$getConfig$0, ids)},
	{}
};
$MethodInfo CGLGraphicsConfig$$Lambda$lambda$getConfig$0::methodInfos[3] = {
	{"<init>", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CGLGraphicsConfig$$Lambda$lambda$getConfig$0::*)($StringArray*)>(&CGLGraphicsConfig$$Lambda$lambda$getConfig$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CGLGraphicsConfig$$Lambda$lambda$getConfig$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.opengl.CGLGraphicsConfig$$Lambda$lambda$getConfig$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* CGLGraphicsConfig$$Lambda$lambda$getConfig$0::load$($String* name, bool initialize) {
	$loadClass(CGLGraphicsConfig$$Lambda$lambda$getConfig$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CGLGraphicsConfig$$Lambda$lambda$getConfig$0::class$ = nullptr;

$FieldInfo _CGLGraphicsConfig_FieldInfo_[] = {
	{"cglAvailable", "Z", nullptr, $PRIVATE | $STATIC, $staticField(CGLGraphicsConfig, cglAvailable)},
	{"imageCaps", "Ljava/awt/ImageCapabilities;", nullptr, $PRIVATE | $STATIC, $staticField(CGLGraphicsConfig, imageCaps)},
	{"bufferCaps", "Ljava/awt/BufferCapabilities;", nullptr, $PRIVATE, $field(CGLGraphicsConfig, bufferCaps)},
	{"pConfigInfo", "J", nullptr, $PRIVATE, $field(CGLGraphicsConfig, pConfigInfo)},
	{"oglCaps", "Lsun/java2d/pipe/hw/ContextCapabilities;", nullptr, $PRIVATE, $field(CGLGraphicsConfig, oglCaps)},
	{"context", "Lsun/java2d/opengl/OGLContext;", nullptr, $PRIVATE | $FINAL, $field(CGLGraphicsConfig, context)},
	{"disposerReferent", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(CGLGraphicsConfig, disposerReferent)},
	{"maxTextureSize", "I", nullptr, $PRIVATE | $FINAL, $field(CGLGraphicsConfig, maxTextureSize)},
	{}
};

$MethodInfo _CGLGraphicsConfig_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/CGraphicsDevice;JILsun/java2d/pipe/hw/ContextCapabilities;)V", nullptr, $PRIVATE, $method(static_cast<void(CGLGraphicsConfig::*)($CGraphicsDevice*,int64_t,int32_t,$ContextCapabilities*)>(&CGLGraphicsConfig::init$))},
	{"assertOperationSupported", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"createAcceleratedImage", "(Ljava/awt/Component;II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createBackBuffer", "(Lsun/lwawt/LWComponentPeer;)Ljava/awt/Image;", "(Lsun/lwawt/LWComponentPeer<**>;)Ljava/awt/Image;", $PUBLIC},
	{"createCompatibleImage", "(II)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"createCompatibleVolatileImage", "(IIII)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"createManagedSurface", "(III)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"createSurfaceData", "(Lsun/lwawt/macosx/CFRetainedResource;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"destroyBackBuffer", "(Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"displayChanged", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(CGLGraphicsConfig::*)()>(&CGLGraphicsConfig::displayChanged))},
	{"flip", "(Lsun/lwawt/LWComponentPeer;Ljava/awt/Image;IIIILjava/awt/BufferCapabilities$FlipContents;)V", "(Lsun/lwawt/LWComponentPeer<**>;Ljava/awt/Image;IIIILjava/awt/BufferCapabilities$FlipContents;)V", $PUBLIC},
	{"getBufferCapabilities", "()Ljava/awt/BufferCapabilities;", nullptr, $PUBLIC},
	{"getCGLConfigInfo", "()J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)()>(&CGLGraphicsConfig::getCGLConfigInfo))},
	{"getColorModel", "(I)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getConfig", "(Lsun/awt/CGraphicsDevice;)Lsun/java2d/opengl/CGLGraphicsConfig;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CGLGraphicsConfig*(*)($CGraphicsDevice*)>(&CGLGraphicsConfig::getConfig))},
	{"getContext", "()Lsun/java2d/opengl/OGLContext;", nullptr, $PUBLIC},
	{"getContextCapabilities", "()Lsun/java2d/pipe/hw/ContextCapabilities;", nullptr, $PUBLIC},
	{"getImageCapabilities", "()Ljava/awt/ImageCapabilities;", nullptr, $PUBLIC},
	{"getMaxTextureHeight", "()I", nullptr, $PUBLIC},
	{"getMaxTextureWidth", "()I", nullptr, $PUBLIC},
	{"getNativeConfigInfo", "()J", nullptr, $PUBLIC},
	{"getOGLCapabilities", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&CGLGraphicsConfig::getOGLCapabilities))},
	{"getProxyKey", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"initCGL", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&CGLGraphicsConfig::initCGL))},
	{"isCGLAvailable", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&CGLGraphicsConfig::isCGLAvailable))},
	{"isCapPresent", "(I)Z", nullptr, $PUBLIC},
	{"isDoubleBuffered", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(CGLGraphicsConfig::*)()>(&CGLGraphicsConfig::isDoubleBuffered))},
	{"lambda$getConfig$0", "([Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($StringArray*)>(&CGLGraphicsConfig::lambda$getConfig$0))},
	{"nativeGetMaxTextureSize", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&CGLGraphicsConfig::nativeGetMaxTextureSize))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_getCGLConfigInfo 16
#define _METHOD_INDEX_getOGLCapabilities 25
#define _METHOD_INDEX_initCGL 27
#define _METHOD_INDEX_nativeGetMaxTextureSize 32

$InnerClassInfo _CGLGraphicsConfig_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.CGLGraphicsConfig$CGLImageCaps", "sun.java2d.opengl.CGLGraphicsConfig", "CGLImageCaps", $PRIVATE | $STATIC},
	{"sun.java2d.opengl.CGLGraphicsConfig$CGLBufferCaps", "sun.java2d.opengl.CGLGraphicsConfig", "CGLBufferCaps", $PRIVATE | $STATIC},
	{"sun.java2d.opengl.CGLGraphicsConfig$CGLGCDisposerRecord", "sun.java2d.opengl.CGLGraphicsConfig", "CGLGCDisposerRecord", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CGLGraphicsConfig_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.opengl.CGLGraphicsConfig",
	"sun.awt.CGraphicsConfig",
	"sun.java2d.opengl.OGLGraphicsConfig",
	_CGLGraphicsConfig_FieldInfo_,
	_CGLGraphicsConfig_MethodInfo_,
	nullptr,
	nullptr,
	_CGLGraphicsConfig_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.opengl.CGLGraphicsConfig$CGLImageCaps,sun.java2d.opengl.CGLGraphicsConfig$CGLBufferCaps,sun.java2d.opengl.CGLGraphicsConfig$CGLGCDisposerRecord"
};

$Object* allocate$CGLGraphicsConfig($Class* clazz) {
	return $of($alloc(CGLGraphicsConfig));
}

int32_t CGLGraphicsConfig::hashCode() {
	 return this->$CGraphicsConfig::hashCode();
}

bool CGLGraphicsConfig::equals(Object$* arg0) {
	 return this->$CGraphicsConfig::equals(arg0);
}

$Object* CGLGraphicsConfig::clone() {
	 return this->$CGraphicsConfig::clone();
}

void CGLGraphicsConfig::finalize() {
	this->$CGraphicsConfig::finalize();
}

bool CGLGraphicsConfig::cglAvailable = false;
$ImageCapabilities* CGLGraphicsConfig::imageCaps = nullptr;

bool CGLGraphicsConfig::initCGL() {
	$init(CGLGraphicsConfig);
	bool $ret = false;
	$prepareNativeStatic(CGLGraphicsConfig, initCGL, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int64_t CGLGraphicsConfig::getCGLConfigInfo() {
	$init(CGLGraphicsConfig);
	int64_t $ret = 0;
	$prepareNativeStatic(CGLGraphicsConfig, getCGLConfigInfo, int64_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t CGLGraphicsConfig::getOGLCapabilities(int64_t configInfo) {
	$init(CGLGraphicsConfig);
	int32_t $ret = 0;
	$prepareNativeStatic(CGLGraphicsConfig, getOGLCapabilities, int32_t, int64_t configInfo);
	$ret = $invokeNativeStatic(configInfo);
	$finishNativeStatic();
	return $ret;
}

int32_t CGLGraphicsConfig::nativeGetMaxTextureSize() {
	$init(CGLGraphicsConfig);
	int32_t $ret = 0;
	$prepareNativeStatic(CGLGraphicsConfig, nativeGetMaxTextureSize, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void CGLGraphicsConfig::init$($CGraphicsDevice* device, int64_t configInfo, int32_t maxTextureSize, $ContextCapabilities* oglCaps) {
	$useLocalCurrentObjectStackCache();
	$CGraphicsConfig::init$(device);
	$set(this, disposerReferent, $new($Object));
	this->pConfigInfo = configInfo;
	$set(this, oglCaps, oglCaps);
	this->maxTextureSize = maxTextureSize;
	$set(this, context, $new($OGLContext, $($OGLRenderQueue::getInstance())));
	$Disposer::addRecord(this->disposerReferent, $$new($CGLGraphicsConfig$CGLGCDisposerRecord, this->pConfigInfo));
}

$Object* CGLGraphicsConfig::getProxyKey() {
	return $of(this);
}

$SurfaceData* CGLGraphicsConfig::createManagedSurface(int32_t w, int32_t h, int32_t transparency) {
	return $CGLSurfaceData::createData(this, w, h, $(getColorModel(transparency)), nullptr, $OGLSurfaceData::TEXTURE);
}

CGLGraphicsConfig* CGLGraphicsConfig::getConfig($CGraphicsDevice* device) {
	$init(CGLGraphicsConfig);
	$useLocalCurrentObjectStackCache();
	if (!CGLGraphicsConfig::cglAvailable) {
		return nullptr;
	}
	int64_t cfginfo = 0;
	int32_t textureSize = 0;
	$var($StringArray, ids, $new($StringArray, 1));
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$OGLContext::invalidateCurrentContext();
			cfginfo = getCGLConfigInfo();
			if (cfginfo != (int64_t)0) {
				textureSize = nativeGetMaxTextureSize();
				textureSize = textureSize <= 16384 ? textureSize / 2 : 8192;
				$OGLContext::setScratchSurface(cfginfo);
				rq->flushAndInvokeNow(static_cast<$Runnable*>($$new(CGLGraphicsConfig$$Lambda$lambda$getConfig$0, ids)));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (cfginfo == 0) {
		return nullptr;
	}
	int32_t oglCaps = getOGLCapabilities(cfginfo);
	$var($ContextCapabilities, caps, $new($OGLContext$OGLContextCaps, oglCaps, ids->get(0)));
	return $new(CGLGraphicsConfig, device, cfginfo, textureSize, caps);
}

bool CGLGraphicsConfig::isCGLAvailable() {
	$init(CGLGraphicsConfig);
	return CGLGraphicsConfig::cglAvailable;
}

bool CGLGraphicsConfig::isCapPresent(int32_t cap) {
	return (((int32_t)($nc(this->oglCaps)->getCaps() & (uint32_t)cap)) != 0);
}

int64_t CGLGraphicsConfig::getNativeConfigInfo() {
	return this->pConfigInfo;
}

$BufferedContext* CGLGraphicsConfig::getContext() {
	return this->context;
}

$BufferedImage* CGLGraphicsConfig::createCompatibleImage(int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, model, $new($DirectColorModel, 24, 0x00FF0000, 0x0000FF00, 255));
	$var($WritableRaster, raster, model->createCompatibleWritableRaster(width, height));
	return $new($BufferedImage, model, raster, model->isAlphaPremultiplied(), ($Hashtable*)nullptr);
}

$ColorModel* CGLGraphicsConfig::getColorModel(int32_t transparency) {
	{
		$var($ColorSpace, cs, nullptr)
		switch (transparency) {
		case $Transparency::OPAQUE:
			{
				return $new($DirectColorModel, 24, 0x00FF0000, 0x0000FF00, 255);
			}
		case $Transparency::BITMASK:
			{
				return $new($DirectColorModel, 25, 0x00FF0000, 0x0000FF00, 255, 0x01000000);
			}
		case $Transparency::TRANSLUCENT:
			{
				$assign(cs, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
				return $new($DirectColorModel, cs, 32, 0x00FF0000, 0x0000FF00, 255, (int32_t)0xFF000000, true, $DataBuffer::TYPE_INT);
			}
		default:
			{
				return nullptr;
			}
		}
	}
}

bool CGLGraphicsConfig::isDoubleBuffered() {
	return isCapPresent(0x00010000);
}

void CGLGraphicsConfig::displayChanged() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
		$nc(rq)->lock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$OGLContext::invalidateCurrentContext();
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
}

$String* CGLGraphicsConfig::toString() {
	$useLocalCurrentObjectStackCache();
	return ($str({"CGLGraphicsConfig["_s, $($nc($($cast($CGraphicsDevice, getDevice())))->getIDstring()), "]"_s}));
}

$SurfaceData* CGLGraphicsConfig::createSurfaceData($CFRetainedResource* layer) {
	return $CGLSurfaceData::createData($cast($CGLLayer, layer));
}

$Image* CGLGraphicsConfig::createAcceleratedImage($Component* target, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, model, getColorModel($Transparency::OPAQUE));
	$var($WritableRaster, wr, $nc(model)->createCompatibleWritableRaster(width, height));
	return $new($OffScreenImage, target, model, wr, model->isAlphaPremultiplied());
}

void CGLGraphicsConfig::assertOperationSupported(int32_t numBuffers, $BufferCapabilities* caps) {
	if (numBuffers != 2) {
		$throwNew($AWTException, "Only double buffering is supported"_s);
	}
	$var($BufferCapabilities, configCaps, getBufferCapabilities());
	if (!$nc(configCaps)->isPageFlipping()) {
		$throwNew($AWTException, "Page flipping is not supported"_s);
	}
	$init($BufferCapabilities$FlipContents);
	if ($nc(caps)->getFlipContents() == $BufferCapabilities$FlipContents::PRIOR) {
		$throwNew($AWTException, "FlipContents.PRIOR is not supported"_s);
	}
}

$Image* CGLGraphicsConfig::createBackBuffer($LWComponentPeer* peer) {
	$var($Rectangle, r, $nc(peer)->getBounds());
	int32_t w = $Math::max(1, $nc(r)->width);
	int32_t h = $Math::max(1, $nc(r)->height);
	int32_t transparency = peer->isTranslucent() ? $Transparency::TRANSLUCENT : $Transparency::OPAQUE;
	return $new($SunVolatileImage, this, w, h, transparency, nullptr);
}

void CGLGraphicsConfig::destroyBackBuffer($Image* backBuffer) {
	if (backBuffer != nullptr) {
		backBuffer->flush();
	}
}

void CGLGraphicsConfig::flip($LWComponentPeer* peer, $Image* backBuffer, int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, $nc(peer)->getGraphics());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(g)->drawImage(backBuffer, x1, y1, x2, y2, x1, y1, x2, y2, nullptr);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(g)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$init($BufferCapabilities$FlipContents);
	if (flipAction == $BufferCapabilities$FlipContents::BACKGROUND) {
		$var($Graphics2D, bg, $cast($Graphics2D, $nc(backBuffer)->getGraphics()));
		{
			$var($Throwable, var$2, nullptr);
			try {
				$nc(bg)->setBackground($(peer->getBackground()));
				int32_t var$3 = backBuffer->getWidth(nullptr);
				bg->clearRect(0, 0, var$3, backBuffer->getHeight(nullptr));
			} catch ($Throwable& var$4) {
				$assign(var$2, var$4);
			} /*finally*/ {
				$nc(bg)->dispose();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
}

$BufferCapabilities* CGLGraphicsConfig::getBufferCapabilities() {
	if (this->bufferCaps == nullptr) {
		$set(this, bufferCaps, $new($CGLGraphicsConfig$CGLBufferCaps, isDoubleBuffered()));
	}
	return this->bufferCaps;
}

$ImageCapabilities* CGLGraphicsConfig::getImageCapabilities() {
	return CGLGraphicsConfig::imageCaps;
}

$VolatileImage* CGLGraphicsConfig::createCompatibleVolatileImage(int32_t width, int32_t height, int32_t transparency, int32_t type) {
	$useLocalCurrentObjectStackCache();
	if ((type != 5 && type != 3) || transparency == $Transparency::BITMASK || type == 5 && !isCapPresent(12)) {
		return nullptr;
	}
	$var($SunVolatileImage, vi, $new($AccelTypedVolatileImage, this, width, height, transparency, type));
	$var($Surface, sd, vi->getDestSurface());
	if (!($instanceOf($AccelSurface, sd)) || $nc(($cast($AccelSurface, sd)))->getType() != type) {
		vi->flush();
		$assign(vi, nullptr);
	}
	return vi;
}

$ContextCapabilities* CGLGraphicsConfig::getContextCapabilities() {
	return this->oglCaps;
}

int32_t CGLGraphicsConfig::getMaxTextureWidth() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $div(this->maxTextureSize, $nc($($cast($CGraphicsDevice, getDevice())))->getScaleFactor());
	return $Math::max(var$0, $nc($(getBounds()))->width);
}

int32_t CGLGraphicsConfig::getMaxTextureHeight() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $div(this->maxTextureSize, $nc($($cast($CGraphicsDevice, getDevice())))->getScaleFactor());
	return $Math::max(var$0, $nc($(getBounds()))->height);
}

void CGLGraphicsConfig::lambda$getConfig$0($StringArray* ids) {
	$init(CGLGraphicsConfig);
	$nc(ids)->set(0, $($OGLContext::getOGLIdString()));
}

void clinit$CGLGraphicsConfig($Class* class$) {
	$assignStatic(CGLGraphicsConfig::imageCaps, $new($CGLGraphicsConfig$CGLImageCaps));
	{
		CGLGraphicsConfig::cglAvailable = CGLGraphicsConfig::initCGL();
	}
}

CGLGraphicsConfig::CGLGraphicsConfig() {
}

$Class* CGLGraphicsConfig::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CGLGraphicsConfig$$Lambda$lambda$getConfig$0::classInfo$.name)) {
			return CGLGraphicsConfig$$Lambda$lambda$getConfig$0::load$(name, initialize);
		}
	}
	$loadClass(CGLGraphicsConfig, name, initialize, &_CGLGraphicsConfig_ClassInfo_, clinit$CGLGraphicsConfig, allocate$CGLGraphicsConfig);
	return class$;
}

$Class* CGLGraphicsConfig::class$ = nullptr;

		} // opengl
	} // java2d
} // sun