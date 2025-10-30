#include <SliderTickTest$2.h>

#include <SliderTickTest.h>
#include <TestUI.h>
#include <jcpp.h>

using $SliderTickTest = ::SliderTickTest;
using $TestUI = ::TestUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _SliderTickTest$2_FieldInfo_[] = {
	{"val$test", "LTestUI;", nullptr, $FINAL | $SYNTHETIC, $field(SliderTickTest$2, val$test)},
	{}
};

$MethodInfo _SliderTickTest$2_MethodInfo_[] = {
	{"<init>", "(LTestUI;)V", "()V", 0, $method(static_cast<void(SliderTickTest$2::*)($TestUI*)>(&SliderTickTest$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SliderTickTest$2_EnclosingMethodInfo_ = {
	"SliderTickTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _SliderTickTest$2_InnerClassesInfo_[] = {
	{"SliderTickTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SliderTickTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"SliderTickTest$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_SliderTickTest$2_FieldInfo_,
	_SliderTickTest$2_MethodInfo_,
	nullptr,
	&_SliderTickTest$2_EnclosingMethodInfo_,
	_SliderTickTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SliderTickTest"
};

$Object* allocate$SliderTickTest$2($Class* clazz) {
	return $of($alloc(SliderTickTest$2));
}

void SliderTickTest$2::init$($TestUI* val$test) {
	$set(this, val$test, val$test);
}

void SliderTickTest$2::run() {
	try {
		$nc(this->val$test)->disposeUI();
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, "Exception while disposing UI"_s);
	}
}

SliderTickTest$2::SliderTickTest$2() {
}

$Class* SliderTickTest$2::load$($String* name, bool initialize) {
	$loadClass(SliderTickTest$2, name, initialize, &_SliderTickTest$2_ClassInfo_, allocate$SliderTickTest$2);
	return class$;
}

$Class* SliderTickTest$2::class$ = nullptr;