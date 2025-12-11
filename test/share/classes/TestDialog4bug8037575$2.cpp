#include <TestDialog4bug8037575$2.h>

#include <TestDialog4bug8037575.h>
#include <bug8037575.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $TestDialog4bug8037575 = ::TestDialog4bug8037575;
using $bug8037575 = ::bug8037575;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestDialog4bug8037575$2_FieldInfo_[] = {
	{"this$0", "LTestDialog4bug8037575;", nullptr, $FINAL | $SYNTHETIC, $field(TestDialog4bug8037575$2, this$0)},
	{}
};

$MethodInfo _TestDialog4bug8037575$2_MethodInfo_[] = {
	{"<init>", "(LTestDialog4bug8037575;)V", nullptr, 0, $method(static_cast<void(TestDialog4bug8037575$2::*)($TestDialog4bug8037575*)>(&TestDialog4bug8037575$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestDialog4bug8037575$2_EnclosingMethodInfo_ = {
	"TestDialog4bug8037575",
	"<init>",
	"(Ljavax/swing/JFrame;Ljava/lang/String;)V"
};

$InnerClassInfo _TestDialog4bug8037575$2_InnerClassesInfo_[] = {
	{"TestDialog4bug8037575$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestDialog4bug8037575$2_ClassInfo_ = {
	$ACC_SUPER,
	"TestDialog4bug8037575$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_TestDialog4bug8037575$2_FieldInfo_,
	_TestDialog4bug8037575$2_MethodInfo_,
	nullptr,
	&_TestDialog4bug8037575$2_EnclosingMethodInfo_,
	_TestDialog4bug8037575$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestDialog4bug8037575"
};

$Object* allocate$TestDialog4bug8037575$2($Class* clazz) {
	return $of($alloc(TestDialog4bug8037575$2));
}

void TestDialog4bug8037575$2::init$($TestDialog4bug8037575* this$0) {
	$set(this, this$0, this$0);
}

void TestDialog4bug8037575$2::actionPerformed($ActionEvent* ae) {
	$bug8037575::pass();
}

TestDialog4bug8037575$2::TestDialog4bug8037575$2() {
}

$Class* TestDialog4bug8037575$2::load$($String* name, bool initialize) {
	$loadClass(TestDialog4bug8037575$2, name, initialize, &_TestDialog4bug8037575$2_ClassInfo_, allocate$TestDialog4bug8037575$2);
	return class$;
}

$Class* TestDialog4bug8037575$2::class$ = nullptr;