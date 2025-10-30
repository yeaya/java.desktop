#include <MetalHiDPIIconsTest$1.h>

#include <MetalHiDPIIconsTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $MetalHiDPIIconsTest = ::MetalHiDPIIconsTest;
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

$FieldInfo _MetalHiDPIIconsTest$1_FieldInfo_[] = {
	{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(MetalHiDPIIconsTest$1, val$mainFrame)},
	{}
};

$MethodInfo _MetalHiDPIIconsTest$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", "()V", 0, $method(static_cast<void(MetalHiDPIIconsTest$1::*)($JFrame*)>(&MetalHiDPIIconsTest$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MetalHiDPIIconsTest$1_EnclosingMethodInfo_ = {
	"MetalHiDPIIconsTest",
	"createUI",
	"()V"
};

$InnerClassInfo _MetalHiDPIIconsTest$1_InnerClassesInfo_[] = {
	{"MetalHiDPIIconsTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalHiDPIIconsTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"MetalHiDPIIconsTest$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_MetalHiDPIIconsTest$1_FieldInfo_,
	_MetalHiDPIIconsTest$1_MethodInfo_,
	nullptr,
	&_MetalHiDPIIconsTest$1_EnclosingMethodInfo_,
	_MetalHiDPIIconsTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MetalHiDPIIconsTest"
};

$Object* allocate$MetalHiDPIIconsTest$1($Class* clazz) {
	return $of($alloc(MetalHiDPIIconsTest$1));
}

void MetalHiDPIIconsTest$1::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
}

void MetalHiDPIIconsTest$1::actionPerformed($ActionEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($MetalHiDPIIconsTest);
	$nc($MetalHiDPIIconsTest::countDownLatch)->countDown();
}

MetalHiDPIIconsTest$1::MetalHiDPIIconsTest$1() {
}

$Class* MetalHiDPIIconsTest$1::load$($String* name, bool initialize) {
	$loadClass(MetalHiDPIIconsTest$1, name, initialize, &_MetalHiDPIIconsTest$1_ClassInfo_, allocate$MetalHiDPIIconsTest$1);
	return class$;
}

$Class* MetalHiDPIIconsTest$1::class$ = nullptr;