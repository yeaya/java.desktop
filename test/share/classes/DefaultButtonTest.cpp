#include <DefaultButtonTest.h>

#include <DefaultButtonTest$1.h>
#include <DefaultButtonTest$DefaultPanel.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef VK_BACK_SPACE
#undef VK_D
#undef VK_ENTER
#undef VK_SHIFT
#undef VK_TAB

using $DefaultButtonTest$1 = ::DefaultButtonTest$1;
using $DefaultButtonTest$DefaultPanel = ::DefaultButtonTest$DefaultPanel;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _DefaultButtonTest_FieldInfo_[] = {
	{"defaultButtonPressed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(DefaultButtonTest, defaultButtonPressed)},
	{"editChanged", "Z", nullptr, $PRIVATE | $STATIC, $staticField(DefaultButtonTest, editChanged)},
	{"strData", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(DefaultButtonTest, strData)},
	{"strData2", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(DefaultButtonTest, strData2)},
	{}
};

$MethodInfo _DefaultButtonTest_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultButtonTest::*)()>(&DefaultButtonTest::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DefaultButtonTest::main)), "java.lang.Throwable"},
	{"test", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&DefaultButtonTest::test))},
	{"testDefaultButton", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&DefaultButtonTest::testDefaultButton))},
	{"testEditChange", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&DefaultButtonTest::testEditChange))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultButtonTest_InnerClassesInfo_[] = {
	{"DefaultButtonTest$DefaultPanel", "DefaultButtonTest", "DefaultPanel", 0},
	{"DefaultButtonTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultButtonTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DefaultButtonTest",
	"javax.swing.JFrame",
	"java.awt.event.ActionListener",
	_DefaultButtonTest_FieldInfo_,
	_DefaultButtonTest_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultButtonTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"DefaultButtonTest$DefaultPanel,DefaultButtonTest$1"
};

$Object* allocate$DefaultButtonTest($Class* clazz) {
	return $of($alloc(DefaultButtonTest));
}

$String* DefaultButtonTest::toString() {
	 return this->$JFrame::toString();
}

int32_t DefaultButtonTest::hashCode() {
	 return this->$JFrame::hashCode();
}

bool DefaultButtonTest::equals(Object$* arg0) {
	 return this->$JFrame::equals(arg0);
}

$Object* DefaultButtonTest::clone() {
	 return this->$JFrame::clone();
}

void DefaultButtonTest::finalize() {
	this->$JFrame::finalize();
}

bool DefaultButtonTest::defaultButtonPressed = false;
bool DefaultButtonTest::editChanged = false;
$StringArray* DefaultButtonTest::strData = nullptr;
$StringArray* DefaultButtonTest::strData2 = nullptr;

void DefaultButtonTest::main($StringArray* args) {
	$init(DefaultButtonTest);
	$SwingUtilities::invokeAndWait($$new($DefaultButtonTest$1));
	test();
	$nc($System::out)->println("Test Passed"_s);
}

void DefaultButtonTest::init$() {
	$useLocalCurrentObjectStackCache();
	$JFrame::init$();
	$nc($(getContentPane()))->add(static_cast<$Component*>($$new($DefaultButtonTest$DefaultPanel, this, this)));
	pack();
	setVisible(true);
	setLocationRelativeTo(nullptr);
}

void DefaultButtonTest::test() {
	$init(DefaultButtonTest);
	$var($Robot, robot, nullptr);
	try {
		$assign(robot, $new($Robot));
	} catch ($Exception& ex) {
		ex->printStackTrace();
	}
	$nc(robot)->setAutoDelay(125);
	for (int32_t i = 0; i < 3; ++i) {
		robot->waitForIdle();
		robot->keyPress($KeyEvent::VK_ENTER);
		robot->waitForIdle();
		robot->keyRelease($KeyEvent::VK_ENTER);
		robot->waitForIdle();
		testDefaultButton(true);
		robot->keyPress($KeyEvent::VK_TAB);
		robot->waitForIdle();
		robot->keyRelease($KeyEvent::VK_TAB);
		robot->waitForIdle();
		robot->keyPress($KeyEvent::VK_ENTER);
		robot->waitForIdle();
		robot->keyRelease($KeyEvent::VK_ENTER);
		robot->waitForIdle();
		testDefaultButton(true);
		robot->waitForIdle();
		robot->keyPress($KeyEvent::VK_D);
		robot->waitForIdle();
		robot->keyRelease($KeyEvent::VK_D);
		robot->waitForIdle();
		robot->keyPress($KeyEvent::VK_ENTER);
		robot->waitForIdle();
		robot->keyRelease($KeyEvent::VK_ENTER);
		robot->waitForIdle();
		testEditChange(true);
		robot->waitForIdle();
		testDefaultButton(true);
		robot->waitForIdle();
		robot->keyPress($KeyEvent::VK_BACK_SPACE);
		robot->keyRelease($KeyEvent::VK_BACK_SPACE);
		robot->waitForIdle();
		robot->keyPress($KeyEvent::VK_SHIFT);
		robot->keyPress($KeyEvent::VK_TAB);
		robot->keyRelease($KeyEvent::VK_TAB);
		robot->keyRelease($KeyEvent::VK_SHIFT);
		robot->waitForIdle();
		testEditChange(true);
		robot->waitForIdle();
		testDefaultButton(false);
	}
}

void DefaultButtonTest::actionPerformed($ActionEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($String, cmd, $nc(evt)->getActionCommand());
	$nc($System::out)->println($$str({"ActionEvent: "_s, cmd}));
	if ($nc(cmd)->equals("OK"_s)) {
		DefaultButtonTest::defaultButtonPressed = true;
	}
	if ($nc(cmd)->equals("comboBoxChanged"_s)) {
		DefaultButtonTest::editChanged = true;
	}
}

void DefaultButtonTest::testDefaultButton(bool flag) {
	$init(DefaultButtonTest);
	$useLocalCurrentObjectStackCache();
	if (DefaultButtonTest::defaultButtonPressed != flag) {
		$new($RuntimeException, $$str({"defaultButtonPressed unexpectedly = "_s, $$str(DefaultButtonTest::defaultButtonPressed)}));
	}
	DefaultButtonTest::defaultButtonPressed = false;
}

void DefaultButtonTest::testEditChange(bool flag) {
	$init(DefaultButtonTest);
	$useLocalCurrentObjectStackCache();
	if (DefaultButtonTest::editChanged != flag) {
		$new($RuntimeException, $$str({"editChanged unexpectedly = "_s, $$str(DefaultButtonTest::editChanged)}));
	}
	DefaultButtonTest::editChanged = false;
}

void clinit$DefaultButtonTest($Class* class$) {
	DefaultButtonTest::defaultButtonPressed = false;
	DefaultButtonTest::editChanged = false;
	$assignStatic(DefaultButtonTest::strData, $new($StringArray, {
		"Monday"_s,
		"Tuesday"_s,
		"Wednesday"_s,
		"Thursday"_s,
		"Friday"_s,
		"Saturday"_s,
		"Sunday"_s
	}));
	$assignStatic(DefaultButtonTest::strData2, $new($StringArray, {
		"One"_s,
		"Two"_s,
		"Three"_s,
		"Four"_s,
		"Five"_s,
		"Six"_s,
		"Seven"_s
	}));
}

DefaultButtonTest::DefaultButtonTest() {
}

$Class* DefaultButtonTest::load$($String* name, bool initialize) {
	$loadClass(DefaultButtonTest, name, initialize, &_DefaultButtonTest_ClassInfo_, clinit$DefaultButtonTest, allocate$DefaultButtonTest);
	return class$;
}

$Class* DefaultButtonTest::class$ = nullptr;