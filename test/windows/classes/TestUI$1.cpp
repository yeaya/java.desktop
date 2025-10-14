#include <TestUI$1.h>

#include <TestUI.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $TestUI = ::TestUI;
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

$FieldInfo _TestUI$1_FieldInfo_[] = {
	{"this$0", "LTestUI;", nullptr, $FINAL | $SYNTHETIC, $field(TestUI$1, this$0)},
	{}
};

$MethodInfo _TestUI$1_MethodInfo_[] = {
	{"<init>", "(LTestUI;)V", nullptr, 0, $method(static_cast<void(TestUI$1::*)($TestUI*)>(&TestUI$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestUI$1_EnclosingMethodInfo_ = {
	"TestUI",
	"createUI",
	"()V"
};

$InnerClassInfo _TestUI$1_InnerClassesInfo_[] = {
	{"TestUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestUI$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_TestUI$1_FieldInfo_,
	_TestUI$1_MethodInfo_,
	nullptr,
	&_TestUI$1_EnclosingMethodInfo_,
	_TestUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestUI"
};

$Object* allocate$TestUI$1($Class* clazz) {
	return $of($alloc(TestUI$1));
}

void TestUI$1::init$($TestUI* this$0) {
	$set(this, this$0, this$0);
}

void TestUI$1::actionPerformed($ActionEvent* e) {
	this->this$0->testResult = false;
	$init($TestUI);
	$nc($TestUI::mainFrame)->dispose();
	$nc(this->this$0->latch)->countDown();
}

TestUI$1::TestUI$1() {
}

$Class* TestUI$1::load$($String* name, bool initialize) {
	$loadClass(TestUI$1, name, initialize, &_TestUI$1_ClassInfo_, allocate$TestUI$1);
	return class$;
}

$Class* TestUI$1::class$ = nullptr;