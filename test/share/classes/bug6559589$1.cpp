#include <bug6559589$1.h>

#include <bug6559589.h>
#include <jcpp.h>

using $bug6559589 = ::bug6559589;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug6559589$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6559589$1::*)()>(&bug6559589$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6559589$1_EnclosingMethodInfo_ = {
	"bug6559589",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6559589$1_InnerClassesInfo_[] = {
	{"bug6559589$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6559589$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6559589$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6559589$1_MethodInfo_,
	nullptr,
	&_bug6559589$1_EnclosingMethodInfo_,
	_bug6559589$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6559589"
};

$Object* allocate$bug6559589$1($Class* clazz) {
	return $of($alloc(bug6559589$1));
}

void bug6559589$1::init$() {
}

void bug6559589$1::run() {
	$bug6559589::createGui();
}

bug6559589$1::bug6559589$1() {
}

$Class* bug6559589$1::load$($String* name, bool initialize) {
	$loadClass(bug6559589$1, name, initialize, &_bug6559589$1_ClassInfo_, allocate$bug6559589$1);
	return class$;
}

$Class* bug6559589$1::class$ = nullptr;