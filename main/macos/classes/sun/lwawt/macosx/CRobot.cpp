#include <sun/lwawt/macosx/CRobot.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <sun/awt/CGraphicsDevice.h>
#include <sun/lwawt/macosx/CCursorManager.h>
#include <jcpp.h>

#undef MOUSE_LOCATION_UNKNOWN

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;
using $CCursorManager = ::sun::lwawt::macosx::CCursorManager;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CRobot_FieldInfo_[] = {
	{"MOUSE_LOCATION_UNKNOWN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CRobot, MOUSE_LOCATION_UNKNOWN)},
	{"fDevice", "Lsun/awt/CGraphicsDevice;", nullptr, $PRIVATE | $FINAL, $field(CRobot, fDevice)},
	{"mouseLastX", "I", nullptr, $PRIVATE, $field(CRobot, mouseLastX)},
	{"mouseLastY", "I", nullptr, $PRIVATE, $field(CRobot, mouseLastY)},
	{"mouseButtonsState", "I", nullptr, $PRIVATE, $field(CRobot, mouseButtonsState)},
	{}
};

$MethodInfo _CRobot_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/CGraphicsDevice;)V", nullptr, 0, $method(static_cast<void(CRobot::*)($CGraphicsDevice*)>(&CRobot::init$))},
	{"checkMousePos", "()V", nullptr, $PRIVATE, $method(static_cast<void(CRobot::*)()>(&CRobot::checkMousePos))},
	{"getRGBPixel", "(II)I", nullptr, $PUBLIC},
	{"getRGBPixels", "(Ljava/awt/Rectangle;)[I", nullptr, $PUBLIC},
	{"getScreenPixels", "(Ljava/awt/Rectangle;[I)V", nullptr, $PRIVATE, $method(static_cast<void(CRobot::*)($Rectangle*,$ints*)>(&CRobot::getScreenPixels))},
	{"initRobot", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CRobot::*)()>(&CRobot::initRobot))},
	{"keyEvent", "(IZ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CRobot::*)(int32_t,bool)>(&CRobot::keyEvent))},
	{"keyPress", "(I)V", nullptr, $PUBLIC},
	{"keyRelease", "(I)V", nullptr, $PUBLIC},
	{"mouseEvent", "(IIIZZ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CRobot::*)(int32_t,int32_t,int32_t,bool,bool)>(&CRobot::mouseEvent))},
	{"mouseMove", "(II)V", nullptr, $PUBLIC},
	{"mousePress", "(I)V", nullptr, $PUBLIC},
	{"mouseRelease", "(I)V", nullptr, $PUBLIC},
	{"mouseWheel", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"nativeGetScreenPixels", "(IIIID[I)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CRobot::*)(int32_t,int32_t,int32_t,int32_t,double,$ints*)>(&CRobot::nativeGetScreenPixels))},
	{}
};

#define _METHOD_INDEX_initRobot 5
#define _METHOD_INDEX_keyEvent 6
#define _METHOD_INDEX_mouseEvent 9
#define _METHOD_INDEX_mouseWheel 13
#define _METHOD_INDEX_nativeGetScreenPixels 14

$ClassInfo _CRobot_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CRobot",
	"java.lang.Object",
	"java.awt.peer.RobotPeer",
	_CRobot_FieldInfo_,
	_CRobot_MethodInfo_
};

$Object* allocate$CRobot($Class* clazz) {
	return $of($alloc(CRobot));
}

void CRobot::init$($CGraphicsDevice* d) {
	this->mouseLastX = CRobot::MOUSE_LOCATION_UNKNOWN;
	this->mouseLastY = CRobot::MOUSE_LOCATION_UNKNOWN;
	this->mouseButtonsState = 0;
	$set(this, fDevice, d);
	initRobot();
}

void CRobot::mouseMove(int32_t x, int32_t y) {
	this->mouseLastX = x;
	this->mouseLastY = y;
	mouseEvent(this->mouseLastX, this->mouseLastY, this->mouseButtonsState, true, true);
}

void CRobot::mousePress(int32_t buttons) {
	this->mouseButtonsState |= buttons;
	checkMousePos();
	mouseEvent(this->mouseLastX, this->mouseLastY, buttons, true, false);
}

void CRobot::mouseRelease(int32_t buttons) {
	this->mouseButtonsState &= (uint32_t)~buttons;
	checkMousePos();
	mouseEvent(this->mouseLastX, this->mouseLastY, buttons, false, false);
}

void CRobot::checkMousePos() {
	$useLocalCurrentObjectStackCache();
	if (this->mouseLastX == CRobot::MOUSE_LOCATION_UNKNOWN || this->mouseLastY == CRobot::MOUSE_LOCATION_UNKNOWN) {
		$var($Rectangle, deviceBounds, $nc($($nc(this->fDevice)->getDefaultConfiguration()))->getBounds());
		$var($Point, mousePos, $nc($($CCursorManager::getInstance()))->getCursorPosition());
		if ($nc(mousePos)->x < $nc(deviceBounds)->x) {
			mousePos->x = deviceBounds->x;
		} else if (mousePos->x > deviceBounds->x + deviceBounds->width) {
			mousePos->x = deviceBounds->x + deviceBounds->width;
		}
		if ($nc(mousePos)->y < $nc(deviceBounds)->y) {
			mousePos->y = deviceBounds->y;
		} else if (mousePos->y > deviceBounds->y + deviceBounds->height) {
			mousePos->y = deviceBounds->y + deviceBounds->height;
		}
		this->mouseLastX = $nc(mousePos)->x;
		this->mouseLastY = mousePos->y;
	}
}

void CRobot::mouseWheel(int32_t wheelAmt) {
	$prepareNative(CRobot, mouseWheel, void, int32_t wheelAmt);
	$invokeNative(wheelAmt);
	$finishNative();
}

void CRobot::keyPress(int32_t keycode) {
	keyEvent(keycode, true);
}

void CRobot::keyRelease(int32_t keycode) {
	keyEvent(keycode, false);
}

int32_t CRobot::getRGBPixel(int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($ints, c, $new($ints, 1));
	double scale = (double)$nc(this->fDevice)->getScaleFactor();
	getScreenPixels($$new($Rectangle, x, y, $cast(int32_t, scale), $cast(int32_t, scale)), c);
	return c->get(0);
}

$ints* CRobot::getRGBPixels($Rectangle* bounds) {
	$var($ints, c, $new($ints, $nc(bounds)->width * bounds->height));
	getScreenPixels(bounds, c);
	return c;
}

void CRobot::initRobot() {
	$prepareNative(CRobot, initRobot, void);
	$invokeNative();
	$finishNative();
}

void CRobot::mouseEvent(int32_t lastX, int32_t lastY, int32_t buttonsState, bool isButtonsDownState, bool isMouseMove) {
	$prepareNative(CRobot, mouseEvent, void, int32_t lastX, int32_t lastY, int32_t buttonsState, bool isButtonsDownState, bool isMouseMove);
	$invokeNative(lastX, lastY, buttonsState, isButtonsDownState, isMouseMove);
	$finishNative();
}

void CRobot::keyEvent(int32_t javaKeyCode, bool keydown) {
	$prepareNative(CRobot, keyEvent, void, int32_t javaKeyCode, bool keydown);
	$invokeNative(javaKeyCode, keydown);
	$finishNative();
}

void CRobot::getScreenPixels($Rectangle* r, $ints* pixels) {
	double scale = (double)$nc(this->fDevice)->getScaleFactor();
	nativeGetScreenPixels($nc(r)->x, r->y, r->width, r->height, scale, pixels);
}

void CRobot::nativeGetScreenPixels(int32_t x, int32_t y, int32_t width, int32_t height, double scale, $ints* pixels) {
	$prepareNative(CRobot, nativeGetScreenPixels, void, int32_t x, int32_t y, int32_t width, int32_t height, double scale, $ints* pixels);
	$invokeNative(x, y, width, height, scale, pixels);
	$finishNative();
}

CRobot::CRobot() {
}

$Class* CRobot::load$($String* name, bool initialize) {
	$loadClass(CRobot, name, initialize, &_CRobot_ClassInfo_, allocate$CRobot);
	return class$;
}

$Class* CRobot::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun