#include <OptionPaneTest.h>

#include <OptionPaneTest$1.h>
#include <java/awt/Robot.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $OptionPaneTest$1 = ::OptionPaneTest$1;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JDialog = ::javax::swing::JDialog;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _OptionPaneTest_FieldInfo_[] = {
	{"testFailed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(OptionPaneTest, testFailed)},
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $PRIVATE | $STATIC, $staticField(OptionPaneTest, dialog)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(OptionPaneTest, robot)},
	{}
};

$MethodInfo _OptionPaneTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OptionPaneTest::*)()>(&OptionPaneTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&OptionPaneTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _OptionPaneTest_InnerClassesInfo_[] = {
	{"OptionPaneTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _OptionPaneTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"OptionPaneTest",
	"java.lang.Object",
	nullptr,
	_OptionPaneTest_FieldInfo_,
	_OptionPaneTest_MethodInfo_,
	nullptr,
	nullptr,
	_OptionPaneTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"OptionPaneTest$1"
};

$Object* allocate$OptionPaneTest($Class* clazz) {
	return $of($alloc(OptionPaneTest));
}

$volatile(bool) OptionPaneTest::testFailed = false;
$JDialog* OptionPaneTest::dialog = nullptr;
$Robot* OptionPaneTest::robot = nullptr;

void OptionPaneTest::init$() {
}

void OptionPaneTest::main($StringArray* args) {
	$init(OptionPaneTest);
	$assignStatic(OptionPaneTest::robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($OptionPaneTest$1));
	$nc(OptionPaneTest::robot)->waitForIdle();
	if (OptionPaneTest::testFailed) {
		$throwNew($RuntimeException, "Test Failed"_s);
	}
}

OptionPaneTest::OptionPaneTest() {
}

$Class* OptionPaneTest::load$($String* name, bool initialize) {
	$loadClass(OptionPaneTest, name, initialize, &_OptionPaneTest_ClassInfo_, allocate$OptionPaneTest);
	return class$;
}

$Class* OptionPaneTest::class$ = nullptr;