#include <bug4697612$1.h>

#include <bug4697612.h>
#include <jcpp.h>

using $bug4697612 = ::bug4697612;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug4697612$1_FieldInfo_[] = {
	{"this$0", "Lbug4697612;", nullptr, $FINAL | $SYNTHETIC, $field(bug4697612$1, this$0)},
	{}
};

$MethodInfo _bug4697612$1_MethodInfo_[] = {
	{"<init>", "(Lbug4697612;)V", nullptr, 0, $method(static_cast<void(bug4697612$1::*)($bug4697612*)>(&bug4697612$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4697612$1_EnclosingMethodInfo_ = {
	"bug4697612",
	"<init>",
	"()V"
};

$InnerClassInfo _bug4697612$1_InnerClassesInfo_[] = {
	{"bug4697612$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4697612$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4697612$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4697612$1_FieldInfo_,
	_bug4697612$1_MethodInfo_,
	nullptr,
	&_bug4697612$1_EnclosingMethodInfo_,
	_bug4697612$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4697612"
};

$Object* allocate$bug4697612$1($Class* clazz) {
	return $of($alloc(bug4697612$1));
}

void bug4697612$1::init$($bug4697612* this$0) {
	$set(this, this$0, this$0);
}

void bug4697612$1::run() {
	$bug4697612::createAndShowGUI();
}

bug4697612$1::bug4697612$1() {
}

$Class* bug4697612$1::load$($String* name, bool initialize) {
	$loadClass(bug4697612$1, name, initialize, &_bug4697612$1_ClassInfo_, allocate$bug4697612$1);
	return class$;
}

$Class* bug4697612$1::class$ = nullptr;