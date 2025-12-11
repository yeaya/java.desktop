#include <ActionListenerExceptionTest$2.h>

#include <ActionListenerExceptionTest.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $ActionListenerExceptionTest = ::ActionListenerExceptionTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _ActionListenerExceptionTest$2_FieldInfo_[] = {
	{"this$0", "LActionListenerExceptionTest;", nullptr, $FINAL | $SYNTHETIC, $field(ActionListenerExceptionTest$2, this$0)},
	{}
};

$MethodInfo _ActionListenerExceptionTest$2_MethodInfo_[] = {
	{"<init>", "(LActionListenerExceptionTest;)V", nullptr, 0, $method(static_cast<void(ActionListenerExceptionTest$2::*)($ActionListenerExceptionTest*)>(&ActionListenerExceptionTest$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ActionListenerExceptionTest$2_EnclosingMethodInfo_ = {
	"ActionListenerExceptionTest",
	"disposeGUI",
	"()V"
};

$InnerClassInfo _ActionListenerExceptionTest$2_InnerClassesInfo_[] = {
	{"ActionListenerExceptionTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ActionListenerExceptionTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"ActionListenerExceptionTest$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_ActionListenerExceptionTest$2_FieldInfo_,
	_ActionListenerExceptionTest$2_MethodInfo_,
	nullptr,
	&_ActionListenerExceptionTest$2_EnclosingMethodInfo_,
	_ActionListenerExceptionTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ActionListenerExceptionTest"
};

$Object* allocate$ActionListenerExceptionTest$2($Class* clazz) {
	return $of($alloc(ActionListenerExceptionTest$2));
}

void ActionListenerExceptionTest$2::init$($ActionListenerExceptionTest* this$0) {
	$set(this, this$0, this$0);
}

void ActionListenerExceptionTest$2::run() {
	$nc(this->this$0->frame)->dispose();
}

ActionListenerExceptionTest$2::ActionListenerExceptionTest$2() {
}

$Class* ActionListenerExceptionTest$2::load$($String* name, bool initialize) {
	$loadClass(ActionListenerExceptionTest$2, name, initialize, &_ActionListenerExceptionTest$2_ClassInfo_, allocate$ActionListenerExceptionTest$2);
	return class$;
}

$Class* ActionListenerExceptionTest$2::class$ = nullptr;