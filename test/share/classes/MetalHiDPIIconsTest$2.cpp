#include <MetalHiDPIIconsTest$2.h>

#include <MetalHiDPIIconsTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $MetalHiDPIIconsTest = ::MetalHiDPIIconsTest;
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

$FieldInfo _MetalHiDPIIconsTest$2_FieldInfo_[] = {
	{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(MetalHiDPIIconsTest$2, val$mainFrame)},
	{}
};

$MethodInfo _MetalHiDPIIconsTest$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, 0, $method(static_cast<void(MetalHiDPIIconsTest$2::*)($JFrame*)>(&MetalHiDPIIconsTest$2::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MetalHiDPIIconsTest$2_EnclosingMethodInfo_ = {
	"MetalHiDPIIconsTest",
	"createUI",
	"()V"
};

$InnerClassInfo _MetalHiDPIIconsTest$2_InnerClassesInfo_[] = {
	{"MetalHiDPIIconsTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalHiDPIIconsTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"MetalHiDPIIconsTest$2",
	"java.awt.event.WindowAdapter",
	nullptr,
	_MetalHiDPIIconsTest$2_FieldInfo_,
	_MetalHiDPIIconsTest$2_MethodInfo_,
	nullptr,
	&_MetalHiDPIIconsTest$2_EnclosingMethodInfo_,
	_MetalHiDPIIconsTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MetalHiDPIIconsTest"
};

$Object* allocate$MetalHiDPIIconsTest$2($Class* clazz) {
	return $of($alloc(MetalHiDPIIconsTest$2));
}

void MetalHiDPIIconsTest$2::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
	$WindowAdapter::init$();
}

void MetalHiDPIIconsTest$2::windowClosing($WindowEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($MetalHiDPIIconsTest);
	$nc($MetalHiDPIIconsTest::countDownLatch)->countDown();
}

MetalHiDPIIconsTest$2::MetalHiDPIIconsTest$2() {
}

$Class* MetalHiDPIIconsTest$2::load$($String* name, bool initialize) {
	$loadClass(MetalHiDPIIconsTest$2, name, initialize, &_MetalHiDPIIconsTest$2_ClassInfo_, allocate$MetalHiDPIIconsTest$2);
	return class$;
}

$Class* MetalHiDPIIconsTest$2::class$ = nullptr;