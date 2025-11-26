#include <bug6578666$2.h>

#include <bug6578666.h>
#include <jcpp.h>

using $bug6578666 = ::bug6578666;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug6578666$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6578666$2::*)()>(&bug6578666$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6578666$2_EnclosingMethodInfo_ = {
	"bug6578666",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6578666$2_InnerClassesInfo_[] = {
	{"bug6578666$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6578666$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6578666$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6578666$2_MethodInfo_,
	nullptr,
	&_bug6578666$2_EnclosingMethodInfo_,
	_bug6578666$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6578666"
};

$Object* allocate$bug6578666$2($Class* clazz) {
	return $of($alloc(bug6578666$2));
}

void bug6578666$2::init$() {
}

void bug6578666$2::run() {
	$bug6578666::createGui();
}

bug6578666$2::bug6578666$2() {
}

$Class* bug6578666$2::load$($String* name, bool initialize) {
	$loadClass(bug6578666$2, name, initialize, &_bug6578666$2_ClassInfo_, allocate$bug6578666$2);
	return class$;
}

$Class* bug6578666$2::class$ = nullptr;