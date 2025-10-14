#include <JOptionPaneConfirmDlgTest$2.h>

#include <JOptionPaneConfirmDlgTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JOptionPane.h>
#include <jcpp.h>

using $JOptionPaneConfirmDlgTest = ::JOptionPaneConfirmDlgTest;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JOptionPane = ::javax::swing::JOptionPane;

$FieldInfo _JOptionPaneConfirmDlgTest$2_FieldInfo_[] = {
	{"this$0", "LJOptionPaneConfirmDlgTest;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPaneConfirmDlgTest$2, this$0)},
	{}
};

$MethodInfo _JOptionPaneConfirmDlgTest$2_MethodInfo_[] = {
	{"<init>", "(LJOptionPaneConfirmDlgTest;)V", nullptr, 0, $method(static_cast<void(JOptionPaneConfirmDlgTest$2::*)($JOptionPaneConfirmDlgTest*)>(&JOptionPaneConfirmDlgTest$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JOptionPaneConfirmDlgTest$2_EnclosingMethodInfo_ = {
	"JOptionPaneConfirmDlgTest",
	"createGUI",
	"()V"
};

$InnerClassInfo _JOptionPaneConfirmDlgTest$2_InnerClassesInfo_[] = {
	{"JOptionPaneConfirmDlgTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JOptionPaneConfirmDlgTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"JOptionPaneConfirmDlgTest$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_JOptionPaneConfirmDlgTest$2_FieldInfo_,
	_JOptionPaneConfirmDlgTest$2_MethodInfo_,
	nullptr,
	&_JOptionPaneConfirmDlgTest$2_EnclosingMethodInfo_,
	_JOptionPaneConfirmDlgTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JOptionPaneConfirmDlgTest"
};

$Object* allocate$JOptionPaneConfirmDlgTest$2($Class* clazz) {
	return $of($alloc(JOptionPaneConfirmDlgTest$2));
}

void JOptionPaneConfirmDlgTest$2::init$($JOptionPaneConfirmDlgTest* this$0) {
	$set(this, this$0, this$0);
}

void JOptionPaneConfirmDlgTest$2::actionPerformed($ActionEvent* e) {
	$JOptionPane::showInternalConfirmDialog($$new($JInternalFrame), "Test?"_s);
}

JOptionPaneConfirmDlgTest$2::JOptionPaneConfirmDlgTest$2() {
}

$Class* JOptionPaneConfirmDlgTest$2::load$($String* name, bool initialize) {
	$loadClass(JOptionPaneConfirmDlgTest$2, name, initialize, &_JOptionPaneConfirmDlgTest$2_ClassInfo_, allocate$JOptionPaneConfirmDlgTest$2);
	return class$;
}

$Class* JOptionPaneConfirmDlgTest$2::class$ = nullptr;