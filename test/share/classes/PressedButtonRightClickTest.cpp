#include <PressedButtonRightClickTest.h>

#include <PressedButtonRightClickTest$1.h>
#include <java/awt/AWTException.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/lang/Runnable.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef BUTTON3_DOWN_MASK
#undef CENTER
#undef EXIT_ON_CLOSE

using $PressedButtonRightClickTest$1 = ::PressedButtonRightClickTest$1;
using $AWTException = ::java::awt::AWTException;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _PressedButtonRightClickTest_FieldInfo_[] = {
	{"testRobot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(PressedButtonRightClickTest, testRobot)},
	{"myFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(PressedButtonRightClickTest, myFrame)},
	{"myButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(PressedButtonRightClickTest, myButton)},
	{}
};

$MethodInfo _PressedButtonRightClickTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PressedButtonRightClickTest::*)()>(&PressedButtonRightClickTest::init$))},
	{"constructTestUI", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&PressedButtonRightClickTest::constructTestUI))},
	{"disposeTestUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&PressedButtonRightClickTest::disposeTestUI))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&PressedButtonRightClickTest::main)), "java.lang.Throwable"},
	{"test", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&PressedButtonRightClickTest::test))},
	{}
};

$InnerClassInfo _PressedButtonRightClickTest_InnerClassesInfo_[] = {
	{"PressedButtonRightClickTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PressedButtonRightClickTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"PressedButtonRightClickTest",
	"java.lang.Object",
	nullptr,
	_PressedButtonRightClickTest_FieldInfo_,
	_PressedButtonRightClickTest_MethodInfo_,
	nullptr,
	nullptr,
	_PressedButtonRightClickTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"PressedButtonRightClickTest$1"
};

$Object* allocate$PressedButtonRightClickTest($Class* clazz) {
	return $of($alloc(PressedButtonRightClickTest));
}

$Robot* PressedButtonRightClickTest::testRobot = nullptr;
$JFrame* PressedButtonRightClickTest::myFrame = nullptr;
$JButton* PressedButtonRightClickTest::myButton = nullptr;

void PressedButtonRightClickTest::init$() {
}

void PressedButtonRightClickTest::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($PressedButtonRightClickTest$1));
	try {
		$init(PressedButtonRightClickTest);
		$assignStatic(PressedButtonRightClickTest::testRobot, $new($Robot));
	} catch ($AWTException& ex) {
		$throwNew($RuntimeException, "Exception in Robot creation"_s);
	}
	$init(PressedButtonRightClickTest);
	$nc(PressedButtonRightClickTest::testRobot)->waitForIdle();
	test();
	disposeTestUI();
}

void PressedButtonRightClickTest::test() {
	$useLocalCurrentObjectStackCache();
	$init(PressedButtonRightClickTest);
	$var($Point, loc, $nc(PressedButtonRightClickTest::myFrame)->getLocationOnScreen());
	$nc(PressedButtonRightClickTest::testRobot)->mouseMove(($nc(loc)->x + 100), (loc->y + 100));
	$nc(PressedButtonRightClickTest::testRobot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	$nc(PressedButtonRightClickTest::myButton)->setText("Left button pressed"_s);
	$nc(PressedButtonRightClickTest::testRobot)->delay(1000);
	$nc(PressedButtonRightClickTest::testRobot)->mousePress($InputEvent::BUTTON3_DOWN_MASK);
	$nc(PressedButtonRightClickTest::myButton)->setText("Left button pressed + Right button pressed"_s);
	$nc(PressedButtonRightClickTest::testRobot)->delay(1000);
	$nc(PressedButtonRightClickTest::testRobot)->mouseRelease($InputEvent::BUTTON3_DOWN_MASK);
	$nc(PressedButtonRightClickTest::myButton)->setText("Right button released"_s);
	$nc(PressedButtonRightClickTest::testRobot)->delay(1000);
	bool pressed = $nc($($nc(PressedButtonRightClickTest::myButton)->getModel()))->isPressed();
	$nc(PressedButtonRightClickTest::testRobot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	if (!pressed) {
		disposeTestUI();
		$throwNew($RuntimeException, "Test Failed!"_s);
	}
}

void PressedButtonRightClickTest::disposeTestUI() {
	$init(PressedButtonRightClickTest);
	$nc(PressedButtonRightClickTest::myFrame)->setVisible(false);
	$nc(PressedButtonRightClickTest::myFrame)->dispose();
}

void PressedButtonRightClickTest::constructTestUI() {
	$init(PressedButtonRightClickTest);
	$assignStatic(PressedButtonRightClickTest::myFrame, $new($JFrame));
	$nc(PressedButtonRightClickTest::myFrame)->setLayout($$new($BorderLayout));
	$assignStatic(PressedButtonRightClickTest::myButton, $new($JButton, "Whatever"_s));
	$init($BorderLayout);
	$nc(PressedButtonRightClickTest::myFrame)->add(static_cast<$Component*>(PressedButtonRightClickTest::myButton), $of($BorderLayout::CENTER));
	$nc(PressedButtonRightClickTest::myFrame)->setSize(400, 300);
	$nc(PressedButtonRightClickTest::myFrame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(PressedButtonRightClickTest::myFrame)->setLocationRelativeTo(nullptr);
	$nc(PressedButtonRightClickTest::myFrame)->setVisible(true);
}

PressedButtonRightClickTest::PressedButtonRightClickTest() {
}

$Class* PressedButtonRightClickTest::load$($String* name, bool initialize) {
	$loadClass(PressedButtonRightClickTest, name, initialize, &_PressedButtonRightClickTest_ClassInfo_, allocate$PressedButtonRightClickTest);
	return class$;
}

$Class* PressedButtonRightClickTest::class$ = nullptr;