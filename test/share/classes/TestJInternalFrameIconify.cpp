#include <TestJInternalFrameIconify.h>

#include <TestJInternalFrameIconify$1.h>
#include <TestJInternalFrameIconify$2.h>
#include <java/awt/Robot.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $TestJInternalFrameIconify$1 = ::TestJInternalFrameIconify$1;
using $TestJInternalFrameIconify$2 = ::TestJInternalFrameIconify$2;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Robot = ::java::awt::Robot;
using $PrintStream = ::java::io::PrintStream;
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
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

$FieldInfo _TestJInternalFrameIconify_FieldInfo_[] = {
	{"desktopPane", "Ljavax/swing/JDesktopPane;", nullptr, $PRIVATE | $STATIC, $staticField(TestJInternalFrameIconify, desktopPane)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestJInternalFrameIconify, frame)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(TestJInternalFrameIconify, robot)},
	{"errorMessage", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestJInternalFrameIconify, errorMessage)},
	{}
};

$MethodInfo _TestJInternalFrameIconify_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJInternalFrameIconify::*)()>(&TestJInternalFrameIconify::init$))},
	{"createUI", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&TestJInternalFrameIconify::createUI)), "java.lang.Exception"},
	{"executeTest", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&TestJInternalFrameIconify::executeTest)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestJInternalFrameIconify::main)), "java.lang.Exception"},
	{"tryLookAndFeel", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&TestJInternalFrameIconify::tryLookAndFeel))},
	{}
};

$InnerClassInfo _TestJInternalFrameIconify_InnerClassesInfo_[] = {
	{"TestJInternalFrameIconify$2", nullptr, nullptr, 0},
	{"TestJInternalFrameIconify$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestJInternalFrameIconify_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestJInternalFrameIconify",
	"java.lang.Object",
	nullptr,
	_TestJInternalFrameIconify_FieldInfo_,
	_TestJInternalFrameIconify_MethodInfo_,
	nullptr,
	nullptr,
	_TestJInternalFrameIconify_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestJInternalFrameIconify$2,TestJInternalFrameIconify$1"
};

$Object* allocate$TestJInternalFrameIconify($Class* clazz) {
	return $of($alloc(TestJInternalFrameIconify));
}

$JDesktopPane* TestJInternalFrameIconify::desktopPane = nullptr;
$JFrame* TestJInternalFrameIconify::frame = nullptr;
$Robot* TestJInternalFrameIconify::robot = nullptr;
$volatile($String*) TestJInternalFrameIconify::errorMessage = nullptr;

void TestJInternalFrameIconify::init$() {
}

void TestJInternalFrameIconify::main($StringArray* args) {
	$init(TestJInternalFrameIconify);
	$useLocalCurrentObjectStackCache();
	$assignStatic(TestJInternalFrameIconify::robot, $new($Robot));
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelArray);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelItem, arr$->get(i$));
			{
				$var($String, lookAndFeelString, $nc(lookAndFeelItem)->getClassName());
				if (tryLookAndFeel(lookAndFeelString)) {
					createUI(lookAndFeelString);
					$nc(TestJInternalFrameIconify::robot)->waitForIdle();
					executeTest(lookAndFeelString);
				}
			}
		}
	}
	if (!""_s->equals(TestJInternalFrameIconify::errorMessage)) {
		$throwNew($RuntimeException, TestJInternalFrameIconify::errorMessage);
	}
}

bool TestJInternalFrameIconify::tryLookAndFeel($String* lookAndFeelString) {
	$init(TestJInternalFrameIconify);
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel(lookAndFeelString);
		return true;
	} catch ($UnsupportedLookAndFeelException& e) {
		$plusAssignStatic(TestJInternalFrameIconify::errorMessage, $$str({$(e->getMessage()), "\n"_s}));
		$nc($System::err)->println($$str({"Caught Exception: "_s, $(e->getMessage())}));
		return false;
	} catch ($ClassNotFoundException& e) {
		$plusAssignStatic(TestJInternalFrameIconify::errorMessage, $$str({$(e->getMessage()), "\n"_s}));
		$nc($System::err)->println($$str({"Caught Exception: "_s, $(e->getMessage())}));
		return false;
	} catch ($InstantiationException& e) {
		$plusAssignStatic(TestJInternalFrameIconify::errorMessage, $$str({$(e->getMessage()), "\n"_s}));
		$nc($System::err)->println($$str({"Caught Exception: "_s, $(e->getMessage())}));
		return false;
	} catch ($IllegalAccessException& e) {
		$plusAssignStatic(TestJInternalFrameIconify::errorMessage, $$str({$(e->getMessage()), "\n"_s}));
		$nc($System::err)->println($$str({"Caught Exception: "_s, $(e->getMessage())}));
		return false;
	}
	$shouldNotReachHere();
}

void TestJInternalFrameIconify::createUI($String* lookAndFeelString) {
	$init(TestJInternalFrameIconify);
	$SwingUtilities::invokeAndWait($$new($TestJInternalFrameIconify$1, lookAndFeelString));
}

void TestJInternalFrameIconify::executeTest($String* lookAndFeelString) {
	$init(TestJInternalFrameIconify);
	$SwingUtilities::invokeAndWait($$new($TestJInternalFrameIconify$2, lookAndFeelString));
}

void clinit$TestJInternalFrameIconify($Class* class$) {
	$assignStatic(TestJInternalFrameIconify::errorMessage, ""_s);
}

TestJInternalFrameIconify::TestJInternalFrameIconify() {
}

$Class* TestJInternalFrameIconify::load$($String* name, bool initialize) {
	$loadClass(TestJInternalFrameIconify, name, initialize, &_TestJInternalFrameIconify_ClassInfo_, clinit$TestJInternalFrameIconify, allocate$TestJInternalFrameIconify);
	return class$;
}

$Class* TestJInternalFrameIconify::class$ = nullptr;