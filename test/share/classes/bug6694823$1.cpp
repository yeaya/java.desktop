#include <bug6694823$1.h>

#include <bug6694823.h>
#include <jcpp.h>

using $bug6694823 = ::bug6694823;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug6694823$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6694823$1::*)()>(&bug6694823$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6694823$1_EnclosingMethodInfo_ = {
	"bug6694823",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6694823$1_InnerClassesInfo_[] = {
	{"bug6694823$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6694823$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6694823$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6694823$1_MethodInfo_,
	nullptr,
	&_bug6694823$1_EnclosingMethodInfo_,
	_bug6694823$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6694823"
};

$Object* allocate$bug6694823$1($Class* clazz) {
	return $of($alloc(bug6694823$1));
}

void bug6694823$1::init$() {
}

void bug6694823$1::run() {
	$bug6694823::createGui();
}

bug6694823$1::bug6694823$1() {
}

$Class* bug6694823$1::load$($String* name, bool initialize) {
	$loadClass(bug6694823$1, name, initialize, &_bug6694823$1_ClassInfo_, allocate$bug6694823$1);
	return class$;
}

$Class* bug6694823$1::class$ = nullptr;