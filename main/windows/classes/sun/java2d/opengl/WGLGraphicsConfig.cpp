#include <sun/java2d/opengl/WGLGraphicsConfig.h>

#include <java/awt/AWTException.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Image.h>
#include <java/awt/ImageCapabilities.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <sun/awt/Win32GraphicsConfig.h>
#include <sun/awt/Win32GraphicsDevice.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/SurfaceManager.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/Surface.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/OGLContext$OGLContextCaps.h>
#include <sun/java2d/opengl/OGLContext.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/opengl/WGLGraphicsConfig$1.h>
#include <sun/java2d/opengl/WGLGraphicsConfig$WGLBufferCaps.h>
#include <sun/java2d/opengl/WGLGraphicsConfig$WGLGCDisposerRecord.h>
#include <sun/java2d/opengl/WGLGraphicsConfig$WGLGetConfigInfo.h>
#include <sun/java2d/opengl/WGLGraphicsConfig$WGLImageCaps.h>
#include <sun/java2d/opengl/WGLSurfaceData$WGLOffScreenSurfaceData.h>
#include <sun/java2d/opengl/WGLSurfaceData$WGLVSyncOffScreenSurfaceData.h>
#include <sun/java2d/opengl/WGLSurfaceData$WGLWindowSurfaceData.h>
#include <sun/java2d/opengl/WGLSurfaceData.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <sun/java2d/pipe/hw/AccelTypedVolatileImage.h>
#include <sun/java2d/pipe/hw/ContextCapabilities.h>
#include <sun/java2d/windows/GDIWindowSurfaceData.h>
#include <jcpp.h>

#undef BACKGROUND
#undef BITMASK
#undef COPIED
#undef OPAQUE
#undef PRIOR
#undef TEXTURE
#undef TRANSLUCENT
#undef TRUE
#undef TYPE_INT

using $AWTException = ::java::awt::AWTException;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Image = ::java::awt::Image;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Win32GraphicsConfig = ::sun::awt::Win32GraphicsConfig;
using $Win32GraphicsDevice = ::sun::awt::Win32GraphicsDevice;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $Surface = ::sun::java2d::Surface;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $OGLContext = ::sun::java2d::opengl::OGLContext;
using $OGLContext$OGLContextCaps = ::sun::java2d::opengl::OGLContext$OGLContextCaps;
using $OGLGraphicsConfig = ::sun::java2d::opengl::OGLGraphicsConfig;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $WGLGraphicsConfig$1 = ::sun::java2d::opengl::WGLGraphicsConfig$1;
using $WGLGraphicsConfig$WGLBufferCaps = ::sun::java2d::opengl::WGLGraphicsConfig$WGLBufferCaps;
using $WGLGraphicsConfig$WGLGCDisposerRecord = ::sun::java2d::opengl::WGLGraphicsConfig$WGLGCDisposerRecord;
using $WGLGraphicsConfig$WGLGetConfigInfo = ::sun::java2d::opengl::WGLGraphicsConfig$WGLGetConfigInfo;
using $WGLGraphicsConfig$WGLImageCaps = ::sun::java2d::opengl::WGLGraphicsConfig$WGLImageCaps;
using $WGLSurfaceData = ::sun::java2d::opengl::WGLSurfaceData;
using $WGLSurfaceData$WGLOffScreenSurfaceData = ::sun::java2d::opengl::WGLSurfaceData$WGLOffScreenSurfaceData;
using $WGLSurfaceData$WGLVSyncOffScreenSurfaceData = ::sun::java2d::opengl::WGLSurfaceData$WGLVSyncOffScreenSurfaceData;
using $WGLSurfaceData$WGLWindowSurfaceData = ::sun::java2d::opengl::WGLSurfaceData$WGLWindowSurfaceData;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;
using $AccelTypedVolatileImage = ::sun::java2d::pipe::hw::AccelTypedVolatileImage;
using $ContextCapabilities = ::sun::java2d::pipe::hw::ContextCapabilities;
using $GDIWindowSurfaceData = ::sun::java2d::windows::GDIWindowSurfaceData;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _WGLGraphicsConfig_FieldInfo_[] = {
	{"wglAvailable", "Z", nullptr, $PROTECTED | $STATIC, $staticField(WGLGraphicsConfig, wglAvailable)},
	{"imageCaps", "Ljava/awt/ImageCapabilities;", nullptr, $PRIVATE | $STATIC, $staticField(WGLGraphicsConfig, imageCaps)},
	{"bufferCaps", "Ljava/awt/BufferCapabilities;", nullptr, $PRIVATE, $field(WGLGraphicsConfig, bufferCaps)},
	{"pConfigInfo", "J", nullptr, $PRIVATE, $field(WGLGraphicsConfig, pConfigInfo)},
	{"oglCaps", "Lsun/java2d/pipe/hw/ContextCapabilities;", nullptr, $PRIVATE, $field(WGLGraphicsConfig, oglCaps)},
	{"context", "Lsun/java2d/opengl/OGLContext;", nullptr, $PRIVATE | $FINAL, $field(WGLGraphicsConfig, context)},
	{"disposerReferent", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(WGLGraphicsConfig, disposerReferent)},
	{}
};

$MethodInfo _WGLGraphicsConfig_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/Win32GraphicsDevice;IJLsun/java2d/pipe/hw/ContextCapabilities;)V", nullptr, $PROTECTED, $method(static_cast<void(WGLGraphicsConfig::*)($Win32GraphicsDevice*,int32_t,int64_t,$ContextCapabilities*)>(&WGLGraphicsConfig::init$))},
	{"assertOperationSupported", "(Ljava/awt/Component;ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"createBackBuffer", "(Lsun/awt/windows/WComponentPeer;)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"createCompatibleVolatileImage", "(IIII)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"createManagedSurface", "(III)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"createSurfaceData", "(Lsun/awt/windows/WComponentPeer;I)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"displayChanged", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"flip", "(Lsun/awt/windows/WComponentPeer;Ljava/awt/Component;Ljava/awt/image/VolatileImage;IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"getBufferCapabilities", "()Ljava/awt/BufferCapabilities;", nullptr, $PUBLIC},
	{"getColorModel", "(I)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getConfig", "(Lsun/awt/Win32GraphicsDevice;I)Lsun/java2d/opengl/WGLGraphicsConfig;", nullptr, $PUBLIC | $STATIC, $method(static_cast<WGLGraphicsConfig*(*)($Win32GraphicsDevice*,int32_t)>(&WGLGraphicsConfig::getConfig))},
	{"getContext", "()Lsun/java2d/opengl/OGLContext;", nullptr, $PUBLIC | $FINAL},
	{"getContextCapabilities", "()Lsun/java2d/pipe/hw/ContextCapabilities;", nullptr, $PUBLIC},
	{"getDefaultPixFmt", "(I)I", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&WGLGraphicsConfig::getDefaultPixFmt))},
	{"getImageCapabilities", "()Ljava/awt/ImageCapabilities;", nullptr, $PUBLIC},
	{"getNativeConfigInfo", "()J", nullptr, $PUBLIC | $FINAL},
	{"getOGLCapabilities", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&WGLGraphicsConfig::getOGLCapabilities))},
	{"getProxyKey", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getWGLConfigInfo", "(II)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int32_t,int32_t)>(&WGLGraphicsConfig::getWGLConfigInfo))},
	{"initWGL", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&WGLGraphicsConfig::initWGL))},
	{"isCapPresent", "(I)Z", nullptr, $PUBLIC | $FINAL},
	{"isWGLAvailable", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&WGLGraphicsConfig::isWGLAvailable))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_getDefaultPixFmt 17
#define _METHOD_INDEX_getOGLCapabilities 20
#define _METHOD_INDEX_getWGLConfigInfo 22
#define _METHOD_INDEX_initWGL 23

$InnerClassInfo _WGLGraphicsConfig_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.WGLGraphicsConfig$WGLImageCaps", "sun.java2d.opengl.WGLGraphicsConfig", "WGLImageCaps", $PRIVATE | $STATIC},
	{"sun.java2d.opengl.WGLGraphicsConfig$WGLBufferCaps", "sun.java2d.opengl.WGLGraphicsConfig", "WGLBufferCaps", $PRIVATE | $STATIC},
	{"sun.java2d.opengl.WGLGraphicsConfig$WGLGCDisposerRecord", "sun.java2d.opengl.WGLGraphicsConfig", "WGLGCDisposerRecord", $PRIVATE | $STATIC},
	{"sun.java2d.opengl.WGLGraphicsConfig$WGLGetConfigInfo", "sun.java2d.opengl.WGLGraphicsConfig", "WGLGetConfigInfo", $PRIVATE | $STATIC},
	{"sun.java2d.opengl.WGLGraphicsConfig$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WGLGraphicsConfig_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.opengl.WGLGraphicsConfig",
	"sun.awt.Win32GraphicsConfig",
	"sun.java2d.opengl.OGLGraphicsConfig",
	_WGLGraphicsConfig_FieldInfo_,
	_WGLGraphicsConfig_MethodInfo_,
	nullptr,
	nullptr,
	_WGLGraphicsConfig_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.opengl.WGLGraphicsConfig$WGLImageCaps,sun.java2d.opengl.WGLGraphicsConfig$WGLBufferCaps,sun.java2d.opengl.WGLGraphicsConfig$WGLGCDisposerRecord,sun.java2d.opengl.WGLGraphicsConfig$WGLGetConfigInfo,sun.java2d.opengl.WGLGraphicsConfig$1"
};

$Object* allocate$WGLGraphicsConfig($Class* clazz) {
	return $of($alloc(WGLGraphicsConfig));
}

int32_t WGLGraphicsConfig::hashCode() {
	 return this->$Win32GraphicsConfig::hashCode();
}

bool WGLGraphicsConfig::equals(Object$* arg0) {
	 return this->$Win32GraphicsConfig::equals(arg0);
}

$Object* WGLGraphicsConfig::clone() {
	 return this->$Win32GraphicsConfig::clone();
}

void WGLGraphicsConfig::finalize() {
	this->$Win32GraphicsConfig::finalize();
}

bool WGLGraphicsConfig::wglAvailable = false;
$ImageCapabilities* WGLGraphicsConfig::imageCaps = nullptr;

int32_t WGLGraphicsConfig::getDefaultPixFmt(int32_t screennum) {
	$init(WGLGraphicsConfig);
	int32_t $ret = 0;
	$prepareNativeStatic(WGLGraphicsConfig, getDefaultPixFmt, int32_t, int32_t screennum);
	$ret = $invokeNativeStatic(WGLGraphicsConfig, getDefaultPixFmt, screennum);
	$finishNativeStatic();
	return $ret;
}

bool WGLGraphicsConfig::initWGL() {
	$init(WGLGraphicsConfig);
	bool $ret = false;
	$prepareNativeStatic(WGLGraphicsConfig, initWGL, bool);
	$ret = $invokeNativeStatic(WGLGraphicsConfig, initWGL);
	$finishNativeStatic();
	return $ret;
}

int64_t WGLGraphicsConfig::getWGLConfigInfo(int32_t screennum, int32_t visualnum) {
	$init(WGLGraphicsConfig);
	int64_t $ret = 0;
	$prepareNativeStatic(WGLGraphicsConfig, getWGLConfigInfo, int64_t, int32_t screennum, int32_t visualnum);
	$ret = $invokeNativeStatic(WGLGraphicsConfig, getWGLConfigInfo, screennum, visualnum);
	$finishNativeStatic();
	return $ret;
}

int32_t WGLGraphicsConfig::getOGLCapabilities(int64_t configInfo) {
	$init(WGLGraphicsConfig);
	int32_t $ret = 0;
	$prepareNativeStatic(WGLGraphicsConfig, getOGLCapabilities, int32_t, int64_t configInfo);
	$ret = $invokeNativeStatic(WGLGraphicsConfig, getOGLCapabilities, configInfo);
	$finishNativeStatic();
	return $ret;
}

void WGLGraphicsConfig::init$($Win32GraphicsDevice* device, int32_t visualnum, int64_t configInfo, $ContextCapabilities* oglCaps) {
	$useLocalCurrentObjectStackCache();
	$Win32GraphicsConfig::init$(device, visualnum);
	$set(this, disposerReferent, $new($Object));
	this->pConfigInfo = configInfo;
	$set(this, oglCaps, oglCaps);
	$set(this, context, $new($OGLContext, $($OGLRenderQueue::getInstance())));
	$Disposer::addRecord(this->disposerReferent, $$new($WGLGraphicsConfig$WGLGCDisposerRecord, this->pConfigInfo));
}

$Object* WGLGraphicsConfig::getProxyKey() {
	return $of(this);
}

$SurfaceData* WGLGraphicsConfig::createManagedSurface(int32_t w, int32_t h, int32_t transparency) {
	return $WGLSurfaceData::createData(this, w, h, $(getColorModel(transparency)), nullptr, $OGLSurfaceData::TEXTURE);
}

WGLGraphicsConfig* WGLGraphicsConfig::getConfig($Win32GraphicsDevice* device, int32_t pixfmt) {
	$init(WGLGraphicsConfig);
	$useLocalCurrentObjectStackCache();
	if (!WGLGraphicsConfig::wglAvailable) {
		return nullptr;
	}
	int64_t cfginfo = 0;
	$var($StringArray, ids, $new($StringArray, 1));
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$OGLContext::invalidateCurrentContext();
			$var($WGLGraphicsConfig$WGLGetConfigInfo, action, $new($WGLGraphicsConfig$WGLGetConfigInfo, $nc(device)->getScreen(), pixfmt));
			rq->flushAndInvokeNow(action);
			cfginfo = action->getConfigInfo();
			if (cfginfo != (int64_t)0) {
				$OGLContext::setScratchSurface(cfginfo);
				rq->flushAndInvokeNow($$new($WGLGraphicsConfig$1, ids));
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
	return $new(WGLGraphicsConfig, device, pixfmt, cfginfo, caps);
}

bool WGLGraphicsConfig::isWGLAvailable() {
	$init(WGLGraphicsConfig);
	return WGLGraphicsConfig::wglAvailable;
}

bool WGLGraphicsConfig::isCapPresent(int32_t cap) {
	return (((int32_t)($nc(this->oglCaps)->getCaps() & (uint32_t)cap)) != 0);
}

int64_t WGLGraphicsConfig::getNativeConfigInfo() {
	return this->pConfigInfo;
}

$BufferedContext* WGLGraphicsConfig::getContext() {
	return this->context;
}

void WGLGraphicsConfig::displayChanged() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$Win32GraphicsConfig::displayChanged();
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

$ColorModel* WGLGraphicsConfig::getColorModel(int32_t transparency) {
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

$String* WGLGraphicsConfig::toString() {
	$useLocalCurrentObjectStackCache();
	return ($str({"WGLGraphicsConfig[dev="_s, $($cast($Win32GraphicsDevice, getDevice())), ",pixfmt="_s, $$str(this->visual), "]"_s}));
}

$SurfaceData* WGLGraphicsConfig::createSurfaceData($WComponentPeer* peer, int32_t numBackBuffers) {
	$var($SurfaceData, sd, $WGLSurfaceData::createData(peer));
	if (sd == nullptr) {
		$assign(sd, $GDIWindowSurfaceData::createData(peer));
	}
	return sd;
}

void WGLGraphicsConfig::assertOperationSupported($Component* target, int32_t numBuffers, $BufferCapabilities* caps) {
	if (numBuffers > 2) {
		$throwNew($AWTException, "Only double or single buffering is supported"_s);
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

$VolatileImage* WGLGraphicsConfig::createBackBuffer($WComponentPeer* peer) {
	$var($Component, target, $cast($Component, $nc(peer)->getTarget()));
	int32_t w = $Math::max(1, $nc(target)->getWidth());
	int32_t h = $Math::max(1, $nc(target)->getHeight());
	$init($Boolean);
	return $new($SunVolatileImage, target, w, h, $Boolean::TRUE);
}

void WGLGraphicsConfig::flip($WComponentPeer* peer, $Component* target, $VolatileImage* backBuffer, int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	$useLocalCurrentObjectStackCache();
	$init($BufferCapabilities$FlipContents);
	if (flipAction == $BufferCapabilities$FlipContents::COPIED) {
		$var($SurfaceManager, vsm, $SurfaceManager::getManager(backBuffer));
		$var($SurfaceData, sd, $nc(vsm)->getPrimarySurfaceData());
		if ($instanceOf($WGLSurfaceData$WGLVSyncOffScreenSurfaceData, sd)) {
			$var($WGLSurfaceData$WGLVSyncOffScreenSurfaceData, vsd, $cast($WGLSurfaceData$WGLVSyncOffScreenSurfaceData, sd));
			$var($SurfaceData, bbsd, $nc(vsd)->getFlipSurface());
			$init($Color);
			$var($Graphics2D, bbg, $new($SunGraphics2D, bbsd, $Color::black, $Color::white, nullptr));
			{
				$var($Throwable, var$0, nullptr);
				try {
					bbg->drawImage(backBuffer, 0, 0, nullptr);
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					bbg->dispose();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		} else {
			$var($Graphics, g, $nc(peer)->getGraphics());
			{
				$var($Throwable, var$2, nullptr);
				try {
					$nc(g)->drawImage(backBuffer, x1, y1, x2, y2, x1, y1, x2, y2, nullptr);
				} catch ($Throwable& var$3) {
					$assign(var$2, var$3);
				} /*finally*/ {
					$nc(g)->dispose();
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
			return;
		}
	} else {
		if (flipAction == $BufferCapabilities$FlipContents::PRIOR) {
			return;
		}
	}
	$OGLSurfaceData::swapBuffers($nc(peer)->getData());
	if (flipAction == $BufferCapabilities$FlipContents::BACKGROUND) {
		$var($Graphics, g, $nc(backBuffer)->getGraphics());
		{
			$var($Throwable, var$4, nullptr);
			try {
				$nc(g)->setColor($($nc(target)->getBackground()));
				int32_t var$5 = backBuffer->getWidth();
				g->fillRect(0, 0, var$5, backBuffer->getHeight());
			} catch ($Throwable& var$6) {
				$assign(var$4, var$6);
			} /*finally*/ {
				$nc(g)->dispose();
			}
			if (var$4 != nullptr) {
				$throw(var$4);
			}
		}
	}
}

$BufferCapabilities* WGLGraphicsConfig::getBufferCapabilities() {
	if (this->bufferCaps == nullptr) {
		bool dblBuf = isCapPresent(0x00010000);
		$set(this, bufferCaps, $new($WGLGraphicsConfig$WGLBufferCaps, dblBuf));
	}
	return this->bufferCaps;
}

$ImageCapabilities* WGLGraphicsConfig::getImageCapabilities() {
	return WGLGraphicsConfig::imageCaps;
}

$VolatileImage* WGLGraphicsConfig::createCompatibleVolatileImage(int32_t width, int32_t height, int32_t transparency, int32_t type) {
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

$ContextCapabilities* WGLGraphicsConfig::getContextCapabilities() {
	return this->oglCaps;
}

void clinit$WGLGraphicsConfig($Class* class$) {
	$assignStatic(WGLGraphicsConfig::imageCaps, $new($WGLGraphicsConfig$WGLImageCaps));
	{
		WGLGraphicsConfig::wglAvailable = WGLGraphicsConfig::initWGL();
	}
}

WGLGraphicsConfig::WGLGraphicsConfig() {
}

$Class* WGLGraphicsConfig::load$($String* name, bool initialize) {
	$loadClass(WGLGraphicsConfig, name, initialize, &_WGLGraphicsConfig_ClassInfo_, clinit$WGLGraphicsConfig, allocate$WGLGraphicsConfig);
	return class$;
}

$Class* WGLGraphicsConfig::class$ = nullptr;

		} // opengl
	} // java2d
} // sun