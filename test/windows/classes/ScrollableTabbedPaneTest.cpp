#include <ScrollableTabbedPaneTest.h>

#include <ScrollableTabbedPaneTest$1.h>
#include <ScrollableTabbedPaneTest$2.h>
#include <ScrollableTabbedPaneTest$3.h>
#include <ScrollableTabbedPaneTest$4.h>
#include <ScrollableTabbedPaneTest$5.h>
#include <java/awt/Robot.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $ScrollableTabbedPaneTest$1 = ::ScrollableTabbedPaneTest$1;
using $ScrollableTabbedPaneTest$2 = ::ScrollableTabbedPaneTest$2;
using $ScrollableTabbedPaneTest$3 = ::ScrollableTabbedPaneTest$3;
using $ScrollableTabbedPaneTest$4 = ::ScrollableTabbedPaneTest$4;
using $ScrollableTabbedPaneTest$5 = ::ScrollableTabbedPaneTest$5;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

$FieldInfo _ScrollableTabbedPaneTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(ScrollableTabbedPaneTest, frame)},
	{"pane", "Ljavax/swing/JTabbedPane;", nullptr, $PRIVATE | $STATIC, $staticField(ScrollableTabbedPaneTest, pane)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(ScrollableTabbedPaneTest, robot)},
	{"errorString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(ScrollableTabbedPaneTest, errorString)},
	{}
};

$MethodInfo _ScrollableTabbedPaneTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScrollableTabbedPaneTest::*)()>(&ScrollableTabbedPaneTest::init$))},
	{"cleanUp", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ScrollableTabbedPaneTest::cleanUp)), "java.lang.Exception"},
	{"createLeftUI", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&ScrollableTabbedPaneTest::createLeftUI)), "java.lang.Exception"},
	{"createRightUI", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&ScrollableTabbedPaneTest::createRightUI)), "java.lang.Exception"},
	{"createUI", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&ScrollableTabbedPaneTest::createUI)), "java.lang.Exception"},
	{"executeCase", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&ScrollableTabbedPaneTest::executeCase)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ScrollableTabbedPaneTest::main)), "java.lang.Exception"},
	{"runTestCase", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&ScrollableTabbedPaneTest::runTestCase)), "java.lang.Exception"},
	{"stepsToExecute", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&ScrollableTabbedPaneTest::stepsToExecute)), "java.lang.Exception"},
	{"tryLookAndFeel", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&ScrollableTabbedPaneTest::tryLookAndFeel)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ScrollableTabbedPaneTest_InnerClassesInfo_[] = {
	{"ScrollableTabbedPaneTest$5", nullptr, nullptr, 0},
	{"ScrollableTabbedPaneTest$4", nullptr, nullptr, 0},
	{"ScrollableTabbedPaneTest$3", nullptr, nullptr, 0},
	{"ScrollableTabbedPaneTest$2", nullptr, nullptr, 0},
	{"ScrollableTabbedPaneTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ScrollableTabbedPaneTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ScrollableTabbedPaneTest",
	"java.lang.Object",
	nullptr,
	_ScrollableTabbedPaneTest_FieldInfo_,
	_ScrollableTabbedPaneTest_MethodInfo_,
	nullptr,
	nullptr,
	_ScrollableTabbedPaneTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ScrollableTabbedPaneTest$5,ScrollableTabbedPaneTest$4,ScrollableTabbedPaneTest$3,ScrollableTabbedPaneTest$2,ScrollableTabbedPaneTest$1"
};

$Object* allocate$ScrollableTabbedPaneTest($Class* clazz) {
	return $of($alloc(ScrollableTabbedPaneTest));
}

$JFrame* ScrollableTabbedPaneTest::frame = nullptr;
$JTabbedPane* ScrollableTabbedPaneTest::pane = nullptr;
$Robot* ScrollableTabbedPaneTest::robot = nullptr;
$volatile($String*) ScrollableTabbedPaneTest::errorString = nullptr;

void ScrollableTabbedPaneTest::init$() {
}

void ScrollableTabbedPaneTest::main($StringArray* args) {
	$init(ScrollableTabbedPaneTest);
	$useLocalCurrentObjectStackCache();
	$assignStatic(ScrollableTabbedPaneTest::robot, $new($Robot));
	$nc(ScrollableTabbedPaneTest::robot)->delay(1000);
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelArray);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelItem, arr$->get(i$));
			{
				$var($String, var$0, $nc(lookAndFeelItem)->getClassName());
				executeCase(var$0, $(lookAndFeelItem->getName()));
			}
		}
	}
	if (!""_s->equals(ScrollableTabbedPaneTest::errorString)) {
		$throwNew($RuntimeException, $$str({"Error Log:\n"_s, ScrollableTabbedPaneTest::errorString}));
	}
}

void ScrollableTabbedPaneTest::executeCase($String* lookAndFeelString, $String* shortLAF) {
	$init(ScrollableTabbedPaneTest);
	if (tryLookAndFeel(lookAndFeelString)) {
		createUI(shortLAF);
		stepsToExecute(shortLAF);
		createLeftUI(shortLAF);
		stepsToExecute(shortLAF);
		createRightUI(shortLAF);
		stepsToExecute(shortLAF);
	}
}

void ScrollableTabbedPaneTest::stepsToExecute($String* shortLAF) {
	$init(ScrollableTabbedPaneTest);
	$nc(ScrollableTabbedPaneTest::robot)->delay(100);
	runTestCase(shortLAF);
	$nc(ScrollableTabbedPaneTest::robot)->delay(1000);
	cleanUp();
	$nc(ScrollableTabbedPaneTest::robot)->delay(1000);
}

bool ScrollableTabbedPaneTest::tryLookAndFeel($String* lookAndFeelString) {
	$init(ScrollableTabbedPaneTest);
	try {
		$UIManager::setLookAndFeel(lookAndFeelString);
	} catch ($UnsupportedLookAndFeelException& e) {
		return false;
	} catch ($ClassNotFoundException& e) {
		return false;
	} catch ($InstantiationException& e) {
		return false;
	} catch ($IllegalAccessException& e) {
		return false;
	}
	return true;
}

void ScrollableTabbedPaneTest::cleanUp() {
	$init(ScrollableTabbedPaneTest);
	$SwingUtilities::invokeAndWait($$new($ScrollableTabbedPaneTest$1));
}

void ScrollableTabbedPaneTest::createUI($String* shortLAF) {
	$init(ScrollableTabbedPaneTest);
	$SwingUtilities::invokeAndWait($$new($ScrollableTabbedPaneTest$2, shortLAF));
}

void ScrollableTabbedPaneTest::createLeftUI($String* shortLAF) {
	$init(ScrollableTabbedPaneTest);
	$SwingUtilities::invokeAndWait($$new($ScrollableTabbedPaneTest$3, shortLAF));
}

void ScrollableTabbedPaneTest::createRightUI($String* shortLAF) {
	$init(ScrollableTabbedPaneTest);
	$SwingUtilities::invokeAndWait($$new($ScrollableTabbedPaneTest$4, shortLAF));
}

void ScrollableTabbedPaneTest::runTestCase($String* shortLAF) {
	$init(ScrollableTabbedPaneTest);
	$SwingUtilities::invokeAndWait($$new($ScrollableTabbedPaneTest$5, shortLAF));
}

void clinit$ScrollableTabbedPaneTest($Class* class$) {
	$assignStatic(ScrollableTabbedPaneTest::errorString, ""_s);
}

ScrollableTabbedPaneTest::ScrollableTabbedPaneTest() {
}

$Class* ScrollableTabbedPaneTest::load$($String* name, bool initialize) {
	$loadClass(ScrollableTabbedPaneTest, name, initialize, &_ScrollableTabbedPaneTest_ClassInfo_, clinit$ScrollableTabbedPaneTest, allocate$ScrollableTabbedPaneTest);
	return class$;
}

$Class* ScrollableTabbedPaneTest::class$ = nullptr;