#include <sun/awt/CGraphicsDevice.h>

#include <java/awt/AWTPermission.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/DisplayMode.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/WindowPeer.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/CGraphicsConfig.h>
#include <sun/awt/FullScreenCapable.h>
#include <sun/java2d/MacOSFlags.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <sun/java2d/opengl/CGLGraphicsConfig.h>
#include <jcpp.h>

#undef REFRESH_RATE_UNKNOWN
#undef TYPE_RASTER_SCREEN

using $DisplayModeArray = $Array<::java::awt::DisplayMode>;
using $GraphicsConfigurationArray = $Array<::java::awt::GraphicsConfiguration>;
using $AWTPermission = ::java::awt::AWTPermission;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $DisplayMode = ::java::awt::DisplayMode;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $WindowPeer = ::java::awt::peer::WindowPeer;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $CGraphicsConfig = ::sun::awt::CGraphicsConfig;
using $FullScreenCapable = ::sun::awt::FullScreenCapable;
using $MacOSFlags = ::sun::java2d::MacOSFlags;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $MTLGraphicsConfig = ::sun::java2d::metal::MTLGraphicsConfig;
using $CGLGraphicsConfig = ::sun::java2d::opengl::CGLGraphicsConfig;

namespace sun {
	namespace awt {

$FieldInfo _CGraphicsDevice_FieldInfo_[] = {
	{"displayID", "I", nullptr, $PRIVATE | $VOLATILE, $field(CGraphicsDevice, displayID)},
	{"xResolution", "D", nullptr, $PRIVATE | $VOLATILE, $field(CGraphicsDevice, xResolution)},
	{"yResolution", "D", nullptr, $PRIVATE | $VOLATILE, $field(CGraphicsDevice, yResolution)},
	{"bounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $VOLATILE, $field(CGraphicsDevice, bounds)},
	{"scale", "I", nullptr, $PRIVATE | $VOLATILE, $field(CGraphicsDevice, scale)},
	{"config", "Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE, $field(CGraphicsDevice, config)},
	{"metalPipelineEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(CGraphicsDevice, metalPipelineEnabled)},
	{"oglPipelineEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(CGraphicsDevice, oglPipelineEnabled)},
	{"fullScreenExclusivePermission", "Ljava/awt/AWTPermission;", nullptr, $PRIVATE | $STATIC, $staticField(CGraphicsDevice, fullScreenExclusivePermission)},
	{"originalMode", "Ljava/awt/DisplayMode;", nullptr, $PRIVATE, $field(CGraphicsDevice, originalMode)},
	{"initialMode", "Ljava/awt/DisplayMode;", nullptr, $PRIVATE, $field(CGraphicsDevice, initialMode)},
	{}
};

$MethodInfo _CGraphicsDevice_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(CGraphicsDevice::*)(int32_t)>(&CGraphicsDevice::init$))},
	{"displayChanged", "()V", nullptr, $PUBLIC},
	{"enterFullScreenExclusive", "(Ljava/awt/Window;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Window*)>(&CGraphicsDevice::enterFullScreenExclusive))},
	{"exitFullScreenExclusive", "(Ljava/awt/Window;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Window*)>(&CGraphicsDevice::exitFullScreenExclusive))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, 0, $method(static_cast<$Rectangle*(CGraphicsDevice::*)()>(&CGraphicsDevice::getBounds))},
	{"getConfigurations", "()[Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getDefaultConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getDisplayMode", "()Ljava/awt/DisplayMode;", nullptr, $PUBLIC},
	{"getDisplayModes", "()[Ljava/awt/DisplayMode;", nullptr, $PUBLIC},
	{"getIDstring", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getScaleFactor", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(CGraphicsDevice::*)()>(&CGraphicsDevice::getScaleFactor))},
	{"getScreenInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC, $method(static_cast<$Insets*(CGraphicsDevice::*)()>(&CGraphicsDevice::getScreenInsets))},
	{"getType", "()I", nullptr, $PUBLIC},
	{"getXResolution", "()D", nullptr, $PUBLIC, $method(static_cast<double(CGraphicsDevice::*)()>(&CGraphicsDevice::getXResolution))},
	{"getYResolution", "()D", nullptr, $PUBLIC, $method(static_cast<double(CGraphicsDevice::*)()>(&CGraphicsDevice::getYResolution))},
	{"initScaleFactor", "()V", nullptr, $PRIVATE, $method(static_cast<void(CGraphicsDevice::*)()>(&CGraphicsDevice::initScaleFactor))},
	{"invalidate", "(Lsun/awt/CGraphicsDevice;)V", nullptr, $PUBLIC, $method(static_cast<void(CGraphicsDevice::*)(CGraphicsDevice*)>(&CGraphicsDevice::invalidate))},
	{"isDisplayChangeSupported", "()Z", nullptr, $PUBLIC},
	{"isFSExclusiveModeAllowed", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&CGraphicsDevice::isFSExclusiveModeAllowed))},
	{"isFullScreenSupported", "()Z", nullptr, $PUBLIC},
	{"isSameMode", "(Ljava/awt/DisplayMode;Ljava/awt/DisplayMode;)Z", nullptr, $PRIVATE, $method(static_cast<bool(CGraphicsDevice::*)($DisplayMode*,$DisplayMode*)>(&CGraphicsDevice::isSameMode))},
	{"nativeGetBounds", "(I)Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Rectangle2D*(*)(int32_t)>(&CGraphicsDevice::nativeGetBounds))},
	{"nativeGetDisplayMode", "(I)Ljava/awt/DisplayMode;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$DisplayMode*(*)(int32_t)>(&CGraphicsDevice::nativeGetDisplayMode))},
	{"nativeGetDisplayModes", "(I)[Ljava/awt/DisplayMode;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$DisplayModeArray*(*)(int32_t)>(&CGraphicsDevice::nativeGetDisplayModes))},
	{"nativeGetScaleFactor", "(I)D", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<double(*)(int32_t)>(&CGraphicsDevice::nativeGetScaleFactor))},
	{"nativeGetScreenInsets", "(I)Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Insets*(*)(int32_t)>(&CGraphicsDevice::nativeGetScreenInsets))},
	{"nativeGetXResolution", "(I)D", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<double(*)(int32_t)>(&CGraphicsDevice::nativeGetXResolution))},
	{"nativeGetYResolution", "(I)D", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<double(*)(int32_t)>(&CGraphicsDevice::nativeGetYResolution))},
	{"nativeResetDisplayMode", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&CGraphicsDevice::nativeResetDisplayMode))},
	{"nativeSetDisplayMode", "(IIIII)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&CGraphicsDevice::nativeSetDisplayMode))},
	{"paletteChanged", "()V", nullptr, $PUBLIC},
	{"resizeFSWindow", "(Ljava/awt/Window;Ljava/awt/Rectangle;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Window*,$Rectangle*)>(&CGraphicsDevice::resizeFSWindow))},
	{"setDisplayMode", "(Ljava/awt/DisplayMode;)V", nullptr, $PUBLIC},
	{"setFullScreenWindow", "(Ljava/awt/Window;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"usingMetalPipeline", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&CGraphicsDevice::usingMetalPipeline))},
	{}
};

#define _METHOD_INDEX_nativeGetBounds 25
#define _METHOD_INDEX_nativeGetDisplayMode 26
#define _METHOD_INDEX_nativeGetDisplayModes 27
#define _METHOD_INDEX_nativeGetScaleFactor 28
#define _METHOD_INDEX_nativeGetScreenInsets 29
#define _METHOD_INDEX_nativeGetXResolution 30
#define _METHOD_INDEX_nativeGetYResolution 31
#define _METHOD_INDEX_nativeResetDisplayMode 32
#define _METHOD_INDEX_nativeSetDisplayMode 33

$ClassInfo _CGraphicsDevice_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.CGraphicsDevice",
	"java.awt.GraphicsDevice",
	"sun.awt.DisplayChangedListener",
	_CGraphicsDevice_FieldInfo_,
	_CGraphicsDevice_MethodInfo_
};

$Object* allocate$CGraphicsDevice($Class* clazz) {
	return $of($alloc(CGraphicsDevice));
}

int32_t CGraphicsDevice::hashCode() {
	 return this->$GraphicsDevice::hashCode();
}

bool CGraphicsDevice::equals(Object$* arg0) {
	 return this->$GraphicsDevice::equals(arg0);
}

$Object* CGraphicsDevice::clone() {
	 return this->$GraphicsDevice::clone();
}

$String* CGraphicsDevice::toString() {
	 return this->$GraphicsDevice::toString();
}

void CGraphicsDevice::finalize() {
	this->$GraphicsDevice::finalize();
}

bool CGraphicsDevice::metalPipelineEnabled = false;
bool CGraphicsDevice::oglPipelineEnabled = false;
$AWTPermission* CGraphicsDevice::fullScreenExclusivePermission = nullptr;

void CGraphicsDevice::init$(int32_t displayID) {
	$useLocalCurrentObjectStackCache();
	$GraphicsDevice::init$();
	this->displayID = displayID;
	$set(this, initialMode, getDisplayMode());
	if ($MacOSFlags::isMetalEnabled()) {
		$set(this, config, $MTLGraphicsConfig::getConfig(this, displayID));
		if (this->config != nullptr) {
			CGraphicsDevice::metalPipelineEnabled = true;
		} else {
			if ($MacOSFlags::isMetalVerbose()) {
				$nc($System::out)->println("Metal rendering pipeline initialization failed,using OpenGL rendering pipeline"_s);
			}
			$set(this, config, $CGLGraphicsConfig::getConfig(this));
			if (this->config != nullptr) {
				CGraphicsDevice::oglPipelineEnabled = true;
			}
		}
	} else {
		$set(this, config, $CGLGraphicsConfig::getConfig(this));
		if (this->config != nullptr) {
			CGraphicsDevice::oglPipelineEnabled = true;
		} else {
			if ($MacOSFlags::isOGLVerbose()) {
				$nc($System::out)->println("OpenGL rendering pipeline initialization failed,using Metal rendering pipeline"_s);
			}
			$set(this, config, $MTLGraphicsConfig::getConfig(this, displayID));
			if (this->config != nullptr) {
				CGraphicsDevice::metalPipelineEnabled = true;
			}
		}
	}
	if (!CGraphicsDevice::metalPipelineEnabled && !CGraphicsDevice::oglPipelineEnabled) {
		$throwNew($InternalError, "Error - unable to initialize any rendering pipeline."_s);
	}
	if (CGraphicsDevice::metalPipelineEnabled && $MacOSFlags::isMetalVerbose()) {
		$nc($System::out)->println($$str({"Metal pipeline enabled on screen "_s, $$str(displayID)}));
	} else if (CGraphicsDevice::oglPipelineEnabled && $MacOSFlags::isOGLVerbose()) {
		$nc($System::out)->println($$str({"OpenGL pipeline enabled on screen "_s, $$str(displayID)}));
	}
	displayChanged();
}

$GraphicsConfigurationArray* CGraphicsDevice::getConfigurations() {
	return $new($GraphicsConfigurationArray, {this->config});
}

$GraphicsConfiguration* CGraphicsDevice::getDefaultConfiguration() {
	return this->config;
}

$String* CGraphicsDevice::getIDstring() {
	return $str({"Display "_s, $$str(this->displayID)});
}

int32_t CGraphicsDevice::getType() {
	return $GraphicsDevice::TYPE_RASTER_SCREEN;
}

double CGraphicsDevice::getXResolution() {
	return this->xResolution;
}

double CGraphicsDevice::getYResolution() {
	return this->yResolution;
}

$Rectangle* CGraphicsDevice::getBounds() {
	return $nc(this->bounds)->getBounds();
}

$Insets* CGraphicsDevice::getScreenInsets() {
	return nativeGetScreenInsets(this->displayID);
}

int32_t CGraphicsDevice::getScaleFactor() {
	return this->scale;
}

void CGraphicsDevice::invalidate(CGraphicsDevice* device) {
	this->displayID = $nc(device)->displayID;
	$set(this, initialMode, device->initialMode);
}

void CGraphicsDevice::displayChanged() {
	$useLocalCurrentObjectStackCache();
	this->xResolution = nativeGetXResolution(this->displayID);
	this->yResolution = nativeGetYResolution(this->displayID);
	$set(this, bounds, $nc($(nativeGetBounds(this->displayID)))->getBounds());
	initScaleFactor();
	resizeFSWindow($(getFullScreenWindow()), this->bounds);
}

void CGraphicsDevice::paletteChanged() {
}

void CGraphicsDevice::setFullScreenWindow($Window* w) {
	$synchronized(this) {
		$var($Window, old, getFullScreenWindow());
		if (w == old) {
			return;
		}
		bool fsSupported = isFullScreenSupported();
		if (fsSupported && old != nullptr) {
			exitFullScreenExclusive(old);
			if (this->originalMode != nullptr) {
				setDisplayMode(this->originalMode);
				$set(this, originalMode, nullptr);
			}
		}
		$GraphicsDevice::setFullScreenWindow(w);
		if (fsSupported && w != nullptr) {
			if (isDisplayChangeSupported()) {
				$set(this, originalMode, getDisplayMode());
			}
			enterFullScreenExclusive(w);
		}
	}
}

bool CGraphicsDevice::isFullScreenSupported() {
	return isFSExclusiveModeAllowed();
}

bool CGraphicsDevice::isFSExclusiveModeAllowed() {
	$init(CGraphicsDevice);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		if (CGraphicsDevice::fullScreenExclusivePermission == nullptr) {
			$assignStatic(CGraphicsDevice::fullScreenExclusivePermission, $new($AWTPermission, "fullScreenExclusive"_s));
		}
		try {
			security->checkPermission(CGraphicsDevice::fullScreenExclusivePermission);
		} catch ($SecurityException& e) {
			return false;
		}
	}
	return true;
}

void CGraphicsDevice::enterFullScreenExclusive($Window* w) {
	$init(CGraphicsDevice);
	$useLocalCurrentObjectStackCache();
	$var($FullScreenCapable, peer, $cast($FullScreenCapable, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w)));
	if (peer != nullptr) {
		peer->enterFullScreenMode();
	}
}

void CGraphicsDevice::exitFullScreenExclusive($Window* w) {
	$init(CGraphicsDevice);
	$useLocalCurrentObjectStackCache();
	$var($FullScreenCapable, peer, $cast($FullScreenCapable, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w)));
	if (peer != nullptr) {
		peer->exitFullScreenMode();
	}
}

void CGraphicsDevice::resizeFSWindow($Window* w, $Rectangle* b) {
	$init(CGraphicsDevice);
	$useLocalCurrentObjectStackCache();
	if (w != nullptr) {
		$var($WindowPeer, peer, $cast($WindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w)));
		if (peer != nullptr) {
			peer->setBounds($nc(b)->x, b->y, b->width, b->height, 3);
		}
	}
}

bool CGraphicsDevice::isDisplayChangeSupported() {
	return true;
}

bool CGraphicsDevice::isSameMode($DisplayMode* newMode, $DisplayMode* oldMode) {
	bool var$0 = $Objects::equals(newMode, oldMode);
	if (!var$0) {
		bool var$3 = $nc(newMode)->getRefreshRate() == $DisplayMode::REFRESH_RATE_UNKNOWN;
		if (var$3) {
			int32_t var$4 = newMode->getWidth();
			var$3 = var$4 == $nc(oldMode)->getWidth();
		}
		bool var$2 = var$3;
		if (var$2) {
			int32_t var$5 = newMode->getHeight();
			var$2 = var$5 == oldMode->getHeight();
		}
		bool var$1 = var$2;
		if (var$1) {
			int32_t var$6 = newMode->getBitDepth();
			var$1 = var$6 == oldMode->getBitDepth();
		}
		var$0 = (var$1);
	}
	return (var$0);
}

void CGraphicsDevice::setDisplayMode($DisplayMode* dm) {
	$useLocalCurrentObjectStackCache();
	if (dm == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid display mode"_s);
	}
	if (!isSameMode(dm, $(getDisplayMode()))) {
		try {
			int32_t var$0 = this->displayID;
			int32_t var$1 = $nc(dm)->getWidth();
			int32_t var$2 = dm->getHeight();
			int32_t var$3 = dm->getBitDepth();
			nativeSetDisplayMode(var$0, var$1, var$2, var$3, dm->getRefreshRate());
		} catch ($Throwable& t) {
			if (isSameMode(dm, this->initialMode)) {
				nativeResetDisplayMode();
				if (!isSameMode(this->initialMode, $(getDisplayMode()))) {
					$throwNew($IllegalArgumentException, "Could not reset to initial mode"_s);
				}
			} else {
				$throw(t);
			}
		}
	}
}

$DisplayMode* CGraphicsDevice::getDisplayMode() {
	return nativeGetDisplayMode(this->displayID);
}

$DisplayModeArray* CGraphicsDevice::getDisplayModes() {
	$useLocalCurrentObjectStackCache();
	$var($DisplayModeArray, nativeModes, nativeGetDisplayModes(this->displayID));
	bool match = false;
	{
		$var($DisplayModeArray, arr$, nativeModes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($DisplayMode, mode, arr$->get(i$));
			{
				if ($nc(this->initialMode)->equals(mode)) {
					match = true;
					break;
				}
			}
		}
	}
	if (match) {
		return nativeModes;
	} else {
		int32_t len = $nc(nativeModes)->length;
		$load($DisplayModeArray);
		$var($DisplayModeArray, modes, $fcast($DisplayModeArray, $Arrays::copyOf(nativeModes, len + 1, $getClass($DisplayModeArray))));
		modes->set(len, this->initialMode);
		return modes;
	}
}

bool CGraphicsDevice::usingMetalPipeline() {
	$init(CGraphicsDevice);
	return CGraphicsDevice::metalPipelineEnabled;
}

void CGraphicsDevice::initScaleFactor() {
	if ($SunGraphicsEnvironment::isUIScaleEnabled()) {
		double debugScale = $SunGraphicsEnvironment::getDebugScale();
		this->scale = $cast(int32_t, (debugScale >= 1 ? (double)$Math::round(debugScale) : nativeGetScaleFactor(this->displayID)));
	} else {
		this->scale = 1;
	}
}

double CGraphicsDevice::nativeGetScaleFactor(int32_t displayID) {
	$init(CGraphicsDevice);
	double $ret = 0.0;
	$prepareNativeStatic(CGraphicsDevice, nativeGetScaleFactor, double, int32_t displayID);
	$ret = $invokeNativeStatic(displayID);
	$finishNativeStatic();
	return $ret;
}

void CGraphicsDevice::nativeResetDisplayMode() {
	$init(CGraphicsDevice);
	$prepareNativeStatic(CGraphicsDevice, nativeResetDisplayMode, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void CGraphicsDevice::nativeSetDisplayMode(int32_t displayID, int32_t w, int32_t h, int32_t bpp, int32_t refrate) {
	$init(CGraphicsDevice);
	$prepareNativeStatic(CGraphicsDevice, nativeSetDisplayMode, void, int32_t displayID, int32_t w, int32_t h, int32_t bpp, int32_t refrate);
	$invokeNativeStatic(displayID, w, h, bpp, refrate);
	$finishNativeStatic();
}

$DisplayMode* CGraphicsDevice::nativeGetDisplayMode(int32_t displayID) {
	$init(CGraphicsDevice);
	$var($DisplayMode, $ret, nullptr);
	$prepareNativeStatic(CGraphicsDevice, nativeGetDisplayMode, $DisplayMode*, int32_t displayID);
	$assign($ret, $invokeNativeStaticObject(displayID));
	$finishNativeStatic();
	return $ret;
}

$DisplayModeArray* CGraphicsDevice::nativeGetDisplayModes(int32_t displayID) {
	$init(CGraphicsDevice);
	$var($DisplayModeArray, $ret, nullptr);
	$prepareNativeStatic(CGraphicsDevice, nativeGetDisplayModes, $DisplayModeArray*, int32_t displayID);
	$assign($ret, $invokeNativeStaticObject(displayID));
	$finishNativeStatic();
	return $ret;
}

double CGraphicsDevice::nativeGetXResolution(int32_t displayID) {
	$init(CGraphicsDevice);
	double $ret = 0.0;
	$prepareNativeStatic(CGraphicsDevice, nativeGetXResolution, double, int32_t displayID);
	$ret = $invokeNativeStatic(displayID);
	$finishNativeStatic();
	return $ret;
}

double CGraphicsDevice::nativeGetYResolution(int32_t displayID) {
	$init(CGraphicsDevice);
	double $ret = 0.0;
	$prepareNativeStatic(CGraphicsDevice, nativeGetYResolution, double, int32_t displayID);
	$ret = $invokeNativeStatic(displayID);
	$finishNativeStatic();
	return $ret;
}

$Insets* CGraphicsDevice::nativeGetScreenInsets(int32_t displayID) {
	$init(CGraphicsDevice);
	$var($Insets, $ret, nullptr);
	$prepareNativeStatic(CGraphicsDevice, nativeGetScreenInsets, $Insets*, int32_t displayID);
	$assign($ret, $invokeNativeStaticObject(displayID));
	$finishNativeStatic();
	return $ret;
}

$Rectangle2D* CGraphicsDevice::nativeGetBounds(int32_t displayID) {
	$init(CGraphicsDevice);
	$var($Rectangle2D, $ret, nullptr);
	$prepareNativeStatic(CGraphicsDevice, nativeGetBounds, $Rectangle2D*, int32_t displayID);
	$assign($ret, $invokeNativeStaticObject(displayID));
	$finishNativeStatic();
	return $ret;
}

void clinit$CGraphicsDevice($Class* class$) {
	CGraphicsDevice::metalPipelineEnabled = false;
	CGraphicsDevice::oglPipelineEnabled = false;
}

CGraphicsDevice::CGraphicsDevice() {
}

$Class* CGraphicsDevice::load$($String* name, bool initialize) {
	$loadClass(CGraphicsDevice, name, initialize, &_CGraphicsDevice_ClassInfo_, clinit$CGraphicsDevice, allocate$CGraphicsDevice);
	return class$;
}

$Class* CGraphicsDevice::class$ = nullptr;

	} // awt
} // sun