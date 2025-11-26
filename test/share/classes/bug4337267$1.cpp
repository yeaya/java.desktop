#include <bug4337267$1.h>

#include <bug4337267.h>
#include <jcpp.h>

using $bug4337267 = ::bug4337267;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$FieldInfo _bug4337267$1_FieldInfo_[] = {
	{"val$test", "Lbug4337267;", nullptr, $FINAL | $SYNTHETIC, $field(bug4337267$1, val$test)},
	{}
};

$MethodInfo _bug4337267$1_MethodInfo_[] = {
	{"<init>", "(Lbug4337267;)V", "()V", 0, $method(static_cast<void(bug4337267$1::*)($bug4337267*)>(&bug4337267$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4337267$1_EnclosingMethodInfo_ = {
	"bug4337267",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4337267$1_InnerClassesInfo_[] = {
	{"bug4337267$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4337267$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4337267$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4337267$1_FieldInfo_,
	_bug4337267$1_MethodInfo_,
	nullptr,
	&_bug4337267$1_EnclosingMethodInfo_,
	_bug4337267$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4337267"
};

$Object* allocate$bug4337267$1($Class* clazz) {
	return $of($alloc(bug4337267$1));
}

void bug4337267$1::init$($bug4337267* val$test) {
	$set(this, val$test, val$test);
}

void bug4337267$1::run() {
	$nc(this->val$test)->run();
}

bug4337267$1::bug4337267$1() {
}

$Class* bug4337267$1::load$($String* name, bool initialize) {
	$loadClass(bug4337267$1, name, initialize, &_bug4337267$1_ClassInfo_, allocate$bug4337267$1);
	return class$;
}

$Class* bug4337267$1::class$ = nullptr;