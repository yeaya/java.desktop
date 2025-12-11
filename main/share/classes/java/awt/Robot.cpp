#include <java/awt/Robot.h>

#include <java/awt/AWTException.h>
#include <java/awt/AWTPermission.h>
#include <java/awt/Color.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/awt/image/BaseMultiResolutionImage.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/MultiResolutionImage.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/peer/RobotPeer.h>
#include <java/lang/IllegalThreadStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/Hashtable.h>
#include <sun/awt/AWTPermissions.h>
#include <sun/awt/ComponentFactory.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef BUTTON1_MASK
#undef BUTTON2_DOWN_MASK
#undef BUTTON2_MASK
#undef BUTTON3_DOWN_MASK
#undef BUTTON3_MASK
#undef CREATE_ROBOT_PERMISSION
#undef KEY_ANTIALIASING
#undef KEY_INTERPOLATION
#undef KEY_RENDERING
#undef LEGAL_BUTTON_MASK
#undef MAX_DELAY
#undef READ_DISPLAY_PIXELS_PERMISSION
#undef TYPE_RASTER_SCREEN
#undef VALUE_ANTIALIAS_ON
#undef VALUE_INTERPOLATION_BILINEAR
#undef VALUE_RENDER_QUALITY
#undef VK_UNDEFINED

using $ImageArray = $Array<::java::awt::Image>;
using $BufferedImageArray = $Array<::java::awt::image::BufferedImage>;
using $AWTException = ::java::awt::AWTException;
using $Color = ::java::awt::Color;
using $EventQueue = ::java::awt::EventQueue;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $Toolkit = ::java::awt::Toolkit;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $AbstractMultiResolutionImage = ::java::awt::image::AbstractMultiResolutionImage;
using $BaseMultiResolutionImage = ::java::awt::image::BaseMultiResolutionImage;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $MultiResolutionImage = ::java::awt::image::MultiResolutionImage;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $RobotPeer = ::java::awt::peer::RobotPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalThreadStateException = ::java::lang::IllegalThreadStateException;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Hashtable = ::java::util::Hashtable;
using $AWTPermissions = ::sun::awt::AWTPermissions;
using $ComponentFactory = ::sun::awt::ComponentFactory;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;

namespace java {
	namespace awt {

$FieldInfo _Robot_FieldInfo_[] = {
	{"MAX_DELAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Robot, MAX_DELAY)},
	{"peer", "Ljava/awt/peer/RobotPeer;", nullptr, $PRIVATE, $field(Robot, peer)},
	{"isAutoWaitForIdle", "Z", nullptr, $PRIVATE, $field(Robot, isAutoWaitForIdle$)},
	{"autoDelay", "I", nullptr, $PRIVATE, $field(Robot, autoDelay$)},
	{"LEGAL_BUTTON_MASK", "I", nullptr, $PRIVATE | $STATIC, $staticField(Robot, LEGAL_BUTTON_MASK)},
	{"screenCapCM", "Ljava/awt/image/DirectColorModel;", nullptr, $PRIVATE, $field(Robot, screenCapCM)},
	{}
};

$MethodInfo _Robot_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Robot::*)()>(&Robot::init$)), "java.awt.AWTException"},
	{"<init>", "(Ljava/awt/GraphicsDevice;)V", nullptr, $PUBLIC, $method(static_cast<void(Robot::*)($GraphicsDevice*)>(&Robot::init$)), "java.awt.AWTException"},
	{"afterEvent", "()V", nullptr, $PRIVATE, $method(static_cast<void(Robot::*)()>(&Robot::afterEvent))},
	{"autoDelay", "()V", nullptr, $PRIVATE, $method(static_cast<void(Robot::*)()>(&Robot::autoDelay))},
	{"autoWaitForIdle", "()V", nullptr, $PRIVATE, $method(static_cast<void(Robot::*)()>(&Robot::autoWaitForIdle))},
	{"checkButtonsArgument", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&Robot::checkButtonsArgument))},
	{"checkDelayArgument", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&Robot::checkDelayArgument))},
	{"checkHeadless", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Robot::checkHeadless)), "java.awt.AWTException"},
	{"checkIsScreenDevice", "(Ljava/awt/GraphicsDevice;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($GraphicsDevice*)>(&Robot::checkIsScreenDevice))},
	{"checkKeycodeArgument", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&Robot::checkKeycodeArgument))},
	{"checkNotDispatchThread", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Robot::checkNotDispatchThread))},
	{"checkRobotAllowed", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Robot::checkRobotAllowed))},
	{"checkScreenCaptureAllowed", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Robot::checkScreenCaptureAllowed))},
	{"checkValidRect", "(Ljava/awt/Rectangle;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Rectangle*)>(&Robot::checkValidRect))},
	{"createCompatibleImage", "(Ljava/awt/Rectangle;Z)[Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$BufferedImageArray*(Robot::*)($Rectangle*,bool)>(&Robot::createCompatibleImage))},
	{"createMultiResolutionScreenCapture", "(Ljava/awt/Rectangle;)Ljava/awt/image/MultiResolutionImage;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"createScreenCapture", "(Ljava/awt/Rectangle;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"delay", "(I)V", nullptr, $PUBLIC},
	{"getAutoDelay", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getPixelColor", "(II)Ljava/awt/Color;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"init", "(Ljava/awt/GraphicsDevice;)V", nullptr, $PRIVATE, $method(static_cast<void(Robot::*)($GraphicsDevice*)>(&Robot::init)), "java.awt.AWTException"},
	{"initLegalButtonMask", "()V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&Robot::initLegalButtonMask))},
	{"isAutoWaitForIdle", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"keyPress", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"keyRelease", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"mouseMove", "(II)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"mousePress", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"mouseRelease", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"mouseWheel", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setAutoDelay", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setAutoWaitForIdle", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"waitForIdle", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _Robot_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Robot",
	"java.lang.Object",
	nullptr,
	_Robot_FieldInfo_,
	_Robot_MethodInfo_
};

$Object* allocate$Robot($Class* clazz) {
	return $of($alloc(Robot));
}

int32_t Robot::LEGAL_BUTTON_MASK = 0;

void Robot::init$() {
	$useLocalCurrentObjectStackCache();
	this->isAutoWaitForIdle$ = false;
	this->autoDelay$ = 0;
	$set(this, screenCapCM, nullptr);
	checkHeadless();
	init($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()));
}

void Robot::init$($GraphicsDevice* screen) {
	this->isAutoWaitForIdle$ = false;
	this->autoDelay$ = 0;
	$set(this, screenCapCM, nullptr);
	checkHeadless();
	checkIsScreenDevice(screen);
	init(screen);
}

void Robot::init($GraphicsDevice* screen) {
	checkRobotAllowed();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	if ($instanceOf($ComponentFactory, toolkit)) {
		$set(this, peer, $nc(($cast($ComponentFactory, toolkit)))->createRobot(screen));
	}
	initLegalButtonMask();
}

void Robot::initLegalButtonMask() {
	$load(Robot);
	$synchronized(class$) {
		$init(Robot);
		$useLocalCurrentObjectStackCache();
		if (Robot::LEGAL_BUTTON_MASK != 0) {
			return;
		}
		int32_t tmpMask = 0;
		if ($nc($($Toolkit::getDefaultToolkit()))->areExtraMouseButtonsEnabled()) {
			if ($instanceOf($SunToolkit, $($Toolkit::getDefaultToolkit()))) {
				int32_t buttonsNumber = $nc((($cast($SunToolkit, $($Toolkit::getDefaultToolkit())))))->getNumberOfButtons();
				for (int32_t i = 0; i < buttonsNumber; ++i) {
					tmpMask |= $InputEvent::getMaskForButton(i + 1);
				}
			}
		}
		tmpMask |= (((($InputEvent::BUTTON1_MASK | $InputEvent::BUTTON2_MASK) | $InputEvent::BUTTON3_MASK) | $InputEvent::BUTTON1_DOWN_MASK) | $InputEvent::BUTTON2_DOWN_MASK) | $InputEvent::BUTTON3_DOWN_MASK;
		Robot::LEGAL_BUTTON_MASK = tmpMask;
	}
}

void Robot::checkRobotAllowed() {
	$init(Robot);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		$init($AWTPermissions);
		security->checkPermission($AWTPermissions::CREATE_ROBOT_PERMISSION);
	}
}

void Robot::checkHeadless() {
	$init(Robot);
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($AWTException, "headless environment"_s);
	}
}

void Robot::checkIsScreenDevice($GraphicsDevice* device) {
	$init(Robot);
	if (device == nullptr || $nc(device)->getType() != $GraphicsDevice::TYPE_RASTER_SCREEN) {
		$throwNew($IllegalArgumentException, "not a valid screen device"_s);
	}
}

void Robot::mouseMove(int32_t x, int32_t y) {
	$synchronized(this) {
		$nc(this->peer)->mouseMove(x, y);
		afterEvent();
	}
}

void Robot::mousePress(int32_t buttons) {
	$synchronized(this) {
		checkButtonsArgument(buttons);
		$nc(this->peer)->mousePress(buttons);
		afterEvent();
	}
}

void Robot::mouseRelease(int32_t buttons) {
	$synchronized(this) {
		checkButtonsArgument(buttons);
		$nc(this->peer)->mouseRelease(buttons);
		afterEvent();
	}
}

void Robot::checkButtonsArgument(int32_t buttons) {
	$init(Robot);
	if ((buttons | Robot::LEGAL_BUTTON_MASK) != Robot::LEGAL_BUTTON_MASK) {
		$throwNew($IllegalArgumentException, "Invalid combination of button flags"_s);
	}
}

void Robot::mouseWheel(int32_t wheelAmt) {
	$synchronized(this) {
		$nc(this->peer)->mouseWheel(wheelAmt);
		afterEvent();
	}
}

void Robot::keyPress(int32_t keycode) {
	$synchronized(this) {
		checkKeycodeArgument(keycode);
		$nc(this->peer)->keyPress(keycode);
		afterEvent();
	}
}

void Robot::keyRelease(int32_t keycode) {
	$synchronized(this) {
		checkKeycodeArgument(keycode);
		$nc(this->peer)->keyRelease(keycode);
		afterEvent();
	}
}

void Robot::checkKeycodeArgument(int32_t keycode) {
	$init(Robot);
	if (keycode == $KeyEvent::VK_UNDEFINED) {
		$throwNew($IllegalArgumentException, "Invalid key code"_s);
	}
}

$Color* Robot::getPixelColor(int32_t x, int32_t y) {
	$synchronized(this) {
		checkScreenCaptureAllowed();
		$var($Point, point, $nc(this->peer)->useAbsoluteCoordinates() ? $SunGraphicsEnvironment::toDeviceSpaceAbs(x, y) : $SunGraphicsEnvironment::toDeviceSpace(x, y));
		return $new($Color, $nc(this->peer)->getRGBPixel($nc(point)->x, point->y));
	}
}

$BufferedImage* Robot::createScreenCapture($Rectangle* screenRect) {
	$synchronized(this) {
		return $nc($(createCompatibleImage(screenRect, false)))->get(0);
	}
}

$MultiResolutionImage* Robot::createMultiResolutionScreenCapture($Rectangle* screenRect) {
	$synchronized(this) {
		return $new($BaseMultiResolutionImage, $($fcast($ImageArray, createCompatibleImage(screenRect, true))));
	}
}

$BufferedImageArray* Robot::createCompatibleImage($Rectangle* screenRect, bool isHiDPI) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		checkScreenCaptureAllowed();
		checkValidRect(screenRect);
		$var($BufferedImage, lowResolutionImage, nullptr);
		$var($BufferedImage, highResolutionImage, nullptr);
		$var($DataBufferInt, buffer, nullptr);
		$var($WritableRaster, raster, nullptr);
		$var($BufferedImageArray, imageArray, nullptr);
		if (this->screenCapCM == nullptr) {
			$set(this, screenCapCM, $new($DirectColorModel, 24, 0x00FF0000, 0x0000FF00, 255));
		}
		$var($ints, bandmasks, $new($ints, 3));
		bandmasks->set(0, $nc(this->screenCapCM)->getRedMask());
		bandmasks->set(1, $nc(this->screenCapCM)->getGreenMask());
		bandmasks->set(2, $nc(this->screenCapCM)->getBlueMask());
		$nc($($Toolkit::getDefaultToolkit()))->sync();
		$var($GraphicsConfiguration, gc, $nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration());
		$var($GraphicsConfiguration, var$0, gc);
		double var$1 = $nc(screenRect)->getCenterX();
		$assign(gc, $SunGraphicsEnvironment::getGraphicsConfigurationAtPoint(var$0, var$1, screenRect->getCenterY()));
		$var($AffineTransform, tx, $nc(gc)->getDefaultTransform());
		double uiScaleX = $nc(tx)->getScaleX();
		double uiScaleY = tx->getScaleY();
		$var($ints, pixels, nullptr);
		if (uiScaleX == 1 && uiScaleY == 1) {
			$assign(pixels, $nc(this->peer)->getRGBPixels(screenRect));
			$assign(buffer, $new($DataBufferInt, pixels, $nc(pixels)->length));
			bandmasks->set(0, $nc(this->screenCapCM)->getRedMask());
			bandmasks->set(1, $nc(this->screenCapCM)->getGreenMask());
			bandmasks->set(2, $nc(this->screenCapCM)->getBlueMask());
			$assign(raster, $Raster::createPackedRaster(static_cast<$DataBuffer*>(buffer), $nc(screenRect)->width, screenRect->height, screenRect->width, bandmasks, ($Point*)nullptr));
			$SunWritableRaster::makeTrackable(buffer);
			$assign(highResolutionImage, $new($BufferedImage, static_cast<$ColorModel*>(this->screenCapCM), raster, false, ($Hashtable*)nullptr));
			$assign(imageArray, $new($BufferedImageArray, 1));
			imageArray->set(0, highResolutionImage);
		} else {
			$var($Rectangle, scaledRect, nullptr);
			if ($nc(this->peer)->useAbsoluteCoordinates()) {
				$assign(scaledRect, $SunGraphicsEnvironment::toDeviceSpaceAbs(gc, $nc(screenRect)->x, screenRect->y, screenRect->width, screenRect->height));
			} else {
				$assign(scaledRect, $SunGraphicsEnvironment::toDeviceSpace(gc, $nc(screenRect)->x, screenRect->y, screenRect->width, screenRect->height));
			}
			$assign(pixels, $nc(this->peer)->getRGBPixels(scaledRect));
			$assign(buffer, $new($DataBufferInt, pixels, $nc(pixels)->length));
			$assign(raster, $Raster::createPackedRaster(static_cast<$DataBuffer*>(buffer), $nc(scaledRect)->width, scaledRect->height, scaledRect->width, bandmasks, ($Point*)nullptr));
			$SunWritableRaster::makeTrackable(buffer);
			$assign(highResolutionImage, $new($BufferedImage, static_cast<$ColorModel*>(this->screenCapCM), raster, false, ($Hashtable*)nullptr));
			$assign(lowResolutionImage, $new($BufferedImage, $nc(screenRect)->width, screenRect->height, highResolutionImage->getType()));
			$var($Graphics2D, g, lowResolutionImage->createGraphics());
			$init($RenderingHints);
			$nc(g)->setRenderingHint($RenderingHints::KEY_INTERPOLATION, $RenderingHints::VALUE_INTERPOLATION_BILINEAR);
			g->setRenderingHint($RenderingHints::KEY_RENDERING, $RenderingHints::VALUE_RENDER_QUALITY);
			g->setRenderingHint($RenderingHints::KEY_ANTIALIASING, $RenderingHints::VALUE_ANTIALIAS_ON);
			g->drawImage(highResolutionImage, 0, 0, $nc(screenRect)->width, screenRect->height, 0, 0, $nc(scaledRect)->width, scaledRect->height, nullptr);
			g->dispose();
			if (!isHiDPI) {
				$assign(imageArray, $new($BufferedImageArray, 1));
				imageArray->set(0, lowResolutionImage);
			} else {
				$assign(imageArray, $new($BufferedImageArray, 2));
				imageArray->set(0, lowResolutionImage);
				imageArray->set(1, highResolutionImage);
			}
		}
		return imageArray;
	}
}

void Robot::checkValidRect($Rectangle* rect) {
	$init(Robot);
	if ($nc(rect)->width <= 0 || $nc(rect)->height <= 0) {
		$throwNew($IllegalArgumentException, "Rectangle width and height must be > 0"_s);
	}
}

void Robot::checkScreenCaptureAllowed() {
	$init(Robot);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		$init($AWTPermissions);
		security->checkPermission($AWTPermissions::READ_DISPLAY_PIXELS_PERMISSION);
	}
}

void Robot::afterEvent() {
	autoWaitForIdle();
	autoDelay();
}

bool Robot::isAutoWaitForIdle() {
	$synchronized(this) {
		return this->isAutoWaitForIdle$;
	}
}

void Robot::setAutoWaitForIdle(bool isOn) {
	$synchronized(this) {
		this->isAutoWaitForIdle$ = isOn;
	}
}

void Robot::autoWaitForIdle() {
	if (this->isAutoWaitForIdle$) {
		waitForIdle();
	}
}

int32_t Robot::getAutoDelay() {
	$synchronized(this) {
		return this->autoDelay$;
	}
}

void Robot::setAutoDelay(int32_t ms) {
	$synchronized(this) {
		checkDelayArgument(ms);
		this->autoDelay$ = ms;
	}
}

void Robot::autoDelay() {
	delay(this->autoDelay$);
}

void Robot::delay(int32_t ms) {
	checkDelayArgument(ms);
	$var($Thread, thread, $Thread::currentThread());
	if (!thread->isInterrupted()) {
		try {
			$Thread::sleep(ms);
		} catch ($InterruptedException& ignored) {
			thread->interrupt();
		}
	}
}

void Robot::checkDelayArgument(int32_t ms) {
	$init(Robot);
	if (ms < 0 || ms > Robot::MAX_DELAY) {
		$throwNew($IllegalArgumentException, "Delay must be to 0 to 60,000ms"_s);
	}
}

void Robot::waitForIdle() {
	$synchronized(this) {
		checkNotDispatchThread();
		$SunToolkit::flushPendingEvents();
		$nc(($cast($SunToolkit, $($Toolkit::getDefaultToolkit()))))->realSync();
	}
}

void Robot::checkNotDispatchThread() {
	$init(Robot);
	if ($EventQueue::isDispatchThread()) {
		$throwNew($IllegalThreadStateException, "Cannot call method from the event dispatcher thread"_s);
	}
}

$String* Robot::toString() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($String, var$0, $$str({"autoDelay = "_s, $$str(getAutoDelay()), ", autoWaitForIdle = "_s}));
		$var($String, params, $concat(var$0, $$str(isAutoWaitForIdle())));
		return $str({$($of(this)->getClass()->getName()), "[ "_s, params, " ]"_s});
	}
}

void clinit$Robot($Class* class$) {
	Robot::LEGAL_BUTTON_MASK = 0;
}

Robot::Robot() {
}

$Class* Robot::load$($String* name, bool initialize) {
	$loadClass(Robot, name, initialize, &_Robot_ClassInfo_, clinit$Robot, allocate$Robot);
	return class$;
}

$Class* Robot::class$ = nullptr;

	} // awt
} // java