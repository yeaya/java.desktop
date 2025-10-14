#include <TestDialog4bug4666224.h>

#include <TestDialog4bug4666224$HandleAssert.h>
#include <TestDialog4bug4666224$RemarksDialog.h>
#include <java/awt/Button.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Frame.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Panel.h>
#include <java/awt/TextArea.h>
#include <java/awt/TextComponent.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef SCROLLBARS_BOTH

using $TestDialog4bug4666224$HandleAssert = ::TestDialog4bug4666224$HandleAssert;
using $TestDialog4bug4666224$RemarksDialog = ::TestDialog4bug4666224$RemarksDialog;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $Button = ::java::awt::Button;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $FlowLayout = ::java::awt::FlowLayout;
using $Frame = ::java::awt::Frame;
using $LayoutManager = ::java::awt::LayoutManager;
using $Panel = ::java::awt::Panel;
using $TextArea = ::java::awt::TextArea;
using $TextComponent = ::java::awt::TextComponent;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestDialog4bug4666224_FieldInfo_[] = {
	{"instructionsText", "Ljava/awt/TextArea;", nullptr, 0, $field(TestDialog4bug4666224, instructionsText)},
	{"messageText", "Ljava/awt/TextArea;", nullptr, 0, $field(TestDialog4bug4666224, messageText)},
	{"maxStringLength", "I", nullptr, 0, $field(TestDialog4bug4666224, maxStringLength)},
	{"assertPanel", "Ljava/awt/Panel;", nullptr, 0, $field(TestDialog4bug4666224, assertPanel)},
	{"assertPass", "Ljava/awt/Button;", nullptr, 0, $field(TestDialog4bug4666224, assertPass)},
	{"assertFail", "Ljava/awt/Button;", nullptr, 0, $field(TestDialog4bug4666224, assertFail)},
	{"remarks", "Ljava/awt/Button;", nullptr, 0, $field(TestDialog4bug4666224, remarks)},
	{"handleAssert", "LTestDialog4bug4666224$HandleAssert;", nullptr, 0, $field(TestDialog4bug4666224, handleAssert)},
	{"failStatus", "Z", nullptr, 0, $field(TestDialog4bug4666224, failStatus)},
	{"instructionCounter", "I", nullptr, 0, $field(TestDialog4bug4666224, instructionCounter)},
	{"instructions", "[[Ljava/lang/String;", nullptr, 0, $field(TestDialog4bug4666224, instructions)},
	{"exceptionCounter", "I", nullptr, 0, $field(TestDialog4bug4666224, exceptionCounter)},
	{"exceptionMessages", "[Ljava/lang/String;", nullptr, 0, $field(TestDialog4bug4666224, exceptionMessages)},
	{"failureMessages", "Ljava/lang/String;", nullptr, 0, $field(TestDialog4bug4666224, failureMessages)},
	{"remarksMessage", "Ljava/lang/String;", nullptr, 0, $field(TestDialog4bug4666224, remarksMessage)},
	{"remarksDialog", "LTestDialog4bug4666224$RemarksDialog;", nullptr, 0, $field(TestDialog4bug4666224, remarksDialog)},
	{}
};

$MethodInfo _TestDialog4bug4666224_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Frame;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TestDialog4bug4666224::*)($Frame*,$String*)>(&TestDialog4bug4666224::init$))},
	{"displayMessage", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"emptyMessage", "()V", nullptr, $PUBLIC},
	{"printInstructions", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setExceptionMessages", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setInstructions", "([[Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TestDialog4bug4666224_InnerClassesInfo_[] = {
	{"TestDialog4bug4666224$RemarksDialog", "TestDialog4bug4666224", "RemarksDialog", 0},
	{"TestDialog4bug4666224$HandleAssert", "TestDialog4bug4666224", "HandleAssert", 0},
	{}
};

$ClassInfo _TestDialog4bug4666224_ClassInfo_ = {
	$ACC_SUPER,
	"TestDialog4bug4666224",
	"java.awt.Dialog",
	nullptr,
	_TestDialog4bug4666224_FieldInfo_,
	_TestDialog4bug4666224_MethodInfo_,
	nullptr,
	nullptr,
	_TestDialog4bug4666224_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestDialog4bug4666224$RemarksDialog,TestDialog4bug4666224$HandleAssert"
};

$Object* allocate$TestDialog4bug4666224($Class* clazz) {
	return $of($alloc(TestDialog4bug4666224));
}

void TestDialog4bug4666224::init$($Frame* frame, $String* name) {
	$Dialog::init$(frame, name);
	this->maxStringLength = 70;
	this->failStatus = false;
	this->instructionCounter = 0;
	this->exceptionCounter = 0;
	$set(this, failureMessages, "<br>"_s);
	$set(this, remarksMessage, nullptr);
	int32_t scrollBoth = $TextArea::SCROLLBARS_BOTH;
	$set(this, instructionsText, $new($TextArea, ""_s, 14, this->maxStringLength, scrollBoth));
	add("North"_s, static_cast<$Component*>(this->instructionsText));
	$set(this, messageText, $new($TextArea, ""_s, 3, this->maxStringLength, scrollBoth));
	add("Center"_s, static_cast<$Component*>(this->messageText));
	$set(this, assertPanel, $new($Panel, $$new($FlowLayout)));
	$set(this, assertPass, $new($Button, "Assertion Pass"_s));
	$nc(this->assertPass)->setName("Assertion Pass"_s);
	$set(this, assertFail, $new($Button, "Assertion Fail"_s));
	$nc(this->assertFail)->setName("Assertion Fail"_s);
	$set(this, remarks, $new($Button, "Assertion Fail Remarks"_s));
	$nc(this->remarks)->setEnabled(false);
	$nc(this->remarks)->setName("Assertion Remarks"_s);
	$nc(this->assertPanel)->add(static_cast<$Component*>(this->assertPass));
	$nc(this->assertPanel)->add(static_cast<$Component*>(this->assertFail));
	$nc(this->assertPanel)->add(static_cast<$Component*>(this->remarks));
	$set(this, handleAssert, $new($TestDialog4bug4666224$HandleAssert, this));
	$nc(this->assertPass)->addActionListener(this->handleAssert);
	$nc(this->assertFail)->addActionListener(this->handleAssert);
	$nc(this->remarks)->addActionListener(this->handleAssert);
	add("South"_s, static_cast<$Component*>(this->assertPanel));
	pack();
	show();
}

void TestDialog4bug4666224::printInstructions($StringArray* instructions) {
	$nc(this->instructionsText)->setText(""_s);
	$var($String, printStr, nullptr);
	$var($String, remainingStr, nullptr);
	for (int32_t i = 0; i < $nc(instructions)->length; ++i) {
		$assign(remainingStr, instructions->get(i));
		while ($nc(remainingStr)->length() > 0) {
			if (remainingStr->length() >= this->maxStringLength) {
				int32_t posOfSpace = remainingStr->lastIndexOf((int32_t)u' ', this->maxStringLength - 1);
				if (posOfSpace <= 0) {
					posOfSpace = this->maxStringLength - 1;
				}
				$assign(printStr, remainingStr->substring(0, posOfSpace + 1));
				$assign(remainingStr, remainingStr->substring(posOfSpace + 1));
			} else {
				$assign(printStr, remainingStr);
				$assign(remainingStr, ""_s);
			}
			$nc(this->instructionsText)->append($$str({printStr, "\n"_s}));
		}
	}
}

void TestDialog4bug4666224::displayMessage($String* messageIn) {
	$nc(this->messageText)->append($$str({messageIn, "\n"_s}));
}

void TestDialog4bug4666224::emptyMessage() {
	$nc(this->messageText)->setText(""_s);
}

void TestDialog4bug4666224::setInstructions($StringArray2* insStr) {
	$set(this, instructions, insStr);
}

void TestDialog4bug4666224::setExceptionMessages($StringArray* exceptionMessages) {
	$set(this, exceptionMessages, exceptionMessages);
}

TestDialog4bug4666224::TestDialog4bug4666224() {
}

$Class* TestDialog4bug4666224::load$($String* name, bool initialize) {
	$loadClass(TestDialog4bug4666224, name, initialize, &_TestDialog4bug4666224_ClassInfo_, allocate$TestDialog4bug4666224);
	return class$;
}

$Class* TestDialog4bug4666224::class$ = nullptr;