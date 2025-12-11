#include <bug6883341$1.h>

#include <bug6883341.h>
#include <jcpp.h>

using $bug6883341 = ::bug6883341;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug6883341$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6883341$1::*)()>(&bug6883341$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6883341$1_EnclosingMethodInfo_ = {
	"bug6883341",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6883341$1_InnerClassesInfo_[] = {
	{"bug6883341$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6883341$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6883341$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6883341$1_MethodInfo_,
	nullptr,
	&_bug6883341$1_EnclosingMethodInfo_,
	_bug6883341$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6883341"
};

$Object* allocate$bug6883341$1($Class* clazz) {
	return $of($alloc(bug6883341$1));
}

void bug6883341$1::init$() {
}

void bug6883341$1::run() {
	$bug6883341::createGui();
}

bug6883341$1::bug6883341$1() {
}

$Class* bug6883341$1::load$($String* name, bool initialize) {
	$loadClass(bug6883341$1, name, initialize, &_bug6883341$1_ClassInfo_, allocate$bug6883341$1);
	return class$;
}

$Class* bug6883341$1::class$ = nullptr;