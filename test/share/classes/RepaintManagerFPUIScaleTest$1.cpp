#include <RepaintManagerFPUIScaleTest$1.h>

#include <RepaintManagerFPUIScaleTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $RepaintManagerFPUIScaleTest = ::RepaintManagerFPUIScaleTest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _RepaintManagerFPUIScaleTest$1_FieldInfo_[] = {
	{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManagerFPUIScaleTest$1, val$mainFrame)},
	{}
};

$MethodInfo _RepaintManagerFPUIScaleTest$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", "()V", 0, $method(static_cast<void(RepaintManagerFPUIScaleTest$1::*)($JFrame*)>(&RepaintManagerFPUIScaleTest$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RepaintManagerFPUIScaleTest$1_EnclosingMethodInfo_ = {
	"RepaintManagerFPUIScaleTest",
	"createUI",
	"()V"
};

$InnerClassInfo _RepaintManagerFPUIScaleTest$1_InnerClassesInfo_[] = {
	{"RepaintManagerFPUIScaleTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RepaintManagerFPUIScaleTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"RepaintManagerFPUIScaleTest$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_RepaintManagerFPUIScaleTest$1_FieldInfo_,
	_RepaintManagerFPUIScaleTest$1_MethodInfo_,
	nullptr,
	&_RepaintManagerFPUIScaleTest$1_EnclosingMethodInfo_,
	_RepaintManagerFPUIScaleTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RepaintManagerFPUIScaleTest"
};

$Object* allocate$RepaintManagerFPUIScaleTest$1($Class* clazz) {
	return $of($alloc(RepaintManagerFPUIScaleTest$1));
}

void RepaintManagerFPUIScaleTest$1::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
}

void RepaintManagerFPUIScaleTest$1::actionPerformed($ActionEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($RepaintManagerFPUIScaleTest);
	$nc($RepaintManagerFPUIScaleTest::countDownLatch)->countDown();
}

RepaintManagerFPUIScaleTest$1::RepaintManagerFPUIScaleTest$1() {
}

$Class* RepaintManagerFPUIScaleTest$1::load$($String* name, bool initialize) {
	$loadClass(RepaintManagerFPUIScaleTest$1, name, initialize, &_RepaintManagerFPUIScaleTest$1_ClassInfo_, allocate$RepaintManagerFPUIScaleTest$1);
	return class$;
}

$Class* RepaintManagerFPUIScaleTest$1::class$ = nullptr;