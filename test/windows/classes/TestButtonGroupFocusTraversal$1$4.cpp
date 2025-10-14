#include <TestButtonGroupFocusTraversal$1$4.h>

#include <TestButtonGroupFocusTraversal$1.h>
#include <TestButtonGroupFocusTraversal.h>
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
#include <javax/swing/AbstractAction.h>
#include <jcpp.h>

using $TestButtonGroupFocusTraversal = ::TestButtonGroupFocusTraversal;
using $TestButtonGroupFocusTraversal$1 = ::TestButtonGroupFocusTraversal$1;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;

$FieldInfo _TestButtonGroupFocusTraversal$1$4_FieldInfo_[] = {
	{"this$0", "LTestButtonGroupFocusTraversal$1;", nullptr, $FINAL | $SYNTHETIC, $field(TestButtonGroupFocusTraversal$1$4, this$0)},
	{}
};

$MethodInfo _TestButtonGroupFocusTraversal$1$4_MethodInfo_[] = {
	{"<init>", "(LTestButtonGroupFocusTraversal$1;)V", nullptr, 0, $method(static_cast<void(TestButtonGroupFocusTraversal$1$4::*)($TestButtonGroupFocusTraversal$1*)>(&TestButtonGroupFocusTraversal$1$4::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestButtonGroupFocusTraversal$1$4_EnclosingMethodInfo_ = {
	"TestButtonGroupFocusTraversal$1",
	"run",
	"()V"
};

$InnerClassInfo _TestButtonGroupFocusTraversal$1$4_InnerClassesInfo_[] = {
	{"TestButtonGroupFocusTraversal$1", nullptr, nullptr, 0},
	{"TestButtonGroupFocusTraversal$1$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestButtonGroupFocusTraversal$1$4_ClassInfo_ = {
	$ACC_SUPER,
	"TestButtonGroupFocusTraversal$1$4",
	"javax.swing.AbstractAction",
	nullptr,
	_TestButtonGroupFocusTraversal$1$4_FieldInfo_,
	_TestButtonGroupFocusTraversal$1$4_MethodInfo_,
	nullptr,
	&_TestButtonGroupFocusTraversal$1$4_EnclosingMethodInfo_,
	_TestButtonGroupFocusTraversal$1$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestButtonGroupFocusTraversal"
};

$Object* allocate$TestButtonGroupFocusTraversal$1$4($Class* clazz) {
	return $of($alloc(TestButtonGroupFocusTraversal$1$4));
}

void TestButtonGroupFocusTraversal$1$4::init$($TestButtonGroupFocusTraversal$1* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void TestButtonGroupFocusTraversal$1$4::actionPerformed($ActionEvent* e) {
	$init($TestButtonGroupFocusTraversal);
	$TestButtonGroupFocusTraversal::checkboxActionPerformed = true;
}

TestButtonGroupFocusTraversal$1$4::TestButtonGroupFocusTraversal$1$4() {
}

$Class* TestButtonGroupFocusTraversal$1$4::load$($String* name, bool initialize) {
	$loadClass(TestButtonGroupFocusTraversal$1$4, name, initialize, &_TestButtonGroupFocusTraversal$1$4_ClassInfo_, allocate$TestButtonGroupFocusTraversal$1$4);
	return class$;
}

$Class* TestButtonGroupFocusTraversal$1$4::class$ = nullptr;