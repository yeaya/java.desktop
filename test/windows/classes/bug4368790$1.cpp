#include <bug4368790$1.h>

#include <bug4368790.h>
#include <jcpp.h>

using $bug4368790 = ::bug4368790;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug4368790$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4368790$1::*)()>(&bug4368790$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4368790$1_EnclosingMethodInfo_ = {
	"bug4368790",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4368790$1_InnerClassesInfo_[] = {
	{"bug4368790$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4368790$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4368790$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4368790$1_MethodInfo_,
	nullptr,
	&_bug4368790$1_EnclosingMethodInfo_,
	_bug4368790$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4368790"
};

$Object* allocate$bug4368790$1($Class* clazz) {
	return $of($alloc(bug4368790$1));
}

void bug4368790$1::init$() {
}

void bug4368790$1::run() {
	$bug4368790::createGui();
}

bug4368790$1::bug4368790$1() {
}

$Class* bug4368790$1::load$($String* name, bool initialize) {
	$loadClass(bug4368790$1, name, initialize, &_bug4368790$1_ClassInfo_, allocate$bug4368790$1);
	return class$;
}

$Class* bug4368790$1::class$ = nullptr;