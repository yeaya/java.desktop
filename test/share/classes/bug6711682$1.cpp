#include <bug6711682$1.h>

#include <bug6711682.h>
#include <jcpp.h>

using $bug6711682 = ::bug6711682;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug6711682$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6711682$1::*)()>(&bug6711682$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6711682$1_EnclosingMethodInfo_ = {
	"bug6711682",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6711682$1_InnerClassesInfo_[] = {
	{"bug6711682$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6711682$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6711682$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6711682$1_MethodInfo_,
	nullptr,
	&_bug6711682$1_EnclosingMethodInfo_,
	_bug6711682$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6711682"
};

$Object* allocate$bug6711682$1($Class* clazz) {
	return $of($alloc(bug6711682$1));
}

void bug6711682$1::init$() {
}

void bug6711682$1::run() {
	$bug6711682::createAndShowGUI();
}

bug6711682$1::bug6711682$1() {
}

$Class* bug6711682$1::load$($String* name, bool initialize) {
	$loadClass(bug6711682$1, name, initialize, &_bug6711682$1_ClassInfo_, allocate$bug6711682$1);
	return class$;
}

$Class* bug6711682$1::class$ = nullptr;