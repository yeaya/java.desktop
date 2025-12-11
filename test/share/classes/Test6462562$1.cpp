#include <Test6462562$1.h>

#include <Test6462562.h>
#include <jcpp.h>

using $Test6462562 = ::Test6462562;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Test6462562$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test6462562$1::*)()>(&Test6462562$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test6462562$1_EnclosingMethodInfo_ = {
	"Test6462562",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Test6462562$1_InnerClassesInfo_[] = {
	{"Test6462562$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6462562$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test6462562$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Test6462562$1_MethodInfo_,
	nullptr,
	&_Test6462562$1_EnclosingMethodInfo_,
	_Test6462562$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6462562"
};

$Object* allocate$Test6462562$1($Class* clazz) {
	return $of($alloc(Test6462562$1));
}

void Test6462562$1::init$() {
}

void Test6462562$1::run() {
	$$new($Test6462562)->test();
}

Test6462562$1::Test6462562$1() {
}

$Class* Test6462562$1::load$($String* name, bool initialize) {
	$loadClass(Test6462562$1, name, initialize, &_Test6462562$1_ClassInfo_, allocate$Test6462562$1);
	return class$;
}

$Class* Test6462562$1::class$ = nullptr;