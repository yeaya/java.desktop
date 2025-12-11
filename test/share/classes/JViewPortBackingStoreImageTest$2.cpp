#include <JViewPortBackingStoreImageTest$2.h>

#include <JViewPortBackingStoreImageTest.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $JViewPortBackingStoreImageTest = ::JViewPortBackingStoreImageTest;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _JViewPortBackingStoreImageTest$2_FieldInfo_[] = {
	{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(JViewPortBackingStoreImageTest$2, val$mainFrame)},
	{}
};

$MethodInfo _JViewPortBackingStoreImageTest$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, 0, $method(static_cast<void(JViewPortBackingStoreImageTest$2::*)($JFrame*)>(&JViewPortBackingStoreImageTest$2::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JViewPortBackingStoreImageTest$2_EnclosingMethodInfo_ = {
	"JViewPortBackingStoreImageTest",
	"createUI",
	"()V"
};

$InnerClassInfo _JViewPortBackingStoreImageTest$2_InnerClassesInfo_[] = {
	{"JViewPortBackingStoreImageTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JViewPortBackingStoreImageTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"JViewPortBackingStoreImageTest$2",
	"java.awt.event.WindowAdapter",
	nullptr,
	_JViewPortBackingStoreImageTest$2_FieldInfo_,
	_JViewPortBackingStoreImageTest$2_MethodInfo_,
	nullptr,
	&_JViewPortBackingStoreImageTest$2_EnclosingMethodInfo_,
	_JViewPortBackingStoreImageTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JViewPortBackingStoreImageTest"
};

$Object* allocate$JViewPortBackingStoreImageTest$2($Class* clazz) {
	return $of($alloc(JViewPortBackingStoreImageTest$2));
}

void JViewPortBackingStoreImageTest$2::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
	$WindowAdapter::init$();
}

void JViewPortBackingStoreImageTest$2::windowClosing($WindowEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($JViewPortBackingStoreImageTest);
	$nc($JViewPortBackingStoreImageTest::countDownLatch)->countDown();
}

JViewPortBackingStoreImageTest$2::JViewPortBackingStoreImageTest$2() {
}

$Class* JViewPortBackingStoreImageTest$2::load$($String* name, bool initialize) {
	$loadClass(JViewPortBackingStoreImageTest$2, name, initialize, &_JViewPortBackingStoreImageTest$2_ClassInfo_, allocate$JViewPortBackingStoreImageTest$2);
	return class$;
}

$Class* JViewPortBackingStoreImageTest$2::class$ = nullptr;