#include <SliderTickTest$1.h>

#include <SliderTickTest.h>
#include <TestUI.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _SliderTickTest$1_FieldInfo_[] = {
	{"val$test", "LTestUI;", nullptr, $FINAL | $SYNTHETIC, $field(SliderTickTest$1, val$test)},
	{}
};

$MethodInfo _SliderTickTest$1_MethodInfo_[] = {
	{"<init>", "(LTestUI;)V", "()V", 0, $method(static_cast<void(SliderTickTest$1::*)($TestUI*)>(&SliderTickTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SliderTickTest$1_EnclosingMethodInfo_ = {
	"SliderTickTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _SliderTickTest$1_InnerClassesInfo_[] = {
	{"SliderTickTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SliderTickTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"SliderTickTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_SliderTickTest$1_FieldInfo_,
	_SliderTickTest$1_MethodInfo_,
	nullptr,
	&_SliderTickTest$1_EnclosingMethodInfo_,
	_SliderTickTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SliderTickTest"
};

$Object* allocate$SliderTickTest$1($Class* clazz) {
	return $of($alloc(SliderTickTest$1));
}

void SliderTickTest$1::init$($TestUI* val$test) {
	$set(this, val$test, val$test);
}

void SliderTickTest$1::run() {
	try {
		$nc(this->val$test)->createUI();
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$throwNew($RuntimeException, "Exception while creating UI"_s);
	}
}

SliderTickTest$1::SliderTickTest$1() {
}

$Class* SliderTickTest$1::load$($String* name, bool initialize) {
	$loadClass(SliderTickTest$1, name, initialize, &_SliderTickTest$1_ClassInfo_, allocate$SliderTickTest$1);
	return class$;
}

$Class* SliderTickTest$1::class$ = nullptr;