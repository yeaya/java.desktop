#include <JViewPortBackingStoreImageTest$1.h>

#include <JViewPortBackingStoreImageTest.h>
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

using $JViewPortBackingStoreImageTest = ::JViewPortBackingStoreImageTest;
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

$FieldInfo _JViewPortBackingStoreImageTest$1_FieldInfo_[] = {
	{"val$mainFrame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(JViewPortBackingStoreImageTest$1, val$mainFrame)},
	{}
};

$MethodInfo _JViewPortBackingStoreImageTest$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", "()V", 0, $method(static_cast<void(JViewPortBackingStoreImageTest$1::*)($JFrame*)>(&JViewPortBackingStoreImageTest$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JViewPortBackingStoreImageTest$1_EnclosingMethodInfo_ = {
	"JViewPortBackingStoreImageTest",
	"createUI",
	"()V"
};

$InnerClassInfo _JViewPortBackingStoreImageTest$1_InnerClassesInfo_[] = {
	{"JViewPortBackingStoreImageTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JViewPortBackingStoreImageTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"JViewPortBackingStoreImageTest$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_JViewPortBackingStoreImageTest$1_FieldInfo_,
	_JViewPortBackingStoreImageTest$1_MethodInfo_,
	nullptr,
	&_JViewPortBackingStoreImageTest$1_EnclosingMethodInfo_,
	_JViewPortBackingStoreImageTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JViewPortBackingStoreImageTest"
};

$Object* allocate$JViewPortBackingStoreImageTest$1($Class* clazz) {
	return $of($alloc(JViewPortBackingStoreImageTest$1));
}

void JViewPortBackingStoreImageTest$1::init$($JFrame* val$mainFrame) {
	$set(this, val$mainFrame, val$mainFrame);
}

void JViewPortBackingStoreImageTest$1::actionPerformed($ActionEvent* e) {
	$nc(this->val$mainFrame)->dispose();
	$init($JViewPortBackingStoreImageTest);
	$nc($JViewPortBackingStoreImageTest::countDownLatch)->countDown();
}

JViewPortBackingStoreImageTest$1::JViewPortBackingStoreImageTest$1() {
}

$Class* JViewPortBackingStoreImageTest$1::load$($String* name, bool initialize) {
	$loadClass(JViewPortBackingStoreImageTest$1, name, initialize, &_JViewPortBackingStoreImageTest$1_ClassInfo_, allocate$JViewPortBackingStoreImageTest$1);
	return class$;
}

$Class* JViewPortBackingStoreImageTest$1::class$ = nullptr;