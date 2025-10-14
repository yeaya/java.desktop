#include <bug7146377.h>

#include <bug7146377$1.h>
#include <bug7146377$2.h>
#include <bug7146377$3.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef BUTTON2_MASK
#undef BUTTON3_MASK
#undef MOUSE_CLICKED
#undef MOUSE_DRAGGED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef MOUSE_MOVED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef MOUSE_WHEEL

using $bug7146377$1 = ::bug7146377$1;
using $bug7146377$2 = ::bug7146377$2;
using $bug7146377$3 = ::bug7146377$3;
using $AWTEvent = ::java::awt::AWTEvent;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug7146377_FieldInfo_[] = {
	{"label", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $staticField(bug7146377, label)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug7146377, frame)},
	{"point", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug7146377, point)},
	{}
};

$MethodInfo _bug7146377_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7146377::*)()>(&bug7146377::init$))},
	{"check", "(Ljava/lang/String;ZZLjava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,bool,bool,$String*)>(&bug7146377::check))},
	{"checkEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MouseEvent*)>(&bug7146377::checkEvent))},
	{"eventToString", "(Ljava/awt/event/MouseEvent;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($MouseEvent*)>(&bug7146377::eventToString))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7146377::main)), "java.lang.Exception"},
	{"oldIsLeftMouseButton", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($MouseEvent*)>(&bug7146377::oldIsLeftMouseButton))},
	{"oldIsMiddleMouseButton", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($MouseEvent*)>(&bug7146377::oldIsMiddleMouseButton))},
	{"oldIsRightMouseButton", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($MouseEvent*)>(&bug7146377::oldIsRightMouseButton))},
	{}
};

$InnerClassInfo _bug7146377_InnerClassesInfo_[] = {
	{"bug7146377$3", nullptr, nullptr, 0},
	{"bug7146377$2", nullptr, nullptr, 0},
	{"bug7146377$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7146377_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7146377",
	"java.lang.Object",
	nullptr,
	_bug7146377_FieldInfo_,
	_bug7146377_MethodInfo_,
	nullptr,
	nullptr,
	_bug7146377_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7146377$3,bug7146377$2,bug7146377$1,bug7146377$1$1"
};

$Object* allocate$bug7146377($Class* clazz) {
	return $of($alloc(bug7146377));
}

$JLabel* bug7146377::label = nullptr;
$JFrame* bug7146377::frame = nullptr;
$volatile($Point*) bug7146377::point = nullptr;

void bug7146377::init$() {
}

void bug7146377::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug7146377$1));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	$Thread::sleep(1000);
	$SwingUtilities::invokeAndWait($$new($bug7146377$2));
	robot->setAutoDelay(200);
	for (int32_t i = 0; i < 20; ++i) {
		$init(bug7146377);
		robot->mouseMove($nc(bug7146377::point)->x + i, $nc(bug7146377::point)->y + i);
	}
	{
		$var($ints, arr$, $new($ints, {
			$InputEvent::BUTTON1_MASK,
			$InputEvent::BUTTON2_MASK,
			$InputEvent::BUTTON3_MASK
		}));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t button = arr$->get(i$);
			{
				$init(bug7146377);
				robot->mouseMove($nc(bug7146377::point)->x, $nc(bug7146377::point)->y);
				robot->mousePress(button);
				for (int32_t i = 0; i < 20; ++i) {
					robot->mouseMove($nc(bug7146377::point)->x + i, $nc(bug7146377::point)->y + i);
				}
				robot->mouseRelease(button);
			}
		}
	}
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug7146377$3));
	$init($System);
	$nc($System::out)->println("Test passed"_s);
}

void bug7146377::checkEvent($MouseEvent* e) {
	$var($String, eventAsStr, eventToString(e));
	$init($System);
	$nc($System::out)->println($$str({"Checking event "_s, eventAsStr}));
	$var($String, var$0, "isLeftMouseButton"_s);
	bool var$1 = $SwingUtilities::isLeftMouseButton(e);
	check(var$0, var$1, oldIsLeftMouseButton(e), eventAsStr);
	$var($String, var$2, "isRightMouseButton"_s);
	bool var$3 = $SwingUtilities::isRightMouseButton(e);
	check(var$2, var$3, oldIsRightMouseButton(e), eventAsStr);
	$var($String, var$4, "isMiddleMouseButton"_s);
	bool var$5 = $SwingUtilities::isMiddleMouseButton(e);
	check(var$4, var$5, oldIsMiddleMouseButton(e), eventAsStr);
}

void bug7146377::check($String* methodName, bool newValue, bool oldValue, $String* eventAsStr) {
	if (newValue != oldValue) {
		$throwNew($RuntimeException, $$str({"Regression on "_s, methodName, ", newValue = "_s, $$str(newValue), ", oldValue = "_s, $$str(oldValue), ", e = "_s, eventAsStr}));
	}
}

$String* bug7146377::eventToString($MouseEvent* e) {
	$var($StringBuilder, result, $new($StringBuilder));
	switch ($nc(e)->getID()) {
	case $MouseEvent::MOUSE_PRESSED:
		{
			result->append("MOUSE_PRESSED"_s);
			break;
		}
	case $MouseEvent::MOUSE_RELEASED:
		{
			result->append("MOUSE_RELEASED"_s);
			break;
		}
	case $MouseEvent::MOUSE_CLICKED:
		{
			result->append("MOUSE_CLICKED"_s);
			break;
		}
	case $MouseEvent::MOUSE_ENTERED:
		{
			result->append("MOUSE_ENTERED"_s);
			break;
		}
	case $MouseEvent::MOUSE_EXITED:
		{
			result->append("MOUSE_EXITED"_s);
			break;
		}
	case $MouseEvent::MOUSE_MOVED:
		{
			result->append("MOUSE_MOVED"_s);
			break;
		}
	case $MouseEvent::MOUSE_DRAGGED:
		{
			result->append("MOUSE_DRAGGED"_s);
			break;
		}
	case $MouseEvent::MOUSE_WHEEL:
		{
			result->append("MOUSE_WHEEL"_s);
			break;
		}
	default:
		{
			result->append("unknown type"_s);
		}
	}
	result->append($$str({", modifiers = "_s, $($MouseEvent::getMouseModifiersText(e->getModifiers()))}));
	result->append($$str({", modifiersEx = "_s, $($MouseEvent::getMouseModifiersText(e->getModifiersEx()))}));
	result->append($$str({", button = "_s, $$str(e->getButton())}));
	return result->toString();
}

bool bug7146377::oldIsLeftMouseButton($MouseEvent* e) {
	return (((int32_t)($nc(e)->getModifiers() & (uint32_t)$InputEvent::BUTTON1_MASK)) != 0);
}

bool bug7146377::oldIsMiddleMouseButton($MouseEvent* e) {
	return (((int32_t)($nc(e)->getModifiers() & (uint32_t)$InputEvent::BUTTON2_MASK)) == $InputEvent::BUTTON2_MASK);
}

bool bug7146377::oldIsRightMouseButton($MouseEvent* e) {
	return (((int32_t)($nc(e)->getModifiers() & (uint32_t)$InputEvent::BUTTON3_MASK)) == $InputEvent::BUTTON3_MASK);
}

bug7146377::bug7146377() {
}

$Class* bug7146377::load$($String* name, bool initialize) {
	$loadClass(bug7146377, name, initialize, &_bug7146377_ClassInfo_, allocate$bug7146377);
	return class$;
}

$Class* bug7146377::class$ = nullptr;