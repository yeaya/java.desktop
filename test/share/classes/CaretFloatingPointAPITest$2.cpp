#include <CaretFloatingPointAPITest$2.h>

#include <CaretFloatingPointAPITest.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $CaretFloatingPointAPITest = ::CaretFloatingPointAPITest;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _CaretFloatingPointAPITest$2_FieldInfo_[] = {
	{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(CaretFloatingPointAPITest$2, val$mainFrame)},
	{}
};

$MethodInfo _CaretFloatingPointAPITest$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, 0, $method(static_cast<void(CaretFloatingPointAPITest$2::*)($JFrame*)>(&CaretFloatingPointAPITest$2::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CaretFloatingPointAPITest$2_EnclosingMethodInfo_ = {
	"CaretFloatingPointAPITest",
	"createUI",
	"()V"
};

$InnerClassInfo _CaretFloatingPointAPITest$2_InnerClassesInfo_[] = {
	{"CaretFloatingPointAPITest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CaretFloatingPointAPITest$2_ClassInfo_ = {
	$ACC_SUPER,
	"CaretFloatingPointAPITest$2",
	"java.awt.event.WindowAdapter",
	nullptr,
	_CaretFloatingPointAPITest$2_FieldInfo_,
	_CaretFloatingPointAPITest$2_MethodInfo_,
	nullptr,
	&_CaretFloatingPointAPITest$2_EnclosingMethodInfo_,
	_CaretFloatingPointAPITest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CaretFloatingPointAPITest"
};

$Object* allocate$CaretFloatingPointAPITest$2($Class* clazz) {
	return $of($alloc(CaretFloatingPointAPITest$2));
}

void CaretFloatingPointAPITest$2::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
	$WindowAdapter::init$();
}

void CaretFloatingPointAPITest$2::windowClosing($WindowEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($CaretFloatingPointAPITest);
	$nc($CaretFloatingPointAPITest::countDownLatch)->countDown();
}

CaretFloatingPointAPITest$2::CaretFloatingPointAPITest$2() {
}

$Class* CaretFloatingPointAPITest$2::load$($String* name, bool initialize) {
	$loadClass(CaretFloatingPointAPITest$2, name, initialize, &_CaretFloatingPointAPITest$2_ClassInfo_, allocate$CaretFloatingPointAPITest$2);
	return class$;
}

$Class* CaretFloatingPointAPITest$2::class$ = nullptr;