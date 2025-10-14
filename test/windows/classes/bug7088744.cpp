#include <bug7088744.h>

#include <bug7088744$1.h>
#include <bug7088744$2.h>
#include <bug7088744$3.h>
#include <bug7088744$4.h>
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
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef BUTTON2_MASK
#undef BUTTON3_MASK
#undef BUTTON_EVENTS_SEQUENCE
#undef MOUSE_CLICKED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED

using $intArray2 = $Array<int32_t, 2>;
using $bug7088744$1 = ::bug7088744$1;
using $bug7088744$2 = ::bug7088744$2;
using $bug7088744$3 = ::bug7088744$3;
using $bug7088744$4 = ::bug7088744$4;
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

$FieldInfo _bug7088744_FieldInfo_[] = {
	{"label", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug7088744, label)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug7088744, frame)},
	{"point", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug7088744, point)},
	{"MOUSE_CLICKED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug7088744, MOUSE_CLICKED)},
	{"MOUSE_PRESSED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug7088744, MOUSE_PRESSED)},
	{"MOUSE_RELEASED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug7088744, MOUSE_RELEASED)},
	{"BUTTON_EVENTS_SEQUENCE", "[[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug7088744, BUTTON_EVENTS_SEQUENCE)},
	{"eventCount", "I", nullptr, $PRIVATE | $STATIC, $staticField(bug7088744, eventCount)},
	{}
};

$MethodInfo _bug7088744_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7088744::*)()>(&bug7088744::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7088744::main)), "java.lang.Exception"},
	{"processEvent", "(ILjava/awt/event/MouseEvent;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$MouseEvent*)>(&bug7088744::processEvent))},
	{}
};

$InnerClassInfo _bug7088744_InnerClassesInfo_[] = {
	{"bug7088744$4", nullptr, nullptr, 0},
	{"bug7088744$3", nullptr, nullptr, 0},
	{"bug7088744$2", nullptr, nullptr, 0},
	{"bug7088744$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7088744_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7088744",
	"java.lang.Object",
	nullptr,
	_bug7088744_FieldInfo_,
	_bug7088744_MethodInfo_,
	nullptr,
	nullptr,
	_bug7088744_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7088744$4,bug7088744$3,bug7088744$2,bug7088744$2$1,bug7088744$1"
};

$Object* allocate$bug7088744($Class* clazz) {
	return $of($alloc(bug7088744));
}

$volatile($JLabel*) bug7088744::label = nullptr;
$volatile($JFrame*) bug7088744::frame = nullptr;
$volatile($Point*) bug7088744::point = nullptr;
$intArray2* bug7088744::BUTTON_EVENTS_SEQUENCE = nullptr;
int32_t bug7088744::eventCount = 0;

void bug7088744::init$() {
}

void bug7088744::main($StringArray* args) {
	$init(bug7088744);
	$SwingUtilities::invokeAndWait($$new($bug7088744$1));
	$SwingUtilities::invokeAndWait($$new($bug7088744$2));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug7088744$3));
	robot->setAutoDelay(100);
	robot->setAutoWaitForIdle(true);
	robot->mouseMove($nc(bug7088744::point)->x, $nc(bug7088744::point)->y);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	robot->mousePress($InputEvent::BUTTON2_MASK);
	robot->mousePress($InputEvent::BUTTON3_MASK);
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
	robot->mouseRelease($InputEvent::BUTTON2_MASK);
	robot->mouseRelease($InputEvent::BUTTON3_MASK);
	$SwingUtilities::invokeAndWait($$new($bug7088744$4));
	$init($System);
	$nc($System::out)->println("Test passed"_s);
}

void bug7088744::processEvent(int32_t eventType, $MouseEvent* e) {
	$init(bug7088744);
	if (bug7088744::eventCount >= $nc(bug7088744::BUTTON_EVENTS_SEQUENCE)->length) {
		$throwNew($RuntimeException, $$str({"Unexpected event "_s, e}));
	}
	$var($ints, arr, $nc(bug7088744::BUTTON_EVENTS_SEQUENCE)->get(bug7088744::eventCount));
	if ($nc(arr)->get(0) != eventType) {
		$throwNew($RuntimeException, $$str({"Unexpected eventType "_s, $$str(eventType), "on step "_s, $$str(bug7088744::eventCount)}));
	}
	bool result = false;
	switch ($nc(arr)->get(1)) {
	case 1:
		{
			result = $SwingUtilities::isLeftMouseButton(e);
			break;
		}
	case 2:
		{
			result = $SwingUtilities::isMiddleMouseButton(e);
			break;
		}
	case 3:
		{
			result = $SwingUtilities::isRightMouseButton(e);
			break;
		}
	default:
		{
			$throwNew($RuntimeException, $$str({"Incorrect arr[1] on step "_s, $$str(bug7088744::eventCount)}));
		}
	}
	if (!result) {
		$throwNew($RuntimeException, $$str({"Test failed on step "_s, $$str(bug7088744::eventCount)}));
	}
	++bug7088744::eventCount;
}

void clinit$bug7088744($Class* class$) {
	$assignStatic(bug7088744::point, $new($Point));
	$assignStatic(bug7088744::BUTTON_EVENTS_SEQUENCE, $new($intArray2, {
		$$new($ints, {
			bug7088744::MOUSE_PRESSED,
			1
		}),
		$$new($ints, {
			bug7088744::MOUSE_PRESSED,
			2
		}),
		$$new($ints, {
			bug7088744::MOUSE_PRESSED,
			3
		}),
		$$new($ints, {
			bug7088744::MOUSE_RELEASED,
			1
		}),
		$$new($ints, {
			bug7088744::MOUSE_CLICKED,
			1
		}),
		$$new($ints, {
			bug7088744::MOUSE_RELEASED,
			2
		}),
		$$new($ints, {
			bug7088744::MOUSE_CLICKED,
			2
		}),
		$$new($ints, {
			bug7088744::MOUSE_RELEASED,
			3
		}),
		$$new($ints, {
			bug7088744::MOUSE_CLICKED,
			3
		})
	}));
}

bug7088744::bug7088744() {
}

$Class* bug7088744::load$($String* name, bool initialize) {
	$loadClass(bug7088744, name, initialize, &_bug7088744_ClassInfo_, clinit$bug7088744, allocate$bug7088744);
	return class$;
}

$Class* bug7088744::class$ = nullptr;