#include <TestDialog4FileChooserTest$1.h>

#include <FileChooserTest.h>
#include <TestDialog4FileChooserTest.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $FileChooserTest = ::FileChooserTest;
using $TestDialog4FileChooserTest = ::TestDialog4FileChooserTest;
using $Component = ::java::awt::Component;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JFileChooser = ::javax::swing::JFileChooser;

$FieldInfo _TestDialog4FileChooserTest$1_FieldInfo_[] = {
	{"this$0", "LTestDialog4FileChooserTest;", nullptr, $FINAL | $SYNTHETIC, $field(TestDialog4FileChooserTest$1, this$0)},
	{}
};

$MethodInfo _TestDialog4FileChooserTest$1_MethodInfo_[] = {
	{"<init>", "(LTestDialog4FileChooserTest;)V", nullptr, 0, $method(static_cast<void(TestDialog4FileChooserTest$1::*)($TestDialog4FileChooserTest*)>(&TestDialog4FileChooserTest$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestDialog4FileChooserTest$1_EnclosingMethodInfo_ = {
	"TestDialog4FileChooserTest",
	"<init>",
	"(Ljavax/swing/JFrame;Ljava/lang/String;)V"
};

$InnerClassInfo _TestDialog4FileChooserTest$1_InnerClassesInfo_[] = {
	{"TestDialog4FileChooserTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestDialog4FileChooserTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestDialog4FileChooserTest$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_TestDialog4FileChooserTest$1_FieldInfo_,
	_TestDialog4FileChooserTest$1_MethodInfo_,
	nullptr,
	&_TestDialog4FileChooserTest$1_EnclosingMethodInfo_,
	_TestDialog4FileChooserTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestDialog4FileChooserTest"
};

$Object* allocate$TestDialog4FileChooserTest$1($Class* clazz) {
	return $of($alloc(TestDialog4FileChooserTest$1));
}

void TestDialog4FileChooserTest$1::init$($TestDialog4FileChooserTest* this$0) {
	$set(this, this$0, this$0);
}

void TestDialog4FileChooserTest$1::actionPerformed($ActionEvent* ae) {
	$init($FileChooserTest);
	$assignStatic($FileChooserTest::fileChooser, $new($JFileChooser));
	$nc($FileChooserTest::fileChooser)->showOpenDialog(nullptr);
	$nc(this->this$0->passB)->setEnabled(true);
	$nc(this->this$0->failB)->setEnabled(true);
}

TestDialog4FileChooserTest$1::TestDialog4FileChooserTest$1() {
}

$Class* TestDialog4FileChooserTest$1::load$($String* name, bool initialize) {
	$loadClass(TestDialog4FileChooserTest$1, name, initialize, &_TestDialog4FileChooserTest$1_ClassInfo_, allocate$TestDialog4FileChooserTest$1);
	return class$;
}

$Class* TestDialog4FileChooserTest$1::class$ = nullptr;