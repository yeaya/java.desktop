#include <PrintManualTest_FitWidthMultiple$1$3.h>

#include <PrintManualTest_FitWidthMultiple$1.h>
#include <PrintManualTest_FitWidthMultiple.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintManualTest_FitWidthMultiple = ::PrintManualTest_FitWidthMultiple;
using $PrintManualTest_FitWidthMultiple$1 = ::PrintManualTest_FitWidthMultiple$1;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _PrintManualTest_FitWidthMultiple$1$3_FieldInfo_[] = {
	{"this$1", "LPrintManualTest_FitWidthMultiple$1;", nullptr, $FINAL | $SYNTHETIC, $field(PrintManualTest_FitWidthMultiple$1$3, this$1)},
	{}
};

$MethodInfo _PrintManualTest_FitWidthMultiple$1$3_MethodInfo_[] = {
	{"<init>", "(LPrintManualTest_FitWidthMultiple$1;)V", nullptr, 0, $method(static_cast<void(PrintManualTest_FitWidthMultiple$1$3::*)($PrintManualTest_FitWidthMultiple$1*)>(&PrintManualTest_FitWidthMultiple$1$3::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PrintManualTest_FitWidthMultiple$1$3_EnclosingMethodInfo_ = {
	"PrintManualTest_FitWidthMultiple$1",
	"run",
	"()V"
};

$InnerClassInfo _PrintManualTest_FitWidthMultiple$1$3_InnerClassesInfo_[] = {
	{"PrintManualTest_FitWidthMultiple$1", nullptr, nullptr, 0},
	{"PrintManualTest_FitWidthMultiple$1$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintManualTest_FitWidthMultiple$1$3_ClassInfo_ = {
	$ACC_SUPER,
	"PrintManualTest_FitWidthMultiple$1$3",
	"java.awt.event.WindowAdapter",
	nullptr,
	_PrintManualTest_FitWidthMultiple$1$3_FieldInfo_,
	_PrintManualTest_FitWidthMultiple$1$3_MethodInfo_,
	nullptr,
	&_PrintManualTest_FitWidthMultiple$1$3_EnclosingMethodInfo_,
	_PrintManualTest_FitWidthMultiple$1$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PrintManualTest_FitWidthMultiple"
};

$Object* allocate$PrintManualTest_FitWidthMultiple$1$3($Class* clazz) {
	return $of($alloc(PrintManualTest_FitWidthMultiple$1$3));
}

void PrintManualTest_FitWidthMultiple$1$3::init$($PrintManualTest_FitWidthMultiple$1* this$1) {
	$set(this, this$1, this$1);
	$WindowAdapter::init$();
}

void PrintManualTest_FitWidthMultiple$1$3::windowClosing($WindowEvent* e) {
	$nc(this->this$1->this$0)->dispose();
	if ($PrintManualTest_FitWidthMultiple::testPassed == false) {
		$throwNew($RuntimeException, " User has not executed the test"_s);
	}
}

PrintManualTest_FitWidthMultiple$1$3::PrintManualTest_FitWidthMultiple$1$3() {
}

$Class* PrintManualTest_FitWidthMultiple$1$3::load$($String* name, bool initialize) {
	$loadClass(PrintManualTest_FitWidthMultiple$1$3, name, initialize, &_PrintManualTest_FitWidthMultiple$1$3_ClassInfo_, allocate$PrintManualTest_FitWidthMultiple$1$3);
	return class$;
}

$Class* PrintManualTest_FitWidthMultiple$1$3::class$ = nullptr;