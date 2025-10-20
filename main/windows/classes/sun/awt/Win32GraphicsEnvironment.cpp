#include <sun/awt/Win32GraphicsEnvironment.h>

#include <java/awt/AWTError.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/ListIterator.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/SunDisplayChanger.h>
#include <sun/awt/Win32GraphicsDevice.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/java2d/SurfaceManagerFactory.h>
#include <sun/java2d/WindowsSurfaceManagerFactory.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <sun/java2d/windows/WindowsFlags.h>
#include <jcpp.h>

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $AWTError = ::java::awt::AWTError;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $ArrayList = ::java::util::ArrayList;
using $ListIterator = ::java::util::ListIterator;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $SunDisplayChanger = ::sun::awt::SunDisplayChanger;
using $Win32GraphicsDevice = ::sun::awt::Win32GraphicsDevice;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $SurfaceManagerFactory = ::sun::java2d::SurfaceManagerFactory;
using $WindowsSurfaceManagerFactory = ::sun::java2d::WindowsSurfaceManagerFactory;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $WindowsFlags = ::sun::java2d::windows::WindowsFlags;

namespace sun {
	namespace awt {

$FieldInfo _Win32GraphicsEnvironment_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Win32GraphicsEnvironment, $assertionsDisabled)},
	{"debugScaleX", "F", nullptr, $STATIC | $FINAL, $staticField(Win32GraphicsEnvironment, debugScaleX)},
	{"debugScaleY", "F", nullptr, $STATIC | $FINAL, $staticField(Win32GraphicsEnvironment, debugScaleY)},
	{"displayInitialized", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Win32GraphicsEnvironment, displayInitialized)},
	{"oldDevices", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/ref/WeakReference<Lsun/awt/Win32GraphicsDevice;>;>;", $PRIVATE, $field(Win32GraphicsEnvironment, oldDevices)},
	{"isDWMCompositionEnabled", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Win32GraphicsEnvironment, isDWMCompositionEnabled$)},
	{}
};

$MethodInfo _Win32GraphicsEnvironment_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Win32GraphicsEnvironment::*)()>(&Win32GraphicsEnvironment::init$))},
	{"displayChanged", "()V", nullptr, $PUBLIC},
	{"dwmCompositionChanged", "(Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool)>(&Win32GraphicsEnvironment::dwmCompositionChanged))},
	{"getDefaultScreen", "()I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(Win32GraphicsEnvironment::*)()>(&Win32GraphicsEnvironment::getDefaultScreen))},
	{"getDefaultScreenDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC},
	{"getNumScreens", "()I", nullptr, $PROTECTED | $NATIVE},
	{"getXResolution", "()I", nullptr, $PUBLIC | $NATIVE, $method(static_cast<int32_t(Win32GraphicsEnvironment::*)()>(&Win32GraphicsEnvironment::getXResolution))},
	{"getYResolution", "()I", nullptr, $PUBLIC | $NATIVE, $method(static_cast<int32_t(Win32GraphicsEnvironment::*)()>(&Win32GraphicsEnvironment::getYResolution))},
	{"initDisplay", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Win32GraphicsEnvironment::initDisplay))},
	{"initDisplayWrapper", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Win32GraphicsEnvironment::initDisplayWrapper))},
	{"isDWMCompositionEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&Win32GraphicsEnvironment::isDWMCompositionEnabled))},
	{"isDisplayLocal", "()Z", nullptr, $PUBLIC},
	{"isFlipStrategyPreferred", "(Ljava/awt/peer/ComponentPeer;)Z", nullptr, $PUBLIC},
	{"isVistaOS", "()Z", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&Win32GraphicsEnvironment::isVistaOS))},
	{"makeScreenDevice", "(I)Ljava/awt/GraphicsDevice;", nullptr, $PROTECTED},
	{}
};

#define _METHOD_INDEX_getDefaultScreen 3
#define _METHOD_INDEX_getNumScreens 5
#define _METHOD_INDEX_getXResolution 6
#define _METHOD_INDEX_getYResolution 7
#define _METHOD_INDEX_initDisplay 8
#define _METHOD_INDEX_isVistaOS 13

$ClassInfo _Win32GraphicsEnvironment_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.Win32GraphicsEnvironment",
	"sun.java2d.SunGraphicsEnvironment",
	nullptr,
	_Win32GraphicsEnvironment_FieldInfo_,
	_Win32GraphicsEnvironment_MethodInfo_
};

$Object* allocate$Win32GraphicsEnvironment($Class* clazz) {
	return $of($alloc(Win32GraphicsEnvironment));
}

bool Win32GraphicsEnvironment::$assertionsDisabled = false;
float Win32GraphicsEnvironment::debugScaleX = 0.0;
float Win32GraphicsEnvironment::debugScaleY = 0.0;
bool Win32GraphicsEnvironment::displayInitialized = false;
$volatile(bool) Win32GraphicsEnvironment::isDWMCompositionEnabled$ = false;

void Win32GraphicsEnvironment::initDisplay() {
	$init(Win32GraphicsEnvironment);
	$prepareNativeStatic(Win32GraphicsEnvironment, initDisplay, void);
	$invokeNativeStatic(Win32GraphicsEnvironment, initDisplay);
	$finishNativeStatic();
}

void Win32GraphicsEnvironment::initDisplayWrapper() {
	$init(Win32GraphicsEnvironment);
	if (!Win32GraphicsEnvironment::displayInitialized) {
		Win32GraphicsEnvironment::displayInitialized = true;
		initDisplay();
	}
}

void Win32GraphicsEnvironment::init$() {
	$SunGraphicsEnvironment::init$();
}

int32_t Win32GraphicsEnvironment::getNumScreens() {
	int32_t $ret = 0;
	$prepareNative(Win32GraphicsEnvironment, getNumScreens, int32_t);
	$ret = $invokeNative(Win32GraphicsEnvironment, getNumScreens);
	$finishNative();
	return $ret;
}

int32_t Win32GraphicsEnvironment::getDefaultScreen() {
	int32_t $ret = 0;
	$prepareNative(Win32GraphicsEnvironment, getDefaultScreen, int32_t);
	$ret = $invokeNative(Win32GraphicsEnvironment, getDefaultScreen);
	$finishNative();
	return $ret;
}

$GraphicsDevice* Win32GraphicsEnvironment::getDefaultScreenDevice() {
	$var($GraphicsDeviceArray, screens, getScreenDevices());
	if ($nc(screens)->length == 0) {
		$throwNew($AWTError, "no screen devices"_s);
	}
	int32_t index = getDefaultScreen();
	return $nc(screens)->get(0 < index && index < screens->length ? index : 0);
}

int32_t Win32GraphicsEnvironment::getXResolution() {
	int32_t $ret = 0;
	$prepareNative(Win32GraphicsEnvironment, getXResolution, int32_t);
	$ret = $invokeNative(Win32GraphicsEnvironment, getXResolution);
	$finishNative();
	return $ret;
}

int32_t Win32GraphicsEnvironment::getYResolution() {
	int32_t $ret = 0;
	$prepareNative(Win32GraphicsEnvironment, getYResolution, int32_t);
	$ret = $invokeNative(Win32GraphicsEnvironment, getYResolution);
	$finishNative();
	return $ret;
}

void Win32GraphicsEnvironment::displayChanged() {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsDeviceArray, newDevices, $new($GraphicsDeviceArray, getNumScreens()));
	$var($GraphicsDeviceArray, oldScreens, this->screens);
	if (oldScreens != nullptr) {
		for (int32_t i = 0; i < oldScreens->length; ++i) {
			if (!($instanceOf($Win32GraphicsDevice, $nc(this->screens)->get(i)))) {
				if (!Win32GraphicsEnvironment::$assertionsDisabled) {
					$throwNew($AssertionError, $of(oldScreens->get(i)));
				}
				continue;
			}
			$var($Win32GraphicsDevice, gd, $cast($Win32GraphicsDevice, oldScreens->get(i)));
			if (!$nc(gd)->isValid()) {
				if (this->oldDevices == nullptr) {
					$set(this, oldDevices, $new($ArrayList));
				}
				$nc(this->oldDevices)->add($$new($WeakReference, gd));
			} else if (i < newDevices->length) {
				newDevices->set(i, gd);
			}
		}
		$assign(oldScreens, nullptr);
	}
	for (int32_t i = 0; i < newDevices->length; ++i) {
		if (newDevices->get(i) == nullptr) {
			newDevices->set(i, $(makeScreenDevice(i)));
		}
	}
	$set(this, screens, newDevices);
	{
		$var($GraphicsDeviceArray, arr$, this->screens);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($GraphicsDevice, gd, arr$->get(i$));
			{
				if ($instanceOf($DisplayChangedListener, gd)) {
					$nc(($cast($DisplayChangedListener, gd)))->displayChanged();
				}
			}
		}
	}
	if (this->oldDevices != nullptr) {
		int32_t defScreen = getDefaultScreen();
		{
			$var($ListIterator, it, $nc(this->oldDevices)->listIterator());
			for (; $nc(it)->hasNext();) {
				$var($Win32GraphicsDevice, gd, $cast($Win32GraphicsDevice, $nc(($cast($WeakReference, $(it->next()))))->get()));
				if (gd != nullptr) {
					gd->invalidate(defScreen);
					gd->displayChanged();
				} else {
					it->remove();
				}
			}
		}
	}
	$nc(this->displayChanger)->notifyListeners();
}

$GraphicsDevice* Win32GraphicsEnvironment::makeScreenDevice(int32_t screennum) {
	$var($GraphicsDevice, device, nullptr);
	if ($WindowsFlags::isD3DEnabled()) {
		$assign(device, $D3DGraphicsDevice::createDevice(screennum));
	}
	if (device == nullptr) {
		$assign(device, $new($Win32GraphicsDevice, screennum));
	}
	return device;
}

bool Win32GraphicsEnvironment::isDisplayLocal() {
	return true;
}

bool Win32GraphicsEnvironment::isFlipStrategyPreferred($ComponentPeer* peer) {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsConfiguration, gc, nullptr);
	if (peer != nullptr && ($assign(gc, peer->getGraphicsConfiguration())) != nullptr) {
		$var($GraphicsDevice, gd, $nc(gc)->getDevice());
		if ($instanceOf($D3DGraphicsDevice, gd)) {
			return $nc(($cast($D3DGraphicsDevice, gd)))->isD3DEnabledOnDevice();
		}
	}
	return false;
}

bool Win32GraphicsEnvironment::isDWMCompositionEnabled() {
	$init(Win32GraphicsEnvironment);
	return Win32GraphicsEnvironment::isDWMCompositionEnabled$;
}

void Win32GraphicsEnvironment::dwmCompositionChanged(bool enabled) {
	$init(Win32GraphicsEnvironment);
	Win32GraphicsEnvironment::isDWMCompositionEnabled$ = enabled;
}

bool Win32GraphicsEnvironment::isVistaOS() {
	$init(Win32GraphicsEnvironment);
	bool $ret = false;
	$prepareNativeStatic(Win32GraphicsEnvironment, isVistaOS, bool);
	$ret = $invokeNativeStatic(Win32GraphicsEnvironment, isVistaOS);
	$finishNativeStatic();
	return $ret;
}

void clinit$Win32GraphicsEnvironment($Class* class$) {
	Win32GraphicsEnvironment::$assertionsDisabled = !Win32GraphicsEnvironment::class$->desiredAssertionStatus();
	{
		$WToolkit::loadLibraries();
		$WindowsFlags::initFlags();
		Win32GraphicsEnvironment::initDisplayWrapper();
		$SurfaceManagerFactory::setInstance($$new($WindowsSurfaceManagerFactory));
		double sx = (double)-1;
		double sy = (double)-1;
		if ($SunGraphicsEnvironment::isUIScaleEnabled()) {
			sx = $SunGraphicsEnvironment::getScaleFactor("sun.java2d.win.uiScaleX"_s);
			sy = $SunGraphicsEnvironment::getScaleFactor("sun.java2d.win.uiScaleY"_s);
			if (sx <= 0 || sy <= 0) {
				double s = $SunGraphicsEnvironment::getDebugScale();
				sx = s;
				sy = s;
			}
		}
		Win32GraphicsEnvironment::debugScaleX = (float)sx;
		Win32GraphicsEnvironment::debugScaleY = (float)sy;
	}
}

Win32GraphicsEnvironment::Win32GraphicsEnvironment() {
}

$Class* Win32GraphicsEnvironment::load$($String* name, bool initialize) {
	$loadClass(Win32GraphicsEnvironment, name, initialize, &_Win32GraphicsEnvironment_ClassInfo_, clinit$Win32GraphicsEnvironment, allocate$Win32GraphicsEnvironment);
	return class$;
}

$Class* Win32GraphicsEnvironment::class$ = nullptr;

	} // awt
} // sun