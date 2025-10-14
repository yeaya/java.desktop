#include <TestCCEOnEditEvent$1.h>

#include <TestCCEOnEditEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestCCEOnEditEvent = ::TestCCEOnEditEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$FieldInfo _TestCCEOnEditEvent$1_FieldInfo_[] = {
	{"val$test", "LTestCCEOnEditEvent;", nullptr, $FINAL | $SYNTHETIC, $field(TestCCEOnEditEvent$1, val$test)},
	{}
};

$MethodInfo _TestCCEOnEditEvent$1_MethodInfo_[] = {
	{"<init>", "(LTestCCEOnEditEvent;)V", "()V", 0, $method(static_cast<void(TestCCEOnEditEvent$1::*)($TestCCEOnEditEvent*)>(&TestCCEOnEditEvent$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestCCEOnEditEvent$1_EnclosingMethodInfo_ = {
	"TestCCEOnEditEvent",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TestCCEOnEditEvent$1_InnerClassesInfo_[] = {
	{"TestCCEOnEditEvent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestCCEOnEditEvent$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestCCEOnEditEvent$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_TestCCEOnEditEvent$1_FieldInfo_,
	_TestCCEOnEditEvent$1_MethodInfo_,
	nullptr,
	&_TestCCEOnEditEvent$1_EnclosingMethodInfo_,
	_TestCCEOnEditEvent$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestCCEOnEditEvent"
};

$Object* allocate$TestCCEOnEditEvent$1($Class* clazz) {
	return $of($alloc(TestCCEOnEditEvent$1));
}

void TestCCEOnEditEvent$1::init$($TestCCEOnEditEvent* val$test) {
	$set(this, val$test, val$test);
}

void TestCCEOnEditEvent$1::run() {
	$nc(this->val$test)->createAndShowGUI();
}

TestCCEOnEditEvent$1::TestCCEOnEditEvent$1() {
}

$Class* TestCCEOnEditEvent$1::load$($String* name, bool initialize) {
	$loadClass(TestCCEOnEditEvent$1, name, initialize, &_TestCCEOnEditEvent$1_ClassInfo_, allocate$TestCCEOnEditEvent$1);
	return class$;
}

$Class* TestCCEOnEditEvent$1::class$ = nullptr;