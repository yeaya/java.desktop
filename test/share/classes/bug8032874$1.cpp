#include <bug8032874$1.h>

#include <bug8032874.h>
#include <jcpp.h>

using $bug8032874 = ::bug8032874;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug8032874$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8032874$1::*)()>(&bug8032874$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8032874$1_EnclosingMethodInfo_ = {
	"bug8032874",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8032874$1_InnerClassesInfo_[] = {
	{"bug8032874$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8032874$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8032874$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8032874$1_MethodInfo_,
	nullptr,
	&_bug8032874$1_EnclosingMethodInfo_,
	_bug8032874$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8032874"
};

$Object* allocate$bug8032874$1($Class* clazz) {
	return $of($alloc(bug8032874$1));
}

void bug8032874$1::init$() {
}

void bug8032874$1::run() {
	$bug8032874::createAndShowUI();
}

bug8032874$1::bug8032874$1() {
}

$Class* bug8032874$1::load$($String* name, bool initialize) {
	$loadClass(bug8032874$1, name, initialize, &_bug8032874$1_ClassInfo_, allocate$bug8032874$1);
	return class$;
}

$Class* bug8032874$1::class$ = nullptr;