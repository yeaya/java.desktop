#include <ActionListenerExceptionTest.h>

#include <ActionListenerExceptionTest$1.h>
#include <ActionListenerExceptionTest$2.h>
#include <ActionListenerExceptionTest$3.h>
#include <ActionListenerExceptionTest$4.h>
#include <EventQueueProxy.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/InputEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef TOTAL_MENU_ITEMS

using $ActionListenerExceptionTest$1 = ::ActionListenerExceptionTest$1;
using $ActionListenerExceptionTest$2 = ::ActionListenerExceptionTest$2;
using $ActionListenerExceptionTest$3 = ::ActionListenerExceptionTest$3;
using $ActionListenerExceptionTest$4 = ::ActionListenerExceptionTest$4;
using $EventQueueProxy = ::EventQueueProxy;
using $Dimension = ::java::awt::Dimension;
using $EventQueue = ::java::awt::EventQueue;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Toolkit = ::java::awt::Toolkit;
using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _ActionListenerExceptionTest_FieldInfo_[] = {
	{"TOTAL_MENU_ITEMS", "I", nullptr, $STATIC | $FINAL, $constField(ActionListenerExceptionTest, TOTAL_MENU_ITEMS)},
	{"count", "I", nullptr, $PRIVATE | $VOLATILE, $field(ActionListenerExceptionTest, count)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(ActionListenerExceptionTest, frame)},
	{"combo", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE, $field(ActionListenerExceptionTest, combo)},
	{"menuItemHeight", "I", nullptr, $PRIVATE, $field(ActionListenerExceptionTest, menuItemHeight)},
	{"yPos", "I", nullptr, $PRIVATE, $field(ActionListenerExceptionTest, yPos)},
	{"cbPos", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(ActionListenerExceptionTest, cbPos)},
	{"cbSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(ActionListenerExceptionTest, cbSize)},
	{}
};

$MethodInfo _ActionListenerExceptionTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ActionListenerExceptionTest::*)()>(&ActionListenerExceptionTest::init$))},
	{"createGUI", "()V", nullptr, $PRIVATE, $method(static_cast<void(ActionListenerExceptionTest::*)()>(&ActionListenerExceptionTest::createGUI)), "java.lang.Exception"},
	{"disposeGUI", "()V", nullptr, $PRIVATE, $method(static_cast<void(ActionListenerExceptionTest::*)()>(&ActionListenerExceptionTest::disposeGUI)), "java.lang.Exception"},
	{"getCount", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(ActionListenerExceptionTest::*)()>(&ActionListenerExceptionTest::getCount))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ActionListenerExceptionTest::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $PRIVATE, $method(static_cast<void(ActionListenerExceptionTest::*)()>(&ActionListenerExceptionTest::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ActionListenerExceptionTest_InnerClassesInfo_[] = {
	{"ActionListenerExceptionTest$4", nullptr, nullptr, 0},
	{"ActionListenerExceptionTest$3", nullptr, nullptr, 0},
	{"ActionListenerExceptionTest$2", nullptr, nullptr, 0},
	{"ActionListenerExceptionTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ActionListenerExceptionTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ActionListenerExceptionTest",
	"java.lang.Object",
	nullptr,
	_ActionListenerExceptionTest_FieldInfo_,
	_ActionListenerExceptionTest_MethodInfo_,
	nullptr,
	nullptr,
	_ActionListenerExceptionTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ActionListenerExceptionTest$4,ActionListenerExceptionTest$3,ActionListenerExceptionTest$2,ActionListenerExceptionTest$1,ActionListenerExceptionTest$1$1"
};

$Object* allocate$ActionListenerExceptionTest($Class* clazz) {
	return $of($alloc(ActionListenerExceptionTest));
}

void ActionListenerExceptionTest::init$() {
	this->count = 0;
	this->menuItemHeight = 0;
	this->yPos = 0;
	$set(this, cbPos, nullptr);
	$set(this, cbSize, nullptr);
}

void ActionListenerExceptionTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($EventQueue, queue, $nc($($Toolkit::getDefaultToolkit()))->getSystemEventQueue());
	$nc(queue)->push($$new($EventQueueProxy));
	$var(ActionListenerExceptionTest, testObject, $new(ActionListenerExceptionTest));
	testObject->createGUI();
	testObject->test();
	testObject->disposeGUI();
	if (testObject->getCount() != ActionListenerExceptionTest::TOTAL_MENU_ITEMS) {
		$throwNew($RuntimeException, "ActionListener is not invoked expected number of times"_s);
	}
}

void ActionListenerExceptionTest::createGUI() {
	$SwingUtilities::invokeAndWait($$new($ActionListenerExceptionTest$1, this));
}

void ActionListenerExceptionTest::disposeGUI() {
	$SwingUtilities::invokeAndWait($$new($ActionListenerExceptionTest$2, this));
}

void ActionListenerExceptionTest::test() {
	$useLocalCurrentObjectStackCache();
	$var($Robot, testRobot, $new($Robot));
	testRobot->delay(200);
	$SwingUtilities::invokeAndWait($$new($ActionListenerExceptionTest$3, this));
	$var($Point, center, $new($Point, ($nc(this->cbPos)->x + $nc(this->cbSize)->width / 2), ($nc(this->cbPos)->y + $nc(this->cbSize)->height - 5)));
	testRobot->mouseMove(center->x, center->y);
	testRobot->delay(100);
	testRobot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	testRobot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	testRobot->delay(500);
	$SwingUtilities::invokeAndWait($$new($ActionListenerExceptionTest$4, this));
	for (int32_t i = 0; i < ActionListenerExceptionTest::TOTAL_MENU_ITEMS; ++i) {
		testRobot->mouseMove(center->x, this->yPos);
		testRobot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
		testRobot->delay(100);
		testRobot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
		testRobot->delay(200);
		this->yPos += this->menuItemHeight;
	}
}

int32_t ActionListenerExceptionTest::getCount() {
	return this->count;
}

ActionListenerExceptionTest::ActionListenerExceptionTest() {
}

$Class* ActionListenerExceptionTest::load$($String* name, bool initialize) {
	$loadClass(ActionListenerExceptionTest, name, initialize, &_ActionListenerExceptionTest_ClassInfo_, allocate$ActionListenerExceptionTest);
	return class$;
}

$Class* ActionListenerExceptionTest::class$ = nullptr;