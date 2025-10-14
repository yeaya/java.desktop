#include <TestDialog4bug8037575$1.h>

#include <TestDialog4bug8037575.h>
#include <bug8037575.h>
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
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

using $TestDialog4bug8037575 = ::TestDialog4bug8037575;
using $bug8037575 = ::bug8037575;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;

$FieldInfo _TestDialog4bug8037575$1_FieldInfo_[] = {
	{"this$0", "LTestDialog4bug8037575;", nullptr, $FINAL | $SYNTHETIC, $field(TestDialog4bug8037575$1, this$0)},
	{}
};

$MethodInfo _TestDialog4bug8037575$1_MethodInfo_[] = {
	{"<init>", "(LTestDialog4bug8037575;)V", nullptr, 0, $method(static_cast<void(TestDialog4bug8037575$1::*)($TestDialog4bug8037575*)>(&TestDialog4bug8037575$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestDialog4bug8037575$1_EnclosingMethodInfo_ = {
	"TestDialog4bug8037575",
	"<init>",
	"(Ljavax/swing/JFrame;Ljava/lang/String;)V"
};

$InnerClassInfo _TestDialog4bug8037575$1_InnerClassesInfo_[] = {
	{"TestDialog4bug8037575$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestDialog4bug8037575$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestDialog4bug8037575$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_TestDialog4bug8037575$1_FieldInfo_,
	_TestDialog4bug8037575$1_MethodInfo_,
	nullptr,
	&_TestDialog4bug8037575$1_EnclosingMethodInfo_,
	_TestDialog4bug8037575$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestDialog4bug8037575"
};

$Object* allocate$TestDialog4bug8037575$1($Class* clazz) {
	return $of($alloc(TestDialog4bug8037575$1));
}

void TestDialog4bug8037575$1::init$($TestDialog4bug8037575* this$0) {
	$set(this, this$0, this$0);
}

void TestDialog4bug8037575$1::actionPerformed($ActionEvent* ae) {
	$bug8037575::runTest();
	$nc(this->this$0->passB)->setEnabled(true);
	$nc(this->this$0->failB)->setEnabled(true);
}

TestDialog4bug8037575$1::TestDialog4bug8037575$1() {
}

$Class* TestDialog4bug8037575$1::load$($String* name, bool initialize) {
	$loadClass(TestDialog4bug8037575$1, name, initialize, &_TestDialog4bug8037575$1_ClassInfo_, allocate$TestDialog4bug8037575$1);
	return class$;
}

$Class* TestDialog4bug8037575$1::class$ = nullptr;