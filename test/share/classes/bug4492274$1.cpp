#include <bug4492274$1.h>

#include <bug4492274.h>
#include <jcpp.h>

using $bug4492274 = ::bug4492274;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug4492274$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4492274$1::*)()>(&bug4492274$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4492274$1_EnclosingMethodInfo_ = {
	"bug4492274",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4492274$1_InnerClassesInfo_[] = {
	{"bug4492274$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4492274$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4492274$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4492274$1_MethodInfo_,
	nullptr,
	&_bug4492274$1_EnclosingMethodInfo_,
	_bug4492274$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4492274"
};

$Object* allocate$bug4492274$1($Class* clazz) {
	return $of($alloc(bug4492274$1));
}

void bug4492274$1::init$() {
}

void bug4492274$1::run() {
	$bug4492274::createAndShowGUI();
}

bug4492274$1::bug4492274$1() {
}

$Class* bug4492274$1::load$($String* name, bool initialize) {
	$loadClass(bug4492274$1, name, initialize, &_bug4492274$1_ClassInfo_, allocate$bug4492274$1);
	return class$;
}

$Class* bug4492274$1::class$ = nullptr;