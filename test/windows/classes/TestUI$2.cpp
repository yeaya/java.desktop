#include <TestUI$2.h>

#include <TestUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $TestUI = ::TestUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _TestUI$2_FieldInfo_[] = {
	{"this$0", "LTestUI;", nullptr, $FINAL | $SYNTHETIC, $field(TestUI$2, this$0)},
	{}
};

$MethodInfo _TestUI$2_MethodInfo_[] = {
	{"<init>", "(LTestUI;)V", nullptr, 0, $method(static_cast<void(TestUI$2::*)($TestUI*)>(&TestUI$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestUI$2_EnclosingMethodInfo_ = {
	"TestUI",
	"createUI",
	"()V"
};

$InnerClassInfo _TestUI$2_InnerClassesInfo_[] = {
	{"TestUI$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"TestUI$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_TestUI$2_FieldInfo_,
	_TestUI$2_MethodInfo_,
	nullptr,
	&_TestUI$2_EnclosingMethodInfo_,
	_TestUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestUI"
};

$Object* allocate$TestUI$2($Class* clazz) {
	return $of($alloc(TestUI$2));
}

void TestUI$2::init$($TestUI* this$0) {
	$set(this, this$0, this$0);
}

void TestUI$2::actionPerformed($ActionEvent* e) {
	$init($System);
	$nc($System::out)->println("Fail Button pressed!"_s);
	this->this$0->testResult = false;
	$nc(this->this$0->latch)->countDown();
}

TestUI$2::TestUI$2() {
}

$Class* TestUI$2::load$($String* name, bool initialize) {
	$loadClass(TestUI$2, name, initialize, &_TestUI$2_ClassInfo_, allocate$TestUI$2);
	return class$;
}

$Class* TestUI$2::class$ = nullptr;