#include <bug4247996$1.h>

#include <bug4247996.h>
#include <jcpp.h>

using $bug4247996 = ::bug4247996;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug4247996$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4247996$1::*)()>(&bug4247996$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4247996$1_EnclosingMethodInfo_ = {
	"bug4247996",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4247996$1_InnerClassesInfo_[] = {
	{"bug4247996$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4247996$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4247996$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4247996$1_MethodInfo_,
	nullptr,
	&_bug4247996$1_EnclosingMethodInfo_,
	_bug4247996$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4247996"
};

$Object* allocate$bug4247996$1($Class* clazz) {
	return $of($alloc(bug4247996$1));
}

void bug4247996$1::init$() {
}

void bug4247996$1::run() {
	$bug4247996::createAndShowGUI();
}

bug4247996$1::bug4247996$1() {
}

$Class* bug4247996$1::load$($String* name, bool initialize) {
	$loadClass(bug4247996$1, name, initialize, &_bug4247996$1_ClassInfo_, allocate$bug4247996$1);
	return class$;
}

$Class* bug4247996$1::class$ = nullptr;