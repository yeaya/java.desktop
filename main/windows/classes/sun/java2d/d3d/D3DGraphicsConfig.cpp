#include <sun/java2d/d3d/D3DGraphicsConfig.h>

#include <java/awt/AWTException.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
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
#include <sun/awt/Win32GraphicsConfig.h>
#include <sun/awt/Win32GraphicsDevice.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/SurfaceManager.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/Surface.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DContext.h>
#include <sun/java2d/d3d/D3DGraphicsConfig$D3DBufferCaps.h>
#include <sun/java2d/d3d/D3DGraphicsConfig$D3DImageCaps.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <sun/java2d/d3d/D3DRenderQueue.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <sun/java2d/pipe/hw/AccelTypedVolatileImage.h>
#include <sun/java2d/pipe/hw/ContextCapabilities.h>
#include <jcpp.h>

#undef BACKGROUND
#undef BITMASK
#undef COPIED
#undef OPAQUE
#undef TEXTURE
#undef TRANSLUCENT
#undef TRUE
#undef TYPE_INT

using $AWTException = ::java::awt::AWTException;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
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
using $Win32GraphicsConfig = ::sun::awt::Win32GraphicsConfig;
using $Win32GraphicsDevice = ::sun::awt::Win32GraphicsDevice;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $Surface = ::sun::java2d::Surface;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DContext = ::sun::java2d::d3d::D3DContext;
using $D3DGraphicsConfig$D3DBufferCaps = ::sun::java2d::d3d::D3DGraphicsConfig$D3DBufferCaps;
using $D3DGraphicsConfig$D3DImageCaps = ::sun::java2d::d3d::D3DGraphicsConfig$D3DImageCaps;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DRenderQueue = ::sun::java2d::d3d::D3DRenderQueue;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;
using $AccelTypedVolatileImage = ::sun::java2d::pipe::hw::AccelTypedVolatileImage;
using $ContextCapabilities = ::sun::java2d::pipe::hw::ContextCapabilities;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DGraphicsConfig_FieldInfo_[] = {
	{"imageCaps", "Ljava/awt/ImageCapabilities;", nullptr, $PRIVATE | $STATIC, $staticField(D3DGraphicsConfig, imageCaps)},
	{"bufferCaps", "Ljava/awt/BufferCapabilities;", nullptr, $PRIVATE, $field(D3DGraphicsConfig, bufferCaps)},
	{"device", "Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, $PRIVATE | $FINAL, $field(D3DGraphicsConfig, device)},
	{}
};

$MethodInfo _D3DGraphicsConfig_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/d3d/D3DGraphicsDevice;)V", nullptr, $PROTECTED, $method(static_cast<void(D3DGraphicsConfig::*)($D3DGraphicsDevice*)>(&D3DGraphicsConfig::init$))},
	{"assertOperationSupported", "(Ljava/awt/Component;ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"createBackBuffer", "(Lsun/awt/windows/WComponentPeer;)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"createCompatibleVolatileImage", "(IIII)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"createManagedSurface", "(III)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $method(static_cast<$SurfaceData*(D3DGraphicsConfig::*)(int32_t,int32_t,int32_t)>(&D3DGraphicsConfig::createManagedSurface))},
	{"createSurfaceData", "(Lsun/awt/windows/WComponentPeer;I)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"displayChanged", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"flip", "(Lsun/awt/windows/WComponentPeer;Ljava/awt/Component;Ljava/awt/image/VolatileImage;IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"getBufferCapabilities", "()Ljava/awt/BufferCapabilities;", nullptr, $PUBLIC},
	{"getColorModel", "(I)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getContext", "()Lsun/java2d/d3d/D3DContext;", nullptr, $PUBLIC},
	{"getContextCapabilities", "()Lsun/java2d/pipe/hw/ContextCapabilities;", nullptr, $PUBLIC},
	{"getD3DDevice", "()Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, 0, $method(static_cast<$D3DGraphicsDevice*(D3DGraphicsConfig::*)()>(&D3DGraphicsConfig::getD3DDevice))},
	{"getImageCapabilities", "()Ljava/awt/ImageCapabilities;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _D3DGraphicsConfig_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DGraphicsConfig$D3DImageCaps", "sun.java2d.d3d.D3DGraphicsConfig", "D3DImageCaps", $PRIVATE | $STATIC},
	{"sun.java2d.d3d.D3DGraphicsConfig$D3DBufferCaps", "sun.java2d.d3d.D3DGraphicsConfig", "D3DBufferCaps", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _D3DGraphicsConfig_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.d3d.D3DGraphicsConfig",
	"sun.awt.Win32GraphicsConfig",
	"sun.java2d.pipe.hw.AccelGraphicsConfig",
	_D3DGraphicsConfig_FieldInfo_,
	_D3DGraphicsConfig_MethodInfo_,
	nullptr,
	nullptr,
	_D3DGraphicsConfig_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DGraphicsConfig$D3DImageCaps,sun.java2d.d3d.D3DGraphicsConfig$D3DBufferCaps"
};

$Object* allocate$D3DGraphicsConfig($Class* clazz) {
	return $of($alloc(D3DGraphicsConfig));
}

int32_t D3DGraphicsConfig::hashCode() {
	 return this->$Win32GraphicsConfig::hashCode();
}

bool D3DGraphicsConfig::equals(Object$* arg0) {
	 return this->$Win32GraphicsConfig::equals(arg0);
}

$Object* D3DGraphicsConfig::clone() {
	 return this->$Win32GraphicsConfig::clone();
}

void D3DGraphicsConfig::finalize() {
	this->$Win32GraphicsConfig::finalize();
}

$ImageCapabilities* D3DGraphicsConfig::imageCaps = nullptr;

void D3DGraphicsConfig::init$($D3DGraphicsDevice* device) {
	$Win32GraphicsConfig::init$(device, 0);
	$set(this, device, device);
}

$SurfaceData* D3DGraphicsConfig::createManagedSurface(int32_t w, int32_t h, int32_t transparency) {
	return $D3DSurfaceData::createData(this, w, h, $(getColorModel(transparency)), nullptr, $D3DSurfaceData::TEXTURE);
}

void D3DGraphicsConfig::displayChanged() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$Win32GraphicsConfig::displayChanged();
		$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
		$nc(rq)->lock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$D3DContext::invalidateCurrentContext();
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

$ColorModel* D3DGraphicsConfig::getColorModel(int32_t transparency) {
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

$String* D3DGraphicsConfig::toString() {
	return ($str({"D3DGraphicsConfig[dev="_s, this->device, ",pixfmt="_s, $$str(this->visual), "]"_s}));
}

$SurfaceData* D3DGraphicsConfig::createSurfaceData($WComponentPeer* peer, int32_t numBackBuffers) {
	return $Win32GraphicsConfig::createSurfaceData(peer, numBackBuffers);
}

void D3DGraphicsConfig::assertOperationSupported($Component* target, int32_t numBuffers, $BufferCapabilities* caps) {
	if (numBuffers < 2 || numBuffers > 4) {
		$throwNew($AWTException, "Only 2-4 buffers supported"_s);
	}
	$init($BufferCapabilities$FlipContents);
	if ($nc(caps)->getFlipContents() == $BufferCapabilities$FlipContents::COPIED && numBuffers != 2) {
		$throwNew($AWTException, "FlipContents.COPIED is onlysupported for 2 buffers"_s);
	}
}

$VolatileImage* D3DGraphicsConfig::createBackBuffer($WComponentPeer* peer) {
	$var($Component, target, $cast($Component, $nc(peer)->getTarget()));
	int32_t w = $Math::max(1, $nc(target)->getWidth());
	int32_t h = $Math::max(1, $nc(target)->getHeight());
	$init($Boolean);
	return $new($SunVolatileImage, target, w, h, $Boolean::TRUE);
}

void D3DGraphicsConfig::flip($WComponentPeer* peer, $Component* target, $VolatileImage* backBuffer, int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceManager, d3dvsm, $SurfaceManager::getManager(backBuffer));
	$var($SurfaceData, sd, $nc(d3dvsm)->getPrimarySurfaceData());
	if ($instanceOf($D3DSurfaceData, sd)) {
		$var($D3DSurfaceData, d3dsd, $cast($D3DSurfaceData, sd));
		double scaleX = $nc(sd)->getDefaultScaleX();
		double scaleY = sd->getDefaultScaleY();
		if (scaleX > 1 || scaleY > 1) {
			int32_t sx1 = $cast(int32_t, $Math::floor(x1 * scaleX));
			int32_t sy1 = $cast(int32_t, $Math::floor(y1 * scaleY));
			int32_t sx2 = $cast(int32_t, $Math::ceil(x2 * scaleX));
			int32_t sy2 = $cast(int32_t, $Math::ceil(y2 * scaleY));
			$D3DSurfaceData::swapBuffers(d3dsd, sx1, sy1, sx2, sy2);
		} else {
			$D3DSurfaceData::swapBuffers(d3dsd, x1, y1, x2, y2);
		}
	} else {
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
	}
	$init($BufferCapabilities$FlipContents);
	if (flipAction == $BufferCapabilities$FlipContents::BACKGROUND) {
		$var($Graphics, g, $nc(backBuffer)->getGraphics());
		{
			$var($Throwable, var$2, nullptr);
			try {
				$nc(g)->setColor($($nc(target)->getBackground()));
				int32_t var$3 = backBuffer->getWidth();
				g->fillRect(0, 0, var$3, backBuffer->getHeight());
			} catch ($Throwable& var$4) {
				$assign(var$2, var$4);
			} /*finally*/ {
				$nc(g)->dispose();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
}

$BufferCapabilities* D3DGraphicsConfig::getBufferCapabilities() {
	if (this->bufferCaps == nullptr) {
		$set(this, bufferCaps, $new($D3DGraphicsConfig$D3DBufferCaps));
	}
	return this->bufferCaps;
}

$ImageCapabilities* D3DGraphicsConfig::getImageCapabilities() {
	return D3DGraphicsConfig::imageCaps;
}

$D3DGraphicsDevice* D3DGraphicsConfig::getD3DDevice() {
	return this->device;
}

$BufferedContext* D3DGraphicsConfig::getContext() {
	return $nc(this->device)->getContext();
}

$VolatileImage* D3DGraphicsConfig::createCompatibleVolatileImage(int32_t width, int32_t height, int32_t transparency, int32_t type) {
	$useLocalCurrentObjectStackCache();
	if (type == 4 || type == 1 || type == 0 || transparency == $Transparency::BITMASK) {
		return nullptr;
	}
	bool isOpaque = transparency == $Transparency::OPAQUE;
	if (type == 5) {
		int32_t cap = isOpaque ? 8 : 4;
		if (!$nc(this->device)->isCapPresent(cap)) {
			return nullptr;
		}
	} else if (type == 2) {
		if (!isOpaque && !$nc(this->device)->isCapPresent(2)) {
			return nullptr;
		}
	}
	$var($SunVolatileImage, vi, $new($AccelTypedVolatileImage, this, width, height, transparency, type));
	$var($Surface, sd, vi->getDestSurface());
	if (!($instanceOf($AccelSurface, sd)) || $nc(($cast($AccelSurface, sd)))->getType() != type) {
		vi->flush();
		$assign(vi, nullptr);
	}
	return vi;
}

$ContextCapabilities* D3DGraphicsConfig::getContextCapabilities() {
	return $nc(this->device)->getContextCapabilities();
}

void clinit$D3DGraphicsConfig($Class* class$) {
	$assignStatic(D3DGraphicsConfig::imageCaps, $new($D3DGraphicsConfig$D3DImageCaps));
}

D3DGraphicsConfig::D3DGraphicsConfig() {
}

$Class* D3DGraphicsConfig::load$($String* name, bool initialize) {
	$loadClass(D3DGraphicsConfig, name, initialize, &_D3DGraphicsConfig_ClassInfo_, clinit$D3DGraphicsConfig, allocate$D3DGraphicsConfig);
	return class$;
}

$Class* D3DGraphicsConfig::class$ = nullptr;

		} // d3d
	} // java2d
} // sun