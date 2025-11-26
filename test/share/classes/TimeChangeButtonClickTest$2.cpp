#include <TimeChangeButtonClickTest$2.h>

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

$FieldInfo _TimeChangeButtonClickTest$2_FieldInfo_[] = {
	{"val$test", "LTestUI;", nullptr, $FINAL | $SYNTHETIC, $field(TimeChangeButtonClickTest$2, val$test)},
	{}
};

$MethodInfo _TimeChangeButtonClickTest$2_MethodInfo_[] = {
	{"<init>", "(LTestUI;)V", "()V", 0, $method(static_cast<void(TimeChangeButtonClickTest$2::*)($TestUI*)>(&TimeChangeButtonClickTest$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TimeChangeButtonClickTest$2_EnclosingMethodInfo_ = {
	"TimeChangeButtonClickTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TimeChangeButtonClickTest$2_InnerClassesInfo_[] = {
	{"TimeChangeButtonClickTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TimeChangeButtonClickTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"TimeChangeButtonClickTest$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_TimeChangeButtonClickTest$2_FieldInfo_,
	_TimeChangeButtonClickTest$2_MethodInfo_,
	nullptr,
	&_TimeChangeButtonClickTest$2_EnclosingMethodInfo_,
	_TimeChangeButtonClickTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TimeChangeButtonClickTest"
};

$Object* allocate$TimeChangeButtonClickTest$2($Class* clazz) {
	return $of($alloc(TimeChangeButtonClickTest$2));
}

void TimeChangeButtonClickTest$2::init$($TestUI* val$test) {
	$set(this, val$test, val$test);
}

void TimeChangeButtonClickTest$2::run() {
	try {
		$nc(this->val$test)->disposeUI();
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, "Exception while disposing test UI"_s);
	}
}

TimeChangeButtonClickTest$2::TimeChangeButtonClickTest$2() {
}

$Class* TimeChangeButtonClickTest$2::load$($String* name, bool initialize) {
	$loadClass(TimeChangeButtonClickTest$2, name, initialize, &_TimeChangeButtonClickTest$2_ClassInfo_, allocate$TimeChangeButtonClickTest$2);
	return class$;
}

$Class* TimeChangeButtonClickTest$2::class$ = nullptr;