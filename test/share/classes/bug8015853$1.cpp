#include <bug8015853$1.h>

#include <bug8015853.h>
#include <jcpp.h>

using $bug8015853 = ::bug8015853;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug8015853$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8015853$1::*)()>(&bug8015853$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8015853$1_EnclosingMethodInfo_ = {
	"bug8015853",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8015853$1_InnerClassesInfo_[] = {
	{"bug8015853$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8015853$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8015853$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8015853$1_MethodInfo_,
	nullptr,
	&_bug8015853$1_EnclosingMethodInfo_,
	_bug8015853$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8015853"
};

$Object* allocate$bug8015853$1($Class* clazz) {
	return $of($alloc(bug8015853$1));
}

void bug8015853$1::init$() {
}

void bug8015853$1::run() {
	$bug8015853::createAndShowGUI();
}

bug8015853$1::bug8015853$1() {
}

$Class* bug8015853$1::load$($String* name, bool initialize) {
	$loadClass(bug8015853$1, name, initialize, &_bug8015853$1_ClassInfo_, allocate$bug8015853$1);
	return class$;
}

$Class* bug8015853$1::class$ = nullptr;