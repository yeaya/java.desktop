#include <bug4314199$1.h>

#include <bug4314199.h>
#include <jcpp.h>

using $bug4314199 = ::bug4314199;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$FieldInfo _bug4314199$1_FieldInfo_[] = {
	{"this$0", "Lbug4314199;", nullptr, $FINAL | $SYNTHETIC, $field(bug4314199$1, this$0)},
	{}
};

$MethodInfo _bug4314199$1_MethodInfo_[] = {
	{"<init>", "(Lbug4314199;)V", nullptr, 0, $method(static_cast<void(bug4314199$1::*)($bug4314199*)>(&bug4314199$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4314199$1_EnclosingMethodInfo_ = {
	"bug4314199",
	"init",
	"()V"
};

$InnerClassInfo _bug4314199$1_InnerClassesInfo_[] = {
	{"bug4314199$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4314199$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4314199$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4314199$1_FieldInfo_,
	_bug4314199$1_MethodInfo_,
	nullptr,
	&_bug4314199$1_EnclosingMethodInfo_,
	_bug4314199$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4314199"
};

$Object* allocate$bug4314199$1($Class* clazz) {
	return $of($alloc(bug4314199$1));
}

void bug4314199$1::init$($bug4314199* this$0) {
	$set(this, this$0, this$0);
}

void bug4314199$1::run() {
	this->this$0->createAndShowGUI();
}

bug4314199$1::bug4314199$1() {
}

$Class* bug4314199$1::load$($String* name, bool initialize) {
	$loadClass(bug4314199$1, name, initialize, &_bug4314199$1_ClassInfo_, allocate$bug4314199$1);
	return class$;
}

$Class* bug4314199$1::class$ = nullptr;