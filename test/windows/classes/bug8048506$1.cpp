#include <bug8048506$1.h>

#include <bug8048506.h>
#include <jcpp.h>

using $bug8048506 = ::bug8048506;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug8048506$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8048506$1::*)()>(&bug8048506$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8048506$1_EnclosingMethodInfo_ = {
	"bug8048506",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8048506$1_InnerClassesInfo_[] = {
	{"bug8048506$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8048506$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8048506$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8048506$1_MethodInfo_,
	nullptr,
	&_bug8048506$1_EnclosingMethodInfo_,
	_bug8048506$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8048506"
};

$Object* allocate$bug8048506$1($Class* clazz) {
	return $of($alloc(bug8048506$1));
}

void bug8048506$1::init$() {
}

void bug8048506$1::run() {
	$bug8048506::createAndShowGUI();
}

bug8048506$1::bug8048506$1() {
}

$Class* bug8048506$1::load$($String* name, bool initialize) {
	$loadClass(bug8048506$1, name, initialize, &_bug8048506$1_ClassInfo_, allocate$bug8048506$1);
	return class$;
}

$Class* bug8048506$1::class$ = nullptr;