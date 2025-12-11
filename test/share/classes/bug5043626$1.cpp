#include <bug5043626$1.h>

#include <bug5043626.h>
#include <jcpp.h>

using $bug5043626 = ::bug5043626;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug5043626$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug5043626$1::*)()>(&bug5043626$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug5043626$1_EnclosingMethodInfo_ = {
	"bug5043626",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug5043626$1_InnerClassesInfo_[] = {
	{"bug5043626$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug5043626$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug5043626$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug5043626$1_MethodInfo_,
	nullptr,
	&_bug5043626$1_EnclosingMethodInfo_,
	_bug5043626$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug5043626"
};

$Object* allocate$bug5043626$1($Class* clazz) {
	return $of($alloc(bug5043626$1));
}

void bug5043626$1::init$() {
}

void bug5043626$1::run() {
	$bug5043626::createAndShowGUI();
}

bug5043626$1::bug5043626$1() {
}

$Class* bug5043626$1::load$($String* name, bool initialize) {
	$loadClass(bug5043626$1, name, initialize, &_bug5043626$1_ClassInfo_, allocate$bug5043626$1);
	return class$;
}

$Class* bug5043626$1::class$ = nullptr;