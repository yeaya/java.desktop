#include <IconifyTest.h>

#include <IconifyTest$1.h>
#include <IconifyTest$2.h>
#include <java/awt/Robot.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $IconifyTest$1 = ::IconifyTest$1;
using $IconifyTest$2 = ::IconifyTest$2;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _IconifyTest_FieldInfo_[] = {
	{"windowIconifiedIsCalled", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(IconifyTest, windowIconifiedIsCalled)},
	{"frameIsRepainted", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(IconifyTest, frameIsRepainted)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(IconifyTest, frame)},
	{"button", "Ljavax/swing/JButton;", nullptr, $STATIC, $staticField(IconifyTest, button)},
	{}
};

$MethodInfo _IconifyTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IconifyTest::*)()>(&IconifyTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&IconifyTest::main)), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _IconifyTest_InnerClassesInfo_[] = {
	{"IconifyTest$2", nullptr, nullptr, 0},
	{"IconifyTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IconifyTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IconifyTest",
	"java.lang.Object",
	nullptr,
	_IconifyTest_FieldInfo_,
	_IconifyTest_MethodInfo_,
	nullptr,
	nullptr,
	_IconifyTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"IconifyTest$2,IconifyTest$1,IconifyTest$1$1"
};

$Object* allocate$IconifyTest($Class* clazz) {
	return $of($alloc(IconifyTest));
}

$volatile(bool) IconifyTest::windowIconifiedIsCalled = false;
$volatile(bool) IconifyTest::frameIsRepainted = false;
$JFrame* IconifyTest::frame = nullptr;
$JButton* IconifyTest::button = nullptr;

void IconifyTest::init$() {
}

void IconifyTest::main($StringArray* args) {
	$init(IconifyTest);
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($IconifyTest$1));
	robot->waitForIdle();
	robot->delay(1000);
	$SwingUtilities::invokeAndWait($$new($IconifyTest$2));
	robot->waitForIdle();
	robot->delay(1000);
	if (!IconifyTest::windowIconifiedIsCalled) {
		$throwNew($Exception, "Test failed: window was not iconified."_s);
	}
	if (IconifyTest::frameIsRepainted) {
		$throwNew($Exception, "Test failed: frame was repainted when window was iconified."_s);
	}
}

void clinit$IconifyTest($Class* class$) {
	IconifyTest::windowIconifiedIsCalled = false;
	IconifyTest::frameIsRepainted = false;
}

IconifyTest::IconifyTest() {
}

$Class* IconifyTest::load$($String* name, bool initialize) {
	$loadClass(IconifyTest, name, initialize, &_IconifyTest_ClassInfo_, clinit$IconifyTest, allocate$IconifyTest);
	return class$;
}

$Class* IconifyTest::class$ = nullptr;