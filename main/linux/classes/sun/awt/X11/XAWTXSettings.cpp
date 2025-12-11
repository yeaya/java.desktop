#include <sun/awt/X11/XAWTXSettings.h>

#include <java/awt/EventQueue.h>
#include <java/awt/Toolkit.h>
#include <java/lang/Runnable.h>
#include <java/util/Map.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/WindowPropertyGetter.h>
#include <sun/awt/X11/XAWTXSettings$1.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XErrorHandler$IgnoreBadWindowHandler.h>
#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XMSelection.h>
#include <sun/awt/X11/XMSelectionListener.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/XSettings.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef MAX_LENGTH

using $EventQueue = ::java::awt::EventQueue;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Map = ::java::util::Map;
using $Native = ::sun::awt::X11::Native;
using $WindowPropertyGetter = ::sun::awt::X11::WindowPropertyGetter;
using $XAWTXSettings$1 = ::sun::awt::X11::XAWTXSettings$1;
using $XAtom = ::sun::awt::X11::XAtom;
using $XConstants = ::sun::awt::X11::XConstants;
using $XErrorHandler = ::sun::awt::X11::XErrorHandler;
using $XErrorHandler$IgnoreBadWindowHandler = ::sun::awt::X11::XErrorHandler$IgnoreBadWindowHandler;
using $XErrorHandler$XBaseErrorHandler = ::sun::awt::X11::XErrorHandler$XBaseErrorHandler;
using $XMSelection = ::sun::awt::X11::XMSelection;
using $XMSelectionListener = ::sun::awt::X11::XMSelectionListener;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $XSettings = ::sun::awt::XSettings;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XAWTXSettings_FieldInfo_[] = {
	{"xSettingsPropertyAtom", "Lsun/awt/X11/XAtom;", nullptr, $PRIVATE | $FINAL, $field(XAWTXSettings, xSettingsPropertyAtom)},
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XAWTXSettings, log)},
	{"MAX_LENGTH", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAWTXSettings, MAX_LENGTH)},
	{"settings", "Lsun/awt/X11/XMSelection;", nullptr, 0, $field(XAWTXSettings, settings)},
	{}
};

$MethodInfo _XAWTXSettings_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XAWTXSettings::*)()>(&XAWTXSettings::init$))},
	{"dispose", "()V", nullptr, 0},
	{"getUpdatedSettings", "(J)Ljava/util/Map;", "(J)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $method(static_cast<$Map*(XAWTXSettings::*)(int64_t)>(&XAWTXSettings::getUpdatedSettings))},
	{"initPerScreenXSettings", "()V", nullptr, 0},
	{"initXSettings", "()V", nullptr, 0},
	{"ownerChanged", "(ILsun/awt/X11/XMSelection;JJJ)V", nullptr, $PUBLIC},
	{"ownerDeath", "(ILsun/awt/X11/XMSelection;J)V", nullptr, $PUBLIC},
	{"selectionChanged", "(ILsun/awt/X11/XMSelection;JLsun/awt/X11/XPropertyEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateXSettings", "(IJ)V", nullptr, $PRIVATE, $method(static_cast<void(XAWTXSettings::*)(int32_t,int64_t)>(&XAWTXSettings::updateXSettings))},
	{}
};

$InnerClassInfo _XAWTXSettings_InnerClassesInfo_[] = {
	{"sun.awt.X11.XAWTXSettings$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XAWTXSettings_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XAWTXSettings",
	"sun.awt.XSettings",
	"sun.awt.X11.XMSelectionListener",
	_XAWTXSettings_FieldInfo_,
	_XAWTXSettings_MethodInfo_,
	nullptr,
	nullptr,
	_XAWTXSettings_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XAWTXSettings$1"
};

$Object* allocate$XAWTXSettings($Class* clazz) {
	return $of($alloc(XAWTXSettings));
}

int32_t XAWTXSettings::hashCode() {
	 return this->$XSettings::hashCode();
}

bool XAWTXSettings::equals(Object$* arg0) {
	 return this->$XSettings::equals(arg0);
}

$Object* XAWTXSettings::clone() {
	 return this->$XSettings::clone();
}

$String* XAWTXSettings::toString() {
	 return this->$XSettings::toString();
}

void XAWTXSettings::finalize() {
	this->$XSettings::finalize();
}

$PlatformLogger* XAWTXSettings::log = nullptr;

void XAWTXSettings::init$() {
	$XSettings::init$();
	$set(this, xSettingsPropertyAtom, $XAtom::get("_XSETTINGS_SETTINGS"_s));
	initXSettings();
}

void XAWTXSettings::initXSettings() {
	$init($PlatformLogger$Level);
	if ($nc(XAWTXSettings::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XAWTXSettings::log)->fine("Initializing XAWT XSettings"_s);
	}
	$set(this, settings, $new($XMSelection, "_XSETTINGS"_s));
	$nc(this->settings)->addSelectionListener(this);
	initPerScreenXSettings();
}

void XAWTXSettings::dispose() {
	$nc(this->settings)->removeSelectionListener(this);
}

void XAWTXSettings::ownerDeath(int32_t screen, $XMSelection* sel, int64_t deadOwner) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XAWTXSettings::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XAWTXSettings::log)->fine($$str({"Owner "_s, $$str(deadOwner), " died for selection "_s, sel, " screen "_s, $$str(screen)}));
	}
}

void XAWTXSettings::ownerChanged(int32_t screen, $XMSelection* sel, int64_t newOwner, int64_t data, int64_t timestamp) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XAWTXSettings::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XAWTXSettings::log)->fine($$str({"New Owner "_s, $$str(newOwner), " for selection = "_s, sel, " screen "_s, $$str(screen)}));
	}
}

void XAWTXSettings::selectionChanged(int32_t screen, $XMSelection* sel, int64_t owner, $XPropertyEvent* event) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XAWTXSettings::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XAWTXSettings::log)->fine($$str({"Selection changed on sel "_s, sel, " screen = "_s, $$str(screen), " owner = "_s, $$str(owner), " event = "_s, event}));
	}
	updateXSettings(screen, owner);
}

void XAWTXSettings::initPerScreenXSettings() {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XAWTXSettings::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XAWTXSettings::log)->fine("Updating Per XSettings changes"_s);
	}
	$var($Map, updatedSettings, nullptr);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t display = $XToolkit::getDisplay();
			int32_t screen = (int32_t)$XlibWrapper::DefaultScreen(display);
			$assign(updatedSettings, getUpdatedSettings($nc(this->settings)->getOwner(screen)));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$nc(($cast($XToolkit, $($Toolkit::getDefaultToolkit()))))->parseXSettings(0, updatedSettings);
}

void XAWTXSettings::updateXSettings(int32_t screen, int64_t owner) {
	$useLocalCurrentObjectStackCache();
	$var($Map, updatedSettings, getUpdatedSettings(owner));
	$EventQueue::invokeLater($$new($XAWTXSettings$1, this, updatedSettings));
}

$Map* XAWTXSettings::getUpdatedSettings(int64_t owner) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XAWTXSettings::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XAWTXSettings::log)->fine($$str({"owner ="_s, $$str(owner)}));
	}
	if (0 == owner) {
		return nullptr;
	}
	$var($Map, settings, nullptr);
	try {
		$var($WindowPropertyGetter, getter, $new($WindowPropertyGetter, owner, this->xSettingsPropertyAtom, (int64_t)0, XAWTXSettings::MAX_LENGTH, false, $nc(this->xSettingsPropertyAtom)->getAtom()));
		{
			$var($Throwable, var$0, nullptr);
			try {
				int32_t status = getter->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
				if (status != $XConstants::Success || getter->getData() == 0) {
					if ($nc(XAWTXSettings::log)->isLoggable($PlatformLogger$Level::FINE)) {
						$nc(XAWTXSettings::log)->fine($$str({"OH OH : getter failed  status = "_s, $$str(status)}));
					}
					$assign(settings, nullptr);
				}
				int64_t ptr = getter->getData();
				if ($nc(XAWTXSettings::log)->isLoggable($PlatformLogger$Level::FINE)) {
					$nc(XAWTXSettings::log)->fine($$str({"noItems = "_s, $$str(getter->getNumberOfItems())}));
				}
				$var($bytes, array, $Native::toBytes(ptr, getter->getNumberOfItems()));
				if (array != nullptr) {
					$assign(settings, update(array));
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				getter->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($Exception& e) {
		e->printStackTrace();
	}
	return settings;
}

void clinit$XAWTXSettings($Class* class$) {
	$assignStatic(XAWTXSettings::log, $PlatformLogger::getLogger("sun.awt.X11.XAWTXSettings"_s));
}

XAWTXSettings::XAWTXSettings() {
}

$Class* XAWTXSettings::load$($String* name, bool initialize) {
	$loadClass(XAWTXSettings, name, initialize, &_XAWTXSettings_ClassInfo_, clinit$XAWTXSettings, allocate$XAWTXSettings);
	return class$;
}

$Class* XAWTXSettings::class$ = nullptr;

		} // X11
	} // awt
} // sun