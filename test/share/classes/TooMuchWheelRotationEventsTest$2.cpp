#include <TooMuchWheelRotationEventsTest$2.h>

#include <TooMuchWheelRotationEventsTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $TooMuchWheelRotationEventsTest = ::TooMuchWheelRotationEventsTest;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _TooMuchWheelRotationEventsTest$2_FieldInfo_[] = {
	{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(TooMuchWheelRotationEventsTest$2, val$mainFrame)},
	{}
};

$MethodInfo _TooMuchWheelRotationEventsTest$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, 0, $method(static_cast<void(TooMuchWheelRotationEventsTest$2::*)($JFrame*)>(&TooMuchWheelRotationEventsTest$2::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TooMuchWheelRotationEventsTest$2_EnclosingMethodInfo_ = {
	"TooMuchWheelRotationEventsTest",
	"createUI",
	"()V"
};

$InnerClassInfo _TooMuchWheelRotationEventsTest$2_InnerClassesInfo_[] = {
	{"TooMuchWheelRotationEventsTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TooMuchWheelRotationEventsTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"TooMuchWheelRotationEventsTest$2",
	"java.awt.event.WindowAdapter",
	nullptr,
	_TooMuchWheelRotationEventsTest$2_FieldInfo_,
	_TooMuchWheelRotationEventsTest$2_MethodInfo_,
	nullptr,
	&_TooMuchWheelRotationEventsTest$2_EnclosingMethodInfo_,
	_TooMuchWheelRotationEventsTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TooMuchWheelRotationEventsTest"
};

$Object* allocate$TooMuchWheelRotationEventsTest$2($Class* clazz) {
	return $of($alloc(TooMuchWheelRotationEventsTest$2));
}

void TooMuchWheelRotationEventsTest$2::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
	$WindowAdapter::init$();
}

void TooMuchWheelRotationEventsTest$2::windowClosing($WindowEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($TooMuchWheelRotationEventsTest);
	$nc($TooMuchWheelRotationEventsTest::countDownLatch)->countDown();
}

TooMuchWheelRotationEventsTest$2::TooMuchWheelRotationEventsTest$2() {
}

$Class* TooMuchWheelRotationEventsTest$2::load$($String* name, bool initialize) {
	$loadClass(TooMuchWheelRotationEventsTest$2, name, initialize, &_TooMuchWheelRotationEventsTest$2_ClassInfo_, allocate$TooMuchWheelRotationEventsTest$2);
	return class$;
}

$Class* TooMuchWheelRotationEventsTest$2::class$ = nullptr;