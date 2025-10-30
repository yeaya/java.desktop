#include <bug6209975$1.h>

#include <bug6209975.h>
#include <jcpp.h>

using $bug6209975 = ::bug6209975;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug6209975$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6209975$1::*)()>(&bug6209975$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6209975$1_EnclosingMethodInfo_ = {
	"bug6209975",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6209975$1_InnerClassesInfo_[] = {
	{"bug6209975$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6209975$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6209975$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6209975$1_MethodInfo_,
	nullptr,
	&_bug6209975$1_EnclosingMethodInfo_,
	_bug6209975$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6209975"
};

$Object* allocate$bug6209975$1($Class* clazz) {
	return $of($alloc(bug6209975$1));
}

void bug6209975$1::init$() {
}

void bug6209975$1::run() {
	$bug6209975::createAndShowGUI();
}

bug6209975$1::bug6209975$1() {
}

$Class* bug6209975$1::load$($String* name, bool initialize) {
	$loadClass(bug6209975$1, name, initialize, &_bug6209975$1_ClassInfo_, allocate$bug6209975$1);
	return class$;
}

$Class* bug6209975$1::class$ = nullptr;