#include <TestJSpinnerPressUnpress$1.h>

#include <TestJSpinnerPressUnpress.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $TestJSpinnerPressUnpress = ::TestJSpinnerPressUnpress;
using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _TestJSpinnerPressUnpress$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestJSpinnerPressUnpress$1::*)()>(&TestJSpinnerPressUnpress$1::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestJSpinnerPressUnpress$1_EnclosingMethodInfo_ = {
	"TestJSpinnerPressUnpress",
	"createUI",
	"()V"
};

$InnerClassInfo _TestJSpinnerPressUnpress$1_InnerClassesInfo_[] = {
	{"TestJSpinnerPressUnpress$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestJSpinnerPressUnpress$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestJSpinnerPressUnpress$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	nullptr,
	_TestJSpinnerPressUnpress$1_MethodInfo_,
	nullptr,
	&_TestJSpinnerPressUnpress$1_EnclosingMethodInfo_,
	_TestJSpinnerPressUnpress$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestJSpinnerPressUnpress"
};

$Object* allocate$TestJSpinnerPressUnpress$1($Class* clazz) {
	return $of($alloc(TestJSpinnerPressUnpress$1));
}

void TestJSpinnerPressUnpress$1::init$() {
	$WindowAdapter::init$();
}

void TestJSpinnerPressUnpress$1::windowClosing($WindowEvent* e) {
	$init($TestJSpinnerPressUnpress);
	$nc($TestJSpinnerPressUnpress::mainFrame)->dispose();
	$nc($TestJSpinnerPressUnpress::countDownLatch)->countDown();
}

TestJSpinnerPressUnpress$1::TestJSpinnerPressUnpress$1() {
}

$Class* TestJSpinnerPressUnpress$1::load$($String* name, bool initialize) {
	$loadClass(TestJSpinnerPressUnpress$1, name, initialize, &_TestJSpinnerPressUnpress$1_ClassInfo_, allocate$TestJSpinnerPressUnpress$1);
	return class$;
}

$Class* TestJSpinnerPressUnpress$1::class$ = nullptr;