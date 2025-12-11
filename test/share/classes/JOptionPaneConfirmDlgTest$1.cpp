#include <JOptionPaneConfirmDlgTest$1.h>

#include <JOptionPaneConfirmDlgTest.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JOptionPane.h>
#include <jcpp.h>

using $JOptionPaneConfirmDlgTest = ::JOptionPaneConfirmDlgTest;
using $Component = ::java::awt::Component;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JOptionPane = ::javax::swing::JOptionPane;

$FieldInfo _JOptionPaneConfirmDlgTest$1_FieldInfo_[] = {
	{"this$0", "LJOptionPaneConfirmDlgTest;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPaneConfirmDlgTest$1, this$0)},
	{}
};

$MethodInfo _JOptionPaneConfirmDlgTest$1_MethodInfo_[] = {
	{"<init>", "(LJOptionPaneConfirmDlgTest;)V", nullptr, 0, $method(static_cast<void(JOptionPaneConfirmDlgTest$1::*)($JOptionPaneConfirmDlgTest*)>(&JOptionPaneConfirmDlgTest$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JOptionPaneConfirmDlgTest$1_EnclosingMethodInfo_ = {
	"JOptionPaneConfirmDlgTest",
	"createGUI",
	"()V"
};

$InnerClassInfo _JOptionPaneConfirmDlgTest$1_InnerClassesInfo_[] = {
	{"JOptionPaneConfirmDlgTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JOptionPaneConfirmDlgTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"JOptionPaneConfirmDlgTest$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_JOptionPaneConfirmDlgTest$1_FieldInfo_,
	_JOptionPaneConfirmDlgTest$1_MethodInfo_,
	nullptr,
	&_JOptionPaneConfirmDlgTest$1_EnclosingMethodInfo_,
	_JOptionPaneConfirmDlgTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JOptionPaneConfirmDlgTest"
};

$Object* allocate$JOptionPaneConfirmDlgTest$1($Class* clazz) {
	return $of($alloc(JOptionPaneConfirmDlgTest$1));
}

void JOptionPaneConfirmDlgTest$1::init$($JOptionPaneConfirmDlgTest* this$0) {
	$set(this, this$0, this$0);
}

void JOptionPaneConfirmDlgTest$1::actionPerformed($ActionEvent* e) {
	$JOptionPane::showInternalConfirmDialog(nullptr, "Test?"_s);
}

JOptionPaneConfirmDlgTest$1::JOptionPaneConfirmDlgTest$1() {
}

$Class* JOptionPaneConfirmDlgTest$1::load$($String* name, bool initialize) {
	$loadClass(JOptionPaneConfirmDlgTest$1, name, initialize, &_JOptionPaneConfirmDlgTest$1_ClassInfo_, allocate$JOptionPaneConfirmDlgTest$1);
	return class$;
}

$Class* JOptionPaneConfirmDlgTest$1::class$ = nullptr;