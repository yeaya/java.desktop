#include <sun/awt/X11/XRobotPeer.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/AWTAccessor$InputEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/UNIXToolkit.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/awt/X11GraphicsDevice.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $RobotPeer = ::java::awt::peer::RobotPeer;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$InputEventAccessor = ::sun::awt::AWTAccessor$InputEventAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $UNIXToolkit = ::sun::awt::UNIXToolkit;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $X11GraphicsDevice = ::sun::awt::X11GraphicsDevice;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XRobotPeer_FieldInfo_[] = {
	{"tryGtk", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XRobotPeer, tryGtk)},
	{"useGtk", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(XRobotPeer, useGtk)},
	{"xgc", "Lsun/awt/X11GraphicsConfig;", nullptr, $PRIVATE | $FINAL, $field(XRobotPeer, xgc)},
	{}
};

$MethodInfo _XRobotPeer_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11GraphicsDevice;)V", nullptr, 0, $method(static_cast<void(XRobotPeer::*)($X11GraphicsDevice*)>(&XRobotPeer::init$))},
	{"getRGBPixel", "(II)I", nullptr, $PUBLIC},
	{"getRGBPixels", "(Ljava/awt/Rectangle;)[I", nullptr, $PUBLIC},
	{"getRGBPixelsImpl", "(Lsun/awt/X11GraphicsConfig;IIII[IZ)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $method(static_cast<void(*)($X11GraphicsConfig*,int32_t,int32_t,int32_t,int32_t,$ints*,bool)>(&XRobotPeer::getRGBPixelsImpl))},
	{"keyPress", "(I)V", nullptr, $PUBLIC},
	{"keyPressImpl", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $method(static_cast<void(*)(int32_t)>(&XRobotPeer::keyPressImpl))},
	{"keyRelease", "(I)V", nullptr, $PUBLIC},
	{"keyReleaseImpl", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $method(static_cast<void(*)(int32_t)>(&XRobotPeer::keyReleaseImpl))},
	{"loadNativeLibraries", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&XRobotPeer::loadNativeLibraries))},
	{"mouseMove", "(II)V", nullptr, $PUBLIC},
	{"mouseMoveImpl", "(Lsun/awt/X11GraphicsConfig;II)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $method(static_cast<void(*)($X11GraphicsConfig*,int32_t,int32_t)>(&XRobotPeer::mouseMoveImpl))},
	{"mousePress", "(I)V", nullptr, $PUBLIC},
	{"mousePressImpl", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $method(static_cast<void(*)(int32_t)>(&XRobotPeer::mousePressImpl))},
	{"mouseRelease", "(I)V", nullptr, $PUBLIC},
	{"mouseReleaseImpl", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $method(static_cast<void(*)(int32_t)>(&XRobotPeer::mouseReleaseImpl))},
	{"mouseWheel", "(I)V", nullptr, $PUBLIC},
	{"mouseWheelImpl", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $method(static_cast<void(*)(int32_t)>(&XRobotPeer::mouseWheelImpl))},
	{"setup", "(I[I)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $method(static_cast<void(*)(int32_t,$ints*)>(&XRobotPeer::setup))},
	{}
};

#define _METHOD_INDEX_getRGBPixelsImpl 3
#define _METHOD_INDEX_keyPressImpl 5
#define _METHOD_INDEX_keyReleaseImpl 7
#define _METHOD_INDEX_loadNativeLibraries 8
#define _METHOD_INDEX_mouseMoveImpl 10
#define _METHOD_INDEX_mousePressImpl 12
#define _METHOD_INDEX_mouseReleaseImpl 14
#define _METHOD_INDEX_mouseWheelImpl 16
#define _METHOD_INDEX_setup 17

$ClassInfo _XRobotPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XRobotPeer",
	"java.lang.Object",
	"java.awt.peer.RobotPeer",
	_XRobotPeer_FieldInfo_,
	_XRobotPeer_MethodInfo_
};

$Object* allocate$XRobotPeer($Class* clazz) {
	return $of($alloc(XRobotPeer));
}

bool XRobotPeer::tryGtk = false;
$volatile(bool) XRobotPeer::useGtk = false;

void XRobotPeer::init$($X11GraphicsDevice* gd) {
	$useLocalCurrentObjectStackCache();
	$set(this, xgc, $cast($X11GraphicsConfig, $nc(gd)->getDefaultConfiguration()));
	$var($SunToolkit, tk, $cast($SunToolkit, $Toolkit::getDefaultToolkit()));
	int32_t var$0 = $nc(tk)->getNumberOfButtons();
	setup(var$0, $($nc($($AWTAccessor::getInputEventAccessor()))->getButtonDownMasks()));
	bool isGtkSupported = false;
	if (XRobotPeer::tryGtk) {
		if ($instanceOf($UNIXToolkit, tk) && $nc(($cast($UNIXToolkit, tk)))->loadGTK()) {
			isGtkSupported = true;
		}
	}
	XRobotPeer::useGtk = (XRobotPeer::tryGtk && isGtkSupported);
}

void XRobotPeer::mouseMove(int32_t x, int32_t y) {
	$var($X11GraphicsConfig, var$0, this->xgc);
	int32_t var$1 = $nc(this->xgc)->scaleUp(x);
	mouseMoveImpl(var$0, var$1, $nc(this->xgc)->scaleUp(y));
}

void XRobotPeer::mousePress(int32_t buttons) {
	mousePressImpl(buttons);
}

void XRobotPeer::mouseRelease(int32_t buttons) {
	mouseReleaseImpl(buttons);
}

void XRobotPeer::mouseWheel(int32_t wheelAmt) {
	mouseWheelImpl(wheelAmt);
}

void XRobotPeer::keyPress(int32_t keycode) {
	keyPressImpl(keycode);
}

void XRobotPeer::keyRelease(int32_t keycode) {
	keyReleaseImpl(keycode);
}

int32_t XRobotPeer::getRGBPixel(int32_t x, int32_t y) {
	$var($ints, pixelArray, $new($ints, 1));
	getRGBPixelsImpl(this->xgc, x, y, 1, 1, pixelArray, XRobotPeer::useGtk);
	return pixelArray->get(0);
}

$ints* XRobotPeer::getRGBPixels($Rectangle* bounds) {
	$var($ints, pixelArray, $new($ints, $nc(bounds)->width * bounds->height));
	getRGBPixelsImpl(this->xgc, bounds->x, bounds->y, bounds->width, bounds->height, pixelArray, XRobotPeer::useGtk);
	return pixelArray;
}

void XRobotPeer::setup(int32_t numberOfButtons, $ints* buttonDownMasks) {
	$init(XRobotPeer);
	$prepareNativeStatic(XRobotPeer, setup, void, int32_t numberOfButtons, $ints* buttonDownMasks);
	$invokeNativeStatic(XRobotPeer, setup, numberOfButtons, buttonDownMasks);
	$finishNativeStatic();
}

void XRobotPeer::loadNativeLibraries() {
	$init(XRobotPeer);
	$prepareNativeStatic(XRobotPeer, loadNativeLibraries, void);
	$invokeNativeStatic(XRobotPeer, loadNativeLibraries);
	$finishNativeStatic();
}

void XRobotPeer::mouseMoveImpl($X11GraphicsConfig* xgc, int32_t x, int32_t y) {
	$init(XRobotPeer);
	$prepareNativeStatic(XRobotPeer, mouseMoveImpl, void, $X11GraphicsConfig* xgc, int32_t x, int32_t y);
	$invokeNativeStatic(XRobotPeer, mouseMoveImpl, xgc, x, y);
	$finishNativeStatic();
}

void XRobotPeer::mousePressImpl(int32_t buttons) {
	$init(XRobotPeer);
	$prepareNativeStatic(XRobotPeer, mousePressImpl, void, int32_t buttons);
	$invokeNativeStatic(XRobotPeer, mousePressImpl, buttons);
	$finishNativeStatic();
}

void XRobotPeer::mouseReleaseImpl(int32_t buttons) {
	$init(XRobotPeer);
	$prepareNativeStatic(XRobotPeer, mouseReleaseImpl, void, int32_t buttons);
	$invokeNativeStatic(XRobotPeer, mouseReleaseImpl, buttons);
	$finishNativeStatic();
}

void XRobotPeer::mouseWheelImpl(int32_t wheelAmt) {
	$init(XRobotPeer);
	$prepareNativeStatic(XRobotPeer, mouseWheelImpl, void, int32_t wheelAmt);
	$invokeNativeStatic(XRobotPeer, mouseWheelImpl, wheelAmt);
	$finishNativeStatic();
}

void XRobotPeer::keyPressImpl(int32_t keycode) {
	$init(XRobotPeer);
	$prepareNativeStatic(XRobotPeer, keyPressImpl, void, int32_t keycode);
	$invokeNativeStatic(XRobotPeer, keyPressImpl, keycode);
	$finishNativeStatic();
}

void XRobotPeer::keyReleaseImpl(int32_t keycode) {
	$init(XRobotPeer);
	$prepareNativeStatic(XRobotPeer, keyReleaseImpl, void, int32_t keycode);
	$invokeNativeStatic(XRobotPeer, keyReleaseImpl, keycode);
	$finishNativeStatic();
}

void XRobotPeer::getRGBPixelsImpl($X11GraphicsConfig* xgc, int32_t x, int32_t y, int32_t width, int32_t height, $ints* pixelArray, bool isGtkSupported) {
	$init(XRobotPeer);
	$prepareNativeStatic(XRobotPeer, getRGBPixelsImpl, void, $X11GraphicsConfig* xgc, int32_t x, int32_t y, int32_t width, int32_t height, $ints* pixelArray, bool isGtkSupported);
	$invokeNativeStatic(XRobotPeer, getRGBPixelsImpl, xgc, x, y, width, height, pixelArray, isGtkSupported);
	$finishNativeStatic();
}

void clinit$XRobotPeer($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		XRobotPeer::loadNativeLibraries();
		XRobotPeer::tryGtk = $Boolean::parseBoolean($cast($String, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "awt.robot.gtk"_s, "true"_s))))));
	}
}

XRobotPeer::XRobotPeer() {
}

$Class* XRobotPeer::load$($String* name, bool initialize) {
	$loadClass(XRobotPeer, name, initialize, &_XRobotPeer_ClassInfo_, clinit$XRobotPeer, allocate$XRobotPeer);
	return class$;
}

$Class* XRobotPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun