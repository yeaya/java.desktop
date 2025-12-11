#include <bug4760494$RobotThread.h>

#include <bug4760494.h>
#include <java/awt/Robot.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/InterruptedException.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef VK_T

using $bug4760494 = ::bug4760494;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPopupMenu = ::javax::swing::JPopupMenu;

$MethodInfo _bug4760494$RobotThread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4760494$RobotThread::*)()>(&bug4760494$RobotThread::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug4760494$RobotThread_InnerClassesInfo_[] = {
	{"bug4760494$RobotThread", "bug4760494", "RobotThread", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _bug4760494$RobotThread_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4760494$RobotThread",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4760494$RobotThread_MethodInfo_,
	nullptr,
	nullptr,
	_bug4760494$RobotThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4760494"
};

$Object* allocate$bug4760494$RobotThread($Class* clazz) {
	return $of($alloc(bug4760494$RobotThread));
}

void bug4760494$RobotThread::init$() {
}

void bug4760494$RobotThread::run() {
	$init($bug4760494);
	$nc($bug4760494::robot)->setAutoDelay(500);
	$nc($bug4760494::robot)->waitForIdle();
	$nc($bug4760494::robot)->mouseMove(250, 250);
	$nc($bug4760494::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	$nc($bug4760494::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	$nc($bug4760494::robot)->waitForIdle();
	try {
		$Thread::sleep(2000);
	} catch ($InterruptedException& e) {
	}
	while (!$nc($bug4760494::popup)->isVisible()) {
		try {
			$Thread::sleep(2000);
		} catch ($InterruptedException& e) {
		}
	}
	$nc($bug4760494::robot)->keyPress($KeyEvent::VK_T);
	$nc($bug4760494::robot)->keyRelease($KeyEvent::VK_T);
	$nc($bug4760494::robot)->waitForIdle();
	$bug4760494::pressed = true;
}

bug4760494$RobotThread::bug4760494$RobotThread() {
}

$Class* bug4760494$RobotThread::load$($String* name, bool initialize) {
	$loadClass(bug4760494$RobotThread, name, initialize, &_bug4760494$RobotThread_ClassInfo_, allocate$bug4760494$RobotThread);
	return class$;
}

$Class* bug4760494$RobotThread::class$ = nullptr;