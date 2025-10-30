#include <bug6263446$1.h>

#include <bug6263446.h>
#include <jcpp.h>

using $bug6263446 = ::bug6263446;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug6263446$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6263446$1::*)()>(&bug6263446$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6263446$1_EnclosingMethodInfo_ = {
	"bug6263446",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6263446$1_InnerClassesInfo_[] = {
	{"bug6263446$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6263446$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6263446$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6263446$1_MethodInfo_,
	nullptr,
	&_bug6263446$1_EnclosingMethodInfo_,
	_bug6263446$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6263446"
};

$Object* allocate$bug6263446$1($Class* clazz) {
	return $of($alloc(bug6263446$1));
}

void bug6263446$1::init$() {
}

void bug6263446$1::run() {
	$bug6263446::createAndShowGUI();
}

bug6263446$1::bug6263446$1() {
}

$Class* bug6263446$1::load$($String* name, bool initialize) {
	$loadClass(bug6263446$1, name, initialize, &_bug6263446$1_ClassInfo_, allocate$bug6263446$1);
	return class$;
}

$Class* bug6263446$1::class$ = nullptr;