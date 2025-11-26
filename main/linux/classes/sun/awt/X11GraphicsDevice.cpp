#include <sun/awt/X11GraphicsDevice.h>

#include <java/awt/AWTPermission.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/DisplayMode.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/SunDisplayChanger.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/awt/X11GraphicsEnvironment.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/xr/XRGraphicsConfig.h>
#include <jcpp.h>

#undef BIT_DEPTH_MULTI
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
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $SunDisplayChanger = ::sun::awt::SunDisplayChanger;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $X11GraphicsEnvironment = ::sun::awt::X11GraphicsEnvironment;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $GLXGraphicsConfig = ::sun::java2d::opengl::GLXGraphicsConfig;
using $Region = ::sun::java2d::pipe::Region;
using $XRGraphicsConfig = ::sun::java2d::xr::XRGraphicsConfig;

namespace sun {
	namespace awt {

class X11GraphicsDevice$$Lambda$lambda$setDisplayMode$1 : public $PrivilegedAction {
	$class(X11GraphicsDevice$$Lambda$lambda$setDisplayMode$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(X11GraphicsDevice* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$setDisplayMode$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<X11GraphicsDevice$$Lambda$lambda$setDisplayMode$1>());
	}
	X11GraphicsDevice* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo X11GraphicsDevice$$Lambda$lambda$setDisplayMode$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(X11GraphicsDevice$$Lambda$lambda$setDisplayMode$1, inst$)},
	{}
};
$MethodInfo X11GraphicsDevice$$Lambda$lambda$setDisplayMode$1::methodInfos[3] = {
	{"<init>", "(Lsun/awt/X11GraphicsDevice;)V", nullptr, $PUBLIC, $method(static_cast<void(X11GraphicsDevice$$Lambda$lambda$setDisplayMode$1::*)(X11GraphicsDevice*)>(&X11GraphicsDevice$$Lambda$lambda$setDisplayMode$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo X11GraphicsDevice$$Lambda$lambda$setDisplayMode$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.X11GraphicsDevice$$Lambda$lambda$setDisplayMode$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* X11GraphicsDevice$$Lambda$lambda$setDisplayMode$1::load$($String* name, bool initialize) {
	$loadClass(X11GraphicsDevice$$Lambda$lambda$setDisplayMode$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* X11GraphicsDevice$$Lambda$lambda$setDisplayMode$1::class$ = nullptr;

class X11GraphicsDevice$$Lambda$lambda$setDisplayMode$0$1 : public $Runnable {
	$class(X11GraphicsDevice$$Lambda$lambda$setDisplayMode$0$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(X11GraphicsDevice* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$setDisplayMode$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<X11GraphicsDevice$$Lambda$lambda$setDisplayMode$0$1>());
	}
	X11GraphicsDevice* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo X11GraphicsDevice$$Lambda$lambda$setDisplayMode$0$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(X11GraphicsDevice$$Lambda$lambda$setDisplayMode$0$1, inst$)},
	{}
};
$MethodInfo X11GraphicsDevice$$Lambda$lambda$setDisplayMode$0$1::methodInfos[3] = {
	{"<init>", "(Lsun/awt/X11GraphicsDevice;)V", nullptr, $PUBLIC, $method(static_cast<void(X11GraphicsDevice$$Lambda$lambda$setDisplayMode$0$1::*)(X11GraphicsDevice*)>(&X11GraphicsDevice$$Lambda$lambda$setDisplayMode$0$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo X11GraphicsDevice$$Lambda$lambda$setDisplayMode$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.X11GraphicsDevice$$Lambda$lambda$setDisplayMode$0$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* X11GraphicsDevice$$Lambda$lambda$setDisplayMode$0$1::load$($String* name, bool initialize) {
	$loadClass(X11GraphicsDevice$$Lambda$lambda$setDisplayMode$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* X11GraphicsDevice$$Lambda$lambda$setDisplayMode$0$1::class$ = nullptr;

$FieldInfo _X11GraphicsDevice_FieldInfo_[] = {
	{"screen", "I", nullptr, $PRIVATE | $VOLATILE, $field(X11GraphicsDevice, screen)},
	{"x11ProxyKeyMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Lsun/java2d/loops/SurfaceType;Ljava/lang/Object;>;", 0, $field(X11GraphicsDevice, x11ProxyKeyMap)},
	{"fullScreenExclusivePermission", "Ljava/awt/AWTPermission;", nullptr, $PRIVATE | $STATIC, $staticField(X11GraphicsDevice, fullScreenExclusivePermission)},
	{"xrandrExtSupported", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC, $staticField(X11GraphicsDevice, xrandrExtSupported)},
	{"configLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(X11GraphicsDevice, configLock)},
	{"topLevels", "Lsun/awt/SunDisplayChanger;", nullptr, $PRIVATE, $field(X11GraphicsDevice, topLevels)},
	{"origDisplayMode", "Ljava/awt/DisplayMode;", nullptr, $PRIVATE, $field(X11GraphicsDevice, origDisplayMode)},
	{"shutdownHookRegistered", "Z", nullptr, $PRIVATE, $field(X11GraphicsDevice, shutdownHookRegistered)},
	{"scale", "I", nullptr, $PRIVATE, $field(X11GraphicsDevice, scale)},
	{"configs", "[Ljava/awt/GraphicsConfiguration;", nullptr, 0, $field(X11GraphicsDevice, configs)},
	{"defaultConfig", "Ljava/awt/GraphicsConfiguration;", nullptr, 0, $field(X11GraphicsDevice, defaultConfig)},
	{"doubleBufferVisuals", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/lang/Integer;>;", 0, $field(X11GraphicsDevice, doubleBufferVisuals)},
	{}
};

$MethodInfo _X11GraphicsDevice_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(X11GraphicsDevice::*)(int32_t)>(&X11GraphicsDevice::init$))},
	{"addDisplayChangedListener", "(Lsun/awt/DisplayChangedListener;)V", nullptr, $PUBLIC, $method(static_cast<void(X11GraphicsDevice::*)($DisplayChangedListener*)>(&X11GraphicsDevice::addDisplayChangedListener))},
	{"addDoubleBufferVisual", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(X11GraphicsDevice::*)(int32_t)>(&X11GraphicsDevice::addDoubleBufferVisual))},
	{"configDisplayMode", "(IIII)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t,int32_t,int32_t)>(&X11GraphicsDevice::configDisplayMode))},
	{"displayChanged", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"enterFullScreenExclusive", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&X11GraphicsDevice::enterFullScreenExclusive))},
	{"enterFullScreenExclusive", "(Ljava/awt/Window;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Window*)>(&X11GraphicsDevice::enterFullScreenExclusive))},
	{"enumDisplayModes", "(ILjava/util/ArrayList;)V", "(ILjava/util/ArrayList<Ljava/awt/DisplayMode;>;)V", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,$ArrayList*)>(&X11GraphicsDevice::enumDisplayModes))},
	{"exitFullScreenExclusive", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&X11GraphicsDevice::exitFullScreenExclusive))},
	{"exitFullScreenExclusive", "(Ljava/awt/Window;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Window*)>(&X11GraphicsDevice::exitFullScreenExclusive))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $method(static_cast<$Rectangle*(X11GraphicsDevice::*)()>(&X11GraphicsDevice::getBounds))},
	{"getConfigColormap", "(II)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(X11GraphicsDevice::*)(int32_t,int32_t)>(&X11GraphicsDevice::getConfigColormap))},
	{"getConfigDepth", "(II)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(X11GraphicsDevice::*)(int32_t,int32_t)>(&X11GraphicsDevice::getConfigDepth))},
	{"getConfigVisualId", "(II)I", nullptr, $PUBLIC | $NATIVE, $method(static_cast<int32_t(X11GraphicsDevice::*)(int32_t,int32_t)>(&X11GraphicsDevice::getConfigVisualId))},
	{"getConfigurations", "()[Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getCurrentDisplayMode", "(I)Ljava/awt/DisplayMode;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$DisplayMode*(*)(int32_t)>(&X11GraphicsDevice::getCurrentDisplayMode))},
	{"getDefaultConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getDefaultDisplayMode", "()Ljava/awt/DisplayMode;", nullptr, $PRIVATE, $method(static_cast<$DisplayMode*(X11GraphicsDevice::*)()>(&X11GraphicsDevice::getDefaultDisplayMode))},
	{"getDisplay", "()J", nullptr, $PUBLIC | $NATIVE, $method(static_cast<int64_t(X11GraphicsDevice::*)()>(&X11GraphicsDevice::getDisplay))},
	{"getDisplayMode", "()Ljava/awt/DisplayMode;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDisplayModes", "()[Ljava/awt/DisplayMode;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDoubleBufferVisuals", "(I)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(X11GraphicsDevice::*)(int32_t)>(&X11GraphicsDevice::getDoubleBufferVisuals))},
	{"getIDstring", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMatchingDisplayMode", "(Ljava/awt/DisplayMode;)Ljava/awt/DisplayMode;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$DisplayMode*(X11GraphicsDevice::*)($DisplayMode*)>(&X11GraphicsDevice::getMatchingDisplayMode))},
	{"getNativeScale", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(X11GraphicsDevice::*)()>(&X11GraphicsDevice::getNativeScale))},
	{"getNativeScaleFactor", "(I)D", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<double(*)(int32_t)>(&X11GraphicsDevice::getNativeScaleFactor))},
	{"getNumConfigs", "(I)I", nullptr, $PUBLIC | $NATIVE, $method(static_cast<int32_t(X11GraphicsDevice::*)(int32_t)>(&X11GraphicsDevice::getNumConfigs))},
	{"getProxyKeyFor", "(Lsun/java2d/loops/SurfaceType;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(X11GraphicsDevice::*)($SurfaceType*)>(&X11GraphicsDevice::getProxyKeyFor))},
	{"getScaleFactor", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(X11GraphicsDevice::*)()>(&X11GraphicsDevice::getScaleFactor))},
	{"getScreen", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(X11GraphicsDevice::*)()>(&X11GraphicsDevice::getScreen))},
	{"getType", "()I", nullptr, $PUBLIC},
	{"initScaleFactor", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(X11GraphicsDevice::*)()>(&X11GraphicsDevice::initScaleFactor))},
	{"initXrandrExtension", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&X11GraphicsDevice::initXrandrExtension))},
	{"invalidate", "(Lsun/awt/X11GraphicsDevice;)V", nullptr, $PUBLIC, $method(static_cast<void(X11GraphicsDevice::*)(X11GraphicsDevice*)>(&X11GraphicsDevice::invalidate))},
	{"isDBESupported", "()Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&X11GraphicsDevice::isDBESupported))},
	{"isDisplayChangeSupported", "()Z", nullptr, $PUBLIC},
	{"isFullScreenSupported", "()Z", nullptr, $PUBLIC},
	{"isXrandrExtensionSupported", "()Z", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<bool(*)()>(&X11GraphicsDevice::isXrandrExtensionSupported))},
	{"lambda$setDisplayMode$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(X11GraphicsDevice::*)()>(&X11GraphicsDevice::lambda$setDisplayMode$0))},
	{"lambda$setDisplayMode$1", "()Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Void*(X11GraphicsDevice::*)()>(&X11GraphicsDevice::lambda$setDisplayMode$1))},
	{"makeConfigurations", "()V", nullptr, $PRIVATE, $method(static_cast<void(X11GraphicsDevice::*)()>(&X11GraphicsDevice::makeConfigurations))},
	{"makeDefaultConfiguration", "()V", nullptr, $PRIVATE, $method(static_cast<void(X11GraphicsDevice::*)()>(&X11GraphicsDevice::makeDefaultConfiguration))},
	{"pGetBounds", "(I)Ljava/awt/Rectangle;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$Rectangle*(X11GraphicsDevice::*)(int32_t)>(&X11GraphicsDevice::pGetBounds))},
	{"paletteChanged", "()V", nullptr, $PUBLIC},
	{"removeDisplayChangedListener", "(Lsun/awt/DisplayChangedListener;)V", nullptr, $PUBLIC, $method(static_cast<void(X11GraphicsDevice::*)($DisplayChangedListener*)>(&X11GraphicsDevice::removeDisplayChangedListener))},
	{"scaleDown", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(X11GraphicsDevice::*)(int32_t)>(&X11GraphicsDevice::scaleDown))},
	{"scaleUp", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(X11GraphicsDevice::*)(int32_t)>(&X11GraphicsDevice::scaleUp))},
	{"setDisplayMode", "(Ljava/awt/DisplayMode;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setFullScreenWindow", "(Ljava/awt/Window;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_configDisplayMode 7
#define _METHOD_INDEX_enterFullScreenExclusive 9
#define _METHOD_INDEX_enumDisplayModes 11
#define _METHOD_INDEX_exitFullScreenExclusive 12
#define _METHOD_INDEX_getConfigColormap 15
#define _METHOD_INDEX_getConfigDepth 16
#define _METHOD_INDEX_getConfigVisualId 17
#define _METHOD_INDEX_getCurrentDisplayMode 19
#define _METHOD_INDEX_getDisplay 22
#define _METHOD_INDEX_getDoubleBufferVisuals 25
#define _METHOD_INDEX_getNativeScaleFactor 29
#define _METHOD_INDEX_getNumConfigs 30
#define _METHOD_INDEX_initXrandrExtension 36
#define _METHOD_INDEX_isDBESupported 38
#define _METHOD_INDEX_pGetBounds 46

$ClassInfo _X11GraphicsDevice_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11GraphicsDevice",
	"java.awt.GraphicsDevice",
	"sun.awt.DisplayChangedListener",
	_X11GraphicsDevice_FieldInfo_,
	_X11GraphicsDevice_MethodInfo_
};

$Object* allocate$X11GraphicsDevice($Class* clazz) {
	return $of($alloc(X11GraphicsDevice));
}

int32_t X11GraphicsDevice::hashCode() {
	 return this->$GraphicsDevice::hashCode();
}

bool X11GraphicsDevice::equals(Object$* arg0) {
	 return this->$GraphicsDevice::equals(arg0);
}

$Object* X11GraphicsDevice::clone() {
	 return this->$GraphicsDevice::clone();
}

void X11GraphicsDevice::finalize() {
	this->$GraphicsDevice::finalize();
}

$AWTPermission* X11GraphicsDevice::fullScreenExclusivePermission = nullptr;
$Boolean* X11GraphicsDevice::xrandrExtSupported = nullptr;

void X11GraphicsDevice::init$(int32_t screennum) {
	$GraphicsDevice::init$();
	$set(this, x11ProxyKeyMap, $new($HashMap));
	$set(this, configLock, $new($Object));
	$set(this, topLevels, $new($SunDisplayChanger));
	this->screen = screennum;
	this->scale = initScaleFactor();
}

int32_t X11GraphicsDevice::getScreen() {
	return this->screen;
}

$Object* X11GraphicsDevice::getProxyKeyFor($SurfaceType* st) {
	$synchronized(this->x11ProxyKeyMap) {
		$var($Object, o, $nc(this->x11ProxyKeyMap)->get(st));
		if (o == nullptr) {
			$assign(o, $new($Object));
			$nc(this->x11ProxyKeyMap)->put(st, o);
		}
		return $of(o);
	}
}

int64_t X11GraphicsDevice::getDisplay() {
	int64_t $ret = 0;
	$prepareNative(X11GraphicsDevice, getDisplay, int64_t);
	$ret = $invokeNative(X11GraphicsDevice, getDisplay);
	$finishNative();
	return $ret;
}

int32_t X11GraphicsDevice::getType() {
	return $GraphicsDevice::TYPE_RASTER_SCREEN;
}

int32_t X11GraphicsDevice::scaleUp(int32_t x) {
	return $Region::clipRound(x * (double)getScaleFactor());
}

int32_t X11GraphicsDevice::scaleDown(int32_t x) {
	return $Region::clipRound(x / (double)getScaleFactor());
}

$Rectangle* X11GraphicsDevice::getBounds() {
	$var($Rectangle, rect, pGetBounds(getScreen()));
	if (getScaleFactor() != 1) {
		$nc(rect)->x = scaleDown(rect->x);
		rect->y = scaleDown(rect->y);
		rect->width = scaleDown(rect->width);
		rect->height = scaleDown(rect->height);
	}
	return rect;
}

$String* X11GraphicsDevice::getIDstring() {
	return $str({":0."_s, $$str(this->screen)});
}

$GraphicsConfigurationArray* X11GraphicsDevice::getConfigurations() {
	if (this->configs == nullptr) {
		$synchronized(this->configLock) {
			makeConfigurations();
		}
	}
	return $cast($GraphicsConfigurationArray, $nc(this->configs)->clone());
}

void X11GraphicsDevice::makeConfigurations() {
	$useLocalCurrentObjectStackCache();
	if (this->configs == nullptr) {
		int32_t i = 1;
		int32_t num = getNumConfigs(this->screen);
		$var($GraphicsConfigurationArray, ret, $new($GraphicsConfigurationArray, num));
		if (this->defaultConfig == nullptr) {
			ret->set(0, $(getDefaultConfiguration()));
		} else {
			ret->set(0, this->defaultConfig);
		}
		bool glxSupported = $X11GraphicsEnvironment::isGLXAvailable();
		bool xrenderSupported = $X11GraphicsEnvironment::isXRenderAvailable();
		bool dbeSupported = isDBESupported();
		if (dbeSupported && this->doubleBufferVisuals == nullptr) {
			$set(this, doubleBufferVisuals, $new($HashSet));
			getDoubleBufferVisuals(this->screen);
		}
		for (; i < num; ++i) {
			int32_t visNum = getConfigVisualId(i, this->screen);
			int32_t depth = getConfigDepth(i, this->screen);
			if (glxSupported) {
				ret->set(i, $($GLXGraphicsConfig::getConfig(this, visNum)));
			}
			if (ret->get(i) == nullptr) {
				bool doubleBuffer = (dbeSupported && $nc(this->doubleBufferVisuals)->contains($($Integer::valueOf(visNum))));
				if (xrenderSupported) {
					ret->set(i, $($XRGraphicsConfig::getConfig(this, visNum, depth, getConfigColormap(i, this->screen), doubleBuffer)));
				} else {
					ret->set(i, $($X11GraphicsConfig::getConfig(this, visNum, depth, getConfigColormap(i, this->screen), doubleBuffer)));
				}
			}
		}
		$set(this, configs, ret);
	}
}

int32_t X11GraphicsDevice::getNumConfigs(int32_t screen) {
	int32_t $ret = 0;
	$prepareNative(X11GraphicsDevice, getNumConfigs, int32_t, int32_t screen);
	$ret = $invokeNative(X11GraphicsDevice, getNumConfigs, screen);
	$finishNative();
	return $ret;
}

int32_t X11GraphicsDevice::getConfigVisualId(int32_t index, int32_t screen) {
	int32_t $ret = 0;
	$prepareNative(X11GraphicsDevice, getConfigVisualId, int32_t, int32_t index, int32_t screen);
	$ret = $invokeNative(X11GraphicsDevice, getConfigVisualId, index, screen);
	$finishNative();
	return $ret;
}

int32_t X11GraphicsDevice::getConfigDepth(int32_t index, int32_t screen) {
	int32_t $ret = 0;
	$prepareNative(X11GraphicsDevice, getConfigDepth, int32_t, int32_t index, int32_t screen);
	$ret = $invokeNative(X11GraphicsDevice, getConfigDepth, index, screen);
	$finishNative();
	return $ret;
}

int32_t X11GraphicsDevice::getConfigColormap(int32_t index, int32_t screen) {
	int32_t $ret = 0;
	$prepareNative(X11GraphicsDevice, getConfigColormap, int32_t, int32_t index, int32_t screen);
	$ret = $invokeNative(X11GraphicsDevice, getConfigColormap, index, screen);
	$finishNative();
	return $ret;
}

bool X11GraphicsDevice::isDBESupported() {
	$init(X11GraphicsDevice);
	bool $ret = false;
	$prepareNativeStatic(X11GraphicsDevice, isDBESupported, bool);
	$ret = $invokeNativeStatic(X11GraphicsDevice, isDBESupported);
	$finishNativeStatic();
	return $ret;
}

void X11GraphicsDevice::addDoubleBufferVisual(int32_t visNum) {
	$nc(this->doubleBufferVisuals)->add($($Integer::valueOf(visNum)));
}

void X11GraphicsDevice::getDoubleBufferVisuals(int32_t screen) {
	$prepareNative(X11GraphicsDevice, getDoubleBufferVisuals, void, int32_t screen);
	$invokeNative(X11GraphicsDevice, getDoubleBufferVisuals, screen);
	$finishNative();
}

$GraphicsConfiguration* X11GraphicsDevice::getDefaultConfiguration() {
	if (this->defaultConfig == nullptr) {
		$synchronized(this->configLock) {
			makeDefaultConfiguration();
		}
	}
	return this->defaultConfig;
}

void X11GraphicsDevice::makeDefaultConfiguration() {
	$useLocalCurrentObjectStackCache();
	if (this->defaultConfig == nullptr) {
		int32_t visNum = getConfigVisualId(0, this->screen);
		if ($X11GraphicsEnvironment::isGLXAvailable()) {
			$set(this, defaultConfig, $GLXGraphicsConfig::getConfig(this, visNum));
			if ($X11GraphicsEnvironment::isGLXVerbose()) {
				if (this->defaultConfig != nullptr) {
					$nc($System::out)->print("OpenGL pipeline enabled"_s);
				} else {
					$nc($System::out)->print("Could not enable OpenGL pipeline"_s);
				}
				$nc($System::out)->println($$str({" for default config on screen "_s, $$str(this->screen)}));
			}
		}
		if (this->defaultConfig == nullptr) {
			int32_t depth = getConfigDepth(0, this->screen);
			bool doubleBuffer = false;
			if (isDBESupported() && this->doubleBufferVisuals == nullptr) {
				$set(this, doubleBufferVisuals, $new($HashSet));
				getDoubleBufferVisuals(this->screen);
				doubleBuffer = $nc(this->doubleBufferVisuals)->contains($($Integer::valueOf(visNum)));
			}
			if ($X11GraphicsEnvironment::isXRenderAvailable()) {
				if ($X11GraphicsEnvironment::isXRenderVerbose()) {
					$nc($System::out)->println("XRender pipeline enabled"_s);
				}
				$set(this, defaultConfig, $XRGraphicsConfig::getConfig(this, visNum, depth, getConfigColormap(0, this->screen), doubleBuffer));
			} else {
				$set(this, defaultConfig, $X11GraphicsConfig::getConfig(this, visNum, depth, getConfigColormap(0, this->screen), doubleBuffer));
			}
		}
	}
}

void X11GraphicsDevice::enterFullScreenExclusive(int64_t window) {
	$init(X11GraphicsDevice);
	$prepareNativeStatic(X11GraphicsDevice, enterFullScreenExclusive, void, int64_t window);
	$invokeNativeStatic(X11GraphicsDevice, enterFullScreenExclusive, window);
	$finishNativeStatic();
}

void X11GraphicsDevice::exitFullScreenExclusive(int64_t window) {
	$init(X11GraphicsDevice);
	$prepareNativeStatic(X11GraphicsDevice, exitFullScreenExclusive, void, int64_t window);
	$invokeNativeStatic(X11GraphicsDevice, exitFullScreenExclusive, window);
	$finishNativeStatic();
}

bool X11GraphicsDevice::initXrandrExtension() {
	$init(X11GraphicsDevice);
	bool $ret = false;
	$prepareNativeStatic(X11GraphicsDevice, initXrandrExtension, bool);
	$ret = $invokeNativeStatic(X11GraphicsDevice, initXrandrExtension);
	$finishNativeStatic();
	return $ret;
}

$DisplayMode* X11GraphicsDevice::getCurrentDisplayMode(int32_t screen) {
	$init(X11GraphicsDevice);
	$var($DisplayMode, $ret, nullptr);
	$prepareNativeStatic(X11GraphicsDevice, getCurrentDisplayMode, $DisplayMode*, int32_t screen);
	$assign($ret, $invokeNativeStatic(X11GraphicsDevice, getCurrentDisplayMode, screen));
	$finishNativeStatic();
	return $ret;
}

void X11GraphicsDevice::enumDisplayModes(int32_t screen, $ArrayList* modes) {
	$init(X11GraphicsDevice);
	$prepareNativeStatic(X11GraphicsDevice, enumDisplayModes, void, int32_t screen, $ArrayList* modes);
	$invokeNativeStatic(X11GraphicsDevice, enumDisplayModes, screen, modes);
	$finishNativeStatic();
}

void X11GraphicsDevice::configDisplayMode(int32_t screen, int32_t width, int32_t height, int32_t displayMode) {
	$init(X11GraphicsDevice);
	$prepareNativeStatic(X11GraphicsDevice, configDisplayMode, void, int32_t screen, int32_t width, int32_t height, int32_t displayMode);
	$invokeNativeStatic(X11GraphicsDevice, configDisplayMode, screen, width, height, displayMode);
	$finishNativeStatic();
}

double X11GraphicsDevice::getNativeScaleFactor(int32_t screen) {
	$init(X11GraphicsDevice);
	double $ret = 0.0;
	$prepareNativeStatic(X11GraphicsDevice, getNativeScaleFactor, double, int32_t screen);
	$ret = $invokeNativeStatic(X11GraphicsDevice, getNativeScaleFactor, screen);
	$finishNativeStatic();
	return $ret;
}

$Rectangle* X11GraphicsDevice::pGetBounds(int32_t screenNum) {
	$var($Rectangle, $ret, nullptr);
	$prepareNative(X11GraphicsDevice, pGetBounds, $Rectangle*, int32_t screenNum);
	$assign($ret, $invokeNative(X11GraphicsDevice, pGetBounds, screenNum));
	$finishNative();
	return $ret;
}

bool X11GraphicsDevice::isXrandrExtensionSupported() {
	$load(X11GraphicsDevice);
	$synchronized(class$) {
		$init(X11GraphicsDevice);
		if (X11GraphicsDevice::xrandrExtSupported == nullptr) {
			$assignStatic(X11GraphicsDevice::xrandrExtSupported, $Boolean::valueOf(initXrandrExtension()));
		}
		return $nc(X11GraphicsDevice::xrandrExtSupported)->booleanValue();
	}
}

bool X11GraphicsDevice::isFullScreenSupported() {
	bool fsAvailable = isXrandrExtensionSupported();
	if (fsAvailable) {
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			if (X11GraphicsDevice::fullScreenExclusivePermission == nullptr) {
				$assignStatic(X11GraphicsDevice::fullScreenExclusivePermission, $new($AWTPermission, "fullScreenExclusive"_s));
			}
			try {
				security->checkPermission(X11GraphicsDevice::fullScreenExclusivePermission);
			} catch ($SecurityException& e) {
				return false;
			}
		}
	}
	return fsAvailable;
}

bool X11GraphicsDevice::isDisplayChangeSupported() {
	bool var$1 = isFullScreenSupported();
	bool var$0 = var$1 && (getFullScreenWindow() != nullptr);
	return (var$0 && !$nc(($cast($X11GraphicsEnvironment, $($GraphicsEnvironment::getLocalGraphicsEnvironment()))))->runningXinerama());
}

void X11GraphicsDevice::enterFullScreenExclusive($Window* w) {
	$init(X11GraphicsDevice);
	$useLocalCurrentObjectStackCache();
	$var($X11ComponentPeer, peer, $cast($X11ComponentPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w)));
	if (peer != nullptr) {
		enterFullScreenExclusive(peer->getWindow());
		peer->setFullScreenExclusiveModeState(true);
	}
}

void X11GraphicsDevice::exitFullScreenExclusive($Window* w) {
	$init(X11GraphicsDevice);
	$useLocalCurrentObjectStackCache();
	$var($X11ComponentPeer, peer, $cast($X11ComponentPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w)));
	if (peer != nullptr) {
		peer->setFullScreenExclusiveModeState(false);
		exitFullScreenExclusive(peer->getWindow());
	}
}

void X11GraphicsDevice::setFullScreenWindow($Window* w) {
	$synchronized(this) {
		$var($Window, old, getFullScreenWindow());
		if (w == old) {
			return;
		}
		bool fsSupported = isFullScreenSupported();
		if (fsSupported && old != nullptr) {
			exitFullScreenExclusive(old);
			if (isDisplayChangeSupported()) {
				setDisplayMode(this->origDisplayMode);
			}
		}
		$GraphicsDevice::setFullScreenWindow(w);
		if (fsSupported && w != nullptr) {
			if (this->origDisplayMode == nullptr) {
				$set(this, origDisplayMode, getDisplayMode());
			}
			enterFullScreenExclusive(w);
		}
	}
}

$DisplayMode* X11GraphicsDevice::getDefaultDisplayMode() {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsConfiguration, gc, getDefaultConfiguration());
	$var($Rectangle, r, $nc(gc)->getBounds());
	return $new($DisplayMode, $nc(r)->width, r->height, $DisplayMode::BIT_DEPTH_MULTI, $DisplayMode::REFRESH_RATE_UNKNOWN);
}

$DisplayMode* X11GraphicsDevice::getDisplayMode() {
	$synchronized(this) {
		if (isFullScreenSupported()) {
			$var($DisplayMode, mode, getCurrentDisplayMode(this->screen));
			if (mode == nullptr) {
				$assign(mode, getDefaultDisplayMode());
			}
			return mode;
		} else {
			if (this->origDisplayMode == nullptr) {
				$set(this, origDisplayMode, getDefaultDisplayMode());
			}
			return this->origDisplayMode;
		}
	}
}

$DisplayModeArray* X11GraphicsDevice::getDisplayModes() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		bool var$0 = !isFullScreenSupported();
		if (var$0 || $nc(($cast($X11GraphicsEnvironment, $($GraphicsEnvironment::getLocalGraphicsEnvironment()))))->runningXinerama()) {
			return $GraphicsDevice::getDisplayModes();
		}
		$var($ArrayList, modes, $new($ArrayList));
		enumDisplayModes(this->screen, modes);
		$var($DisplayModeArray, retArray, $new($DisplayModeArray, modes->size()));
		return $fcast($DisplayModeArray, modes->toArray(retArray));
	}
}

void X11GraphicsDevice::setDisplayMode($DisplayMode* dm$renamed) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($DisplayMode, dm, dm$renamed);
		$beforeCallerSensitive();
		if (!isDisplayChangeSupported()) {
			$GraphicsDevice::setDisplayMode(dm);
			return;
		}
		$var($Window, w, getFullScreenWindow());
		if (w == nullptr) {
			$throwNew($IllegalStateException, "Must be in fullscreen mode in order to set display mode"_s);
		}
		if ($nc($(getDisplayMode()))->equals(dm)) {
			return;
		}
		if (dm == nullptr || ($assign(dm, getMatchingDisplayMode(dm))) == nullptr) {
			$throwNew($IllegalArgumentException, "Invalid display mode"_s);
		}
		if (!this->shutdownHookRegistered) {
			this->shutdownHookRegistered = true;
			$var($PrivilegedAction, a, static_cast<$PrivilegedAction*>($new(X11GraphicsDevice$$Lambda$lambda$setDisplayMode$1, this)));
			$AccessController::doPrivileged(a);
		}
		int32_t var$0 = this->screen;
		int32_t var$1 = $nc(dm)->getWidth();
		int32_t var$2 = dm->getHeight();
		configDisplayMode(var$0, var$1, var$2, dm->getRefreshRate());
		int32_t var$3 = $nc(dm)->getWidth();
		$nc(w)->setBounds(0, 0, var$3, dm->getHeight());
		$nc(($cast($X11GraphicsEnvironment, $($GraphicsEnvironment::getLocalGraphicsEnvironment()))))->displayChanged();
	}
}

$DisplayMode* X11GraphicsDevice::getMatchingDisplayMode($DisplayMode* dm) {
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

void X11GraphicsDevice::displayChanged() {
	$synchronized(this) {
		this->scale = initScaleFactor();
		$nc(this->topLevels)->notifyListeners();
	}
}

void X11GraphicsDevice::paletteChanged() {
}

void X11GraphicsDevice::addDisplayChangedListener($DisplayChangedListener* client) {
	$nc(this->topLevels)->add(client);
}

int32_t X11GraphicsDevice::getScaleFactor() {
	return this->scale;
}

int32_t X11GraphicsDevice::getNativeScale() {
	return (int32_t)$Math::round(getNativeScaleFactor(this->screen));
}

int32_t X11GraphicsDevice::initScaleFactor() {
	if ($SunGraphicsEnvironment::isUIScaleEnabled()) {
		double debugScale = $SunGraphicsEnvironment::getDebugScale();
		if (debugScale >= 1) {
			return $cast(int32_t, debugScale);
		}
		int32_t nativeScale = getNativeScale();
		return nativeScale >= 1 ? nativeScale : 1;
	}
	return 1;
}

void X11GraphicsDevice::removeDisplayChangedListener($DisplayChangedListener* client) {
	$nc(this->topLevels)->remove(client);
}

$String* X11GraphicsDevice::toString() {
	return ($str({"X11GraphicsDevice[screen="_s, $$str(this->screen), "]"_s}));
}

void X11GraphicsDevice::invalidate(X11GraphicsDevice* device) {
	this->screen = $nc(device)->screen;
}

$Void* X11GraphicsDevice::lambda$setDisplayMode$1() {
	$useLocalCurrentObjectStackCache();
	$var($Runnable, r, static_cast<$Runnable*>($new(X11GraphicsDevice$$Lambda$lambda$setDisplayMode$0$1, this)));
	$var($String, name, $str({"Display-Change-Shutdown-Thread-"_s, $$str(this->screen)}));
	$var($Thread, t, $new($Thread, $($ThreadGroupUtils::getRootThreadGroup()), r, name, 0, false));
	t->setContextClassLoader(nullptr);
	$nc($($Runtime::getRuntime()))->addShutdownHook(t);
	return nullptr;
}

void X11GraphicsDevice::lambda$setDisplayMode$0() {
	$var($Window, old, getFullScreenWindow());
	if (old != nullptr) {
		exitFullScreenExclusive(old);
		if (isDisplayChangeSupported()) {
			setDisplayMode(this->origDisplayMode);
		}
	}
}

X11GraphicsDevice::X11GraphicsDevice() {
}

$Class* X11GraphicsDevice::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(X11GraphicsDevice$$Lambda$lambda$setDisplayMode$1::classInfo$.name)) {
			return X11GraphicsDevice$$Lambda$lambda$setDisplayMode$1::load$(name, initialize);
		}
		if (name->equals(X11GraphicsDevice$$Lambda$lambda$setDisplayMode$0$1::classInfo$.name)) {
			return X11GraphicsDevice$$Lambda$lambda$setDisplayMode$0$1::load$(name, initialize);
		}
	}
	$loadClass(X11GraphicsDevice, name, initialize, &_X11GraphicsDevice_ClassInfo_, allocate$X11GraphicsDevice);
	return class$;
}

$Class* X11GraphicsDevice::class$ = nullptr;

	} // awt
} // sun