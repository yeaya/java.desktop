#include <bug4962534$1.h>

#include <bug4962534.h>
#include <jcpp.h>

using $bug4962534 = ::bug4962534;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug4962534$1_FieldInfo_[] = {
	{"this$0", "Lbug4962534;", nullptr, $FINAL | $SYNTHETIC, $field(bug4962534$1, this$0)},
	{}
};

$MethodInfo _bug4962534$1_MethodInfo_[] = {
	{"<init>", "(Lbug4962534;)V", nullptr, 0, $method(static_cast<void(bug4962534$1::*)($bug4962534*)>(&bug4962534$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4962534$1_EnclosingMethodInfo_ = {
	"bug4962534",
	"init",
	"()V"
};

$InnerClassInfo _bug4962534$1_InnerClassesInfo_[] = {
	{"bug4962534$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4962534$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4962534$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4962534$1_FieldInfo_,
	_bug4962534$1_MethodInfo_,
	nullptr,
	&_bug4962534$1_EnclosingMethodInfo_,
	_bug4962534$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4962534"
};

$Object* allocate$bug4962534$1($Class* clazz) {
	return $of($alloc(bug4962534$1));
}

void bug4962534$1::init$($bug4962534* this$0) {
	$set(this, this$0, this$0);
}

void bug4962534$1::run() {
	this->this$0->createAndShowGUI();
}

bug4962534$1::bug4962534$1() {
}

$Class* bug4962534$1::load$($String* name, bool initialize) {
	$loadClass(bug4962534$1, name, initialize, &_bug4962534$1_ClassInfo_, allocate$bug4962534$1);
	return class$;
}

$Class* bug4962534$1::class$ = nullptr;