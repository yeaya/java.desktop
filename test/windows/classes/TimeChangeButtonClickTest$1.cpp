#include <TimeChangeButtonClickTest$1.h>

#include <TestUI.h>
#include <TimeChangeButtonClickTest.h>
#include <jcpp.h>

using $TestUI = ::TestUI;
using $TimeChangeButtonClickTest = ::TimeChangeButtonClickTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _TimeChangeButtonClickTest$1_FieldInfo_[] = {
	{"val$test", "LTestUI;", nullptr, $FINAL | $SYNTHETIC, $field(TimeChangeButtonClickTest$1, val$test)},
	{}
};

$MethodInfo _TimeChangeButtonClickTest$1_MethodInfo_[] = {
	{"<init>", "(LTestUI;)V", "()V", 0, $method(static_cast<void(TimeChangeButtonClickTest$1::*)($TestUI*)>(&TimeChangeButtonClickTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TimeChangeButtonClickTest$1_EnclosingMethodInfo_ = {
	"TimeChangeButtonClickTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TimeChangeButtonClickTest$1_InnerClassesInfo_[] = {
	{"TimeChangeButtonClickTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TimeChangeButtonClickTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"TimeChangeButtonClickTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_TimeChangeButtonClickTest$1_FieldInfo_,
	_TimeChangeButtonClickTest$1_MethodInfo_,
	nullptr,
	&_TimeChangeButtonClickTest$1_EnclosingMethodInfo_,
	_TimeChangeButtonClickTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TimeChangeButtonClickTest"
};

$Object* allocate$TimeChangeButtonClickTest$1($Class* clazz) {
	return $of($alloc(TimeChangeButtonClickTest$1));
}

void TimeChangeButtonClickTest$1::init$($TestUI* val$test) {
	$set(this, val$test, val$test);
}

void TimeChangeButtonClickTest$1::run() {
	try {
		$nc(this->val$test)->createUI();
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, "Exception while creating test UI"_s);
	}
}

TimeChangeButtonClickTest$1::TimeChangeButtonClickTest$1() {
}

$Class* TimeChangeButtonClickTest$1::load$($String* name, bool initialize) {
	$loadClass(TimeChangeButtonClickTest$1, name, initialize, &_TimeChangeButtonClickTest$1_ClassInfo_, allocate$TimeChangeButtonClickTest$1);
	return class$;
}

$Class* TimeChangeButtonClickTest$1::class$ = nullptr;