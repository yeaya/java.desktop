#include <bug6348946$1.h>

#include <bug6348946.h>
#include <jcpp.h>

using $bug6348946 = ::bug6348946;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug6348946$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6348946$1::*)()>(&bug6348946$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6348946$1_EnclosingMethodInfo_ = {
	"bug6348946",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6348946$1_InnerClassesInfo_[] = {
	{"bug6348946$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6348946$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6348946$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6348946$1_MethodInfo_,
	nullptr,
	&_bug6348946$1_EnclosingMethodInfo_,
	_bug6348946$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6348946"
};

$Object* allocate$bug6348946$1($Class* clazz) {
	return $of($alloc(bug6348946$1));
}

void bug6348946$1::init$() {
}

void bug6348946$1::run() {
	$bug6348946::setupUI();
}

bug6348946$1::bug6348946$1() {
}

$Class* bug6348946$1::load$($String* name, bool initialize) {
	$loadClass(bug6348946$1, name, initialize, &_bug6348946$1_ClassInfo_, allocate$bug6348946$1);
	return class$;
}

$Class* bug6348946$1::class$ = nullptr;