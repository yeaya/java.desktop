#include <sun/awt/X11GraphicsEnvironment.h>

#include <java/awt/AWTError.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/WeakReference.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Map.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11GraphicsDevice.h>
#include <sun/awt/X11GraphicsEnvironment$1.h>
#include <sun/awt/X11GraphicsEnvironment$2.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/java2d/SurfaceManagerFactory.h>
#include <sun/java2d/UnixSurfaceManagerFactory.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $X11GraphicsDeviceArray = $Array<::sun::awt::X11GraphicsDevice>;
using $AWTError = ::java::awt::AWTError;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Map = ::java::util::Map;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $X11GraphicsDevice = ::sun::awt::X11GraphicsDevice;
using $X11GraphicsEnvironment$1 = ::sun::awt::X11GraphicsEnvironment$1;
using $X11GraphicsEnvironment$2 = ::sun::awt::X11GraphicsEnvironment$2;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $SurfaceManagerFactory = ::sun::java2d::SurfaceManagerFactory;
using $UnixSurfaceManagerFactory = ::sun::java2d::UnixSurfaceManagerFactory;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {

$FieldInfo _X11GraphicsEnvironment_FieldInfo_[] = {
	{"glxAvailable", "Z", nullptr, $PRIVATE | $STATIC, $staticField(X11GraphicsEnvironment, glxAvailable)},
	{"glxVerbose", "Z", nullptr, $PRIVATE | $STATIC, $staticField(X11GraphicsEnvironment, glxVerbose)},
	{"xRenderVerbose", "Z", nullptr, $PRIVATE | $STATIC, $staticField(X11GraphicsEnvironment, xRenderVerbose)},
	{"xRenderAvailable", "Z", nullptr, $PRIVATE | $STATIC, $staticField(X11GraphicsEnvironment, xRenderAvailable)},
	{"isDisplayLocal", "Ljava/lang/Boolean;", nullptr, $PRIVATE, $field(X11GraphicsEnvironment, isDisplayLocal$)},
	{"devices", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Lsun/awt/X11GraphicsDevice;>;", $PRIVATE | $FINAL, $field(X11GraphicsEnvironment, devices)},
	{"mainScreen", "I", nullptr, $PRIVATE, $field(X11GraphicsEnvironment, mainScreen)},
	{"oldDevices", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/ref/WeakReference<Lsun/awt/X11GraphicsDevice;>;>;", $PRIVATE, $field(X11GraphicsEnvironment, oldDevices)},
	{}
};

$MethodInfo _X11GraphicsEnvironment_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X11GraphicsEnvironment::*)()>(&X11GraphicsEnvironment::init$))},
	{"_isDisplayLocal", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&X11GraphicsEnvironment::_isDisplayLocal))},
	{"checkShmExt", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&X11GraphicsEnvironment::checkShmExt))},
	{"getDefaultFontFaceName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(X11GraphicsEnvironment::*)()>(&X11GraphicsEnvironment::getDefaultFontFaceName))},
	{"getDefaultScreenDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDefaultScreenNum", "()I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(X11GraphicsEnvironment::*)()>(&X11GraphicsEnvironment::getDefaultScreenNum))},
	{"getDisplayString", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)()>(&X11GraphicsEnvironment::getDisplayString))},
	{"getNumScreens", "()I", nullptr, $PROTECTED | $NATIVE},
	{"getScreenDevice", "(I)Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<$GraphicsDevice*(X11GraphicsEnvironment::*)(int32_t)>(&X11GraphicsEnvironment::getScreenDevice))},
	{"getScreenDevices", "()[Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"initDevices", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(X11GraphicsEnvironment::*)()>(&X11GraphicsEnvironment::initDevices))},
	{"initDisplay", "(Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(bool)>(&X11GraphicsEnvironment::initDisplay))},
	{"initGLX", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&X11GraphicsEnvironment::initGLX))},
	{"initNativeData", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&X11GraphicsEnvironment::initNativeData))},
	{"initXRender", "(ZZ)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(bool,bool)>(&X11GraphicsEnvironment::initXRender))},
	{"isDisplayLocal", "()Z", nullptr, $PUBLIC},
	{"isGLXAvailable", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&X11GraphicsEnvironment::isGLXAvailable))},
	{"isGLXVerbose", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&X11GraphicsEnvironment::isGLXVerbose))},
	{"isXRenderAvailable", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&X11GraphicsEnvironment::isXRenderAvailable))},
	{"isXRenderVerbose", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&X11GraphicsEnvironment::isXRenderVerbose))},
	{"makeScreenDevice", "(I)Ljava/awt/GraphicsDevice;", nullptr, $PROTECTED},
	{"pRunningXinerama", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&X11GraphicsEnvironment::pRunningXinerama))},
	{"paletteChanged", "()V", nullptr, $PUBLIC},
	{"rebuildDevices", "()V", nullptr, $PUBLIC, $method(static_cast<void(X11GraphicsEnvironment::*)()>(&X11GraphicsEnvironment::rebuildDevices))},
	{"runningXinerama", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(X11GraphicsEnvironment::*)()>(&X11GraphicsEnvironment::runningXinerama))},
	{}
};

#define _METHOD_INDEX_checkShmExt 2
#define _METHOD_INDEX_getDefaultScreenNum 5
#define _METHOD_INDEX_getDisplayString 6
#define _METHOD_INDEX_getNumScreens 7
#define _METHOD_INDEX_initDisplay 11
#define _METHOD_INDEX_initGLX 12
#define _METHOD_INDEX_initNativeData 13
#define _METHOD_INDEX_initXRender 14
#define _METHOD_INDEX_pRunningXinerama 21

$InnerClassInfo _X11GraphicsEnvironment_InnerClassesInfo_[] = {
	{"sun.awt.X11GraphicsEnvironment$2", nullptr, nullptr, 0},
	{"sun.awt.X11GraphicsEnvironment$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _X11GraphicsEnvironment_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11GraphicsEnvironment",
	"sun.java2d.SunGraphicsEnvironment",
	nullptr,
	_X11GraphicsEnvironment_FieldInfo_,
	_X11GraphicsEnvironment_MethodInfo_,
	nullptr,
	nullptr,
	_X11GraphicsEnvironment_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11GraphicsEnvironment$2,sun.awt.X11GraphicsEnvironment$1"
};

$Object* allocate$X11GraphicsEnvironment($Class* clazz) {
	return $of($alloc(X11GraphicsEnvironment));
}

bool X11GraphicsEnvironment::glxAvailable = false;
bool X11GraphicsEnvironment::glxVerbose = false;
bool X11GraphicsEnvironment::xRenderVerbose = false;
bool X11GraphicsEnvironment::xRenderAvailable = false;

bool X11GraphicsEnvironment::initGLX() {
	$init(X11GraphicsEnvironment);
	bool $ret = false;
	$prepareNativeStatic(X11GraphicsEnvironment, initGLX, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool X11GraphicsEnvironment::isGLXAvailable() {
	$init(X11GraphicsEnvironment);
	return X11GraphicsEnvironment::glxAvailable;
}

bool X11GraphicsEnvironment::isGLXVerbose() {
	$init(X11GraphicsEnvironment);
	return X11GraphicsEnvironment::glxVerbose;
}

bool X11GraphicsEnvironment::initXRender(bool verbose, bool ignoreLinuxVersion) {
	$init(X11GraphicsEnvironment);
	bool $ret = false;
	$prepareNativeStatic(X11GraphicsEnvironment, initXRender, bool, bool verbose, bool ignoreLinuxVersion);
	$ret = $invokeNativeStatic(verbose, ignoreLinuxVersion);
	$finishNativeStatic();
	return $ret;
}

bool X11GraphicsEnvironment::isXRenderAvailable() {
	$init(X11GraphicsEnvironment);
	return X11GraphicsEnvironment::xRenderAvailable;
}

bool X11GraphicsEnvironment::isXRenderVerbose() {
	$init(X11GraphicsEnvironment);
	return X11GraphicsEnvironment::xRenderVerbose;
}

int32_t X11GraphicsEnvironment::checkShmExt() {
	$init(X11GraphicsEnvironment);
	int32_t $ret = 0;
	$prepareNativeStatic(X11GraphicsEnvironment, checkShmExt, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

$String* X11GraphicsEnvironment::getDisplayString() {
	$init(X11GraphicsEnvironment);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(X11GraphicsEnvironment, getDisplayString, $String*);
	$assign($ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

void X11GraphicsEnvironment::initDisplay(bool glxRequested) {
	$init(X11GraphicsEnvironment);
	$prepareNativeStatic(X11GraphicsEnvironment, initDisplay, void, bool glxRequested);
	$invokeNativeStatic(glxRequested);
	$finishNativeStatic();
}

int32_t X11GraphicsEnvironment::getNumScreens() {
	int32_t $ret = 0;
	$prepareNative(X11GraphicsEnvironment, getNumScreens, int32_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

int32_t X11GraphicsEnvironment::getDefaultScreenNum() {
	int32_t $ret = 0;
	$prepareNative(X11GraphicsEnvironment, getDefaultScreenNum, int32_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void X11GraphicsEnvironment::init$() {
	$SunGraphicsEnvironment::init$();
	$set(this, devices, $new($HashMap, 5));
	$set(this, oldDevices, $new($ArrayList));
	if (isHeadless()) {
		return;
	}
	rebuildDevices();
}

void X11GraphicsEnvironment::initNativeData() {
	$init(X11GraphicsEnvironment);
	$prepareNativeStatic(X11GraphicsEnvironment, initNativeData, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void X11GraphicsEnvironment::rebuildDevices() {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			initNativeData();
			initDevices();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	displayChanged();
}

void X11GraphicsEnvironment::initDevices() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Map, old, $new($HashMap, this->devices));
		$nc(this->devices)->clear();
		int32_t numScreens = getNumScreens();
		if (numScreens == 0) {
			$throwNew($AWTError, "no screen devices"_s);
		}
		int32_t index = getDefaultScreenNum();
		this->mainScreen = 0 < index && index < $nc(this->screens)->length ? index : 0;
		for (int32_t id = 0; id < numScreens; ++id) {
			$var($Object, var$0, $of($Integer::valueOf(id)));
			$nc(this->devices)->put(var$0, old->containsKey($($Integer::valueOf(id))) ? $cast($X11GraphicsDevice, $(old->remove($($Integer::valueOf(id))))) : $$new($X11GraphicsDevice, id));
		}
		{
			$var($Iterator, i$, $nc($(old->values()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($X11GraphicsDevice, gd, $cast($X11GraphicsDevice, i$->next()));
				{
					$nc(this->oldDevices)->add($$new($WeakReference, gd));
				}
			}
		}
		{
			$var($ListIterator, it, $nc(this->oldDevices)->listIterator());
			for (; $nc(it)->hasNext();) {
				$var($X11GraphicsDevice, gd, $cast($X11GraphicsDevice, $nc(($cast($WeakReference, $(it->next()))))->get()));
				if (gd != nullptr) {
					gd->invalidate($cast($X11GraphicsDevice, $($nc(this->devices)->get($($Integer::valueOf(this->mainScreen))))));
					gd->displayChanged();
				} else {
					it->remove();
				}
			}
		}
	}
}

$GraphicsDevice* X11GraphicsEnvironment::getDefaultScreenDevice() {
	$synchronized(this) {
		return $cast($GraphicsDevice, $nc(this->devices)->get($($Integer::valueOf(this->mainScreen))));
	}
}

$GraphicsDeviceArray* X11GraphicsEnvironment::getScreenDevices() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		return $fcast($GraphicsDeviceArray, $nc($($nc(this->devices)->values()))->toArray($$new($X11GraphicsDeviceArray, 0)));
	}
}

$GraphicsDevice* X11GraphicsEnvironment::getScreenDevice(int32_t screen) {
	$synchronized(this) {
		return $cast($GraphicsDevice, $nc(this->devices)->get($($Integer::valueOf(screen))));
	}
}

$GraphicsDevice* X11GraphicsEnvironment::makeScreenDevice(int32_t screennum) {
	$throwNew($UnsupportedOperationException, "This method is unused andshould not be called in this implementation"_s);
	$shouldNotReachHere();
}

bool X11GraphicsEnvironment::isDisplayLocal() {
	if (this->isDisplayLocal$ == nullptr) {
		$SunToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (this->isDisplayLocal$ == nullptr) {
					$set(this, isDisplayLocal$, $Boolean::valueOf(_isDisplayLocal()));
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$SunToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return $nc(this->isDisplayLocal$)->booleanValue();
}

bool X11GraphicsEnvironment::_isDisplayLocal() {
	$init(X11GraphicsEnvironment);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (isHeadless()) {
		return true;
	}
	$var($String, isRemote, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.remote"_s)))));
	if (isRemote != nullptr) {
		return isRemote->equals("false"_s);
	}
	int32_t shm = checkShmExt();
	if (shm != -1) {
		return (shm == 1);
	}
	$var($String, display, getDisplayString());
	int32_t ind = $nc(display)->indexOf((int32_t)u':');
	$var($String, hostName, display->substring(0, ind));
	if (ind <= 0) {
		return true;
	}
	$var($Boolean, result, $cast($Boolean, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($X11GraphicsEnvironment$2, hostName)))));
	return $nc(result)->booleanValue();
}

$String* X11GraphicsEnvironment::getDefaultFontFaceName() {
	return nullptr;
}

bool X11GraphicsEnvironment::pRunningXinerama() {
	$init(X11GraphicsEnvironment);
	bool $ret = false;
	$prepareNativeStatic(X11GraphicsEnvironment, pRunningXinerama, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool X11GraphicsEnvironment::runningXinerama() {
	return pRunningXinerama();
}

void X11GraphicsEnvironment::paletteChanged() {
}

void clinit$X11GraphicsEnvironment($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($X11GraphicsEnvironment$1)));
		$SurfaceManagerFactory::setInstance($$new($UnixSurfaceManagerFactory));
	}
}

X11GraphicsEnvironment::X11GraphicsEnvironment() {
}

$Class* X11GraphicsEnvironment::load$($String* name, bool initialize) {
	$loadClass(X11GraphicsEnvironment, name, initialize, &_X11GraphicsEnvironment_ClassInfo_, clinit$X11GraphicsEnvironment, allocate$X11GraphicsEnvironment);
	return class$;
}

$Class* X11GraphicsEnvironment::class$ = nullptr;

	} // awt
} // sun