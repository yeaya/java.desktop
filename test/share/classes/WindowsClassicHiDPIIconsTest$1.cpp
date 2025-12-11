#include <WindowsClassicHiDPIIconsTest$1.h>

#include <WindowsClassicHiDPIIconsTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $WindowsClassicHiDPIIconsTest = ::WindowsClassicHiDPIIconsTest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _WindowsClassicHiDPIIconsTest$1_FieldInfo_[] = {
	{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsClassicHiDPIIconsTest$1, val$mainFrame)},
	{}
};

$MethodInfo _WindowsClassicHiDPIIconsTest$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", "()V", 0, $method(static_cast<void(WindowsClassicHiDPIIconsTest$1::*)($JFrame*)>(&WindowsClassicHiDPIIconsTest$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsClassicHiDPIIconsTest$1_EnclosingMethodInfo_ = {
	"WindowsClassicHiDPIIconsTest",
	"createUI",
	"()V"
};

$InnerClassInfo _WindowsClassicHiDPIIconsTest$1_InnerClassesInfo_[] = {
	{"WindowsClassicHiDPIIconsTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsClassicHiDPIIconsTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"WindowsClassicHiDPIIconsTest$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_WindowsClassicHiDPIIconsTest$1_FieldInfo_,
	_WindowsClassicHiDPIIconsTest$1_MethodInfo_,
	nullptr,
	&_WindowsClassicHiDPIIconsTest$1_EnclosingMethodInfo_,
	_WindowsClassicHiDPIIconsTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WindowsClassicHiDPIIconsTest"
};

$Object* allocate$WindowsClassicHiDPIIconsTest$1($Class* clazz) {
	return $of($alloc(WindowsClassicHiDPIIconsTest$1));
}

void WindowsClassicHiDPIIconsTest$1::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
}

void WindowsClassicHiDPIIconsTest$1::actionPerformed($ActionEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($WindowsClassicHiDPIIconsTest);
	$nc($WindowsClassicHiDPIIconsTest::countDownLatch)->countDown();
}

WindowsClassicHiDPIIconsTest$1::WindowsClassicHiDPIIconsTest$1() {
}

$Class* WindowsClassicHiDPIIconsTest$1::load$($String* name, bool initialize) {
	$loadClass(WindowsClassicHiDPIIconsTest$1, name, initialize, &_WindowsClassicHiDPIIconsTest$1_ClassInfo_, allocate$WindowsClassicHiDPIIconsTest$1);
	return class$;
}

$Class* WindowsClassicHiDPIIconsTest$1::class$ = nullptr;