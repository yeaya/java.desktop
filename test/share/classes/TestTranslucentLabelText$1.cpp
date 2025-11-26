#include <TestTranslucentLabelText$1.h>

#include <TestTranslucentLabelText.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $TestTranslucentLabelText = ::TestTranslucentLabelText;
using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _TestTranslucentLabelText$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestTranslucentLabelText$1::*)()>(&TestTranslucentLabelText$1::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestTranslucentLabelText$1_EnclosingMethodInfo_ = {
	"TestTranslucentLabelText",
	"doTest",
	"(Ljava/lang/Runnable;)V"
};

$InnerClassInfo _TestTranslucentLabelText$1_InnerClassesInfo_[] = {
	{"TestTranslucentLabelText$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestTranslucentLabelText$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestTranslucentLabelText$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	nullptr,
	_TestTranslucentLabelText$1_MethodInfo_,
	nullptr,
	&_TestTranslucentLabelText$1_EnclosingMethodInfo_,
	_TestTranslucentLabelText$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestTranslucentLabelText"
};

$Object* allocate$TestTranslucentLabelText$1($Class* clazz) {
	return $of($alloc(TestTranslucentLabelText$1));
}

void TestTranslucentLabelText$1::init$() {
	$WindowAdapter::init$();
}

void TestTranslucentLabelText$1::windowClosing($WindowEvent* e) {
	$nc($System::out)->println("main dialog closing"_s);
	$init($TestTranslucentLabelText);
	$TestTranslucentLabelText::testGeneratedInterrupt = false;
	$nc($TestTranslucentLabelText::frame)->dispose();
	$nc($TestTranslucentLabelText::mainThread)->interrupt();
}

TestTranslucentLabelText$1::TestTranslucentLabelText$1() {
}

$Class* TestTranslucentLabelText$1::load$($String* name, bool initialize) {
	$loadClass(TestTranslucentLabelText$1, name, initialize, &_TestTranslucentLabelText$1_ClassInfo_, allocate$TestTranslucentLabelText$1);
	return class$;
}

$Class* TestTranslucentLabelText$1::class$ = nullptr;