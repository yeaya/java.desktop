#include <bug6489130$2.h>

#include <bug6489130.h>
#include <jcpp.h>

using $bug6489130 = ::bug6489130;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug6489130$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6489130$2::*)()>(&bug6489130$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6489130$2_EnclosingMethodInfo_ = {
	"bug6489130",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6489130$2_InnerClassesInfo_[] = {
	{"bug6489130$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6489130$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6489130$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6489130$2_MethodInfo_,
	nullptr,
	&_bug6489130$2_EnclosingMethodInfo_,
	_bug6489130$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6489130"
};

$Object* allocate$bug6489130$2($Class* clazz) {
	return $of($alloc(bug6489130$2));
}

void bug6489130$2::init$() {
}

void bug6489130$2::run() {
	$$new($bug6489130)->run();
}

bug6489130$2::bug6489130$2() {
}

$Class* bug6489130$2::load$($String* name, bool initialize) {
	$loadClass(bug6489130$2, name, initialize, &_bug6489130$2_ClassInfo_, allocate$bug6489130$2);
	return class$;
}

$Class* bug6489130$2::class$ = nullptr;