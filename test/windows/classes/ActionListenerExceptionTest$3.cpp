#include <ActionListenerExceptionTest$3.h>

#include <ActionListenerExceptionTest.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $ActionListenerExceptionTest = ::ActionListenerExceptionTest;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComboBox = ::javax::swing::JComboBox;

$FieldInfo _ActionListenerExceptionTest$3_FieldInfo_[] = {
	{"this$0", "LActionListenerExceptionTest;", nullptr, $FINAL | $SYNTHETIC, $field(ActionListenerExceptionTest$3, this$0)},
	{}
};

$MethodInfo _ActionListenerExceptionTest$3_MethodInfo_[] = {
	{"<init>", "(LActionListenerExceptionTest;)V", nullptr, 0, $method(static_cast<void(ActionListenerExceptionTest$3::*)($ActionListenerExceptionTest*)>(&ActionListenerExceptionTest$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ActionListenerExceptionTest$3_EnclosingMethodInfo_ = {
	"ActionListenerExceptionTest",
	"test",
	"()V"
};

$InnerClassInfo _ActionListenerExceptionTest$3_InnerClassesInfo_[] = {
	{"ActionListenerExceptionTest$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ActionListenerExceptionTest$3_ClassInfo_ = {
	$ACC_SUPER,
	"ActionListenerExceptionTest$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_ActionListenerExceptionTest$3_FieldInfo_,
	_ActionListenerExceptionTest$3_MethodInfo_,
	nullptr,
	&_ActionListenerExceptionTest$3_EnclosingMethodInfo_,
	_ActionListenerExceptionTest$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ActionListenerExceptionTest"
};

$Object* allocate$ActionListenerExceptionTest$3($Class* clazz) {
	return $of($alloc(ActionListenerExceptionTest$3));
}

void ActionListenerExceptionTest$3::init$($ActionListenerExceptionTest* this$0) {
	$set(this, this$0, this$0);
}

void ActionListenerExceptionTest$3::run() {
	$set(this->this$0, cbPos, $nc(this->this$0->combo)->getLocationOnScreen());
	$set(this->this$0, cbSize, $nc(this->this$0->combo)->getSize());
}

ActionListenerExceptionTest$3::ActionListenerExceptionTest$3() {
}

$Class* ActionListenerExceptionTest$3::load$($String* name, bool initialize) {
	$loadClass(ActionListenerExceptionTest$3, name, initialize, &_ActionListenerExceptionTest$3_ClassInfo_, allocate$ActionListenerExceptionTest$3);
	return class$;
}

$Class* ActionListenerExceptionTest$3::class$ = nullptr;