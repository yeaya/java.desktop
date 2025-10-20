#include <sun/awt/Win32GraphicsDevice.h>

#include <java/awt/AWTPermission.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/DisplayMode.h>
#include <java/awt/EventQueue.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/WindowPeer.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Vector.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/SunDisplayChanger.h>
#include <sun/awt/Win32GraphicsConfig.h>
#include <sun/awt/Win32GraphicsDevice$1.h>
#include <sun/awt/Win32GraphicsDevice$Win32FSWindowAdapter.h>
#include <sun/awt/Win32GraphicsEnvironment.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/java2d/opengl/WGLGraphicsConfig.h>
#include <sun/java2d/windows/WindowsFlags.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef REFRESH_RATE_UNKNOWN
#undef TYPE_RASTER_SCREEN

using $DisplayModeArray = $Array<::java::awt::DisplayMode>;
using $GraphicsConfigurationArray = $Array<::java::awt::GraphicsConfiguration>;
using $AWTPermission = ::java::awt::AWTPermission;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $DisplayMode = ::java::awt::DisplayMode;
using $EventQueue = ::java::awt::EventQueue;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $WindowPeer = ::java::awt::peer::WindowPeer;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $Vector = ::java::util::Vector;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $SunDisplayChanger = ::sun::awt::SunDisplayChanger;
using $Win32GraphicsConfig = ::sun::awt::Win32GraphicsConfig;
using $Win32GraphicsDevice$1 = ::sun::awt::Win32GraphicsDevice$1;
using $Win32GraphicsDevice$Win32FSWindowAdapter = ::sun::awt::Win32GraphicsDevice$Win32FSWindowAdapter;
using $Win32GraphicsEnvironment = ::sun::awt::Win32GraphicsEnvironment;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $WGLGraphicsConfig = ::sun::java2d::opengl::WGLGraphicsConfig;
using $WindowsFlags = ::sun::java2d::windows::WindowsFlags;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {

$FieldInfo _Win32GraphicsDevice_FieldInfo_[] = {
	{"screen", "I", nullptr, 0, $field(Win32GraphicsDevice, screen)},
	{"dynamicColorModel", "Ljava/awt/image/ColorModel;", nullptr, 0, $field(Win32GraphicsDevice, dynamicColorModel)},
	{"colorModel", "Ljava/awt/image/ColorModel;", nullptr, 0, $field(Win32GraphicsDevice, colorModel)},
	{"configs", "[Ljava/awt/GraphicsConfiguration;", nullptr, $PROTECTED, $field(Win32GraphicsDevice, configs)},
	{"defaultConfig", "Ljava/awt/GraphicsConfiguration;", nullptr, $PROTECTED, $field(Win32GraphicsDevice, defaultConfig)},
	{"idString", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Win32GraphicsDevice, idString)},
	{"descString", "Ljava/lang/String;", nullptr, $PROTECTED, $field(Win32GraphicsDevice, descString)},
	{"valid", "Z", nullptr, $PRIVATE, $field(Win32GraphicsDevice, valid)},
	{"topLevels", "Lsun/awt/SunDisplayChanger;", nullptr, $PRIVATE, $field(Win32GraphicsDevice, topLevels)},
	{"pfDisabled", "Z", nullptr, $PROTECTED | $STATIC, $staticField(Win32GraphicsDevice, pfDisabled)},
	{"fullScreenExclusivePermission", "Ljava/awt/AWTPermission;", nullptr, $PRIVATE | $STATIC, $staticField(Win32GraphicsDevice, fullScreenExclusivePermission)},
	{"defaultDisplayMode", "Ljava/awt/DisplayMode;", nullptr, $PRIVATE, $field(Win32GraphicsDevice, defaultDisplayMode)},
	{"fsWindowListener", "Ljava/awt/event/WindowListener;", nullptr, $PRIVATE, $field(Win32GraphicsDevice, fsWindowListener)},
	{"scaleX", "F", nullptr, $PRIVATE, $field(Win32GraphicsDevice, scaleX)},
	{"scaleY", "F", nullptr, $PRIVATE, $field(Win32GraphicsDevice, scaleY)},
	{}
};

$MethodInfo _Win32GraphicsDevice_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Win32GraphicsDevice::*)(int32_t)>(&Win32GraphicsDevice::init$))},
	{"addDisplayChangedListener", "(Lsun/awt/DisplayChangedListener;)V", nullptr, $PUBLIC},
	{"addFSWindowListener", "(Ljava/awt/Window;)V", nullptr, $PROTECTED},
	{"configDisplayMode", "(ILjava/awt/peer/WindowPeer;IIII)V", nullptr, $PROTECTED | $NATIVE},
	{"displayChanged", "()V", nullptr, $PUBLIC},
	{"enterFullScreenExclusive", "(ILjava/awt/peer/WindowPeer;)V", nullptr, $PROTECTED | $NATIVE},
	{"enumDisplayModes", "(ILjava/util/ArrayList;)V", "(ILjava/util/ArrayList<Ljava/awt/DisplayMode;>;)V", $PROTECTED | $NATIVE},
	{"exitFullScreenExclusive", "(ILjava/awt/peer/WindowPeer;)V", nullptr, $PROTECTED | $NATIVE},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getConfigurations", "()[Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getCurrentDisplayMode", "(I)Ljava/awt/DisplayMode;", nullptr, $PROTECTED | $NATIVE},
	{"getDefaultConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getDefaultPixID", "(I)I", nullptr, $PROTECTED},
	{"getDefaultPixIDImpl", "(I)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(Win32GraphicsDevice::*)(int32_t)>(&Win32GraphicsDevice::getDefaultPixIDImpl))},
	{"getDefaultScaleX", "()F", nullptr, $PUBLIC},
	{"getDefaultScaleY", "()F", nullptr, $PUBLIC},
	{"getDisplayMode", "()Ljava/awt/DisplayMode;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDisplayModes", "()[Ljava/awt/DisplayMode;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDynamicColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getIDstring", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMatchingDisplayMode", "(Ljava/awt/DisplayMode;)Ljava/awt/DisplayMode;", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"getMaxConfigs", "(I)I", nullptr, $PROTECTED},
	{"getMaxConfigsImpl", "(I)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(Win32GraphicsDevice::*)(int32_t)>(&Win32GraphicsDevice::getMaxConfigsImpl))},
	{"getNativeScaleX", "(I)F", nullptr, $NATIVE},
	{"getNativeScaleY", "(I)F", nullptr, $NATIVE},
	{"getScreen", "()I", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"initDevice", "(I)V", nullptr, $NATIVE},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Win32GraphicsDevice::initIDs))},
	{"initNativeScale", "(I)V", nullptr, $NATIVE},
	{"initScaleFactors", "()V", nullptr, $PRIVATE, $method(static_cast<void(Win32GraphicsDevice::*)()>(&Win32GraphicsDevice::initScaleFactors))},
	{"invalidate", "(I)V", nullptr, $PROTECTED},
	{"isDefaultDevice", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(Win32GraphicsDevice::*)()>(&Win32GraphicsDevice::isDefaultDevice))},
	{"isDisplayChangeSupported", "()Z", nullptr, $PUBLIC},
	{"isFSExclusiveModeAllowed", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&Win32GraphicsDevice::isFSExclusiveModeAllowed))},
	{"isFullScreenSupported", "()Z", nullptr, $PUBLIC},
	{"isPixFmtSupported", "(II)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(Win32GraphicsDevice::*)(int32_t,int32_t)>(&Win32GraphicsDevice::isPixFmtSupported))},
	{"isValid", "()Z", nullptr, $PUBLIC},
	{"makeColorModel", "(IZ)Ljava/awt/image/ColorModel;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$ColorModel*(Win32GraphicsDevice::*)(int32_t,bool)>(&Win32GraphicsDevice::makeColorModel))},
	{"paletteChanged", "()V", nullptr, $PUBLIC},
	{"removeDisplayChangedListener", "(Lsun/awt/DisplayChangedListener;)V", nullptr, $PUBLIC},
	{"removeFSWindowListener", "(Ljava/awt/Window;)V", nullptr, $PROTECTED},
	{"setDisplayMode", "(Ljava/awt/DisplayMode;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setFullScreenWindow", "(Ljava/awt/Window;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setNativeScale", "(IFF)V", nullptr, $NATIVE},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_configDisplayMode 7
#define _METHOD_INDEX_enterFullScreenExclusive 9
#define _METHOD_INDEX_enumDisplayModes 10
#define _METHOD_INDEX_exitFullScreenExclusive 11
#define _METHOD_INDEX_getCurrentDisplayMode 14
#define _METHOD_INDEX_getDefaultPixIDImpl 17
#define _METHOD_INDEX_getMaxConfigsImpl 26
#define _METHOD_INDEX_getNativeScaleX 27
#define _METHOD_INDEX_getNativeScaleY 28
#define _METHOD_INDEX_initDevice 31
#define _METHOD_INDEX_initIDs 32
#define _METHOD_INDEX_initNativeScale 33
#define _METHOD_INDEX_isPixFmtSupported 40
#define _METHOD_INDEX_makeColorModel 42
#define _METHOD_INDEX_setNativeScale 48

$InnerClassInfo _Win32GraphicsDevice_InnerClassesInfo_[] = {
	{"sun.awt.Win32GraphicsDevice$Win32FSWindowAdapter", "sun.awt.Win32GraphicsDevice", "Win32FSWindowAdapter", $PRIVATE | $STATIC},
	{"sun.awt.Win32GraphicsDevice$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32GraphicsDevice_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.Win32GraphicsDevice",
	"java.awt.GraphicsDevice",
	"sun.awt.DisplayChangedListener",
	_Win32GraphicsDevice_FieldInfo_,
	_Win32GraphicsDevice_MethodInfo_,
	nullptr,
	nullptr,
	_Win32GraphicsDevice_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.Win32GraphicsDevice$Win32FSWindowAdapter,sun.awt.Win32GraphicsDevice$1"
};

$Object* allocate$Win32GraphicsDevice($Class* clazz) {
	return $of($alloc(Win32GraphicsDevice));
}

int32_t Win32GraphicsDevice::hashCode() {
	 return this->$GraphicsDevice::hashCode();
}

bool Win32GraphicsDevice::equals(Object$* arg0) {
	 return this->$GraphicsDevice::equals(arg0);
}

$Object* Win32GraphicsDevice::clone() {
	 return this->$GraphicsDevice::clone();
}

void Win32GraphicsDevice::finalize() {
	this->$GraphicsDevice::finalize();
}

bool Win32GraphicsDevice::pfDisabled = false;
$AWTPermission* Win32GraphicsDevice::fullScreenExclusivePermission = nullptr;

void Win32GraphicsDevice::initIDs() {
	$init(Win32GraphicsDevice);
	$prepareNativeStatic(Win32GraphicsDevice, initIDs, void);
	$invokeNativeStatic(Win32GraphicsDevice, initIDs);
	$finishNativeStatic();
}

void Win32GraphicsDevice::initDevice(int32_t screen) {
	$prepareNative(Win32GraphicsDevice, initDevice, void, int32_t screen);
	$invokeNative(Win32GraphicsDevice, initDevice, screen);
	$finishNative();
}

void Win32GraphicsDevice::initNativeScale(int32_t screen) {
	$prepareNative(Win32GraphicsDevice, initNativeScale, void, int32_t screen);
	$invokeNative(Win32GraphicsDevice, initNativeScale, screen);
	$finishNative();
}

void Win32GraphicsDevice::setNativeScale(int32_t screen, float scaleX, float scaleY) {
	$prepareNative(Win32GraphicsDevice, setNativeScale, void, int32_t screen, float scaleX, float scaleY);
	$invokeNative(Win32GraphicsDevice, setNativeScale, screen, scaleX, scaleY);
	$finishNative();
}

float Win32GraphicsDevice::getNativeScaleX(int32_t screen) {
	float $ret = 0.0;
	$prepareNative(Win32GraphicsDevice, getNativeScaleX, float, int32_t screen);
	$ret = $invokeNative(Win32GraphicsDevice, getNativeScaleX, screen);
	$finishNative();
	return $ret;
}

float Win32GraphicsDevice::getNativeScaleY(int32_t screen) {
	float $ret = 0.0;
	$prepareNative(Win32GraphicsDevice, getNativeScaleY, float, int32_t screen);
	$ret = $invokeNative(Win32GraphicsDevice, getNativeScaleY, screen);
	$finishNative();
	return $ret;
}

void Win32GraphicsDevice::init$(int32_t screennum) {
	$useLocalCurrentObjectStackCache();
	$GraphicsDevice::init$();
	$set(this, topLevels, $new($SunDisplayChanger));
	this->screen = screennum;
	$set(this, idString, $str({"\\Display"_s, $$str(this->screen)}));
	$set(this, descString, $str({"Win32GraphicsDevice[screen="_s, $$str(this->screen)}));
	this->valid = true;
	initDevice(screennum);
	initScaleFactors();
}

int32_t Win32GraphicsDevice::getType() {
	return $GraphicsDevice::TYPE_RASTER_SCREEN;
}

int32_t Win32GraphicsDevice::getScreen() {
	return this->screen;
}

float Win32GraphicsDevice::getDefaultScaleX() {
	return this->scaleX;
}

float Win32GraphicsDevice::getDefaultScaleY() {
	return this->scaleY;
}

void Win32GraphicsDevice::initScaleFactors() {
	if ($SunGraphicsEnvironment::isUIScaleEnabled()) {
		$init($Win32GraphicsEnvironment);
		if ($Win32GraphicsEnvironment::debugScaleX > 0 && $Win32GraphicsEnvironment::debugScaleY > 0) {
			this->scaleX = $Win32GraphicsEnvironment::debugScaleX;
			this->scaleY = $Win32GraphicsEnvironment::debugScaleY;
			setNativeScale(this->screen, this->scaleX, this->scaleY);
		} else {
			initNativeScale(this->screen);
			this->scaleX = getNativeScaleX(this->screen);
			this->scaleY = getNativeScaleY(this->screen);
		}
	} else {
		this->scaleX = (float)1;
		this->scaleY = (float)1;
	}
}

bool Win32GraphicsDevice::isValid() {
	return this->valid;
}

void Win32GraphicsDevice::invalidate(int32_t defaultScreen) {
	this->valid = false;
	this->screen = defaultScreen;
}

$String* Win32GraphicsDevice::getIDstring() {
	return this->idString;
}

$GraphicsConfigurationArray* Win32GraphicsDevice::getConfigurations() {
	$useLocalCurrentObjectStackCache();
	if (this->configs == nullptr) {
		bool var$0 = $WindowsFlags::isOGLEnabled();
		if (var$0 && isDefaultDevice()) {
			$set(this, defaultConfig, getDefaultConfiguration());
			if (this->defaultConfig != nullptr) {
				$set(this, configs, $new($GraphicsConfigurationArray, 1));
				$nc(this->configs)->set(0, this->defaultConfig);
				return $cast($GraphicsConfigurationArray, $nc(this->configs)->clone());
			}
		}
		int32_t max = getMaxConfigs(this->screen);
		int32_t defaultPixID = getDefaultPixID(this->screen);
		$var($Vector, v, $new($Vector, max));
		if (defaultPixID == 0) {
			$set(this, defaultConfig, $Win32GraphicsConfig::getConfig(this, defaultPixID));
			v->addElement(this->defaultConfig);
		} else {
			for (int32_t i = 1; i <= max; ++i) {
				if (isPixFmtSupported(i, this->screen)) {
					if (i == defaultPixID) {
						$set(this, defaultConfig, $Win32GraphicsConfig::getConfig(this, i));
						v->addElement(this->defaultConfig);
					} else {
						v->addElement($($Win32GraphicsConfig::getConfig(this, i)));
					}
				}
			}
		}
		$set(this, configs, $new($GraphicsConfigurationArray, v->size()));
		v->copyInto(this->configs);
	}
	return $cast($GraphicsConfigurationArray, $nc(this->configs)->clone());
}

int32_t Win32GraphicsDevice::getMaxConfigs(int32_t screen) {
	if (Win32GraphicsDevice::pfDisabled) {
		return 1;
	} else {
		return getMaxConfigsImpl(screen);
	}
}

int32_t Win32GraphicsDevice::getMaxConfigsImpl(int32_t screen) {
	int32_t $ret = 0;
	$prepareNative(Win32GraphicsDevice, getMaxConfigsImpl, int32_t, int32_t screen);
	$ret = $invokeNative(Win32GraphicsDevice, getMaxConfigsImpl, screen);
	$finishNative();
	return $ret;
}

bool Win32GraphicsDevice::isPixFmtSupported(int32_t index, int32_t screen) {
	bool $ret = false;
	$prepareNative(Win32GraphicsDevice, isPixFmtSupported, bool, int32_t index, int32_t screen);
	$ret = $invokeNative(Win32GraphicsDevice, isPixFmtSupported, index, screen);
	$finishNative();
	return $ret;
}

int32_t Win32GraphicsDevice::getDefaultPixID(int32_t screen) {
	if (Win32GraphicsDevice::pfDisabled) {
		return 0;
	} else {
		return getDefaultPixIDImpl(screen);
	}
}

int32_t Win32GraphicsDevice::getDefaultPixIDImpl(int32_t screen) {
	int32_t $ret = 0;
	$prepareNative(Win32GraphicsDevice, getDefaultPixIDImpl, int32_t, int32_t screen);
	$ret = $invokeNative(Win32GraphicsDevice, getDefaultPixIDImpl, screen);
	$finishNative();
	return $ret;
}

$GraphicsConfiguration* Win32GraphicsDevice::getDefaultConfiguration() {
	$useLocalCurrentObjectStackCache();
	if (this->defaultConfig == nullptr) {
		bool var$0 = $WindowsFlags::isOGLEnabled();
		if (var$0 && isDefaultDevice()) {
			int32_t defPixID = $WGLGraphicsConfig::getDefaultPixFmt(this->screen);
			$set(this, defaultConfig, $WGLGraphicsConfig::getConfig(this, defPixID));
			if ($WindowsFlags::isOGLVerbose()) {
				if (this->defaultConfig != nullptr) {
					$init($System);
					$nc($System::out)->print("OpenGL pipeline enabled"_s);
				} else {
					$init($System);
					$nc($System::out)->print("Could not enable OpenGL pipeline"_s);
				}
				$init($System);
				$nc($System::out)->println($$str({" for default config on screen "_s, $$str(this->screen)}));
			}
		}
		if (this->defaultConfig == nullptr) {
			$set(this, defaultConfig, $Win32GraphicsConfig::getConfig(this, 0));
		}
	}
	return this->defaultConfig;
}

$String* Win32GraphicsDevice::toString() {
	return this->valid ? $str({this->descString, "]"_s}) : $str({this->descString, ", removed]"_s});
}

bool Win32GraphicsDevice::isDefaultDevice() {
	return ($equals(this, $nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()));
}

bool Win32GraphicsDevice::isFSExclusiveModeAllowed() {
	$init(Win32GraphicsDevice);
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		if (Win32GraphicsDevice::fullScreenExclusivePermission == nullptr) {
			$assignStatic(Win32GraphicsDevice::fullScreenExclusivePermission, $new($AWTPermission, "fullScreenExclusive"_s));
		}
		try {
			security->checkPermission(Win32GraphicsDevice::fullScreenExclusivePermission);
		} catch ($SecurityException&) {
			$var($SecurityException, e, $catch());
			return false;
		}
	}
	return true;
}

bool Win32GraphicsDevice::isFullScreenSupported() {
	return isFSExclusiveModeAllowed();
}

void Win32GraphicsDevice::setFullScreenWindow($Window* w) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Window, old, getFullScreenWindow());
		if (w == old) {
			return;
		}
		if (!isFullScreenSupported()) {
			$GraphicsDevice::setFullScreenWindow(w);
			return;
		}
		if (old != nullptr) {
			if (this->defaultDisplayMode != nullptr) {
				setDisplayMode(this->defaultDisplayMode);
				$set(this, defaultDisplayMode, nullptr);
			}
			$var($WWindowPeer, peer, $cast($WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(old)));
			if (peer != nullptr) {
				peer->setFullScreenExclusiveModeState(false);
				$synchronized(peer) {
					exitFullScreenExclusive(this->screen, peer);
				}
			}
			removeFSWindowListener(old);
		}
		$GraphicsDevice::setFullScreenWindow(w);
		if (w != nullptr) {
			$set(this, defaultDisplayMode, getDisplayMode());
			addFSWindowListener(w);
			$var($WWindowPeer, peer, $cast($WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w)));
			if (peer != nullptr) {
				$synchronized(peer) {
					enterFullScreenExclusive(this->screen, peer);
				}
				peer->setFullScreenExclusiveModeState(true);
			}
			$nc(peer)->updateGC();
		}
	}
}

void Win32GraphicsDevice::enterFullScreenExclusive(int32_t screen, $WindowPeer* w) {
	$prepareNative(Win32GraphicsDevice, enterFullScreenExclusive, void, int32_t screen, $WindowPeer* w);
	$invokeNative(Win32GraphicsDevice, enterFullScreenExclusive, screen, w);
	$finishNative();
}

void Win32GraphicsDevice::exitFullScreenExclusive(int32_t screen, $WindowPeer* w) {
	$prepareNative(Win32GraphicsDevice, exitFullScreenExclusive, void, int32_t screen, $WindowPeer* w);
	$invokeNative(Win32GraphicsDevice, exitFullScreenExclusive, screen, w);
	$finishNative();
}

bool Win32GraphicsDevice::isDisplayChangeSupported() {
	bool var$0 = isFullScreenSupported();
	return (var$0 && getFullScreenWindow() != nullptr);
}

void Win32GraphicsDevice::setDisplayMode($DisplayMode* dm$renamed) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($DisplayMode, dm, dm$renamed);
		if (!isDisplayChangeSupported()) {
			$GraphicsDevice::setDisplayMode(dm);
			return;
		}
		if (dm == nullptr || ($assign(dm, getMatchingDisplayMode(dm))) == nullptr) {
			$throwNew($IllegalArgumentException, "Invalid display mode"_s);
		}
		if ($nc($(getDisplayMode()))->equals(dm)) {
			return;
		}
		$var($Window, w, getFullScreenWindow());
		if (w != nullptr) {
			$var($WWindowPeer, peer, $cast($WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w)));
			int32_t var$0 = this->screen;
			$var($WindowPeer, var$1, static_cast<$WindowPeer*>(peer));
			int32_t var$2 = $nc(dm)->getWidth();
			int32_t var$3 = dm->getHeight();
			int32_t var$4 = dm->getBitDepth();
			configDisplayMode(var$0, var$1, var$2, var$3, var$4, dm->getRefreshRate());
			$var($Rectangle, screenBounds, $nc($(getDefaultConfiguration()))->getBounds());
			w->setBounds($nc(screenBounds)->x, screenBounds->y, screenBounds->width, screenBounds->height);
		} else {
			$throwNew($IllegalStateException, "Must be in fullscreen mode in order to set display mode"_s);
		}
	}
}

$DisplayMode* Win32GraphicsDevice::getCurrentDisplayMode(int32_t screen) {
	$var($DisplayMode, $ret, nullptr);
	$prepareNative(Win32GraphicsDevice, getCurrentDisplayMode, $DisplayMode*, int32_t screen);
	$assign($ret, $invokeNative(Win32GraphicsDevice, getCurrentDisplayMode, screen));
	$finishNative();
	return $ret;
}

void Win32GraphicsDevice::configDisplayMode(int32_t screen, $WindowPeer* w, int32_t width, int32_t height, int32_t bitDepth, int32_t refreshRate) {
	$prepareNative(Win32GraphicsDevice, configDisplayMode, void, int32_t screen, $WindowPeer* w, int32_t width, int32_t height, int32_t bitDepth, int32_t refreshRate);
	$invokeNative(Win32GraphicsDevice, configDisplayMode, screen, w, width, height, bitDepth, refreshRate);
	$finishNative();
}

void Win32GraphicsDevice::enumDisplayModes(int32_t screen, $ArrayList* modes) {
	$prepareNative(Win32GraphicsDevice, enumDisplayModes, void, int32_t screen, $ArrayList* modes);
	$invokeNative(Win32GraphicsDevice, enumDisplayModes, screen, modes);
	$finishNative();
}

$DisplayMode* Win32GraphicsDevice::getDisplayMode() {
	$synchronized(this) {
		$var($DisplayMode, res, getCurrentDisplayMode(this->screen));
		return res;
	}
}

$DisplayModeArray* Win32GraphicsDevice::getDisplayModes() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($ArrayList, modes, $new($ArrayList));
		enumDisplayModes(this->screen, modes);
		int32_t listSize = modes->size();
		$var($DisplayModeArray, retArray, $new($DisplayModeArray, listSize));
		for (int32_t i = 0; i < listSize; ++i) {
			retArray->set(i, $cast($DisplayMode, $(modes->get(i))));
		}
		return retArray;
	}
}

$DisplayMode* Win32GraphicsDevice::getMatchingDisplayMode($DisplayMode* dm) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (!isDisplayChangeSupported()) {
			return nullptr;
		}
		$var($DisplayModeArray, modes, getDisplayModes());
		{
			$var($DisplayModeArray, arr$, modes);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($DisplayMode, mode, arr$->get(i$));
				{
					bool var$0 = $nc(dm)->equals(mode);
					if (!var$0) {
						bool var$3 = $nc(dm)->getRefreshRate() == $DisplayMode::REFRESH_RATE_UNKNOWN;
						if (var$3) {
							int32_t var$4 = dm->getWidth();
							var$3 = var$4 == $nc(mode)->getWidth();
						}
						bool var$2 = var$3;
						if (var$2) {
							int32_t var$5 = dm->getHeight();
							var$2 = var$5 == mode->getHeight();
						}
						bool var$1 = var$2;
						if (var$1) {
							int32_t var$6 = dm->getBitDepth();
							var$1 = var$6 == mode->getBitDepth();
						}
						var$0 = (var$1);
					}
					if (var$0) {
						return mode;
					}
				}
			}
		}
		return nullptr;
	}
}

void Win32GraphicsDevice::displayChanged() {
	$set(this, dynamicColorModel, nullptr);
	$set(this, defaultConfig, nullptr);
	$set(this, configs, nullptr);
	initScaleFactors();
	$nc(this->topLevels)->notifyListeners();
}

void Win32GraphicsDevice::paletteChanged() {
}

void Win32GraphicsDevice::addDisplayChangedListener($DisplayChangedListener* client) {
	$nc(this->topLevels)->add(client);
}

void Win32GraphicsDevice::removeDisplayChangedListener($DisplayChangedListener* client) {
	$nc(this->topLevels)->remove(client);
}

$ColorModel* Win32GraphicsDevice::makeColorModel(int32_t screen, bool dynamic) {
	$var($ColorModel, $ret, nullptr);
	$prepareNative(Win32GraphicsDevice, makeColorModel, $ColorModel*, int32_t screen, bool dynamic);
	$assign($ret, $invokeNative(Win32GraphicsDevice, makeColorModel, screen, dynamic));
	$finishNative();
	return $ret;
}

$ColorModel* Win32GraphicsDevice::getDynamicColorModel() {
	if (this->dynamicColorModel == nullptr) {
		$set(this, dynamicColorModel, makeColorModel(this->screen, true));
	}
	return this->dynamicColorModel;
}

$ColorModel* Win32GraphicsDevice::getColorModel() {
	if (this->colorModel == nullptr) {
		$set(this, colorModel, makeColorModel(this->screen, false));
	}
	return this->colorModel;
}

void Win32GraphicsDevice::addFSWindowListener($Window* w) {
	$set(this, fsWindowListener, $new($Win32GraphicsDevice$Win32FSWindowAdapter, this));
	$EventQueue::invokeLater($$new($Win32GraphicsDevice$1, this, w));
}

void Win32GraphicsDevice::removeFSWindowListener($Window* w) {
	$nc(w)->removeWindowListener(this->fsWindowListener);
	$set(this, fsWindowListener, nullptr);
}

void clinit$Win32GraphicsDevice($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$var($String, nopixfmt, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.awt.nopixfmt"_s)))));
		Win32GraphicsDevice::pfDisabled = (nopixfmt != nullptr);
		Win32GraphicsDevice::initIDs();
	}
}

Win32GraphicsDevice::Win32GraphicsDevice() {
}

$Class* Win32GraphicsDevice::load$($String* name, bool initialize) {
	$loadClass(Win32GraphicsDevice, name, initialize, &_Win32GraphicsDevice_ClassInfo_, clinit$Win32GraphicsDevice, allocate$Win32GraphicsDevice);
	return class$;
}

$Class* Win32GraphicsDevice::class$ = nullptr;

	} // awt
} // sun