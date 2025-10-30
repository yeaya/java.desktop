#include <TestNimbusOverride$1.h>

#include <TestNimbusOverride.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <jcpp.h>

using $TestNimbusOverride = ::TestNimbusOverride;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;

$FieldInfo _TestNimbusOverride$1_FieldInfo_[] = {
	{"this$0", "LTestNimbusOverride;", nullptr, $FINAL | $SYNTHETIC, $field(TestNimbusOverride$1, this$0)},
	{}
};

$MethodInfo _TestNimbusOverride$1_MethodInfo_[] = {
	{"<init>", "(LTestNimbusOverride;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(TestNimbusOverride$1::*)($TestNimbusOverride*,$String*)>(&TestNimbusOverride$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestNimbusOverride$1_EnclosingMethodInfo_ = {
	"TestNimbusOverride",
	"<init>",
	"()V"
};

$InnerClassInfo _TestNimbusOverride$1_InnerClassesInfo_[] = {
	{"TestNimbusOverride$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestNimbusOverride$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestNimbusOverride$1",
	"javax.swing.AbstractAction",
	nullptr,
	_TestNimbusOverride$1_FieldInfo_,
	_TestNimbusOverride$1_MethodInfo_,
	nullptr,
	&_TestNimbusOverride$1_EnclosingMethodInfo_,
	_TestNimbusOverride$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestNimbusOverride"
};

$Object* allocate$TestNimbusOverride$1($Class* clazz) {
	return $of($alloc(TestNimbusOverride$1));
}

void TestNimbusOverride$1::init$($TestNimbusOverride* this$0, $String* arg0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$(arg0);
}

void TestNimbusOverride$1::actionPerformed($ActionEvent* e) {
	$init($TestNimbusOverride);
	$TestNimbusOverride::passed = true;
}

TestNimbusOverride$1::TestNimbusOverride$1() {
}

$Class* TestNimbusOverride$1::load$($String* name, bool initialize) {
	$loadClass(TestNimbusOverride$1, name, initialize, &_TestNimbusOverride$1_ClassInfo_, allocate$TestNimbusOverride$1);
	return class$;
}

$Class* TestNimbusOverride$1::class$ = nullptr;