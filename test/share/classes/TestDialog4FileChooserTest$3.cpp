#include <TestDialog4FileChooserTest$3.h>

#include <FileChooserTest.h>
#include <TestDialog4FileChooserTest.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $FileChooserTest = ::FileChooserTest;
using $TestDialog4FileChooserTest = ::TestDialog4FileChooserTest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestDialog4FileChooserTest$3_FieldInfo_[] = {
	{"this$0", "LTestDialog4FileChooserTest;", nullptr, $FINAL | $SYNTHETIC, $field(TestDialog4FileChooserTest$3, this$0)},
	{}
};

$MethodInfo _TestDialog4FileChooserTest$3_MethodInfo_[] = {
	{"<init>", "(LTestDialog4FileChooserTest;)V", nullptr, 0, $method(static_cast<void(TestDialog4FileChooserTest$3::*)($TestDialog4FileChooserTest*)>(&TestDialog4FileChooserTest$3::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestDialog4FileChooserTest$3_EnclosingMethodInfo_ = {
	"TestDialog4FileChooserTest",
	"<init>",
	"(Ljavax/swing/JFrame;Ljava/lang/String;)V"
};

$InnerClassInfo _TestDialog4FileChooserTest$3_InnerClassesInfo_[] = {
	{"TestDialog4FileChooserTest$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestDialog4FileChooserTest$3_ClassInfo_ = {
	$ACC_SUPER,
	"TestDialog4FileChooserTest$3",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_TestDialog4FileChooserTest$3_FieldInfo_,
	_TestDialog4FileChooserTest$3_MethodInfo_,
	nullptr,
	&_TestDialog4FileChooserTest$3_EnclosingMethodInfo_,
	_TestDialog4FileChooserTest$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestDialog4FileChooserTest"
};

$Object* allocate$TestDialog4FileChooserTest$3($Class* clazz) {
	return $of($alloc(TestDialog4FileChooserTest$3));
}

void TestDialog4FileChooserTest$3::init$($TestDialog4FileChooserTest* this$0) {
	$set(this, this$0, this$0);
}

void TestDialog4FileChooserTest$3::actionPerformed($ActionEvent* ae) {
	$FileChooserTest::fail();
}

TestDialog4FileChooserTest$3::TestDialog4FileChooserTest$3() {
}

$Class* TestDialog4FileChooserTest$3::load$($String* name, bool initialize) {
	$loadClass(TestDialog4FileChooserTest$3, name, initialize, &_TestDialog4FileChooserTest$3_ClassInfo_, allocate$TestDialog4FileChooserTest$3);
	return class$;
}

$Class* TestDialog4FileChooserTest$3::class$ = nullptr;