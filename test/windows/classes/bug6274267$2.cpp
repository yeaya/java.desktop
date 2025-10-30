#include <bug6274267$2.h>

#include <bug6274267.h>
#include <jcpp.h>

using $bug6274267 = ::bug6274267;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$FieldInfo _bug6274267$2_FieldInfo_[] = {
	{"val$test", "Lbug6274267;", nullptr, $FINAL | $SYNTHETIC, $field(bug6274267$2, val$test)},
	{}
};

$MethodInfo _bug6274267$2_MethodInfo_[] = {
	{"<init>", "(Lbug6274267;)V", "()V", 0, $method(static_cast<void(bug6274267$2::*)($bug6274267*)>(&bug6274267$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6274267$2_EnclosingMethodInfo_ = {
	"bug6274267",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6274267$2_InnerClassesInfo_[] = {
	{"bug6274267$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6274267$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6274267$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6274267$2_FieldInfo_,
	_bug6274267$2_MethodInfo_,
	nullptr,
	&_bug6274267$2_EnclosingMethodInfo_,
	_bug6274267$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6274267"
};

$Object* allocate$bug6274267$2($Class* clazz) {
	return $of($alloc(bug6274267$2));
}

void bug6274267$2::init$($bug6274267* val$test) {
	$set(this, val$test, val$test);
}

void bug6274267$2::run() {
	$nc(this->val$test)->setupUI2();
}

bug6274267$2::bug6274267$2() {
}

$Class* bug6274267$2::load$($String* name, bool initialize) {
	$loadClass(bug6274267$2, name, initialize, &_bug6274267$2_ClassInfo_, allocate$bug6274267$2);
	return class$;
}

$Class* bug6274267$2::class$ = nullptr;