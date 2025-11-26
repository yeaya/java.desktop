#include <TestJTextPaneHTMLRendering$1.h>

#include <TestJTextPaneHTMLRendering.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $TestJTextPaneHTMLRendering = ::TestJTextPaneHTMLRendering;
using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _TestJTextPaneHTMLRendering$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestJTextPaneHTMLRendering$1::*)()>(&TestJTextPaneHTMLRendering$1::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestJTextPaneHTMLRendering$1_EnclosingMethodInfo_ = {
	"TestJTextPaneHTMLRendering",
	"createUI",
	"()V"
};

$InnerClassInfo _TestJTextPaneHTMLRendering$1_InnerClassesInfo_[] = {
	{"TestJTextPaneHTMLRendering$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestJTextPaneHTMLRendering$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestJTextPaneHTMLRendering$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	nullptr,
	_TestJTextPaneHTMLRendering$1_MethodInfo_,
	nullptr,
	&_TestJTextPaneHTMLRendering$1_EnclosingMethodInfo_,
	_TestJTextPaneHTMLRendering$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestJTextPaneHTMLRendering"
};

$Object* allocate$TestJTextPaneHTMLRendering$1($Class* clazz) {
	return $of($alloc(TestJTextPaneHTMLRendering$1));
}

void TestJTextPaneHTMLRendering$1::init$() {
	$WindowAdapter::init$();
}

void TestJTextPaneHTMLRendering$1::windowClosing($WindowEvent* e) {
	$init($TestJTextPaneHTMLRendering);
	$nc($TestJTextPaneHTMLRendering::mainFrame)->dispose();
	$nc($TestJTextPaneHTMLRendering::countDownLatch)->countDown();
}

TestJTextPaneHTMLRendering$1::TestJTextPaneHTMLRendering$1() {
}

$Class* TestJTextPaneHTMLRendering$1::load$($String* name, bool initialize) {
	$loadClass(TestJTextPaneHTMLRendering$1, name, initialize, &_TestJTextPaneHTMLRendering$1_ClassInfo_, allocate$TestJTextPaneHTMLRendering$1);
	return class$;
}

$Class* TestJTextPaneHTMLRendering$1::class$ = nullptr;