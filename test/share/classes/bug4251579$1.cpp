#include <bug4251579$1.h>

#include <bug4251579.h>
#include <jcpp.h>

using $bug4251579 = ::bug4251579;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug4251579$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4251579$1::*)()>(&bug4251579$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4251579$1_EnclosingMethodInfo_ = {
	"bug4251579",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4251579$1_InnerClassesInfo_[] = {
	{"bug4251579$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4251579$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4251579$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4251579$1_MethodInfo_,
	nullptr,
	&_bug4251579$1_EnclosingMethodInfo_,
	_bug4251579$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4251579"
};

$Object* allocate$bug4251579$1($Class* clazz) {
	return $of($alloc(bug4251579$1));
}

void bug4251579$1::init$() {
}

void bug4251579$1::run() {
	$bug4251579::createAndShowGUI();
}

bug4251579$1::bug4251579$1() {
}

$Class* bug4251579$1::load$($String* name, bool initialize) {
	$loadClass(bug4251579$1, name, initialize, &_bug4251579$1_ClassInfo_, allocate$bug4251579$1);
	return class$;
}

$Class* bug4251579$1::class$ = nullptr;