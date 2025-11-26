#include <bug4865918$2.h>

#include <bug4865918$TestScrollBar.h>
#include <bug4865918.h>
#include <jcpp.h>

using $bug4865918 = ::bug4865918;
using $bug4865918$TestScrollBar = ::bug4865918$TestScrollBar;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug4865918$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4865918$2::*)()>(&bug4865918$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4865918$2_EnclosingMethodInfo_ = {
	"bug4865918",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4865918$2_InnerClassesInfo_[] = {
	{"bug4865918$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4865918$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4865918$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4865918$2_MethodInfo_,
	nullptr,
	&_bug4865918$2_EnclosingMethodInfo_,
	_bug4865918$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4865918"
};

$Object* allocate$bug4865918$2($Class* clazz) {
	return $of($alloc(bug4865918$2));
}

void bug4865918$2::init$() {
}

void bug4865918$2::run() {
	$init($bug4865918);
	$nc($bug4865918::sbar)->pressMouse();
}

bug4865918$2::bug4865918$2() {
}

$Class* bug4865918$2::load$($String* name, bool initialize) {
	$loadClass(bug4865918$2, name, initialize, &_bug4865918$2_ClassInfo_, allocate$bug4865918$2);
	return class$;
}

$Class* bug4865918$2::class$ = nullptr;