#include <Test4783068$1.h>

#include <Test4783068.h>
#include <jcpp.h>

using $Test4783068 = ::Test4783068;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Test4783068$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test4783068$1::*)()>(&Test4783068$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test4783068$1_EnclosingMethodInfo_ = {
	"Test4783068",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Test4783068$1_InnerClassesInfo_[] = {
	{"Test4783068$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test4783068$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test4783068$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Test4783068$1_MethodInfo_,
	nullptr,
	&_Test4783068$1_EnclosingMethodInfo_,
	_Test4783068$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test4783068"
};

$Object* allocate$Test4783068$1($Class* clazz) {
	return $of($alloc(Test4783068$1));
}

void Test4783068$1::init$() {
}

void Test4783068$1::run() {
	$$new($Test4783068)->test();
}

Test4783068$1::Test4783068$1() {
}

$Class* Test4783068$1::load$($String* name, bool initialize) {
	$loadClass(Test4783068$1, name, initialize, &_Test4783068$1_ClassInfo_, allocate$Test4783068$1);
	return class$;
}

$Class* Test4783068$1::class$ = nullptr;