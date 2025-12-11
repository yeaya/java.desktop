#include <bug6547087$1.h>

#include <bug6547087.h>
#include <jcpp.h>

using $bug6547087 = ::bug6547087;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug6547087$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6547087$1::*)()>(&bug6547087$1::init$))},
	{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _bug6547087$1_EnclosingMethodInfo_ = {
	"bug6547087",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6547087$1_InnerClassesInfo_[] = {
	{"bug6547087$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6547087$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6547087$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	nullptr,
	_bug6547087$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
	&_bug6547087$1_EnclosingMethodInfo_,
	_bug6547087$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6547087"
};

$Object* allocate$bug6547087$1($Class* clazz) {
	return $of($alloc(bug6547087$1));
}

void bug6547087$1::init$() {
}

$Object* bug6547087$1::call() {
	$bug6547087::test();
	return $of(nullptr);
}

bug6547087$1::bug6547087$1() {
}

$Class* bug6547087$1::load$($String* name, bool initialize) {
	$loadClass(bug6547087$1, name, initialize, &_bug6547087$1_ClassInfo_, allocate$bug6547087$1);
	return class$;
}

$Class* bug6547087$1::class$ = nullptr;