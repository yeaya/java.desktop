#include <bug6872503$1.h>

#include <bug6872503.h>
#include <jcpp.h>

using $bug6872503 = ::bug6872503;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug6872503$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6872503$1::*)()>(&bug6872503$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6872503$1_EnclosingMethodInfo_ = {
	"bug6872503",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6872503$1_InnerClassesInfo_[] = {
	{"bug6872503$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6872503$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6872503$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6872503$1_MethodInfo_,
	nullptr,
	&_bug6872503$1_EnclosingMethodInfo_,
	_bug6872503$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6872503"
};

$Object* allocate$bug6872503$1($Class* clazz) {
	return $of($alloc(bug6872503$1));
}

void bug6872503$1::init$() {
}

void bug6872503$1::run() {
	$bug6872503::createGui();
}

bug6872503$1::bug6872503$1() {
}

$Class* bug6872503$1::load$($String* name, bool initialize) {
	$loadClass(bug6872503$1, name, initialize, &_bug6872503$1_ClassInfo_, allocate$bug6872503$1);
	return class$;
}

$Class* bug6872503$1::class$ = nullptr;