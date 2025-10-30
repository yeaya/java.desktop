#include <TestJCheckBoxMenuItem$1.h>

#include <TestJCheckBoxMenuItem.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $TestJCheckBoxMenuItem = ::TestJCheckBoxMenuItem;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$MethodInfo _TestJCheckBoxMenuItem$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestJCheckBoxMenuItem$1::*)()>(&TestJCheckBoxMenuItem$1::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestJCheckBoxMenuItem$1_EnclosingMethodInfo_ = {
	"TestJCheckBoxMenuItem",
	"createInstructionUI",
	"()V"
};

$InnerClassInfo _TestJCheckBoxMenuItem$1_InnerClassesInfo_[] = {
	{"TestJCheckBoxMenuItem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestJCheckBoxMenuItem$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestJCheckBoxMenuItem$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	nullptr,
	_TestJCheckBoxMenuItem$1_MethodInfo_,
	nullptr,
	&_TestJCheckBoxMenuItem$1_EnclosingMethodInfo_,
	_TestJCheckBoxMenuItem$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestJCheckBoxMenuItem"
};

$Object* allocate$TestJCheckBoxMenuItem$1($Class* clazz) {
	return $of($alloc(TestJCheckBoxMenuItem$1));
}

void TestJCheckBoxMenuItem$1::init$() {
	$WindowAdapter::init$();
}

void TestJCheckBoxMenuItem$1::windowClosing($WindowEvent* e) {
	$TestJCheckBoxMenuItem::disposeUI();
	$nc($TestJCheckBoxMenuItem::countDownLatch)->countDown();
}

TestJCheckBoxMenuItem$1::TestJCheckBoxMenuItem$1() {
}

$Class* TestJCheckBoxMenuItem$1::load$($String* name, bool initialize) {
	$loadClass(TestJCheckBoxMenuItem$1, name, initialize, &_TestJCheckBoxMenuItem$1_ClassInfo_, allocate$TestJCheckBoxMenuItem$1);
	return class$;
}

$Class* TestJCheckBoxMenuItem$1::class$ = nullptr;