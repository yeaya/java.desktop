#include <TestDialog4Sysout$3.h>

#include <JFileChooserCombolistSelection.h>
#include <TestDialog4Sysout.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $JFileChooserCombolistSelection = ::JFileChooserCombolistSelection;
using $TestDialog4Sysout = ::TestDialog4Sysout;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestDialog4Sysout$3_FieldInfo_[] = {
	{"this$0", "LTestDialog4Sysout;", nullptr, $FINAL | $SYNTHETIC, $field(TestDialog4Sysout$3, this$0)},
	{}
};

$MethodInfo _TestDialog4Sysout$3_MethodInfo_[] = {
	{"<init>", "(LTestDialog4Sysout;)V", nullptr, 0, $method(static_cast<void(TestDialog4Sysout$3::*)($TestDialog4Sysout*)>(&TestDialog4Sysout$3::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestDialog4Sysout$3_EnclosingMethodInfo_ = {
	"TestDialog4Sysout",
	"<init>",
	"(Ljavax/swing/JFrame;Ljava/lang/String;)V"
};

$InnerClassInfo _TestDialog4Sysout$3_InnerClassesInfo_[] = {
	{"TestDialog4Sysout$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestDialog4Sysout$3_ClassInfo_ = {
	$ACC_SUPER,
	"TestDialog4Sysout$3",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_TestDialog4Sysout$3_FieldInfo_,
	_TestDialog4Sysout$3_MethodInfo_,
	nullptr,
	&_TestDialog4Sysout$3_EnclosingMethodInfo_,
	_TestDialog4Sysout$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestDialog4Sysout"
};

$Object* allocate$TestDialog4Sysout$3($Class* clazz) {
	return $of($alloc(TestDialog4Sysout$3));
}

void TestDialog4Sysout$3::init$($TestDialog4Sysout* this$0) {
	$set(this, this$0, this$0);
}

void TestDialog4Sysout$3::actionPerformed($ActionEvent* ae) {
	$JFileChooserCombolistSelection::fail();
}

TestDialog4Sysout$3::TestDialog4Sysout$3() {
}

$Class* TestDialog4Sysout$3::load$($String* name, bool initialize) {
	$loadClass(TestDialog4Sysout$3, name, initialize, &_TestDialog4Sysout$3_ClassInfo_, allocate$TestDialog4Sysout$3);
	return class$;
}

$Class* TestDialog4Sysout$3::class$ = nullptr;