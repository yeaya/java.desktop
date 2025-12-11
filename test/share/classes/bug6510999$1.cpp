#include <bug6510999$1.h>

#include <bug6510999.h>
#include <jcpp.h>

using $bug6510999 = ::bug6510999;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug6510999$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6510999$1::*)()>(&bug6510999$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6510999$1_EnclosingMethodInfo_ = {
	"bug6510999",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6510999$1_InnerClassesInfo_[] = {
	{"bug6510999$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6510999$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6510999$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6510999$1_MethodInfo_,
	nullptr,
	&_bug6510999$1_EnclosingMethodInfo_,
	_bug6510999$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6510999"
};

$Object* allocate$bug6510999$1($Class* clazz) {
	return $of($alloc(bug6510999$1));
}

void bug6510999$1::init$() {
}

void bug6510999$1::run() {
	$bug6510999::createGui();
}

bug6510999$1::bug6510999$1() {
}

$Class* bug6510999$1::load$($String* name, bool initialize) {
	$loadClass(bug6510999$1, name, initialize, &_bug6510999$1_ClassInfo_, allocate$bug6510999$1);
	return class$;
}

$Class* bug6510999$1::class$ = nullptr;