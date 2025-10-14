#include <RepaintManagerFPUIScaleTest$2.h>

#include <RepaintManagerFPUIScaleTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
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

using $RepaintManagerFPUIScaleTest = ::RepaintManagerFPUIScaleTest;
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

$FieldInfo _RepaintManagerFPUIScaleTest$2_FieldInfo_[] = {
	{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManagerFPUIScaleTest$2, val$mainFrame)},
	{}
};

$MethodInfo _RepaintManagerFPUIScaleTest$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, 0, $method(static_cast<void(RepaintManagerFPUIScaleTest$2::*)($JFrame*)>(&RepaintManagerFPUIScaleTest$2::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RepaintManagerFPUIScaleTest$2_EnclosingMethodInfo_ = {
	"RepaintManagerFPUIScaleTest",
	"createUI",
	"()V"
};

$InnerClassInfo _RepaintManagerFPUIScaleTest$2_InnerClassesInfo_[] = {
	{"RepaintManagerFPUIScaleTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RepaintManagerFPUIScaleTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"RepaintManagerFPUIScaleTest$2",
	"java.awt.event.WindowAdapter",
	nullptr,
	_RepaintManagerFPUIScaleTest$2_FieldInfo_,
	_RepaintManagerFPUIScaleTest$2_MethodInfo_,
	nullptr,
	&_RepaintManagerFPUIScaleTest$2_EnclosingMethodInfo_,
	_RepaintManagerFPUIScaleTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RepaintManagerFPUIScaleTest"
};

$Object* allocate$RepaintManagerFPUIScaleTest$2($Class* clazz) {
	return $of($alloc(RepaintManagerFPUIScaleTest$2));
}

void RepaintManagerFPUIScaleTest$2::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
	$WindowAdapter::init$();
}

void RepaintManagerFPUIScaleTest$2::windowClosing($WindowEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($RepaintManagerFPUIScaleTest);
	$nc($RepaintManagerFPUIScaleTest::countDownLatch)->countDown();
}

RepaintManagerFPUIScaleTest$2::RepaintManagerFPUIScaleTest$2() {
}

$Class* RepaintManagerFPUIScaleTest$2::load$($String* name, bool initialize) {
	$loadClass(RepaintManagerFPUIScaleTest$2, name, initialize, &_RepaintManagerFPUIScaleTest$2_ClassInfo_, allocate$RepaintManagerFPUIScaleTest$2);
	return class$;
}

$Class* RepaintManagerFPUIScaleTest$2::class$ = nullptr;