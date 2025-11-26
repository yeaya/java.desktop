#include <ActionListenerExceptionTest$1$1.h>

#include <ActionListenerExceptionTest$1.h>
#include <ActionListenerExceptionTest.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $ActionListenerExceptionTest = ::ActionListenerExceptionTest;
using $ActionListenerExceptionTest$1 = ::ActionListenerExceptionTest$1;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _ActionListenerExceptionTest$1$1_FieldInfo_[] = {
	{"this$1", "LActionListenerExceptionTest$1;", nullptr, $FINAL | $SYNTHETIC, $field(ActionListenerExceptionTest$1$1, this$1)},
	{}
};

$MethodInfo _ActionListenerExceptionTest$1$1_MethodInfo_[] = {
	{"<init>", "(LActionListenerExceptionTest$1;)V", nullptr, 0, $method(static_cast<void(ActionListenerExceptionTest$1$1::*)($ActionListenerExceptionTest$1*)>(&ActionListenerExceptionTest$1$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ActionListenerExceptionTest$1$1_EnclosingMethodInfo_ = {
	"ActionListenerExceptionTest$1",
	"run",
	"()V"
};

$InnerClassInfo _ActionListenerExceptionTest$1$1_InnerClassesInfo_[] = {
	{"ActionListenerExceptionTest$1", nullptr, nullptr, 0},
	{"ActionListenerExceptionTest$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ActionListenerExceptionTest$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"ActionListenerExceptionTest$1$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_ActionListenerExceptionTest$1$1_FieldInfo_,
	_ActionListenerExceptionTest$1$1_MethodInfo_,
	nullptr,
	&_ActionListenerExceptionTest$1$1_EnclosingMethodInfo_,
	_ActionListenerExceptionTest$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ActionListenerExceptionTest"
};

$Object* allocate$ActionListenerExceptionTest$1$1($Class* clazz) {
	return $of($alloc(ActionListenerExceptionTest$1$1));
}

void ActionListenerExceptionTest$1$1::init$($ActionListenerExceptionTest$1* this$1) {
	$set(this, this$1, this$1);
}

void ActionListenerExceptionTest$1$1::actionPerformed($ActionEvent* e) {
	++$nc(this->this$1->this$0)->count;
	$throwNew($RuntimeException);
}

ActionListenerExceptionTest$1$1::ActionListenerExceptionTest$1$1() {
}

$Class* ActionListenerExceptionTest$1$1::load$($String* name, bool initialize) {
	$loadClass(ActionListenerExceptionTest$1$1, name, initialize, &_ActionListenerExceptionTest$1$1_ClassInfo_, allocate$ActionListenerExceptionTest$1$1);
	return class$;
}

$Class* ActionListenerExceptionTest$1$1::class$ = nullptr;