#include <TooMuchWheelRotationEventsTest$1.h>

#include <TooMuchWheelRotationEventsTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $TooMuchWheelRotationEventsTest = ::TooMuchWheelRotationEventsTest;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _TooMuchWheelRotationEventsTest$1_FieldInfo_[] = {
	{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(TooMuchWheelRotationEventsTest$1, val$mainFrame)},
	{}
};

$MethodInfo _TooMuchWheelRotationEventsTest$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", "()V", 0, $method(static_cast<void(TooMuchWheelRotationEventsTest$1::*)($JFrame*)>(&TooMuchWheelRotationEventsTest$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TooMuchWheelRotationEventsTest$1_EnclosingMethodInfo_ = {
	"TooMuchWheelRotationEventsTest",
	"createUI",
	"()V"
};

$InnerClassInfo _TooMuchWheelRotationEventsTest$1_InnerClassesInfo_[] = {
	{"TooMuchWheelRotationEventsTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TooMuchWheelRotationEventsTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"TooMuchWheelRotationEventsTest$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_TooMuchWheelRotationEventsTest$1_FieldInfo_,
	_TooMuchWheelRotationEventsTest$1_MethodInfo_,
	nullptr,
	&_TooMuchWheelRotationEventsTest$1_EnclosingMethodInfo_,
	_TooMuchWheelRotationEventsTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TooMuchWheelRotationEventsTest"
};

$Object* allocate$TooMuchWheelRotationEventsTest$1($Class* clazz) {
	return $of($alloc(TooMuchWheelRotationEventsTest$1));
}

void TooMuchWheelRotationEventsTest$1::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
}

void TooMuchWheelRotationEventsTest$1::actionPerformed($ActionEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($TooMuchWheelRotationEventsTest);
	$nc($TooMuchWheelRotationEventsTest::countDownLatch)->countDown();
}

TooMuchWheelRotationEventsTest$1::TooMuchWheelRotationEventsTest$1() {
}

$Class* TooMuchWheelRotationEventsTest$1::load$($String* name, bool initialize) {
	$loadClass(TooMuchWheelRotationEventsTest$1, name, initialize, &_TooMuchWheelRotationEventsTest$1_ClassInfo_, allocate$TooMuchWheelRotationEventsTest$1);
	return class$;
}

$Class* TooMuchWheelRotationEventsTest$1::class$ = nullptr;