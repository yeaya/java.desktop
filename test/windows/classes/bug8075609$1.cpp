#include <bug8075609$1.h>

#include <bug8075609.h>
#include <jcpp.h>

using $bug8075609 = ::bug8075609;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug8075609$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8075609$1::*)()>(&bug8075609$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8075609$1_EnclosingMethodInfo_ = {
	"bug8075609",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8075609$1_InnerClassesInfo_[] = {
	{"bug8075609$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8075609$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8075609$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8075609$1_MethodInfo_,
	nullptr,
	&_bug8075609$1_EnclosingMethodInfo_,
	_bug8075609$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8075609"
};

$Object* allocate$bug8075609$1($Class* clazz) {
	return $of($alloc(bug8075609$1));
}

void bug8075609$1::init$() {
}

void bug8075609$1::run() {
	$bug8075609::createAndShowGUI();
}

bug8075609$1::bug8075609$1() {
}

$Class* bug8075609$1::load$($String* name, bool initialize) {
	$loadClass(bug8075609$1, name, initialize, &_bug8075609$1_ClassInfo_, allocate$bug8075609$1);
	return class$;
}

$Class* bug8075609$1::class$ = nullptr;