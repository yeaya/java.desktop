#include <java/awt/MouseInfo.h>

#include <java/awt/AWTPermission.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Point.h>
#include <java/awt/PointerInfo.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/peer/MouseInfoPeer.h>
#include <java/lang/AssertionError.h>
#include <java/lang/SecurityManager.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <sun/awt/AWTPermissions.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef WATCH_MOUSE_PERMISSION

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $AWTPermission = ::java::awt::AWTPermission;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Point = ::java::awt::Point;
using $PointerInfo = ::java::awt::PointerInfo;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $MouseInfoPeer = ::java::awt::peer::MouseInfoPeer;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $AWTPermissions = ::sun::awt::AWTPermissions;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$FieldInfo _MouseInfo_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MouseInfo, $assertionsDisabled)},
	{}
};

$MethodInfo _MouseInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MouseInfo::*)()>(&MouseInfo::init$))},
	{"areScreenDevicesIndependent", "([Ljava/awt/GraphicsDevice;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($GraphicsDeviceArray*)>(&MouseInfo::areScreenDevicesIndependent))},
	{"getNumberOfButtons", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&MouseInfo::getNumberOfButtons)), "java.awt.HeadlessException"},
	{"getPointerInfo", "()Ljava/awt/PointerInfo;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PointerInfo*(*)()>(&MouseInfo::getPointerInfo)), "java.awt.HeadlessException"},
	{}
};

$ClassInfo _MouseInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.MouseInfo",
	"java.lang.Object",
	nullptr,
	_MouseInfo_FieldInfo_,
	_MouseInfo_MethodInfo_
};

$Object* allocate$MouseInfo($Class* clazz) {
	return $of($alloc(MouseInfo));
}

bool MouseInfo::$assertionsDisabled = false;

void MouseInfo::init$() {
}

$PointerInfo* MouseInfo::getPointerInfo() {
	$init(MouseInfo);
	$useLocalCurrentObjectStackCache();
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		$init($AWTPermissions);
		security->checkPermission($AWTPermissions::WATCH_MOUSE_PERMISSION);
	}
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	$var($Point, point, $new($Point, 0, 0));
	int32_t deviceNum = 0;
	if ($instanceOf($ComponentFactory, toolkit)) {
		deviceNum = $nc($($nc(($cast($ComponentFactory, toolkit)))->getMouseInfoPeer()))->fillPointWithCoords(point);
	}
	$var($GraphicsDeviceArray, gds, $nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getScreenDevices());
	$var($PointerInfo, retval, nullptr);
	if (areScreenDevicesIndependent(gds)) {
		$assign(retval, $new($PointerInfo, $nc(gds)->get(deviceNum), point));
	} else {
		for (int32_t i = 0; i < $nc(gds)->length; ++i) {
			$var($GraphicsConfiguration, gc, $nc(gds->get(i))->getDefaultConfiguration());
			$var($Rectangle, bounds, $nc(gc)->getBounds());
			if ($nc(bounds)->contains(point)) {
				$assign(retval, $new($PointerInfo, gds->get(i), point));
			}
		}
	}
	return retval;
}

bool MouseInfo::areScreenDevicesIndependent($GraphicsDeviceArray* gds) {
	$init(MouseInfo);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(gds)->length; ++i) {
		$var($Rectangle, bounds, $nc($($nc(gds->get(i))->getDefaultConfiguration()))->getBounds());
		if ($nc(bounds)->x != 0 || $nc(bounds)->y != 0) {
			return false;
		}
	}
	return true;
}

int32_t MouseInfo::getNumberOfButtons() {
	$init(MouseInfo);
	$useLocalCurrentObjectStackCache();
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	$var($Object, prop, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty("awt.mouse.numButtons"_s));
	if ($instanceOf($Integer, prop)) {
		return $nc(($cast($Integer, prop)))->intValue();
	}
	if (!MouseInfo::$assertionsDisabled) {
		$throwNew($AssertionError, $of("awt.mouse.numButtons is not an integer property"_s));
	}
	return 0;
}

void clinit$MouseInfo($Class* class$) {
	MouseInfo::$assertionsDisabled = !MouseInfo::class$->desiredAssertionStatus();
}

MouseInfo::MouseInfo() {
}

$Class* MouseInfo::load$($String* name, bool initialize) {
	$loadClass(MouseInfo, name, initialize, &_MouseInfo_ClassInfo_, clinit$MouseInfo, allocate$MouseInfo);
	return class$;
}

$Class* MouseInfo::class$ = nullptr;

	} // awt
} // java