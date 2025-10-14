#include <JColorChooserTest$1$1.h>

#include <JColorChooserTest$1.h>
#include <JColorChooserTest.h>
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

using $JColorChooserTest = ::JColorChooserTest;
using $JColorChooserTest$1 = ::JColorChooserTest$1;
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

$FieldInfo _JColorChooserTest$1$1_FieldInfo_[] = {
	{"this$1", "LJColorChooserTest$1;", nullptr, $FINAL | $SYNTHETIC, $field(JColorChooserTest$1$1, this$1)},
	{}
};

$MethodInfo _JColorChooserTest$1$1_MethodInfo_[] = {
	{"<init>", "(LJColorChooserTest$1;)V", nullptr, 0, $method(static_cast<void(JColorChooserTest$1$1::*)($JColorChooserTest$1*)>(&JColorChooserTest$1$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JColorChooserTest$1$1_EnclosingMethodInfo_ = {
	"JColorChooserTest$1",
	"run",
	"()V"
};

$InnerClassInfo _JColorChooserTest$1$1_InnerClassesInfo_[] = {
	{"JColorChooserTest$1", nullptr, nullptr, 0},
	{"JColorChooserTest$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JColorChooserTest$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"JColorChooserTest$1$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_JColorChooserTest$1$1_FieldInfo_,
	_JColorChooserTest$1$1_MethodInfo_,
	nullptr,
	&_JColorChooserTest$1$1_EnclosingMethodInfo_,
	_JColorChooserTest$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JColorChooserTest"
};

$Object* allocate$JColorChooserTest$1$1($Class* clazz) {
	return $of($alloc(JColorChooserTest$1$1));
}

void JColorChooserTest$1$1::init$($JColorChooserTest$1* this$1) {
	$set(this, this$1, this$1);
}

void JColorChooserTest$1$1::actionPerformed($ActionEvent* e) {
	$nc(this->this$1->this$0)->testResult = false;
	$init($JColorChooserTest);
	$nc($JColorChooserTest::mainFrame)->dispose();
	$nc($nc(this->this$1->this$0)->latch)->countDown();
}

JColorChooserTest$1$1::JColorChooserTest$1$1() {
}

$Class* JColorChooserTest$1$1::load$($String* name, bool initialize) {
	$loadClass(JColorChooserTest$1$1, name, initialize, &_JColorChooserTest$1$1_ClassInfo_, allocate$JColorChooserTest$1$1);
	return class$;
}

$Class* JColorChooserTest$1$1::class$ = nullptr;