#include <TestDialog4bug4644444$HandleAssert.h>

#include <TestDialog4bug4644444$RemarksDialog.h>
#include <TestDialog4bug4644444.h>
#include <java/awt/Button.h>
#include <java/awt/Component.h>
#include <java/awt/Dialog.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $TestDialog4bug4644444 = ::TestDialog4bug4644444;
using $TestDialog4bug4644444$RemarksDialog = ::TestDialog4bug4644444$RemarksDialog;
using $Button = ::java::awt::Button;
using $Dialog = ::java::awt::Dialog;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestDialog4bug4644444$HandleAssert_FieldInfo_[] = {
	{"this$0", "LTestDialog4bug4644444;", nullptr, $FINAL | $SYNTHETIC, $field(TestDialog4bug4644444$HandleAssert, this$0)},
	{}
};

$MethodInfo _TestDialog4bug4644444$HandleAssert_MethodInfo_[] = {
	{"<init>", "(LTestDialog4bug4644444;)V", nullptr, 0, $method(static_cast<void(TestDialog4bug4644444$HandleAssert::*)($TestDialog4bug4644444*)>(&TestDialog4bug4644444$HandleAssert::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TestDialog4bug4644444$HandleAssert_InnerClassesInfo_[] = {
	{"TestDialog4bug4644444$HandleAssert", "TestDialog4bug4644444", "HandleAssert", 0},
	{}
};

$ClassInfo _TestDialog4bug4644444$HandleAssert_ClassInfo_ = {
	$ACC_SUPER,
	"TestDialog4bug4644444$HandleAssert",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_TestDialog4bug4644444$HandleAssert_FieldInfo_,
	_TestDialog4bug4644444$HandleAssert_MethodInfo_,
	nullptr,
	nullptr,
	_TestDialog4bug4644444$HandleAssert_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestDialog4bug4644444"
};

$Object* allocate$TestDialog4bug4644444$HandleAssert($Class* clazz) {
	return $of($alloc(TestDialog4bug4644444$HandleAssert));
}

void TestDialog4bug4644444$HandleAssert::init$($TestDialog4bug4644444* this$0) {
	$set(this, this$0, this$0);
}

void TestDialog4bug4644444$HandleAssert::actionPerformed($ActionEvent* ae) {
	if ($equals($nc(ae)->getSource(), this->this$0->remarks)) {
		$set(this->this$0, remarksDialog, $new($TestDialog4bug4644444$RemarksDialog, this->this$0, this->this$0, "Assertion Remarks Dialog"_s, true));
		$nc(this->this$0->remarks)->setEnabled(false);
		if (this->this$0->remarksMessage != nullptr) {
			$plusAssignField(this->this$0, failureMessages, $$str({". User Remarks : "_s, this->this$0->remarksMessage}));
		}
	} else {
		if (this->this$0->instructionCounter < $nc(this->this$0->instructions)->length - 1) {
			this->this$0->emptyMessage();
			++this->this$0->instructionCounter;
			this->this$0->printInstructions($nc(this->this$0->instructions)->get(this->this$0->instructionCounter));
		} else {
			this->this$0->emptyMessage();
			this->this$0->displayMessage("Testcase Completed"_s);
			this->this$0->displayMessage("Press \'Done\' button in the BaseApplet to close"_s);
			$nc(this->this$0->assertPass)->setEnabled(false);
			$nc(this->this$0->assertFail)->setEnabled(false);
		}
		if ($equals(ae->getSource(), this->this$0->assertPass)) {
		} else if ($equals(ae->getSource(), this->this$0->assertFail)) {
			$nc(this->this$0->remarks)->setEnabled(true);
			if (!this->this$0->failStatus) {
				this->this$0->failStatus = true;
			}
			if (this->this$0->exceptionCounter < $nc(this->this$0->exceptionMessages)->length) {
				$set(this->this$0, failureMessages, $str({this->this$0->failureMessages, "<br>"_s, $nc(this->this$0->exceptionMessages)->get(this->this$0->exceptionCounter)}));
			}
		}
		++this->this$0->exceptionCounter;
	}
}

TestDialog4bug4644444$HandleAssert::TestDialog4bug4644444$HandleAssert() {
}

$Class* TestDialog4bug4644444$HandleAssert::load$($String* name, bool initialize) {
	$loadClass(TestDialog4bug4644444$HandleAssert, name, initialize, &_TestDialog4bug4644444$HandleAssert_ClassInfo_, allocate$TestDialog4bug4644444$HandleAssert);
	return class$;
}

$Class* TestDialog4bug4644444$HandleAssert::class$ = nullptr;