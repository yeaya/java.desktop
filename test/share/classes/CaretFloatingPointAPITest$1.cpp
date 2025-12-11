#include <CaretFloatingPointAPITest$1.h>

#include <CaretFloatingPointAPITest.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $CaretFloatingPointAPITest = ::CaretFloatingPointAPITest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _CaretFloatingPointAPITest$1_FieldInfo_[] = {
	{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(CaretFloatingPointAPITest$1, val$mainFrame)},
	{}
};

$MethodInfo _CaretFloatingPointAPITest$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", "()V", 0, $method(static_cast<void(CaretFloatingPointAPITest$1::*)($JFrame*)>(&CaretFloatingPointAPITest$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CaretFloatingPointAPITest$1_EnclosingMethodInfo_ = {
	"CaretFloatingPointAPITest",
	"createUI",
	"()V"
};

$InnerClassInfo _CaretFloatingPointAPITest$1_InnerClassesInfo_[] = {
	{"CaretFloatingPointAPITest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CaretFloatingPointAPITest$1_ClassInfo_ = {
	$ACC_SUPER,
	"CaretFloatingPointAPITest$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_CaretFloatingPointAPITest$1_FieldInfo_,
	_CaretFloatingPointAPITest$1_MethodInfo_,
	nullptr,
	&_CaretFloatingPointAPITest$1_EnclosingMethodInfo_,
	_CaretFloatingPointAPITest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CaretFloatingPointAPITest"
};

$Object* allocate$CaretFloatingPointAPITest$1($Class* clazz) {
	return $of($alloc(CaretFloatingPointAPITest$1));
}

void CaretFloatingPointAPITest$1::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
}

void CaretFloatingPointAPITest$1::actionPerformed($ActionEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($CaretFloatingPointAPITest);
	$nc($CaretFloatingPointAPITest::countDownLatch)->countDown();
}

CaretFloatingPointAPITest$1::CaretFloatingPointAPITest$1() {
}

$Class* CaretFloatingPointAPITest$1::load$($String* name, bool initialize) {
	$loadClass(CaretFloatingPointAPITest$1, name, initialize, &_CaretFloatingPointAPITest$1_ClassInfo_, allocate$CaretFloatingPointAPITest$1);
	return class$;
}

$Class* CaretFloatingPointAPITest$1::class$ = nullptr;