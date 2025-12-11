#include <bug6607130$1.h>

#include <bug6607130.h>
#include <jcpp.h>

using $bug6607130 = ::bug6607130;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug6607130$1_FieldInfo_[] = {
	{"val$test", "Lbug6607130;", nullptr, $FINAL | $SYNTHETIC, $field(bug6607130$1, val$test)},
	{}
};

$MethodInfo _bug6607130$1_MethodInfo_[] = {
	{"<init>", "(Lbug6607130;)V", "()V", 0, $method(static_cast<void(bug6607130$1::*)($bug6607130*)>(&bug6607130$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6607130$1_EnclosingMethodInfo_ = {
	"bug6607130",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6607130$1_InnerClassesInfo_[] = {
	{"bug6607130$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6607130$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6607130$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6607130$1_FieldInfo_,
	_bug6607130$1_MethodInfo_,
	nullptr,
	&_bug6607130$1_EnclosingMethodInfo_,
	_bug6607130$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6607130"
};

$Object* allocate$bug6607130$1($Class* clazz) {
	return $of($alloc(bug6607130$1));
}

void bug6607130$1::init$($bug6607130* val$test) {
	$set(this, val$test, val$test);
}

void bug6607130$1::run() {
	$nc(this->val$test)->setupUI();
}

bug6607130$1::bug6607130$1() {
}

$Class* bug6607130$1::load$($String* name, bool initialize) {
	$loadClass(bug6607130$1, name, initialize, &_bug6607130$1_ClassInfo_, allocate$bug6607130$1);
	return class$;
}

$Class* bug6607130$1::class$ = nullptr;