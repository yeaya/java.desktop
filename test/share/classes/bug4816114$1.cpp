#include <bug4816114$1.h>

#include <bug4816114.h>
#include <jcpp.h>

using $bug4816114 = ::bug4816114;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug4816114$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4816114$1::*)()>(&bug4816114$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4816114$1_EnclosingMethodInfo_ = {
	"bug4816114",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4816114$1_InnerClassesInfo_[] = {
	{"bug4816114$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4816114$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4816114$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4816114$1_MethodInfo_,
	nullptr,
	&_bug4816114$1_EnclosingMethodInfo_,
	_bug4816114$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4816114"
};

$Object* allocate$bug4816114$1($Class* clazz) {
	return $of($alloc(bug4816114$1));
}

void bug4816114$1::init$() {
}

void bug4816114$1::run() {
	$init($bug4816114);
	$nc($bug4816114::test)->createAndShowGUI();
}

bug4816114$1::bug4816114$1() {
}

$Class* bug4816114$1::load$($String* name, bool initialize) {
	$loadClass(bug4816114$1, name, initialize, &_bug4816114$1_ClassInfo_, allocate$bug4816114$1);
	return class$;
}

$Class* bug4816114$1::class$ = nullptr;