#include <bug4275046$1.h>

#include <bug4275046.h>
#include <jcpp.h>

using $bug4275046 = ::bug4275046;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug4275046$1_FieldInfo_[] = {
	{"this$0", "Lbug4275046;", nullptr, $FINAL | $SYNTHETIC, $field(bug4275046$1, this$0)},
	{}
};

$MethodInfo _bug4275046$1_MethodInfo_[] = {
	{"<init>", "(Lbug4275046;)V", nullptr, 0, $method(static_cast<void(bug4275046$1::*)($bug4275046*)>(&bug4275046$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4275046$1_EnclosingMethodInfo_ = {
	"bug4275046",
	"test",
	"()V"
};

$InnerClassInfo _bug4275046$1_InnerClassesInfo_[] = {
	{"bug4275046$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4275046$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4275046$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4275046$1_FieldInfo_,
	_bug4275046$1_MethodInfo_,
	nullptr,
	&_bug4275046$1_EnclosingMethodInfo_,
	_bug4275046$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4275046"
};

$Object* allocate$bug4275046$1($Class* clazz) {
	return $of($alloc(bug4275046$1));
}

void bug4275046$1::init$($bug4275046* this$0) {
	$set(this, this$0, this$0);
}

void bug4275046$1::run() {
	this->this$0->createGUI();
}

bug4275046$1::bug4275046$1() {
}

$Class* bug4275046$1::load$($String* name, bool initialize) {
	$loadClass(bug4275046$1, name, initialize, &_bug4275046$1_ClassInfo_, allocate$bug4275046$1);
	return class$;
}

$Class* bug4275046$1::class$ = nullptr;