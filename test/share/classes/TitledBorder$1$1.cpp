#include <TitledBorder$1$1.h>

#include <TitledBorder$1.h>
#include <TitledBorder.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $TitledBorder = ::TitledBorder;
using $TitledBorder$1 = ::TitledBorder$1;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _TitledBorder$1$1_FieldInfo_[] = {
	{"this$1", "LTitledBorder$1;", nullptr, $FINAL | $SYNTHETIC, $field(TitledBorder$1$1, this$1)},
	{}
};

$MethodInfo _TitledBorder$1$1_MethodInfo_[] = {
	{"<init>", "(LTitledBorder$1;)V", nullptr, 0, $method(static_cast<void(TitledBorder$1$1::*)($TitledBorder$1*)>(&TitledBorder$1$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TitledBorder$1$1_EnclosingMethodInfo_ = {
	"TitledBorder$1",
	"run",
	"()V"
};

$InnerClassInfo _TitledBorder$1$1_InnerClassesInfo_[] = {
	{"TitledBorder$1", nullptr, nullptr, 0},
	{"TitledBorder$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TitledBorder$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"TitledBorder$1$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_TitledBorder$1$1_FieldInfo_,
	_TitledBorder$1$1_MethodInfo_,
	nullptr,
	&_TitledBorder$1$1_EnclosingMethodInfo_,
	_TitledBorder$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TitledBorder"
};

$Object* allocate$TitledBorder$1$1($Class* clazz) {
	return $of($alloc(TitledBorder$1$1));
}

void TitledBorder$1$1::init$($TitledBorder$1* this$1) {
	$set(this, this$1, this$1);
}

void TitledBorder$1$1::actionPerformed($ActionEvent* e) {
	$nc($System::out)->println("Fail Button pressed!"_s);
	$nc(this->this$1->this$0)->testResult = false;
	$init($TitledBorder);
	$nc($TitledBorder::mainFrame)->dispose();
	$nc($nc(this->this$1->this$0)->latch)->countDown();
}

TitledBorder$1$1::TitledBorder$1$1() {
}

$Class* TitledBorder$1$1::load$($String* name, bool initialize) {
	$loadClass(TitledBorder$1$1, name, initialize, &_TitledBorder$1$1_ClassInfo_, allocate$TitledBorder$1$1);
	return class$;
}

$Class* TitledBorder$1$1::class$ = nullptr;