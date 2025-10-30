#include <bug8058120$1.h>

#include <bug8058120.h>
#include <jcpp.h>

using $bug8058120 = ::bug8058120;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug8058120$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8058120$1::*)()>(&bug8058120$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8058120$1_EnclosingMethodInfo_ = {
	"bug8058120",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8058120$1_InnerClassesInfo_[] = {
	{"bug8058120$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8058120$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8058120$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8058120$1_MethodInfo_,
	nullptr,
	&_bug8058120$1_EnclosingMethodInfo_,
	_bug8058120$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8058120"
};

$Object* allocate$bug8058120$1($Class* clazz) {
	return $of($alloc(bug8058120$1));
}

void bug8058120$1::init$() {
}

void bug8058120$1::run() {
	$bug8058120::createAndShowGUI();
}

bug8058120$1::bug8058120$1() {
}

$Class* bug8058120$1::load$($String* name, bool initialize) {
	$loadClass(bug8058120$1, name, initialize, &_bug8058120$1_ClassInfo_, allocate$bug8058120$1);
	return class$;
}

$Class* bug8058120$1::class$ = nullptr;