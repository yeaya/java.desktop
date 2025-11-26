#include <Test7024235.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/lang/Error.h>
#include <java/lang/Runnable.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef AUTO
#undef WEST

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $JToggleButton = ::javax::swing::JToggleButton;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

$FieldInfo _Test7024235_FieldInfo_[] = {
	{"AUTO", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test7024235, AUTO)},
	{"pane", "Ljavax/swing/JTabbedPane;", nullptr, $PRIVATE | $VOLATILE, $field(Test7024235, pane)},
	{"passed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(Test7024235, passed)},
	{}
};

$MethodInfo _Test7024235_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test7024235::*)()>(&Test7024235::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test7024235::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"test", "()V", nullptr, $PRIVATE, $method(static_cast<void(Test7024235::*)()>(&Test7024235::test)), "java.lang.Exception"},
	{"test", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Test7024235::*)($String*)>(&Test7024235::test))},
	{}
};

$ClassInfo _Test7024235_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test7024235",
	"java.lang.Object",
	"java.lang.Runnable",
	_Test7024235_FieldInfo_,
	_Test7024235_MethodInfo_
};

$Object* allocate$Test7024235($Class* clazz) {
	return $of($alloc(Test7024235));
}

bool Test7024235::AUTO = false;

void Test7024235::init$() {
}

void Test7024235::main($StringArray* args) {
	$init(Test7024235);
	$useLocalCurrentObjectStackCache();
	$var(Test7024235, test, $new(Test7024235));
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, info, arr$->get(i$));
			{
				$var($String, className, $nc(info)->getClassName());
				$nc($System::out)->println($$str({"className = "_s, className}));
				$UIManager::setLookAndFeel(className);
				test->test();
				try {
					$var($Robot, robot, $new($Robot));
					robot->waitForIdle();
					robot->delay(1000);
				} catch ($Exception& ex) {
					ex->printStackTrace();
					$throwNew($Error, "Unexpected Failure"_s);
				}
				test->test();
			}
		}
	}
}

void Test7024235::run() {
	$useLocalCurrentObjectStackCache();
	if (this->pane == nullptr) {
		$set(this, pane, $new($JTabbedPane));
		$nc(this->pane)->addTab("1"_s, $$new($Container));
		$nc(this->pane)->addTab("2"_s, $$new($JButton));
		$nc(this->pane)->addTab("3"_s, $$new($JCheckBox));
		$var($JFrame, frame, $new($JFrame));
		$init($BorderLayout);
		frame->add($BorderLayout::WEST, static_cast<$Component*>(this->pane));
		frame->pack();
		frame->setLocationRelativeTo(nullptr);
		frame->setVisible(true);
		test("first"_s);
	} else {
		test("second"_s);
		if (this->passed || Test7024235::AUTO) {
			$nc($($SwingUtilities::getWindowAncestor(this->pane)))->dispose();
		}
		$set(this, pane, nullptr);
	}
}

void Test7024235::test() {
	$SwingUtilities::invokeAndWait(this);
	if (!this->passed && Test7024235::AUTO) {
		$throwNew($Error, "TEST FAILED"_s);
	}
}

void Test7024235::test($String* step) {
	$useLocalCurrentObjectStackCache();
	this->passed = true;
	for (int32_t index = 0; index < $nc(this->pane)->getTabCount(); ++index) {
		$var($Rectangle, bounds, $nc(this->pane)->getBoundsAt(index));
		if (bounds == nullptr) {
			continue;
		}
		int32_t centerX = $nc(bounds)->x + bounds->width / 2;
		int32_t centerY = bounds->y + bounds->height / 2;
		int32_t actual = $nc(this->pane)->indexAtLocation(centerX, centerY);
		if (index != actual) {
			$nc($System::out)->println($$str({"name = "_s, $($nc($($UIManager::getLookAndFeel()))->getName())}));
			$nc($System::out)->println($$str({"step = "_s, step}));
			$nc($System::out)->println($$str({"index = "_s, $$str(index)}));
			$nc($System::out)->println($$str({"bounds = "_s, bounds}));
			$nc($System::out)->println($$str({"indexAtLocation("_s, $$str(centerX), ","_s, $$str(centerX), ") returns "_s, $$str(actual)}));
			this->passed = false;
		}
	}
}

void clinit$Test7024235($Class* class$) {
	Test7024235::AUTO = nullptr != $System::getProperty("test.src"_s, nullptr);
}

Test7024235::Test7024235() {
}

$Class* Test7024235::load$($String* name, bool initialize) {
	$loadClass(Test7024235, name, initialize, &_Test7024235_ClassInfo_, clinit$Test7024235, allocate$Test7024235);
	return class$;
}

$Class* Test7024235::class$ = nullptr;