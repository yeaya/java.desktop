#include <TestCCEOnEditEvent$2.h>

#include <TestCCEOnEditEvent.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $TestCCEOnEditEvent = ::TestCCEOnEditEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _TestCCEOnEditEvent$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestCCEOnEditEvent$2::*)()>(&TestCCEOnEditEvent$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestCCEOnEditEvent$2_EnclosingMethodInfo_ = {
	"TestCCEOnEditEvent",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TestCCEOnEditEvent$2_InnerClassesInfo_[] = {
	{"TestCCEOnEditEvent$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestCCEOnEditEvent$2_ClassInfo_ = {
	$ACC_SUPER,
	"TestCCEOnEditEvent$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TestCCEOnEditEvent$2_MethodInfo_,
	nullptr,
	&_TestCCEOnEditEvent$2_EnclosingMethodInfo_,
	_TestCCEOnEditEvent$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestCCEOnEditEvent"
};

$Object* allocate$TestCCEOnEditEvent$2($Class* clazz) {
	return $of($alloc(TestCCEOnEditEvent$2));
}

void TestCCEOnEditEvent$2::init$() {
}

void TestCCEOnEditEvent$2::run() {
	$init($TestCCEOnEditEvent);
	$nc($TestCCEOnEditEvent::frame)->dispose();
}

TestCCEOnEditEvent$2::TestCCEOnEditEvent$2() {
}

$Class* TestCCEOnEditEvent$2::load$($String* name, bool initialize) {
	$loadClass(TestCCEOnEditEvent$2, name, initialize, &_TestCCEOnEditEvent$2_ClassInfo_, allocate$TestCCEOnEditEvent$2);
	return class$;
}

$Class* TestCCEOnEditEvent$2::class$ = nullptr;