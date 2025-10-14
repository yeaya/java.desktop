#include <MotifHiDPIIconsTest$1.h>

#include <MotifHiDPIIconsTest.h>
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

using $MotifHiDPIIconsTest = ::MotifHiDPIIconsTest;
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

$FieldInfo _MotifHiDPIIconsTest$1_FieldInfo_[] = {
	{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(MotifHiDPIIconsTest$1, val$mainFrame)},
	{}
};

$MethodInfo _MotifHiDPIIconsTest$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", "()V", 0, $method(static_cast<void(MotifHiDPIIconsTest$1::*)($JFrame*)>(&MotifHiDPIIconsTest$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifHiDPIIconsTest$1_EnclosingMethodInfo_ = {
	"MotifHiDPIIconsTest",
	"createUI",
	"()V"
};

$InnerClassInfo _MotifHiDPIIconsTest$1_InnerClassesInfo_[] = {
	{"MotifHiDPIIconsTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifHiDPIIconsTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"MotifHiDPIIconsTest$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_MotifHiDPIIconsTest$1_FieldInfo_,
	_MotifHiDPIIconsTest$1_MethodInfo_,
	nullptr,
	&_MotifHiDPIIconsTest$1_EnclosingMethodInfo_,
	_MotifHiDPIIconsTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MotifHiDPIIconsTest"
};

$Object* allocate$MotifHiDPIIconsTest$1($Class* clazz) {
	return $of($alloc(MotifHiDPIIconsTest$1));
}

void MotifHiDPIIconsTest$1::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
}

void MotifHiDPIIconsTest$1::actionPerformed($ActionEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($MotifHiDPIIconsTest);
	$nc($MotifHiDPIIconsTest::countDownLatch)->countDown();
}

MotifHiDPIIconsTest$1::MotifHiDPIIconsTest$1() {
}

$Class* MotifHiDPIIconsTest$1::load$($String* name, bool initialize) {
	$loadClass(MotifHiDPIIconsTest$1, name, initialize, &_MotifHiDPIIconsTest$1_ClassInfo_, allocate$MotifHiDPIIconsTest$1);
	return class$;
}

$Class* MotifHiDPIIconsTest$1::class$ = nullptr;