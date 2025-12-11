#include <MotifHiDPIIconsTest$2.h>

#include <MotifHiDPIIconsTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $MotifHiDPIIconsTest = ::MotifHiDPIIconsTest;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _MotifHiDPIIconsTest$2_FieldInfo_[] = {
	{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(MotifHiDPIIconsTest$2, val$mainFrame)},
	{}
};

$MethodInfo _MotifHiDPIIconsTest$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, 0, $method(static_cast<void(MotifHiDPIIconsTest$2::*)($JFrame*)>(&MotifHiDPIIconsTest$2::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifHiDPIIconsTest$2_EnclosingMethodInfo_ = {
	"MotifHiDPIIconsTest",
	"createUI",
	"()V"
};

$InnerClassInfo _MotifHiDPIIconsTest$2_InnerClassesInfo_[] = {
	{"MotifHiDPIIconsTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifHiDPIIconsTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"MotifHiDPIIconsTest$2",
	"java.awt.event.WindowAdapter",
	nullptr,
	_MotifHiDPIIconsTest$2_FieldInfo_,
	_MotifHiDPIIconsTest$2_MethodInfo_,
	nullptr,
	&_MotifHiDPIIconsTest$2_EnclosingMethodInfo_,
	_MotifHiDPIIconsTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MotifHiDPIIconsTest"
};

$Object* allocate$MotifHiDPIIconsTest$2($Class* clazz) {
	return $of($alloc(MotifHiDPIIconsTest$2));
}

void MotifHiDPIIconsTest$2::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
	$WindowAdapter::init$();
}

void MotifHiDPIIconsTest$2::windowClosing($WindowEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($MotifHiDPIIconsTest);
	$nc($MotifHiDPIIconsTest::countDownLatch)->countDown();
}

MotifHiDPIIconsTest$2::MotifHiDPIIconsTest$2() {
}

$Class* MotifHiDPIIconsTest$2::load$($String* name, bool initialize) {
	$loadClass(MotifHiDPIIconsTest$2, name, initialize, &_MotifHiDPIIconsTest$2_ClassInfo_, allocate$MotifHiDPIIconsTest$2);
	return class$;
}

$Class* MotifHiDPIIconsTest$2::class$ = nullptr;