#include <Test6256140$1.h>

#include <Test6256140.h>
#include <jcpp.h>

using $Test6256140 = ::Test6256140;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _Test6256140$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test6256140$1::*)()>(&Test6256140$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test6256140$1_EnclosingMethodInfo_ = {
	"Test6256140",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Test6256140$1_InnerClassesInfo_[] = {
	{"Test6256140$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6256140$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test6256140$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Test6256140$1_MethodInfo_,
	nullptr,
	&_Test6256140$1_EnclosingMethodInfo_,
	_Test6256140$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6256140"
};

$Object* allocate$Test6256140$1($Class* clazz) {
	return $of($alloc(Test6256140$1));
}

void Test6256140$1::init$() {
}

void Test6256140$1::run() {
	$Test6256140::createAndShowGUI();
}

Test6256140$1::Test6256140$1() {
}

$Class* Test6256140$1::load$($String* name, bool initialize) {
	$loadClass(Test6256140$1, name, initialize, &_Test6256140$1_ClassInfo_, allocate$Test6256140$1);
	return class$;
}

$Class* Test6256140$1::class$ = nullptr;