#include <bug6889007.h>

#include <bug6889007$1.h>
#include <bug6889007$MyTableHeaderUI.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6889007$1 = ::bug6889007$1;
using $bug6889007$MyTableHeaderUI = ::bug6889007$MyTableHeaderUI;
using $Component = ::java::awt::Component;
using $Frame = ::java::awt::Frame;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug6889007_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6889007::*)()>(&bug6889007::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6889007::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6889007_InnerClassesInfo_[] = {
	{"bug6889007$MyTableHeaderUI", "bug6889007", "MyTableHeaderUI", $STATIC},
	{"bug6889007$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6889007_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6889007",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6889007_MethodInfo_,
	nullptr,
	nullptr,
	_bug6889007_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6889007$MyTableHeaderUI,bug6889007$1"
};

$Object* allocate$bug6889007($Class* clazz) {
	return $of($alloc(bug6889007));
}

void bug6889007::init$() {
}

void bug6889007::main($StringArray* args) {
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(20);
	$var($JFrame, frame, $new($JFrame));
	frame->setUndecorated(true);
	$SwingUtilities::invokeAndWait($$new($bug6889007$1, frame));
	robot->waitForIdle();
	$var($Point, point, frame->getLocationOnScreen());
	int32_t shift = 10;
	int32_t x = $nc(point)->x;
	int32_t y = point->y + frame->getHeight() / 2;
	for (int32_t i = -shift; i < frame->getWidth() + 2 * shift; ++i) {
		robot->mouseMove(x++, y);
	}
	robot->waitForIdle();
	if ($bug6889007$MyTableHeaderUI::getTestValue() != 9) {
		$throwNew($RuntimeException, $$str({"Unexpected test number "_s, $$str($bug6889007$MyTableHeaderUI::getTestValue())}));
	}
	$init($System);
	$nc($System::out)->println("ok"_s);
}

bug6889007::bug6889007() {
}

$Class* bug6889007::load$($String* name, bool initialize) {
	$loadClass(bug6889007, name, initialize, &_bug6889007_ClassInfo_, allocate$bug6889007);
	return class$;
}

$Class* bug6889007::class$ = nullptr;