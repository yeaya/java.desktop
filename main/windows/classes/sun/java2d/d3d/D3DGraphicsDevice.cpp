#include <sun/java2d/d3d/D3DGraphicsDevice.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/DisplayMode.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/WindowPeer.h>
#include <java/lang/Runnable.h>
#include <java/util/ArrayList.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/Win32GraphicsConfig.h>
#include <sun/awt/Win32GraphicsDevice.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/d3d/D3DContext$D3DContextCaps.h>
#include <sun/java2d/d3d/D3DContext.h>
#include <sun/java2d/d3d/D3DGraphicsConfig.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$1.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$1Result.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$2.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$2Result.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$3.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$3Result.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$4.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$4Result.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$5.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$6.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$7.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$8.h>
#include <sun/java2d/d3d/D3DGraphicsDevice$D3DFSWindowAdapter.h>
#include <sun/java2d/d3d/D3DRenderQueue.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/hw/ContextCapabilities.h>
#include <sun/java2d/windows/WindowsFlags.h>
#include <jcpp.h>

using $GraphicsConfigurationArray = $Array<::java::awt::GraphicsConfiguration>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $DisplayMode = ::java::awt::DisplayMode;
using $Frame = ::java::awt::Frame;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $WindowPeer = ::java::awt::peer::WindowPeer;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ArrayList = ::java::util::ArrayList;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $Win32GraphicsConfig = ::sun::awt::Win32GraphicsConfig;
using $Win32GraphicsDevice = ::sun::awt::Win32GraphicsDevice;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $D3DContext = ::sun::java2d::d3d::D3DContext;
using $D3DContext$D3DContextCaps = ::sun::java2d::d3d::D3DContext$D3DContextCaps;
using $D3DGraphicsConfig = ::sun::java2d::d3d::D3DGraphicsConfig;
using $D3DGraphicsDevice$1 = ::sun::java2d::d3d::D3DGraphicsDevice$1;
using $D3DGraphicsDevice$1Result = ::sun::java2d::d3d::D3DGraphicsDevice$1Result;
using $D3DGraphicsDevice$2 = ::sun::java2d::d3d::D3DGraphicsDevice$2;
using $D3DGraphicsDevice$2Result = ::sun::java2d::d3d::D3DGraphicsDevice$2Result;
using $D3DGraphicsDevice$3 = ::sun::java2d::d3d::D3DGraphicsDevice$3;
using $D3DGraphicsDevice$3Result = ::sun::java2d::d3d::D3DGraphicsDevice$3Result;
using $D3DGraphicsDevice$4 = ::sun::java2d::d3d::D3DGraphicsDevice$4;
using $D3DGraphicsDevice$4Result = ::sun::java2d::d3d::D3DGraphicsDevice$4Result;
using $D3DGraphicsDevice$5 = ::sun::java2d::d3d::D3DGraphicsDevice$5;
using $D3DGraphicsDevice$6 = ::sun::java2d::d3d::D3DGraphicsDevice$6;
using $D3DGraphicsDevice$7 = ::sun::java2d::d3d::D3DGraphicsDevice$7;
using $D3DGraphicsDevice$8 = ::sun::java2d::d3d::D3DGraphicsDevice$8;
using $D3DGraphicsDevice$D3DFSWindowAdapter = ::sun::java2d::d3d::D3DGraphicsDevice$D3DFSWindowAdapter;
using $D3DRenderQueue = ::sun::java2d::d3d::D3DRenderQueue;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $ContextCapabilities = ::sun::java2d::pipe::hw::ContextCapabilities;
using $WindowsFlags = ::sun::java2d::windows::WindowsFlags;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DGraphicsDevice_FieldInfo_[] = {
	{"context", "Lsun/java2d/d3d/D3DContext;", nullptr, $PRIVATE, $field(D3DGraphicsDevice, context)},
	{"d3dAvailable", "Z", nullptr, $PRIVATE | $STATIC, $staticField(D3DGraphicsDevice, d3dAvailable)},
	{"d3dCaps", "Lsun/java2d/pipe/hw/ContextCapabilities;", nullptr, $PRIVATE, $field(D3DGraphicsDevice, d3dCaps)},
	{"fsStatus", "Z", nullptr, $PRIVATE, $field(D3DGraphicsDevice, fsStatus)},
	{"ownerOrigBounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(D3DGraphicsDevice, ownerOrigBounds)},
	{"ownerWasVisible", "Z", nullptr, $PRIVATE, $field(D3DGraphicsDevice, ownerWasVisible)},
	{"realFSWindow", "Ljava/awt/Window;", nullptr, $PRIVATE, $field(D3DGraphicsDevice, realFSWindow)},
	{"fsWindowListener", "Ljava/awt/event/WindowListener;", nullptr, $PRIVATE, $field(D3DGraphicsDevice, fsWindowListener)},
	{"fsWindowWasAlwaysOnTop", "Z", nullptr, $PRIVATE, $field(D3DGraphicsDevice, fsWindowWasAlwaysOnTop)},
	{}
};

$MethodInfo _D3DGraphicsDevice_MethodInfo_[] = {
	{"<init>", "(ILsun/java2d/pipe/hw/ContextCapabilities;)V", nullptr, $PRIVATE, $method(static_cast<void(D3DGraphicsDevice::*)(int32_t,$ContextCapabilities*)>(&D3DGraphicsDevice::init$))},
	{"addFSWindowListener", "(Ljava/awt/Window;)V", nullptr, $PROTECTED},
	{"configDisplayMode", "(ILjava/awt/peer/WindowPeer;IIII)V", nullptr, $PROTECTED},
	{"configDisplayModeNative", "(IJIIII)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int64_t,int32_t,int32_t,int32_t,int32_t)>(&D3DGraphicsDevice::configDisplayModeNative))},
	{"createDevice", "(I)Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, $PUBLIC | $STATIC, $method(static_cast<D3DGraphicsDevice*(*)(int32_t)>(&D3DGraphicsDevice::createDevice))},
	{"displayChanged", "()V", nullptr, $PUBLIC},
	{"enterFullScreenExclusive", "(ILjava/awt/peer/WindowPeer;)V", nullptr, $PROTECTED},
	{"enterFullScreenExclusiveNative", "(IJ)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(int32_t,int64_t)>(&D3DGraphicsDevice::enterFullScreenExclusiveNative))},
	{"enumDisplayModes", "(ILjava/util/ArrayList;)V", "(ILjava/util/ArrayList<Ljava/awt/DisplayMode;>;)V", $PROTECTED},
	{"enumDisplayModesNative", "(ILjava/util/ArrayList;)V", "(ILjava/util/ArrayList<Ljava/awt/DisplayMode;>;)V", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,$ArrayList*)>(&D3DGraphicsDevice::enumDisplayModesNative))},
	{"exitFullScreenExclusive", "(ILjava/awt/peer/WindowPeer;)V", nullptr, $PROTECTED},
	{"exitFullScreenExclusiveNative", "(I)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(int32_t)>(&D3DGraphicsDevice::exitFullScreenExclusiveNative))},
	{"getAvailableAcceleratedMemory", "()I", nullptr, $PUBLIC},
	{"getAvailableAcceleratedMemoryNative", "(I)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int32_t)>(&D3DGraphicsDevice::getAvailableAcceleratedMemoryNative))},
	{"getConfigurations", "()[Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getContext", "()Lsun/java2d/d3d/D3DContext;", nullptr, 0, $method(static_cast<$D3DContext*(D3DGraphicsDevice::*)()>(&D3DGraphicsDevice::getContext))},
	{"getContextCapabilities", "()Lsun/java2d/pipe/hw/ContextCapabilities;", nullptr, 0, $method(static_cast<$ContextCapabilities*(D3DGraphicsDevice::*)()>(&D3DGraphicsDevice::getContextCapabilities))},
	{"getCurrentDisplayMode", "(I)Ljava/awt/DisplayMode;", nullptr, $PROTECTED},
	{"getCurrentDisplayModeNative", "(I)Ljava/awt/DisplayMode;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$DisplayMode*(*)(int32_t)>(&D3DGraphicsDevice::getCurrentDisplayModeNative))},
	{"getDefaultConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getDeviceCaps", "(I)Lsun/java2d/pipe/hw/ContextCapabilities;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ContextCapabilities*(*)(int32_t)>(&D3DGraphicsDevice::getDeviceCaps))},
	{"getDeviceCapsNative", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&D3DGraphicsDevice::getDeviceCapsNative))},
	{"getDeviceIdNative", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int32_t)>(&D3DGraphicsDevice::getDeviceIdNative))},
	{"getToplevelOwner", "(Ljava/awt/Window;)Ljava/awt/Frame;", nullptr, $PRIVATE, $method(static_cast<$Frame*(D3DGraphicsDevice::*)($Window*)>(&D3DGraphicsDevice::getToplevelOwner))},
	{"initD3D", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&D3DGraphicsDevice::initD3D))},
	{"invalidate", "(I)V", nullptr, $PROTECTED},
	{"isCapPresent", "(I)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(D3DGraphicsDevice::*)(int32_t)>(&D3DGraphicsDevice::isCapPresent))},
	{"isD3DAvailable", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&D3DGraphicsDevice::isD3DAvailable))},
	{"isD3DAvailableOnDevice", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&D3DGraphicsDevice::isD3DAvailableOnDevice))},
	{"isD3DAvailableOnDeviceNative", "(I)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(int32_t)>(&D3DGraphicsDevice::isD3DAvailableOnDeviceNative))},
	{"isD3DEnabledOnDevice", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(D3DGraphicsDevice::*)()>(&D3DGraphicsDevice::isD3DEnabledOnDevice))},
	{"removeFSWindowListener", "(Ljava/awt/Window;)V", nullptr, $PROTECTED},
	{}
};

#define _METHOD_INDEX_configDisplayModeNative 3
#define _METHOD_INDEX_enterFullScreenExclusiveNative 7
#define _METHOD_INDEX_enumDisplayModesNative 9
#define _METHOD_INDEX_exitFullScreenExclusiveNative 11
#define _METHOD_INDEX_getAvailableAcceleratedMemoryNative 13
#define _METHOD_INDEX_getCurrentDisplayModeNative 18
#define _METHOD_INDEX_getDeviceCapsNative 21
#define _METHOD_INDEX_getDeviceIdNative 22
#define _METHOD_INDEX_initD3D 24
#define _METHOD_INDEX_isD3DAvailableOnDeviceNative 29

$InnerClassInfo _D3DGraphicsDevice_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DGraphicsDevice$D3DFSWindowAdapter", "sun.java2d.d3d.D3DGraphicsDevice", "D3DFSWindowAdapter", $PRIVATE | $STATIC},
	{"sun.java2d.d3d.D3DGraphicsDevice$8", nullptr, nullptr, 0},
	{"sun.java2d.d3d.D3DGraphicsDevice$4Result", nullptr, "Result", 0},
	{"sun.java2d.d3d.D3DGraphicsDevice$7", nullptr, nullptr, 0},
	{"sun.java2d.d3d.D3DGraphicsDevice$3Result", nullptr, "Result", 0},
	{"sun.java2d.d3d.D3DGraphicsDevice$6", nullptr, nullptr, 0},
	{"sun.java2d.d3d.D3DGraphicsDevice$5", nullptr, nullptr, 0},
	{"sun.java2d.d3d.D3DGraphicsDevice$4", nullptr, nullptr, 0},
	{"sun.java2d.d3d.D3DGraphicsDevice$2Result", nullptr, "Result", 0},
	{"sun.java2d.d3d.D3DGraphicsDevice$3", nullptr, nullptr, 0},
	{"sun.java2d.d3d.D3DGraphicsDevice$2", nullptr, nullptr, 0},
	{"sun.java2d.d3d.D3DGraphicsDevice$1", nullptr, nullptr, 0},
	{"sun.java2d.d3d.D3DGraphicsDevice$1Result", nullptr, "Result", 0},
	{}
};

$ClassInfo _D3DGraphicsDevice_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.d3d.D3DGraphicsDevice",
	"sun.awt.Win32GraphicsDevice",
	nullptr,
	_D3DGraphicsDevice_FieldInfo_,
	_D3DGraphicsDevice_MethodInfo_,
	nullptr,
	nullptr,
	_D3DGraphicsDevice_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DGraphicsDevice$D3DFSWindowAdapter,sun.java2d.d3d.D3DGraphicsDevice$8,sun.java2d.d3d.D3DGraphicsDevice$4Result,sun.java2d.d3d.D3DGraphicsDevice$7,sun.java2d.d3d.D3DGraphicsDevice$3Result,sun.java2d.d3d.D3DGraphicsDevice$6,sun.java2d.d3d.D3DGraphicsDevice$5,sun.java2d.d3d.D3DGraphicsDevice$4,sun.java2d.d3d.D3DGraphicsDevice$2Result,sun.java2d.d3d.D3DGraphicsDevice$3,sun.java2d.d3d.D3DGraphicsDevice$2,sun.java2d.d3d.D3DGraphicsDevice$1,sun.java2d.d3d.D3DGraphicsDevice$1Result"
};

$Object* allocate$D3DGraphicsDevice($Class* clazz) {
	return $of($alloc(D3DGraphicsDevice));
}

bool D3DGraphicsDevice::d3dAvailable = false;

bool D3DGraphicsDevice::initD3D() {
	$init(D3DGraphicsDevice);
	bool $ret = false;
	$prepareNativeStatic(D3DGraphicsDevice, initD3D, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

D3DGraphicsDevice* D3DGraphicsDevice::createDevice(int32_t screen) {
	$init(D3DGraphicsDevice);
	$useLocalCurrentObjectStackCache();
	if (!D3DGraphicsDevice::d3dAvailable) {
		return nullptr;
	}
	$var($ContextCapabilities, d3dCaps, getDeviceCaps(screen));
	if (((int32_t)($nc(d3dCaps)->getCaps() & (uint32_t)0x00040000)) == 0) {
		if ($WindowsFlags::isD3DVerbose()) {
			$nc($System::out)->println($$str({"Could not enable Direct3D pipeline on screen "_s, $$str(screen)}));
		}
		return nullptr;
	}
	if ($WindowsFlags::isD3DVerbose()) {
		$nc($System::out)->println($$str({"Direct3D pipeline enabled on screen "_s, $$str(screen)}));
	}
	$var(D3DGraphicsDevice, gd, $new(D3DGraphicsDevice, screen, d3dCaps));
	return gd;
}

int32_t D3DGraphicsDevice::getDeviceCapsNative(int32_t screen) {
	$init(D3DGraphicsDevice);
	int32_t $ret = 0;
	$prepareNativeStatic(D3DGraphicsDevice, getDeviceCapsNative, int32_t, int32_t screen);
	$ret = $invokeNativeStatic(screen);
	$finishNativeStatic();
	return $ret;
}

$String* D3DGraphicsDevice::getDeviceIdNative(int32_t screen) {
	$init(D3DGraphicsDevice);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(D3DGraphicsDevice, getDeviceIdNative, $String*, int32_t screen);
	$assign($ret, $invokeNativeStaticObject(screen));
	$finishNativeStatic();
	return $ret;
}

$ContextCapabilities* D3DGraphicsDevice::getDeviceCaps(int32_t screen) {
	$init(D3DGraphicsDevice);
	$useLocalCurrentObjectStackCache();
	$var($ContextCapabilities, d3dCaps, nullptr);
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			{
			}
			$var($D3DGraphicsDevice$1Result, res, $new($D3DGraphicsDevice$1Result));
			rq->flushAndInvokeNow($$new($D3DGraphicsDevice$1, res, screen));
			$assign(d3dCaps, $new($D3DContext$D3DContextCaps, res->caps, res->id));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return d3dCaps != nullptr ? d3dCaps : static_cast<$ContextCapabilities*>($new($D3DContext$D3DContextCaps, 0, nullptr));
}

bool D3DGraphicsDevice::isCapPresent(int32_t cap) {
	return (((int32_t)($nc(this->d3dCaps)->getCaps() & (uint32_t)cap)) != 0);
}

void D3DGraphicsDevice::init$(int32_t screennum, $ContextCapabilities* d3dCaps) {
	$useLocalCurrentObjectStackCache();
	$Win32GraphicsDevice::init$(screennum);
	$set(this, ownerOrigBounds, nullptr);
	$set(this, descString, $str({"D3DGraphicsDevice[screen="_s, $$str(screennum)}));
	$set(this, d3dCaps, d3dCaps);
	$set(this, context, $new($D3DContext, $($D3DRenderQueue::getInstance()), this));
}

bool D3DGraphicsDevice::isD3DEnabledOnDevice() {
	bool var$0 = isValid();
	return var$0 && isCapPresent(0x00040000);
}

bool D3DGraphicsDevice::isD3DAvailable() {
	$init(D3DGraphicsDevice);
	return D3DGraphicsDevice::d3dAvailable;
}

$Frame* D3DGraphicsDevice::getToplevelOwner($Window* w) {
	$var($Window, owner, w);
	while (owner != nullptr) {
		$assign(owner, owner->getOwner());
		if ($instanceOf($Frame, owner)) {
			return $cast($Frame, owner);
		}
	}
	return nullptr;
}

bool D3DGraphicsDevice::enterFullScreenExclusiveNative(int32_t screen, int64_t hwnd) {
	$init(D3DGraphicsDevice);
	bool $ret = false;
	$prepareNativeStatic(D3DGraphicsDevice, enterFullScreenExclusiveNative, bool, int32_t screen, int64_t hwnd);
	$ret = $invokeNativeStatic(screen, hwnd);
	$finishNativeStatic();
	return $ret;
}

void D3DGraphicsDevice::enterFullScreenExclusive(int32_t screen, $WindowPeer* wp) {
	$useLocalCurrentObjectStackCache();
	$var($WWindowPeer, wpeer, $cast($WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this->realFSWindow)));
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			rq->flushAndInvokeNow($$new($D3DGraphicsDevice$2, this, wpeer, screen));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (!this->fsStatus) {
		$Win32GraphicsDevice::enterFullScreenExclusive(screen, wp);
	}
}

bool D3DGraphicsDevice::exitFullScreenExclusiveNative(int32_t screen) {
	$init(D3DGraphicsDevice);
	bool $ret = false;
	$prepareNativeStatic(D3DGraphicsDevice, exitFullScreenExclusiveNative, bool, int32_t screen);
	$ret = $invokeNativeStatic(screen);
	$finishNativeStatic();
	return $ret;
}

void D3DGraphicsDevice::exitFullScreenExclusive(int32_t screen, $WindowPeer* w) {
	$useLocalCurrentObjectStackCache();
	if (this->fsStatus) {
		$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
		$nc(rq)->lock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				rq->flushAndInvokeNow($$new($D3DGraphicsDevice$3, this, screen));
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				rq->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		$Win32GraphicsDevice::exitFullScreenExclusive(screen, w);
	}
}

void D3DGraphicsDevice::addFSWindowListener($Window* w) {
	$useLocalCurrentObjectStackCache();
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	if (!($instanceOf($Frame, w)) && !($instanceOf($Dialog, w)) && ($set(this, realFSWindow, getToplevelOwner(w))) != nullptr) {
		$set(this, ownerOrigBounds, $nc(this->realFSWindow)->getBounds());
		$var($WWindowPeer, fp, $cast($WWindowPeer, $nc(acc)->getPeer(this->realFSWindow)));
		this->ownerWasVisible = $nc(this->realFSWindow)->isVisible();
		$var($Rectangle, r, $nc(w)->getBounds());
		$nc(fp)->reshape($nc(r)->x, r->y, r->width, r->height);
		fp->setVisible(true);
	} else {
		$set(this, realFSWindow, w);
	}
	this->fsWindowWasAlwaysOnTop = $nc(this->realFSWindow)->isAlwaysOnTop();
	$nc(($cast($WWindowPeer, $($nc(acc)->getPeer(this->realFSWindow)))))->setAlwaysOnTop(true);
	$set(this, fsWindowListener, $new($D3DGraphicsDevice$D3DFSWindowAdapter));
	$nc(this->realFSWindow)->addWindowListener(this->fsWindowListener);
}

void D3DGraphicsDevice::removeFSWindowListener($Window* w) {
	$useLocalCurrentObjectStackCache();
	$nc(this->realFSWindow)->removeWindowListener(this->fsWindowListener);
	$set(this, fsWindowListener, nullptr);
	$var($WWindowPeer, wpeer, $cast($WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this->realFSWindow)));
	if (wpeer != nullptr) {
		if (this->ownerOrigBounds != nullptr) {
			if ($nc(this->ownerOrigBounds)->width == 0) {
				$nc(this->ownerOrigBounds)->width = 1;
			}
			if ($nc(this->ownerOrigBounds)->height == 0) {
				$nc(this->ownerOrigBounds)->height = 1;
			}
			wpeer->reshape($nc(this->ownerOrigBounds)->x, $nc(this->ownerOrigBounds)->y, $nc(this->ownerOrigBounds)->width, $nc(this->ownerOrigBounds)->height);
			if (!this->ownerWasVisible) {
				wpeer->setVisible(false);
			}
			$set(this, ownerOrigBounds, nullptr);
		}
		if (!this->fsWindowWasAlwaysOnTop) {
			wpeer->setAlwaysOnTop(false);
		}
	}
	$set(this, realFSWindow, nullptr);
}

$DisplayMode* D3DGraphicsDevice::getCurrentDisplayModeNative(int32_t screen) {
	$init(D3DGraphicsDevice);
	$var($DisplayMode, $ret, nullptr);
	$prepareNativeStatic(D3DGraphicsDevice, getCurrentDisplayModeNative, $DisplayMode*, int32_t screen);
	$assign($ret, $invokeNativeStaticObject(screen));
	$finishNativeStatic();
	return $ret;
}

$DisplayMode* D3DGraphicsDevice::getCurrentDisplayMode(int32_t screen) {
	$useLocalCurrentObjectStackCache();
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($DisplayMode, var$2, nullptr);
		bool return$1 = false;
		try {
			{
			}
			$var($D3DGraphicsDevice$2Result, res, $new($D3DGraphicsDevice$2Result, this));
			rq->flushAndInvokeNow($$new($D3DGraphicsDevice$4, this, res, screen));
			if (res->dm == nullptr) {
				$assign(var$2, $Win32GraphicsDevice::getCurrentDisplayMode(screen));
				return$1 = true;
				goto $finally;
			}
			$assign(var$2, res->dm);
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

void D3DGraphicsDevice::configDisplayModeNative(int32_t screen, int64_t hwnd, int32_t width, int32_t height, int32_t bitDepth, int32_t refreshRate) {
	$init(D3DGraphicsDevice);
	$prepareNativeStatic(D3DGraphicsDevice, configDisplayModeNative, void, int32_t screen, int64_t hwnd, int32_t width, int32_t height, int32_t bitDepth, int32_t refreshRate);
	$invokeNativeStatic(screen, hwnd, width, height, bitDepth, refreshRate);
	$finishNativeStatic();
}

void D3DGraphicsDevice::configDisplayMode(int32_t screen, $WindowPeer* w, int32_t width, int32_t height, int32_t bitDepth, int32_t refreshRate) {
	$useLocalCurrentObjectStackCache();
	if (!this->fsStatus) {
		$Win32GraphicsDevice::configDisplayMode(screen, w, width, height, bitDepth, refreshRate);
		return;
	}
	$var($WWindowPeer, wpeer, $cast($WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this->realFSWindow)));
	if (getFullScreenWindow() != this->realFSWindow) {
		$var($Rectangle, screenBounds, $nc($(getDefaultConfiguration()))->getBounds());
		$nc(wpeer)->reshape($nc(screenBounds)->x, screenBounds->y, width, height);
	}
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			rq->flushAndInvokeNow($$new($D3DGraphicsDevice$5, this, wpeer, screen, width, height, bitDepth, refreshRate));
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

void D3DGraphicsDevice::enumDisplayModesNative(int32_t screen, $ArrayList* modes) {
	$init(D3DGraphicsDevice);
	$prepareNativeStatic(D3DGraphicsDevice, enumDisplayModesNative, void, int32_t screen, $ArrayList* modes);
	$invokeNativeStatic(screen, modes);
	$finishNativeStatic();
}

void D3DGraphicsDevice::enumDisplayModes(int32_t screen, $ArrayList* modes) {
	$useLocalCurrentObjectStackCache();
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			rq->flushAndInvokeNow($$new($D3DGraphicsDevice$6, this, screen, modes));
			if ($nc(modes)->size() == 0) {
				modes->add($(getCurrentDisplayModeNative(screen)));
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
}

int64_t D3DGraphicsDevice::getAvailableAcceleratedMemoryNative(int32_t screen) {
	$init(D3DGraphicsDevice);
	int64_t $ret = 0;
	$prepareNativeStatic(D3DGraphicsDevice, getAvailableAcceleratedMemoryNative, int64_t, int32_t screen);
	$ret = $invokeNativeStatic(screen);
	$finishNativeStatic();
	return $ret;
}

int32_t D3DGraphicsDevice::getAvailableAcceleratedMemory() {
	$useLocalCurrentObjectStackCache();
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			{
			}
			$var($D3DGraphicsDevice$3Result, res, $new($D3DGraphicsDevice$3Result, this));
			rq->flushAndInvokeNow($$new($D3DGraphicsDevice$7, this, res));
			var$2 = (int32_t)res->mem;
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

$GraphicsConfigurationArray* D3DGraphicsDevice::getConfigurations() {
	if (this->configs == nullptr) {
		if (isD3DEnabledOnDevice()) {
			$set(this, defaultConfig, getDefaultConfiguration());
			if (this->defaultConfig != nullptr) {
				$set(this, configs, $new($GraphicsConfigurationArray, 1));
				$nc(this->configs)->set(0, this->defaultConfig);
				return $cast($GraphicsConfigurationArray, $nc(this->configs)->clone());
			}
		}
	}
	return $Win32GraphicsDevice::getConfigurations();
}

$GraphicsConfiguration* D3DGraphicsDevice::getDefaultConfiguration() {
	if (this->defaultConfig == nullptr) {
		if (isD3DEnabledOnDevice()) {
			$set(this, defaultConfig, $new($D3DGraphicsConfig, this));
		} else {
			$set(this, defaultConfig, $Win32GraphicsDevice::getDefaultConfiguration());
		}
	}
	return this->defaultConfig;
}

bool D3DGraphicsDevice::isD3DAvailableOnDeviceNative(int32_t screen) {
	$init(D3DGraphicsDevice);
	bool $ret = false;
	$prepareNativeStatic(D3DGraphicsDevice, isD3DAvailableOnDeviceNative, bool, int32_t screen);
	$ret = $invokeNativeStatic(screen);
	$finishNativeStatic();
	return $ret;
}

bool D3DGraphicsDevice::isD3DAvailableOnDevice(int32_t screen) {
	$init(D3DGraphicsDevice);
	$useLocalCurrentObjectStackCache();
	if (!D3DGraphicsDevice::d3dAvailable) {
		return false;
	}
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			{
			}
			$var($D3DGraphicsDevice$4Result, res, $new($D3DGraphicsDevice$4Result));
			rq->flushAndInvokeNow($$new($D3DGraphicsDevice$8, res, screen));
			var$2 = res->avail;
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

$D3DContext* D3DGraphicsDevice::getContext() {
	return this->context;
}

$ContextCapabilities* D3DGraphicsDevice::getContextCapabilities() {
	return this->d3dCaps;
}

void D3DGraphicsDevice::displayChanged() {
	$Win32GraphicsDevice::displayChanged();
	if (D3DGraphicsDevice::d3dAvailable) {
		$set(this, d3dCaps, getDeviceCaps(getScreen()));
	}
}

void D3DGraphicsDevice::invalidate(int32_t defaultScreen) {
	$Win32GraphicsDevice::invalidate(defaultScreen);
	$set(this, d3dCaps, $new($D3DContext$D3DContextCaps, 0, nullptr));
}

void clinit$D3DGraphicsDevice($Class* class$) {
	{
		$Toolkit::getDefaultToolkit();
		D3DGraphicsDevice::d3dAvailable = D3DGraphicsDevice::initD3D();
		if (D3DGraphicsDevice::d3dAvailable) {
			$init($Win32GraphicsDevice);
			$Win32GraphicsDevice::pfDisabled = true;
		}
	}
}

D3DGraphicsDevice::D3DGraphicsDevice() {
}

$Class* D3DGraphicsDevice::load$($String* name, bool initialize) {
	$loadClass(D3DGraphicsDevice, name, initialize, &_D3DGraphicsDevice_ClassInfo_, clinit$D3DGraphicsDevice, allocate$D3DGraphicsDevice);
	return class$;
}

$Class* D3DGraphicsDevice::class$ = nullptr;

		} // d3d
	} // java2d
} // sun