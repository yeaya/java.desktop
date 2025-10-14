#include <JRobot.h>

#include <java/awt/AWTException.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef DEFAULT_DELAY
#undef INTERNAL_DELAY

using $AWTException = ::java::awt::AWTException;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $EventQueue = ::java::awt::EventQueue;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _JRobot_FieldInfo_[] = {
	{"DEFAULT_DELAY", "I", nullptr, $PRIVATE | $STATIC, $staticField(JRobot, DEFAULT_DELAY)},
	{"INTERNAL_DELAY", "I", nullptr, $PRIVATE | $STATIC, $staticField(JRobot, INTERNAL_DELAY)},
	{"delay", "I", nullptr, $PRIVATE, $field(JRobot, delay$)},
	{"delaysEnabled", "Z", nullptr, $PRIVATE, $field(JRobot, delaysEnabled)},
	{}
};

$MethodInfo _JRobot_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PROTECTED, $method(static_cast<void(JRobot::*)(bool)>(&JRobot::init$)), "java.awt.AWTException"},
	{"centerOf", "(Ljava/awt/Rectangle;)Ljava/awt/Point;", nullptr, $PUBLIC},
	{"centerOf", "(Ljava/awt/Rectangle;Ljava/awt/Point;)Ljava/awt/Point;", nullptr, $PUBLIC},
	{"clickMouse", "(I)V", nullptr, $PUBLIC},
	{"clickMouse", "()V", nullptr, $PUBLIC},
	{"clickMouseOn", "(Ljava/awt/Component;I)V", nullptr, $PUBLIC},
	{"clickMouseOn", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"comparePixels", "(Ljava/awt/Point;Ljava/awt/Point;)Z", nullptr, $PUBLIC},
	{"comparePixels", "(IIII)Z", nullptr, $PUBLIC},
	{"compareRects", "(Ljava/awt/Rectangle;Ljava/awt/Rectangle;)Z", nullptr, $PUBLIC},
	{"convertRectToScreen", "(Ljava/awt/Rectangle;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"delay", "()V", nullptr, $PUBLIC},
	{"getDelay", "()I", nullptr, $PUBLIC},
	{"getDelaysEnabled", "()Z", nullptr, $PUBLIC},
	{"getRobot", "()LJRobot;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JRobot*(*)()>(&JRobot::getRobot))},
	{"getRobot", "(Z)LJRobot;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JRobot*(*)(bool)>(&JRobot::getRobot))},
	{"glide", "(IIII)V", nullptr, $PUBLIC},
	{"hitKey", "(I)V", nullptr, $PUBLIC},
	{"hitKey", "([I)V", nullptr, $PUBLIC | $TRANSIENT},
	{"moveMouseTo", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setDelay", "(I)V", nullptr, $PUBLIC},
	{"waitForIdle", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _JRobot_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JRobot",
	"java.awt.Robot",
	nullptr,
	_JRobot_FieldInfo_,
	_JRobot_MethodInfo_
};

$Object* allocate$JRobot($Class* clazz) {
	return $of($alloc(JRobot));
}

int32_t JRobot::DEFAULT_DELAY = 0;
int32_t JRobot::INTERNAL_DELAY = 0;

void JRobot::init$(bool enableDelays) {
	$Robot::init$();
	this->delaysEnabled = enableDelays;
	setAutoWaitForIdle(enableDelays);
	if (enableDelays) {
		setAutoDelay(JRobot::INTERNAL_DELAY);
		setDelay(JRobot::DEFAULT_DELAY);
	}
}

JRobot* JRobot::getRobot() {
	$init(JRobot);
	return getRobot(true);
}

JRobot* JRobot::getRobot(bool enableDelays) {
	$init(JRobot);
	$var(JRobot, robot, nullptr);
	try {
		$assign(robot, $new(JRobot, enableDelays));
	} catch ($AWTException&) {
		$var($AWTException, e, $catch());
		$init($System);
		$nc($System::err)->println("Coudn\'t create Robot, details below"_s);
		$throwNew($Error, static_cast<$Throwable*>(e));
	}
	return robot;
}

void JRobot::hitKey(int32_t keycode) {
	keyPress(keycode);
	keyRelease(keycode);
	delay();
}

void JRobot::hitKey($ints* keys) {
	for (int32_t i = 0; i < $nc(keys)->length; ++i) {
		keyPress(keys->get(i));
	}
	for (int32_t i = $nc(keys)->length - 1; i >= 0; --i) {
		keyRelease(keys->get(i));
	}
	delay();
}

void JRobot::moveMouseTo($Component* c) {
	$var($Point, p, $nc(c)->getLocationOnScreen());
	$var($Dimension, size, c->getSize());
	$nc(p)->x += $nc(size)->width / 2;
	p->y += size->height / 2;
	mouseMove(p->x, p->y);
	delay();
}

void JRobot::glide(int32_t x0, int32_t y0, int32_t x1, int32_t y1) {
	int32_t var$0 = $Math::abs(x1 - x0);
	float dmax = (float)$Math::max(var$0, $Math::abs(y1 - y0));
	float dx = (x1 - x0) / dmax;
	float dy = (y1 - y0) / dmax;
	mouseMove(x0, y0);
	for (int32_t i = 1; i <= dmax; ++i) {
		mouseMove($cast(int32_t, (x0 + dx * i)), $cast(int32_t, (y0 + dy * i)));
	}
	delay();
}

void JRobot::clickMouse(int32_t buttons) {
	mousePress(buttons);
	mouseRelease(buttons);
	delay();
}

void JRobot::clickMouse() {
	clickMouse($InputEvent::BUTTON1_MASK);
}

void JRobot::clickMouseOn($Component* c, int32_t buttons) {
	moveMouseTo(c);
	clickMouse(buttons);
}

void JRobot::clickMouseOn($Component* c) {
	clickMouseOn(c, $InputEvent::BUTTON1_MASK);
}

bool JRobot::getDelaysEnabled() {
	return this->delaysEnabled;
}

void JRobot::delay() {
	delay(this->delay$);
}

int32_t JRobot::getDelay() {
	return this->delay$;
}

void JRobot::setDelay(int32_t delay) {
	this->delay$ = delay;
}

void JRobot::waitForIdle() {
	$synchronized(this) {
		if (!$EventQueue::isDispatchThread()) {
			$Robot::waitForIdle();
		}
	}
}

$Point* JRobot::centerOf($Rectangle* r) {
	return $new($Point, $nc(r)->x + r->width / 2, r->y + r->height / 2);
}

$Point* JRobot::centerOf($Rectangle* r, $Point* p) {
	$nc(p)->x = $nc(r)->x + r->width / 2;
	p->y = r->y + r->height / 2;
	return p;
}

void JRobot::convertRectToScreen($Rectangle* r, $Component* c) {
	$var($Point, p, $new($Point, $nc(r)->x, r->y));
	$SwingUtilities::convertPointToScreen(p, c);
	$nc(r)->x = p->x;
	r->y = p->y;
}

bool JRobot::compareRects($Rectangle* r0, $Rectangle* r1) {
	int32_t xShift = $nc(r1)->x - $nc(r0)->x;
	int32_t yShift = r1->y - r0->y;
	for (int32_t y = r0->y; y < r0->y + r0->height; ++y) {
		for (int32_t x = r0->x; x < r0->x + r0->width; ++x) {
			if (!comparePixels(x, y, x + xShift, y + yShift)) {
				return false;
			}
		}
	}
	return true;
}

bool JRobot::comparePixels($Point* p0, $Point* p1) {
	return comparePixels($nc(p0)->x, p0->y, $nc(p1)->x, p1->y);
}

bool JRobot::comparePixels(int32_t x0, int32_t y0, int32_t x1, int32_t y1) {
	return ($nc($(getPixelColor(x0, y0)))->equals($(getPixelColor(x1, y1))));
}

void clinit$JRobot($Class* class$) {
	JRobot::DEFAULT_DELAY = 550;
	JRobot::INTERNAL_DELAY = 250;
}

JRobot::JRobot() {
}

$Class* JRobot::load$($String* name, bool initialize) {
	$loadClass(JRobot, name, initialize, &_JRobot_ClassInfo_, clinit$JRobot, allocate$JRobot);
	return class$;
}

$Class* JRobot::class$ = nullptr;