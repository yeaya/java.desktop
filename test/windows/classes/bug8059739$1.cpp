#include <bug8059739$1.h>

#include <bug8059739.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug8059739 = ::bug8059739;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug8059739$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8059739$1::*)()>(&bug8059739$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8059739$1_EnclosingMethodInfo_ = {
	"bug8059739",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8059739$1_InnerClassesInfo_[] = {
	{"bug8059739$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8059739$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8059739$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8059739$1_MethodInfo_,
	nullptr,
	&_bug8059739$1_EnclosingMethodInfo_,
	_bug8059739$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8059739"
};

$Object* allocate$bug8059739$1($Class* clazz) {
	return $of($alloc(bug8059739$1));
}

void bug8059739$1::init$() {
}

void bug8059739$1::run() {
	try {
		$bug8059739::runTest();
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		e->printStackTrace();
		$init($bug8059739);
		$bug8059739::passed = false;
	}
}

bug8059739$1::bug8059739$1() {
}

$Class* bug8059739$1::load$($String* name, bool initialize) {
	$loadClass(bug8059739$1, name, initialize, &_bug8059739$1_ClassInfo_, allocate$bug8059739$1);
	return class$;
}

$Class* bug8059739$1::class$ = nullptr;