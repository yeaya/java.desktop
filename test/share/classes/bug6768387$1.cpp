#include <bug6768387$1.h>

#include <bug6768387.h>
#include <jcpp.h>

using $bug6768387 = ::bug6768387;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug6768387$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6768387$1::*)()>(&bug6768387$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6768387$1_EnclosingMethodInfo_ = {
	"bug6768387",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6768387$1_InnerClassesInfo_[] = {
	{"bug6768387$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6768387$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6768387$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6768387$1_MethodInfo_,
	nullptr,
	&_bug6768387$1_EnclosingMethodInfo_,
	_bug6768387$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6768387"
};

$Object* allocate$bug6768387$1($Class* clazz) {
	return $of($alloc(bug6768387$1));
}

void bug6768387$1::init$() {
}

void bug6768387$1::run() {
	$bug6768387::createGui();
}

bug6768387$1::bug6768387$1() {
}

$Class* bug6768387$1::load$($String* name, bool initialize) {
	$loadClass(bug6768387$1, name, initialize, &_bug6768387$1_ClassInfo_, allocate$bug6768387$1);
	return class$;
}

$Class* bug6768387$1::class$ = nullptr;