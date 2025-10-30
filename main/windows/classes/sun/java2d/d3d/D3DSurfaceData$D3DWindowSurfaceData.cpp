#include <sun/java2d/d3d/D3DSurfaceData$D3DWindowSurfaceData.h>

#include <java/awt/GraphicsDevice.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/image/ColorModel.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/ScreenUpdateManager.h>
#include <sun/java2d/StateTracker.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DContext.h>
#include <sun/java2d/d3d/D3DGraphicsConfig.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <sun/java2d/d3d/D3DRenderQueue.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType.h>
#include <jcpp.h>

#undef SWAP_COPY
#undef VSYNC_DEFAULT
#undef WINDOW

using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $ScreenUpdateManager = ::sun::java2d::ScreenUpdateManager;
using $StateTracker = ::sun::java2d::StateTracker;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DContext = ::sun::java2d::d3d::D3DContext;
using $D3DGraphicsConfig = ::sun::java2d::d3d::D3DGraphicsConfig;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DRenderQueue = ::sun::java2d::d3d::D3DRenderQueue;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;
using $ExtendedBufferCapabilities$VSyncType = ::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DSurfaceData$D3DWindowSurfaceData_FieldInfo_[] = {
	{"dirtyTracker", "Lsun/java2d/StateTracker;", nullptr, 0, $field(D3DSurfaceData$D3DWindowSurfaceData, dirtyTracker)},
	{}
};

$MethodInfo _D3DSurfaceData$D3DWindowSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WComponentPeer;Lsun/java2d/d3d/D3DGraphicsConfig;)V", nullptr, $PUBLIC, $method(static_cast<void(D3DSurfaceData$D3DWindowSurfaceData::*)($WComponentPeer*,$D3DGraphicsConfig*)>(&D3DSurfaceData$D3DWindowSurfaceData::init$))},
	{"disableAccelerationForSurface", "()V", nullptr, 0},
	{"getContext", "()Lsun/java2d/pipe/BufferedContext;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"isDirty", "()Z", nullptr, $PUBLIC},
	{"markClean", "()V", nullptr, $PUBLIC},
	{"restoreSurface", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _D3DSurfaceData$D3DWindowSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DSurfaceData$D3DWindowSurfaceData", "sun.java2d.d3d.D3DSurfaceData", "D3DWindowSurfaceData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _D3DSurfaceData$D3DWindowSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.d3d.D3DSurfaceData$D3DWindowSurfaceData",
	"sun.java2d.d3d.D3DSurfaceData",
	nullptr,
	_D3DSurfaceData$D3DWindowSurfaceData_FieldInfo_,
	_D3DSurfaceData$D3DWindowSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_D3DSurfaceData$D3DWindowSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DSurfaceData"
};

$Object* allocate$D3DSurfaceData$D3DWindowSurfaceData($Class* clazz) {
	return $of($alloc(D3DSurfaceData$D3DWindowSurfaceData));
}

void D3DSurfaceData$D3DWindowSurfaceData::init$($WComponentPeer* peer, $D3DGraphicsConfig* gc) {
	$useLocalCurrentObjectStackCache();
	$var($WComponentPeer, var$0, peer);
	$var($D3DGraphicsConfig, var$1, gc);
	int32_t var$2 = $nc($($nc(peer)->getBounds()))->width;
	int32_t var$3 = $nc($(peer->getBounds()))->height;
	$init($ExtendedBufferCapabilities$VSyncType);
	$D3DSurfaceData::init$(var$0, var$1, var$2, var$3, nullptr, $(peer->getColorModel()), 1, $D3DSurfaceData::SWAP_COPY, $ExtendedBufferCapabilities$VSyncType::VSYNC_DEFAULT, $AccelSurface::WINDOW);
	$set(this, dirtyTracker, getStateTracker());
}

$SurfaceData* D3DSurfaceData$D3DWindowSurfaceData::getReplacement() {
	$var($ScreenUpdateManager, mgr, $ScreenUpdateManager::getInstance());
	return $nc(mgr)->getReplacementScreenSurface(this->peer, this);
}

$Object* D3DSurfaceData$D3DWindowSurfaceData::getDestination() {
	return $of($nc(this->peer)->getTarget());
}

void D3DSurfaceData$D3DWindowSurfaceData::disableAccelerationForSurface() {
	setSurfaceLost(true);
	invalidate();
	flush();
	$nc(this->peer)->disableAcceleration();
	$nc($($ScreenUpdateManager::getInstance()))->dropScreenSurface(this);
}

void D3DSurfaceData$D3DWindowSurfaceData::restoreSurface() {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->peer)->isAccelCapable()) {
		$throwNew($InvalidPipeException, "Onscreen acceleration disabled for this surface"_s);
	}
	$var($Window, fsw, $nc(this->graphicsDevice)->getFullScreenWindow());
	if (fsw != nullptr && !$equals(fsw, $nc(this->peer)->getTarget())) {
		$throwNew($InvalidPipeException, "Can\'t restore onscreen surface when in full-screen mode"_s);
	}
	$D3DSurfaceData::restoreSurface();
	setSurfaceLost(false);
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc($($cast($D3DContext, getContext())))->invalidateContext();
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

bool D3DSurfaceData$D3DWindowSurfaceData::isDirty() {
	return !$nc(this->dirtyTracker)->isCurrent();
}

void D3DSurfaceData$D3DWindowSurfaceData::markClean() {
	$set(this, dirtyTracker, getStateTracker());
}

$BufferedContext* D3DSurfaceData$D3DWindowSurfaceData::getContext() {
	return $D3DSurfaceData::getContext();
}

D3DSurfaceData$D3DWindowSurfaceData::D3DSurfaceData$D3DWindowSurfaceData() {
}

$Class* D3DSurfaceData$D3DWindowSurfaceData::load$($String* name, bool initialize) {
	$loadClass(D3DSurfaceData$D3DWindowSurfaceData, name, initialize, &_D3DSurfaceData$D3DWindowSurfaceData_ClassInfo_, allocate$D3DSurfaceData$D3DWindowSurfaceData);
	return class$;
}

$Class* D3DSurfaceData$D3DWindowSurfaceData::class$ = nullptr;

		} // d3d
	} // java2d
} // sun