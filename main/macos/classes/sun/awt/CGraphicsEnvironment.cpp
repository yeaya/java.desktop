#include <sun/awt/CGraphicsEnvironment.h>

#include <java/awt/Font.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Map.h>
#include <sun/awt/CGraphicsDevice.h>
#include <sun/java2d/MacosxSurfaceManagerFactory.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/java2d/SurfaceManagerFactory.h>
#include <jcpp.h>

#undef PLAIN

using $FontArray = $Array<::java::awt::Font>;
using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $CGraphicsDeviceArray = $Array<::sun::awt::CGraphicsDevice>;
using $Font = ::java::awt::Font;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Map = ::java::util::Map;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;
using $MacosxSurfaceManagerFactory = ::sun::java2d::MacosxSurfaceManagerFactory;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $SurfaceManagerFactory = ::sun::java2d::SurfaceManagerFactory;

namespace sun {
	namespace awt {

$FieldInfo _CGraphicsEnvironment_FieldInfo_[] = {
	{"devices", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Lsun/awt/CGraphicsDevice;>;", $PRIVATE | $FINAL, $field(CGraphicsEnvironment, devices)},
	{"mainDisplayID", "I", nullptr, $PRIVATE, $field(CGraphicsEnvironment, mainDisplayID)},
	{"displayReconfigContext", "J", nullptr, $PRIVATE | $FINAL, $field(CGraphicsEnvironment, displayReconfigContext)},
	{"oldDevices", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/ref/WeakReference<Lsun/awt/CGraphicsDevice;>;>;", $PRIVATE, $field(CGraphicsEnvironment, oldDevices)},
	{"sLogicalFonts", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(CGraphicsEnvironment, sLogicalFonts)},
	{}
};

$MethodInfo _CGraphicsEnvironment_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CGraphicsEnvironment::*)()>(&CGraphicsEnvironment::init$))},
	{"_displayReconfiguration", "(IZ)V", nullptr, 0, $method(static_cast<void(CGraphicsEnvironment::*)(int32_t,bool)>(&CGraphicsEnvironment::_displayReconfiguration))},
	{"deregisterDisplayReconfiguration", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CGraphicsEnvironment::*)(int64_t)>(&CGraphicsEnvironment::deregisterDisplayReconfiguration))},
	{"finalize", "()V", nullptr, $PROTECTED, nullptr, "java.lang.Throwable"},
	{"getAllFonts", "()[Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getDefaultScreenDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.awt.HeadlessException"},
	{"getDisplayIDs", "()[I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$ints*(*)()>(&CGraphicsEnvironment::getDisplayIDs))},
	{"getMainDisplayID", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&CGraphicsEnvironment::getMainDisplayID))},
	{"getNumScreens", "()I", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"getScreenDevice", "(I)Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<$GraphicsDevice*(CGraphicsEnvironment::*)(int32_t)>(&CGraphicsEnvironment::getScreenDevice))},
	{"getScreenDevices", "()[Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.awt.HeadlessException"},
	{"getSimilarDevice", "(Lsun/awt/CGraphicsDevice;)Lsun/awt/CGraphicsDevice;", nullptr, $PRIVATE, $method(static_cast<$CGraphicsDevice*(CGraphicsEnvironment::*)($CGraphicsDevice*)>(&CGraphicsEnvironment::getSimilarDevice))},
	{"init", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&CGraphicsEnvironment::init))},
	{"initDevices", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(CGraphicsEnvironment::*)()>(&CGraphicsEnvironment::initDevices))},
	{"isDisplayLocal", "()Z", nullptr, $PUBLIC},
	{"makeScreenDevice", "(I)Ljava/awt/GraphicsDevice;", nullptr, $PROTECTED},
	{"rebuildDevices", "()V", nullptr, $PRIVATE, $method(static_cast<void(CGraphicsEnvironment::*)()>(&CGraphicsEnvironment::rebuildDevices))},
	{"registerDisplayReconfiguration", "()J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(CGraphicsEnvironment::*)()>(&CGraphicsEnvironment::registerDisplayReconfiguration))},
	{}
};

#define _METHOD_INDEX_deregisterDisplayReconfiguration 2
#define _METHOD_INDEX_getDisplayIDs 6
#define _METHOD_INDEX_getMainDisplayID 7
#define _METHOD_INDEX_registerDisplayReconfiguration 17

$ClassInfo _CGraphicsEnvironment_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.CGraphicsEnvironment",
	"sun.java2d.SunGraphicsEnvironment",
	nullptr,
	_CGraphicsEnvironment_FieldInfo_,
	_CGraphicsEnvironment_MethodInfo_
};

$Object* allocate$CGraphicsEnvironment($Class* clazz) {
	return $of($alloc(CGraphicsEnvironment));
}

$StringArray* CGraphicsEnvironment::sLogicalFonts = nullptr;

$ints* CGraphicsEnvironment::getDisplayIDs() {
	$init(CGraphicsEnvironment);
	$var($ints, $ret, nullptr);
	$prepareNativeStatic(CGraphicsEnvironment, getDisplayIDs, $ints*);
	$assign($ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

int32_t CGraphicsEnvironment::getMainDisplayID() {
	$init(CGraphicsEnvironment);
	int32_t $ret = 0;
	$prepareNativeStatic(CGraphicsEnvironment, getMainDisplayID, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void CGraphicsEnvironment::init() {
	$init(CGraphicsEnvironment);
}

int64_t CGraphicsEnvironment::registerDisplayReconfiguration() {
	int64_t $ret = 0;
	$prepareNative(CGraphicsEnvironment, registerDisplayReconfiguration, int64_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void CGraphicsEnvironment::deregisterDisplayReconfiguration(int64_t context) {
	$prepareNative(CGraphicsEnvironment, deregisterDisplayReconfiguration, void, int64_t context);
	$invokeNative(context);
	$finishNative();
}

void CGraphicsEnvironment::init$() {
	$SunGraphicsEnvironment::init$();
	$set(this, devices, $new($HashMap, 5));
	$set(this, oldDevices, $new($ArrayList));
	if (isHeadless()) {
		this->displayReconfigContext = 0;
		return;
	}
	rebuildDevices();
	this->displayReconfigContext = registerDisplayReconfiguration();
	if (this->displayReconfigContext == (int64_t)0) {
		$throwNew($RuntimeException, "Could not register CoreGraphics display reconfiguration callback"_s);
	}
}

void CGraphicsEnvironment::rebuildDevices() {
	initDevices();
	displayChanged();
}

void CGraphicsEnvironment::_displayReconfiguration(int32_t displayId, bool removed) {
	rebuildDevices();
}

void CGraphicsEnvironment::finalize() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SunGraphicsEnvironment::finalize();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			deregisterDisplayReconfiguration(this->displayReconfigContext);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void CGraphicsEnvironment::initDevices() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Map, old, $new($HashMap, this->devices));
		$nc(this->devices)->clear();
		this->mainDisplayID = getMainDisplayID();
		if (!old->containsKey($($Integer::valueOf(this->mainDisplayID)))) {
			$var($Object, var$0, $of($Integer::valueOf(this->mainDisplayID)));
			old->put(var$0, $$new($CGraphicsDevice, this->mainDisplayID));
		}
		$var($ints, displayIDs, getDisplayIDs());
		if ($nc(displayIDs)->length == 0) {
			$assign(displayIDs, $new($ints, {this->mainDisplayID}));
		}
		{
			$var($ints, arr$, displayIDs);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t id = arr$->get(i$);
				{
					$var($Object, var$1, $of($Integer::valueOf(id)));
					$nc(this->devices)->put(var$1, old->containsKey($($Integer::valueOf(id))) ? $cast($CGraphicsDevice, $(old->remove($($Integer::valueOf(id))))) : $$new($CGraphicsDevice, id));
				}
			}
		}
		this->mainDisplayID = getMainDisplayID();
		if (!$nc(this->devices)->containsKey($($Integer::valueOf(this->mainDisplayID)))) {
			this->mainDisplayID = $nc(displayIDs)->get(0);
		}
		{
			$var($Iterator, i$, $nc($(old->values()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($CGraphicsDevice, gd, $cast($CGraphicsDevice, i$->next()));
				{
					$nc(this->oldDevices)->add($$new($WeakReference, gd));
				}
			}
		}
		{
			$var($ListIterator, it, $nc(this->oldDevices)->listIterator());
			for (; $nc(it)->hasNext();) {
				$var($CGraphicsDevice, gd, $cast($CGraphicsDevice, $nc(($cast($WeakReference, $(it->next()))))->get()));
				if (gd != nullptr) {
					$var($CGraphicsDevice, similarDevice, getSimilarDevice(gd));
					if (similarDevice == nullptr) {
						gd->invalidate($cast($CGraphicsDevice, $($nc(this->devices)->get($($Integer::valueOf(this->mainDisplayID))))));
					} else {
						gd->invalidate(similarDevice);
					}
					gd->displayChanged();
				} else {
					it->remove();
				}
			}
		}
	}
}

$CGraphicsDevice* CGraphicsEnvironment::getSimilarDevice($CGraphicsDevice* old) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(this->devices)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($CGraphicsDevice, device, $cast($CGraphicsDevice, i$->next()));
			{
				if ($nc($($nc(device)->getBounds()))->equals($($nc(old)->getBounds()))) {
					return device;
				}
			}
		}
	}
	return nullptr;
}

$GraphicsDevice* CGraphicsEnvironment::getDefaultScreenDevice() {
	$synchronized(this) {
		return $cast($GraphicsDevice, $nc(this->devices)->get($($Integer::valueOf(this->mainDisplayID))));
	}
}

$GraphicsDeviceArray* CGraphicsEnvironment::getScreenDevices() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		return $fcast($GraphicsDeviceArray, $nc($($nc(this->devices)->values()))->toArray($$new($CGraphicsDeviceArray, $nc($($nc(this->devices)->values()))->size())));
	}
}

$GraphicsDevice* CGraphicsEnvironment::getScreenDevice(int32_t displayID) {
	$synchronized(this) {
		return $cast($GraphicsDevice, $nc(this->devices)->get($($Integer::valueOf(displayID))));
	}
}

int32_t CGraphicsEnvironment::getNumScreens() {
	$synchronized(this) {
		return $nc(this->devices)->size();
	}
}

$GraphicsDevice* CGraphicsEnvironment::makeScreenDevice(int32_t screennum) {
	$throwNew($UnsupportedOperationException, "This method is unused and should not be called in this implementation"_s);
	$shouldNotReachHere();
}

bool CGraphicsEnvironment::isDisplayLocal() {
	return true;
}

$FontArray* CGraphicsEnvironment::getAllFonts() {
	$useLocalCurrentObjectStackCache();
	$var($FontArray, newFonts, nullptr);
	$var($FontArray, superFonts, $SunGraphicsEnvironment::getAllFonts());
	int32_t numLogical = $nc(CGraphicsEnvironment::sLogicalFonts)->length;
	int32_t numOtherFonts = $nc(superFonts)->length;
	$assign(newFonts, $new($FontArray, numOtherFonts + numLogical));
	$System::arraycopy(superFonts, 0, newFonts, numLogical, numOtherFonts);
	for (int32_t i = 0; i < numLogical; ++i) {
		newFonts->set(i, $$new($Font, $nc(CGraphicsEnvironment::sLogicalFonts)->get(i), $Font::PLAIN, 1));
	}
	return newFonts;
}

void clinit$CGraphicsEnvironment($Class* class$) {
	{
		$Toolkit::getDefaultToolkit();
		$SurfaceManagerFactory::setInstance($$new($MacosxSurfaceManagerFactory));
	}
	$assignStatic(CGraphicsEnvironment::sLogicalFonts, $new($StringArray, {
		"Serif"_s,
		"SansSerif"_s,
		"Monospaced"_s,
		"Dialog"_s,
		"DialogInput"_s
	}));
}

CGraphicsEnvironment::CGraphicsEnvironment() {
}

$Class* CGraphicsEnvironment::load$($String* name, bool initialize) {
	$loadClass(CGraphicsEnvironment, name, initialize, &_CGraphicsEnvironment_ClassInfo_, clinit$CGraphicsEnvironment, allocate$CGraphicsEnvironment);
	return class$;
}

$Class* CGraphicsEnvironment::class$ = nullptr;

	} // awt
} // sun