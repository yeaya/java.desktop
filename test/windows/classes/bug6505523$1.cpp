#include <bug6505523$1.h>

#include <bug6505523.h>
#include <jcpp.h>

using $bug6505523 = ::bug6505523;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug6505523$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6505523$1::*)()>(&bug6505523$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6505523$1_EnclosingMethodInfo_ = {
	"bug6505523",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6505523$1_InnerClassesInfo_[] = {
	{"bug6505523$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6505523$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6505523$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6505523$1_MethodInfo_,
	nullptr,
	&_bug6505523$1_EnclosingMethodInfo_,
	_bug6505523$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6505523"
};

$Object* allocate$bug6505523$1($Class* clazz) {
	return $of($alloc(bug6505523$1));
}

void bug6505523$1::init$() {
}

void bug6505523$1::run() {
	$bug6505523::createAndShowGUI();
}

bug6505523$1::bug6505523$1() {
}

$Class* bug6505523$1::load$($String* name, bool initialize) {
	$loadClass(bug6505523$1, name, initialize, &_bug6505523$1_ClassInfo_, allocate$bug6505523$1);
	return class$;
}

$Class* bug6505523$1::class$ = nullptr;