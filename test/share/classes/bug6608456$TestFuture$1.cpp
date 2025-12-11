#include <bug6608456$TestFuture$1.h>

#include <bug6608456$TestFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug6608456$TestFuture$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6608456$TestFuture$1::*)()>(&bug6608456$TestFuture$1::init$))},
	{"call", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6608456$TestFuture$1_EnclosingMethodInfo_ = {
	"bug6608456$TestFuture",
	"<init>",
	"()V"
};

$InnerClassInfo _bug6608456$TestFuture$1_InnerClassesInfo_[] = {
	{"bug6608456$TestFuture", "bug6608456", "TestFuture", $STATIC},
	{"bug6608456$TestFuture$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6608456$TestFuture$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6608456$TestFuture$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	nullptr,
	_bug6608456$TestFuture$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Boolean;>;",
	&_bug6608456$TestFuture$1_EnclosingMethodInfo_,
	_bug6608456$TestFuture$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6608456"
};

$Object* allocate$bug6608456$TestFuture$1($Class* clazz) {
	return $of($alloc(bug6608456$TestFuture$1));
}

void bug6608456$TestFuture$1::init$() {
}

$Object* bug6608456$TestFuture$1::call() {
	return $of(nullptr);
}

bug6608456$TestFuture$1::bug6608456$TestFuture$1() {
}

$Class* bug6608456$TestFuture$1::load$($String* name, bool initialize) {
	$loadClass(bug6608456$TestFuture$1, name, initialize, &_bug6608456$TestFuture$1_ClassInfo_, allocate$bug6608456$TestFuture$1);
	return class$;
}

$Class* bug6608456$TestFuture$1::class$ = nullptr;