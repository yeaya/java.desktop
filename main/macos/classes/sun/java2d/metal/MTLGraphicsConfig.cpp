#include <sun/java2d/metal/MTLGraphicsConfig.h>

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
#include <java/io/File.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Hashtable.h>
#include <sun/awt/CGraphicsConfig.h>
#include <sun/awt/CGraphicsDevice.h>
#include <sun/awt/image/OffScreenImage.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <sun/java2d/Surface.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/metal/MTLContext$MTLContextCaps.h>
#include <sun/java2d/metal/MTLContext.h>
#include <sun/java2d/metal/MTLGraphicsConfig$MTLBufferCaps.h>
#include <sun/java2d/metal/MTLGraphicsConfig$MTLGCDisposerRecord.h>
#include <sun/java2d/metal/MTLGraphicsConfig$MTLImageCaps.h>
#include <sun/java2d/metal/MTLLayer.h>
#include <sun/java2d/metal/MTLRenderQueue.h>
#include <sun/java2d/metal/MTLSurfaceData$MTLLayerSurfaceData.h>
#include <sun/java2d/metal/MTLSurfaceData$MTLOffScreenSurfaceData.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
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
using $File = ::java::io::File;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Hashtable = ::java::util::Hashtable;
using $CGraphicsConfig = ::sun::awt::CGraphicsConfig;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;
using $OffScreenImage = ::sun::awt::image::OffScreenImage;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;
using $Surface = ::sun::java2d::Surface;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $MTLContext = ::sun::java2d::metal::MTLContext;
using $MTLContext$MTLContextCaps = ::sun::java2d::metal::MTLContext$MTLContextCaps;
using $MTLGraphicsConfig$MTLBufferCaps = ::sun::java2d::metal::MTLGraphicsConfig$MTLBufferCaps;
using $MTLGraphicsConfig$MTLGCDisposerRecord = ::sun::java2d::metal::MTLGraphicsConfig$MTLGCDisposerRecord;
using $MTLGraphicsConfig$MTLImageCaps = ::sun::java2d::metal::MTLGraphicsConfig$MTLImageCaps;
using $MTLLayer = ::sun::java2d::metal::MTLLayer;
using $MTLRenderQueue = ::sun::java2d::metal::MTLRenderQueue;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;
using $AccelTypedVolatileImage = ::sun::java2d::pipe::hw::AccelTypedVolatileImage;
using $ContextCapabilities = ::sun::java2d::pipe::hw::ContextCapabilities;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $CFRetainedResource = ::sun::lwawt::macosx::CFRetainedResource;

namespace sun {
	namespace java2d {
		namespace metal {

class MTLGraphicsConfig$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(MTLGraphicsConfig$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(MTLGraphicsConfig::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MTLGraphicsConfig$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MTLGraphicsConfig$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MTLGraphicsConfig$$Lambda$lambda$static$0::*)()>(&MTLGraphicsConfig$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MTLGraphicsConfig$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.metal.MTLGraphicsConfig$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* MTLGraphicsConfig$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(MTLGraphicsConfig$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MTLGraphicsConfig$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _MTLGraphicsConfig_FieldInfo_[] = {
	{"mtlAvailable", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MTLGraphicsConfig, mtlAvailable)},
	{"imageCaps", "Ljava/awt/ImageCapabilities;", nullptr, $PRIVATE | $STATIC, $staticField(MTLGraphicsConfig, imageCaps)},
	{"mtlShadersLib", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MTLGraphicsConfig, mtlShadersLib)},
	{"bufferCaps", "Ljava/awt/BufferCapabilities;", nullptr, $PRIVATE, $field(MTLGraphicsConfig, bufferCaps)},
	{"pConfigInfo", "J", nullptr, $PRIVATE, $field(MTLGraphicsConfig, pConfigInfo)},
	{"mtlCaps", "Lsun/java2d/pipe/hw/ContextCapabilities;", nullptr, $PRIVATE, $field(MTLGraphicsConfig, mtlCaps)},
	{"context", "Lsun/java2d/metal/MTLContext;", nullptr, $PRIVATE | $FINAL, $field(MTLGraphicsConfig, context)},
	{"disposerReferent", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(MTLGraphicsConfig, disposerReferent)},
	{"maxTextureSize", "I", nullptr, $PRIVATE | $FINAL, $field(MTLGraphicsConfig, maxTextureSize)},
	{}
};

$MethodInfo _MTLGraphicsConfig_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/CGraphicsDevice;JILsun/java2d/pipe/hw/ContextCapabilities;)V", nullptr, $PRIVATE, $method(static_cast<void(MTLGraphicsConfig::*)($CGraphicsDevice*,int64_t,int32_t,$ContextCapabilities*)>(&MTLGraphicsConfig::init$))},
	{"assertOperationSupported", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"createAcceleratedImage", "(Ljava/awt/Component;II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createBackBuffer", "(Lsun/lwawt/LWComponentPeer;)Ljava/awt/Image;", "(Lsun/lwawt/LWComponentPeer<**>;)Ljava/awt/Image;", $PUBLIC},
	{"createCompatibleImage", "(II)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"createCompatibleVolatileImage", "(IIII)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"createManagedSurface", "(III)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $method(static_cast<$SurfaceData*(MTLGraphicsConfig::*)(int32_t,int32_t,int32_t)>(&MTLGraphicsConfig::createManagedSurface))},
	{"createSurfaceData", "(Lsun/lwawt/macosx/CFRetainedResource;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"destroyBackBuffer", "(Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"flip", "(Lsun/lwawt/LWComponentPeer;Ljava/awt/Image;IIIILjava/awt/BufferCapabilities$FlipContents;)V", "(Lsun/lwawt/LWComponentPeer<**>;Ljava/awt/Image;IIIILjava/awt/BufferCapabilities$FlipContents;)V", $PUBLIC},
	{"getBufferCapabilities", "()Ljava/awt/BufferCapabilities;", nullptr, $PUBLIC},
	{"getColorModel", "(I)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getConfig", "(Lsun/awt/CGraphicsDevice;I)Lsun/java2d/metal/MTLGraphicsConfig;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MTLGraphicsConfig*(*)($CGraphicsDevice*,int32_t)>(&MTLGraphicsConfig::getConfig))},
	{"getContext", "()Lsun/java2d/metal/MTLContext;", nullptr, $PUBLIC},
	{"getContextCapabilities", "()Lsun/java2d/pipe/hw/ContextCapabilities;", nullptr, $PUBLIC},
	{"getImageCapabilities", "()Ljava/awt/ImageCapabilities;", nullptr, $PUBLIC},
	{"getMTLConfigInfo", "(ILjava/lang/String;)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int32_t,$String*)>(&MTLGraphicsConfig::getMTLConfigInfo))},
	{"getMaxTextureHeight", "()I", nullptr, $PUBLIC},
	{"getMaxTextureWidth", "()I", nullptr, $PUBLIC},
	{"getNativeConfigInfo", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(MTLGraphicsConfig::*)()>(&MTLGraphicsConfig::getNativeConfigInfo))},
	{"getProxyKey", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isCapPresent", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(MTLGraphicsConfig::*)(int32_t)>(&MTLGraphicsConfig::isCapPresent))},
	{"isDoubleBuffered", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(MTLGraphicsConfig::*)()>(&MTLGraphicsConfig::isDoubleBuffered))},
	{"isMetalAvailable", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MTLGraphicsConfig::isMetalAvailable))},
	{"isMetalFrameworkAvailable", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&MTLGraphicsConfig::isMetalFrameworkAvailable))},
	{"lambda$static$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&MTLGraphicsConfig::lambda$static$0))},
	{"nativeGetMaxTextureSize", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&MTLGraphicsConfig::nativeGetMaxTextureSize))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryLoadMetalLibrary", "(ILjava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(int32_t,$String*)>(&MTLGraphicsConfig::tryLoadMetalLibrary))},
	{}
};

#define _METHOD_INDEX_getMTLConfigInfo 20
#define _METHOD_INDEX_isMetalFrameworkAvailable 28
#define _METHOD_INDEX_nativeGetMaxTextureSize 30
#define _METHOD_INDEX_tryLoadMetalLibrary 32

$InnerClassInfo _MTLGraphicsConfig_InnerClassesInfo_[] = {
	{"sun.awt.image.SurfaceManager$ProxiedGraphicsConfig", "sun.awt.image.SurfaceManager", "ProxiedGraphicsConfig", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.java2d.metal.MTLGraphicsConfig$MTLImageCaps", "sun.java2d.metal.MTLGraphicsConfig", "MTLImageCaps", $PRIVATE | $STATIC},
	{"sun.java2d.metal.MTLGraphicsConfig$MTLBufferCaps", "sun.java2d.metal.MTLGraphicsConfig", "MTLBufferCaps", $PRIVATE | $STATIC},
	{"sun.java2d.metal.MTLGraphicsConfig$MTLGCDisposerRecord", "sun.java2d.metal.MTLGraphicsConfig", "MTLGCDisposerRecord", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MTLGraphicsConfig_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.metal.MTLGraphicsConfig",
	"sun.awt.CGraphicsConfig",
	"sun.java2d.pipe.hw.AccelGraphicsConfig,sun.awt.image.SurfaceManager$ProxiedGraphicsConfig",
	_MTLGraphicsConfig_FieldInfo_,
	_MTLGraphicsConfig_MethodInfo_,
	nullptr,
	nullptr,
	_MTLGraphicsConfig_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLGraphicsConfig$MTLImageCaps,sun.java2d.metal.MTLGraphicsConfig$MTLBufferCaps,sun.java2d.metal.MTLGraphicsConfig$MTLGCDisposerRecord"
};

$Object* allocate$MTLGraphicsConfig($Class* clazz) {
	return $of($alloc(MTLGraphicsConfig));
}

int32_t MTLGraphicsConfig::hashCode() {
	 return this->$CGraphicsConfig::hashCode();
}

bool MTLGraphicsConfig::equals(Object$* arg0) {
	 return this->$CGraphicsConfig::equals(arg0);
}

$Object* MTLGraphicsConfig::clone() {
	 return this->$CGraphicsConfig::clone();
}

void MTLGraphicsConfig::finalize() {
	this->$CGraphicsConfig::finalize();
}

bool MTLGraphicsConfig::mtlAvailable = false;
$ImageCapabilities* MTLGraphicsConfig::imageCaps = nullptr;
$String* MTLGraphicsConfig::mtlShadersLib = nullptr;

bool MTLGraphicsConfig::isMetalFrameworkAvailable() {
	$init(MTLGraphicsConfig);
	bool $ret = false;
	$prepareNativeStatic(MTLGraphicsConfig, isMetalFrameworkAvailable, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool MTLGraphicsConfig::tryLoadMetalLibrary(int32_t displayID, $String* shaderLib) {
	$init(MTLGraphicsConfig);
	bool $ret = false;
	$prepareNativeStatic(MTLGraphicsConfig, tryLoadMetalLibrary, bool, int32_t displayID, $String* shaderLib);
	$ret = $invokeNativeStatic(displayID, shaderLib);
	$finishNativeStatic();
	return $ret;
}

int64_t MTLGraphicsConfig::getMTLConfigInfo(int32_t displayID, $String* mtlShadersLib) {
	$init(MTLGraphicsConfig);
	int64_t $ret = 0;
	$prepareNativeStatic(MTLGraphicsConfig, getMTLConfigInfo, int64_t, int32_t displayID, $String* mtlShadersLib);
	$ret = $invokeNativeStatic(displayID, mtlShadersLib);
	$finishNativeStatic();
	return $ret;
}

int32_t MTLGraphicsConfig::nativeGetMaxTextureSize() {
	$init(MTLGraphicsConfig);
	int32_t $ret = 0;
	$prepareNativeStatic(MTLGraphicsConfig, nativeGetMaxTextureSize, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void MTLGraphicsConfig::init$($CGraphicsDevice* device, int64_t configInfo, int32_t maxTextureSize, $ContextCapabilities* mtlCaps) {
	$useLocalCurrentObjectStackCache();
	$CGraphicsConfig::init$(device);
	$set(this, disposerReferent, $new($Object));
	this->pConfigInfo = configInfo;
	$set(this, mtlCaps, mtlCaps);
	this->maxTextureSize = maxTextureSize;
	$set(this, context, $new($MTLContext, $($MTLRenderQueue::getInstance())));
	$Disposer::addRecord(this->disposerReferent, $$new($MTLGraphicsConfig$MTLGCDisposerRecord, this->pConfigInfo));
}

$Object* MTLGraphicsConfig::getProxyKey() {
	return $of(this);
}

$SurfaceData* MTLGraphicsConfig::createManagedSurface(int32_t w, int32_t h, int32_t transparency) {
	return $MTLSurfaceData::createData(this, w, h, $(getColorModel(transparency)), nullptr, $MTLSurfaceData::TEXTURE);
}

MTLGraphicsConfig* MTLGraphicsConfig::getConfig($CGraphicsDevice* device, int32_t displayID) {
	$init(MTLGraphicsConfig);
	$useLocalCurrentObjectStackCache();
	if (!MTLGraphicsConfig::mtlAvailable) {
		return nullptr;
	}
	if (!tryLoadMetalLibrary(displayID, MTLGraphicsConfig::mtlShadersLib)) {
		return nullptr;
	}
	int64_t cfginfo = 0;
	int32_t textureSize = 0;
	$var($MTLRenderQueue, rq, $MTLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			cfginfo = getMTLConfigInfo(displayID, MTLGraphicsConfig::mtlShadersLib);
			if (cfginfo != (int64_t)0) {
				textureSize = nativeGetMaxTextureSize();
				textureSize = textureSize <= 16384 ? textureSize / 2 : 8192;
				$MTLContext::setScratchSurface(cfginfo);
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
	$var($ContextCapabilities, caps, $new($MTLContext$MTLContextCaps, (((((((256 | 128) | 4) | 8) | 16) | 32) | 64) | 0x00040000) | 0x00080000, nullptr));
	return $new(MTLGraphicsConfig, device, cfginfo, textureSize, caps);
}

bool MTLGraphicsConfig::isMetalAvailable() {
	$init(MTLGraphicsConfig);
	return MTLGraphicsConfig::mtlAvailable;
}

bool MTLGraphicsConfig::isCapPresent(int32_t cap) {
	return (((int32_t)($nc(this->mtlCaps)->getCaps() & (uint32_t)cap)) != 0);
}

int64_t MTLGraphicsConfig::getNativeConfigInfo() {
	return this->pConfigInfo;
}

$BufferedContext* MTLGraphicsConfig::getContext() {
	return this->context;
}

$BufferedImage* MTLGraphicsConfig::createCompatibleImage(int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, model, $new($DirectColorModel, 24, 0x00FF0000, 0x0000FF00, 255));
	$var($WritableRaster, raster, model->createCompatibleWritableRaster(width, height));
	return $new($BufferedImage, model, raster, model->isAlphaPremultiplied(), ($Hashtable*)nullptr);
}

$ColorModel* MTLGraphicsConfig::getColorModel(int32_t transparency) {
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

bool MTLGraphicsConfig::isDoubleBuffered() {
	return true;
}

$String* MTLGraphicsConfig::toString() {
	$useLocalCurrentObjectStackCache();
	return ($str({"MTLGraphicsConfig["_s, $($nc($($cast($CGraphicsDevice, getDevice())))->getIDstring()), "]"_s}));
}

$SurfaceData* MTLGraphicsConfig::createSurfaceData($CFRetainedResource* layer) {
	return $MTLSurfaceData::createData($cast($MTLLayer, layer));
}

$Image* MTLGraphicsConfig::createAcceleratedImage($Component* target, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, model, getColorModel($Transparency::OPAQUE));
	$var($WritableRaster, wr, $nc(model)->createCompatibleWritableRaster(width, height));
	return $new($OffScreenImage, target, model, wr, model->isAlphaPremultiplied());
}

void MTLGraphicsConfig::assertOperationSupported(int32_t numBuffers, $BufferCapabilities* caps) {
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

$Image* MTLGraphicsConfig::createBackBuffer($LWComponentPeer* peer) {
	$var($Rectangle, r, $nc(peer)->getBounds());
	int32_t w = $Math::max(1, $nc(r)->width);
	int32_t h = $Math::max(1, $nc(r)->height);
	int32_t transparency = peer->isTranslucent() ? $Transparency::TRANSLUCENT : $Transparency::OPAQUE;
	return $new($SunVolatileImage, this, w, h, transparency, nullptr);
}

void MTLGraphicsConfig::destroyBackBuffer($Image* backBuffer) {
	if (backBuffer != nullptr) {
		backBuffer->flush();
	}
}

void MTLGraphicsConfig::flip($LWComponentPeer* peer, $Image* backBuffer, int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
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

$BufferCapabilities* MTLGraphicsConfig::getBufferCapabilities() {
	if (this->bufferCaps == nullptr) {
		$set(this, bufferCaps, $new($MTLGraphicsConfig$MTLBufferCaps, isDoubleBuffered()));
	}
	return this->bufferCaps;
}

$ImageCapabilities* MTLGraphicsConfig::getImageCapabilities() {
	return MTLGraphicsConfig::imageCaps;
}

$VolatileImage* MTLGraphicsConfig::createCompatibleVolatileImage(int32_t width, int32_t height, int32_t transparency, int32_t type) {
	$useLocalCurrentObjectStackCache();
	if ((type != 5 && type != 3) || transparency == $Transparency::BITMASK) {
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

$ContextCapabilities* MTLGraphicsConfig::getContextCapabilities() {
	return this->mtlCaps;
}

int32_t MTLGraphicsConfig::getMaxTextureWidth() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $div(this->maxTextureSize, $nc($($cast($CGraphicsDevice, getDevice())))->getScaleFactor());
	return $Math::max(var$0, $nc($(getBounds()))->width);
}

int32_t MTLGraphicsConfig::getMaxTextureHeight() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $div(this->maxTextureSize, $nc($($cast($CGraphicsDevice, getDevice())))->getScaleFactor());
	return $Math::max(var$0, $nc($(getBounds()))->height);
}

$String* MTLGraphicsConfig::lambda$static$0() {
	$init(MTLGraphicsConfig);
	$init($File);
	return $str({$($System::getProperty("java.home"_s, ""_s)), $File::separator, "lib"_s, $File::separator, "shaders.metallib"_s});
}

void clinit$MTLGraphicsConfig($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(MTLGraphicsConfig::imageCaps, $new($MTLGraphicsConfig$MTLImageCaps));
	$assignStatic(MTLGraphicsConfig::mtlShadersLib, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(MTLGraphicsConfig$$Lambda$lambda$static$0)))));
	{
		MTLGraphicsConfig::mtlAvailable = MTLGraphicsConfig::isMetalFrameworkAvailable();
	}
}

MTLGraphicsConfig::MTLGraphicsConfig() {
}

$Class* MTLGraphicsConfig::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MTLGraphicsConfig$$Lambda$lambda$static$0::classInfo$.name)) {
			return MTLGraphicsConfig$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(MTLGraphicsConfig, name, initialize, &_MTLGraphicsConfig_ClassInfo_, clinit$MTLGraphicsConfig, allocate$MTLGraphicsConfig);
	return class$;
}

$Class* MTLGraphicsConfig::class$ = nullptr;

		} // metal
	} // java2d
} // sun