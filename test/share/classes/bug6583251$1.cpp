#include <bug6583251$1.h>

#include <bug6583251.h>
#include <jcpp.h>

using $bug6583251 = ::bug6583251;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug6583251$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6583251$1::*)()>(&bug6583251$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6583251$1_EnclosingMethodInfo_ = {
	"bug6583251",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6583251$1_InnerClassesInfo_[] = {
	{"bug6583251$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6583251$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6583251$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6583251$1_MethodInfo_,
	nullptr,
	&_bug6583251$1_EnclosingMethodInfo_,
	_bug6583251$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6583251"
};

$Object* allocate$bug6583251$1($Class* clazz) {
	return $of($alloc(bug6583251$1));
}

void bug6583251$1::init$() {
}

void bug6583251$1::run() {
	$bug6583251::createGui();
}

bug6583251$1::bug6583251$1() {
}

$Class* bug6583251$1::load$($String* name, bool initialize) {
	$loadClass(bug6583251$1, name, initialize, &_bug6583251$1_ClassInfo_, allocate$bug6583251$1);
	return class$;
}

$Class* bug6583251$1::class$ = nullptr;