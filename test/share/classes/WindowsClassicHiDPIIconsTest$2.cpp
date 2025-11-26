#include <WindowsClassicHiDPIIconsTest$2.h>

#include <WindowsClassicHiDPIIconsTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $WindowsClassicHiDPIIconsTest = ::WindowsClassicHiDPIIconsTest;
using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _WindowsClassicHiDPIIconsTest$2_FieldInfo_[] = {
	{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsClassicHiDPIIconsTest$2, val$mainFrame)},
	{}
};

$MethodInfo _WindowsClassicHiDPIIconsTest$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, 0, $method(static_cast<void(WindowsClassicHiDPIIconsTest$2::*)($JFrame*)>(&WindowsClassicHiDPIIconsTest$2::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsClassicHiDPIIconsTest$2_EnclosingMethodInfo_ = {
	"WindowsClassicHiDPIIconsTest",
	"createUI",
	"()V"
};

$InnerClassInfo _WindowsClassicHiDPIIconsTest$2_InnerClassesInfo_[] = {
	{"WindowsClassicHiDPIIconsTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsClassicHiDPIIconsTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"WindowsClassicHiDPIIconsTest$2",
	"java.awt.event.WindowAdapter",
	nullptr,
	_WindowsClassicHiDPIIconsTest$2_FieldInfo_,
	_WindowsClassicHiDPIIconsTest$2_MethodInfo_,
	nullptr,
	&_WindowsClassicHiDPIIconsTest$2_EnclosingMethodInfo_,
	_WindowsClassicHiDPIIconsTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WindowsClassicHiDPIIconsTest"
};

$Object* allocate$WindowsClassicHiDPIIconsTest$2($Class* clazz) {
	return $of($alloc(WindowsClassicHiDPIIconsTest$2));
}

void WindowsClassicHiDPIIconsTest$2::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
	$WindowAdapter::init$();
}

void WindowsClassicHiDPIIconsTest$2::windowClosing($WindowEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($WindowsClassicHiDPIIconsTest);
	$nc($WindowsClassicHiDPIIconsTest::countDownLatch)->countDown();
}

WindowsClassicHiDPIIconsTest$2::WindowsClassicHiDPIIconsTest$2() {
}

$Class* WindowsClassicHiDPIIconsTest$2::load$($String* name, bool initialize) {
	$loadClass(WindowsClassicHiDPIIconsTest$2, name, initialize, &_WindowsClassicHiDPIIconsTest$2_ClassInfo_, allocate$WindowsClassicHiDPIIconsTest$2);
	return class$;
}

$Class* WindowsClassicHiDPIIconsTest$2::class$ = nullptr;