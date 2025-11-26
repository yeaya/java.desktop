#include <bug6875153$1.h>

#include <bug6875153.h>
#include <jcpp.h>

using $bug6875153 = ::bug6875153;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug6875153$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6875153$1::*)()>(&bug6875153$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6875153$1_EnclosingMethodInfo_ = {
	"bug6875153",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6875153$1_InnerClassesInfo_[] = {
	{"bug6875153$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6875153$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6875153$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6875153$1_MethodInfo_,
	nullptr,
	&_bug6875153$1_EnclosingMethodInfo_,
	_bug6875153$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6875153"
};

$Object* allocate$bug6875153$1($Class* clazz) {
	return $of($alloc(bug6875153$1));
}

void bug6875153$1::init$() {
}

void bug6875153$1::run() {
	$bug6875153::createGui();
}

bug6875153$1::bug6875153$1() {
}

$Class* bug6875153$1::load$($String* name, bool initialize) {
	$loadClass(bug6875153$1, name, initialize, &_bug6875153$1_ClassInfo_, allocate$bug6875153$1);
	return class$;
}

$Class* bug6875153$1::class$ = nullptr;