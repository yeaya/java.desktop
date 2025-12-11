#include <sun/awt/windows/WRobotPeer.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WRobotPeer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WRobotPeer::*)()>(&WRobotPeer::init$))},
	{"getRGBPixel", "(II)I", nullptr, $PUBLIC},
	{"getRGBPixels", "(Ljava/awt/Rectangle;)[I", nullptr, $PUBLIC},
	{"getRGBPixels", "(IIII[I)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WRobotPeer::*)(int32_t,int32_t,int32_t,int32_t,$ints*)>(&WRobotPeer::getRGBPixels))},
	{"keyPress", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"keyRelease", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"mouseMove", "(II)V", nullptr, $PUBLIC},
	{"mouseMoveImpl", "(II)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(WRobotPeer::*)(int32_t,int32_t)>(&WRobotPeer::mouseMoveImpl))},
	{"mousePress", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"mouseRelease", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"mouseWheel", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"useAbsoluteCoordinates", "()Z", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_getRGBPixels 3
#define _METHOD_INDEX_keyPress 4
#define _METHOD_INDEX_keyRelease 5
#define _METHOD_INDEX_mouseMoveImpl 7
#define _METHOD_INDEX_mousePress 8
#define _METHOD_INDEX_mouseRelease 9
#define _METHOD_INDEX_mouseWheel 10

$ClassInfo _WRobotPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WRobotPeer",
	"java.lang.Object",
	"java.awt.peer.RobotPeer",
	nullptr,
	_WRobotPeer_MethodInfo_
};

$Object* allocate$WRobotPeer($Class* clazz) {
	return $of($alloc(WRobotPeer));
}

void WRobotPeer::init$() {
}

void WRobotPeer::mouseMoveImpl(int32_t x, int32_t y) {
	$prepareNative(WRobotPeer, mouseMoveImpl, void, int32_t x, int32_t y);
	$invokeNative(x, y);
	$finishNative();
}

void WRobotPeer::mouseMove(int32_t x, int32_t y) {
	$var($Point, point, $SunGraphicsEnvironment::toDeviceSpaceAbs(x, y));
	mouseMoveImpl($nc(point)->x, point->y);
}

void WRobotPeer::mousePress(int32_t buttons) {
	$prepareNative(WRobotPeer, mousePress, void, int32_t buttons);
	$invokeNative(buttons);
	$finishNative();
}

void WRobotPeer::mouseRelease(int32_t buttons) {
	$prepareNative(WRobotPeer, mouseRelease, void, int32_t buttons);
	$invokeNative(buttons);
	$finishNative();
}

void WRobotPeer::mouseWheel(int32_t wheelAmt) {
	$prepareNative(WRobotPeer, mouseWheel, void, int32_t wheelAmt);
	$invokeNative(wheelAmt);
	$finishNative();
}

void WRobotPeer::keyPress(int32_t keycode) {
	$prepareNative(WRobotPeer, keyPress, void, int32_t keycode);
	$invokeNative(keycode);
	$finishNative();
}

void WRobotPeer::keyRelease(int32_t keycode) {
	$prepareNative(WRobotPeer, keyRelease, void, int32_t keycode);
	$invokeNative(keycode);
	$finishNative();
}

int32_t WRobotPeer::getRGBPixel(int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	return $nc($(getRGBPixels($$new($Rectangle, x, y, 1, 1))))->get(0);
}

$ints* WRobotPeer::getRGBPixels($Rectangle* bounds) {
	$var($ints, pixelArray, $new($ints, $nc(bounds)->width * bounds->height));
	getRGBPixels(bounds->x, bounds->y, bounds->width, bounds->height, pixelArray);
	return pixelArray;
}

bool WRobotPeer::useAbsoluteCoordinates() {
	return true;
}

void WRobotPeer::getRGBPixels(int32_t x, int32_t y, int32_t width, int32_t height, $ints* pixelArray) {
	$prepareNative(WRobotPeer, getRGBPixels, void, int32_t x, int32_t y, int32_t width, int32_t height, $ints* pixelArray);
	$invokeNative(x, y, width, height, pixelArray);
	$finishNative();
}

WRobotPeer::WRobotPeer() {
}

$Class* WRobotPeer::load$($String* name, bool initialize) {
	$loadClass(WRobotPeer, name, initialize, &_WRobotPeer_ClassInfo_, allocate$WRobotPeer);
	return class$;
}

$Class* WRobotPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun