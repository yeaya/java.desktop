#include <TestTextPosInPrint$1.h>

#include <TestTextPosInPrint.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/JDialog.h>
#include <jcpp.h>

using $TestTextPosInPrint = ::TestTextPosInPrint;
using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDialog = ::javax::swing::JDialog;

$FieldInfo _TestTextPosInPrint$1_FieldInfo_[] = {
	{"val$dialog", "Ljavax/swing/JDialog;", nullptr, $FINAL | $SYNTHETIC, $field(TestTextPosInPrint$1, val$dialog)},
	{}
};

$MethodInfo _TestTextPosInPrint$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JDialog;)V", nullptr, 0, $method(static_cast<void(TestTextPosInPrint$1::*)($JDialog*)>(&TestTextPosInPrint$1::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestTextPosInPrint$1_EnclosingMethodInfo_ = {
	"TestTextPosInPrint",
	"createAndShowTestDialog",
	"()V"
};

$InnerClassInfo _TestTextPosInPrint$1_InnerClassesInfo_[] = {
	{"TestTextPosInPrint$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestTextPosInPrint$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestTextPosInPrint$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	_TestTextPosInPrint$1_FieldInfo_,
	_TestTextPosInPrint$1_MethodInfo_,
	nullptr,
	&_TestTextPosInPrint$1_EnclosingMethodInfo_,
	_TestTextPosInPrint$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestTextPosInPrint"
};

$Object* allocate$TestTextPosInPrint$1($Class* clazz) {
	return $of($alloc(TestTextPosInPrint$1));
}

void TestTextPosInPrint$1::init$($JDialog* val$dialog) {
	$set(this, val$dialog, val$dialog);
	$WindowAdapter::init$();
}

void TestTextPosInPrint$1::windowClosing($WindowEvent* e) {
	$nc(this->val$dialog)->dispose();
	$TestTextPosInPrint::fail("Main dialog was closed."_s);
}

TestTextPosInPrint$1::TestTextPosInPrint$1() {
}

$Class* TestTextPosInPrint$1::load$($String* name, bool initialize) {
	$loadClass(TestTextPosInPrint$1, name, initialize, &_TestTextPosInPrint$1_ClassInfo_, allocate$TestTextPosInPrint$1);
	return class$;
}

$Class* TestTextPosInPrint$1::class$ = nullptr;