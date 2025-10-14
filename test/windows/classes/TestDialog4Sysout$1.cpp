#include <TestDialog4Sysout$1.h>

#include <JFileChooserCombolistSelection.h>
#include <TestDialog4Sysout.h>
#include <java/awt/Component.h>
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
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $JFileChooserCombolistSelection = ::JFileChooserCombolistSelection;
using $TestDialog4Sysout = ::TestDialog4Sysout;
using $Component = ::java::awt::Component;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JFileChooser = ::javax::swing::JFileChooser;

$FieldInfo _TestDialog4Sysout$1_FieldInfo_[] = {
	{"this$0", "LTestDialog4Sysout;", nullptr, $FINAL | $SYNTHETIC, $field(TestDialog4Sysout$1, this$0)},
	{}
};

$MethodInfo _TestDialog4Sysout$1_MethodInfo_[] = {
	{"<init>", "(LTestDialog4Sysout;)V", nullptr, 0, $method(static_cast<void(TestDialog4Sysout$1::*)($TestDialog4Sysout*)>(&TestDialog4Sysout$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestDialog4Sysout$1_EnclosingMethodInfo_ = {
	"TestDialog4Sysout",
	"<init>",
	"(Ljavax/swing/JFrame;Ljava/lang/String;)V"
};

$InnerClassInfo _TestDialog4Sysout$1_InnerClassesInfo_[] = {
	{"TestDialog4Sysout$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestDialog4Sysout$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestDialog4Sysout$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_TestDialog4Sysout$1_FieldInfo_,
	_TestDialog4Sysout$1_MethodInfo_,
	nullptr,
	&_TestDialog4Sysout$1_EnclosingMethodInfo_,
	_TestDialog4Sysout$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestDialog4Sysout"
};

$Object* allocate$TestDialog4Sysout$1($Class* clazz) {
	return $of($alloc(TestDialog4Sysout$1));
}

void TestDialog4Sysout$1::init$($TestDialog4Sysout* this$0) {
	$set(this, this$0, this$0);
}

void TestDialog4Sysout$1::actionPerformed($ActionEvent* ae) {
	$init($JFileChooserCombolistSelection);
	$assignStatic($JFileChooserCombolistSelection::fileChooser, $new($JFileChooser));
	$nc($JFileChooserCombolistSelection::fileChooser)->showOpenDialog(nullptr);
	$nc(this->this$0->passB)->setEnabled(true);
	$nc(this->this$0->failB)->setEnabled(true);
}

TestDialog4Sysout$1::TestDialog4Sysout$1() {
}

$Class* TestDialog4Sysout$1::load$($String* name, bool initialize) {
	$loadClass(TestDialog4Sysout$1, name, initialize, &_TestDialog4Sysout$1_ClassInfo_, allocate$TestDialog4Sysout$1);
	return class$;
}

$Class* TestDialog4Sysout$1::class$ = nullptr;