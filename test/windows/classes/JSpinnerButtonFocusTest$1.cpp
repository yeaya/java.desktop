#include <JSpinnerButtonFocusTest$1.h>

#include <JSpinnerButtonFocusTest.h>
#include <java/awt/Robot.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

#undef VK_TAB

using $JSpinnerButtonFocusTest = ::JSpinnerButtonFocusTest;
using $Robot = ::java::awt::Robot;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$MethodInfo _JSpinnerButtonFocusTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JSpinnerButtonFocusTest$1::*)()>(&JSpinnerButtonFocusTest$1::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JSpinnerButtonFocusTest$1_EnclosingMethodInfo_ = {
	"JSpinnerButtonFocusTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _JSpinnerButtonFocusTest$1_InnerClassesInfo_[] = {
	{"JSpinnerButtonFocusTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JSpinnerButtonFocusTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"JSpinnerButtonFocusTest$1",
	"java.awt.event.FocusAdapter",
	nullptr,
	nullptr,
	_JSpinnerButtonFocusTest$1_MethodInfo_,
	nullptr,
	&_JSpinnerButtonFocusTest$1_EnclosingMethodInfo_,
	_JSpinnerButtonFocusTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JSpinnerButtonFocusTest"
};

$Object* allocate$JSpinnerButtonFocusTest$1($Class* clazz) {
	return $of($alloc(JSpinnerButtonFocusTest$1));
}

void JSpinnerButtonFocusTest$1::init$() {
	$FocusAdapter::init$();
}

void JSpinnerButtonFocusTest$1::focusGained($FocusEvent* e) {
	$FocusAdapter::focusGained(e);
	$init($JSpinnerButtonFocusTest);
	$nc($JSpinnerButtonFocusTest::robot)->keyPress($KeyEvent::VK_TAB);
	$nc($JSpinnerButtonFocusTest::robot)->keyRelease($KeyEvent::VK_TAB);
	$nc($JSpinnerButtonFocusTest::latch1)->countDown();
}

JSpinnerButtonFocusTest$1::JSpinnerButtonFocusTest$1() {
}

$Class* JSpinnerButtonFocusTest$1::load$($String* name, bool initialize) {
	$loadClass(JSpinnerButtonFocusTest$1, name, initialize, &_JSpinnerButtonFocusTest$1_ClassInfo_, allocate$JSpinnerButtonFocusTest$1);
	return class$;
}

$Class* JSpinnerButtonFocusTest$1::class$ = nullptr;