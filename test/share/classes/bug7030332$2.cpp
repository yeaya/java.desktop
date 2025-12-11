#include <bug7030332$2.h>

#include <bug7030332.h>
#include <java/awt/Container.h>
#include <jcpp.h>

using $bug7030332 = ::bug7030332;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug7030332$2_FieldInfo_[] = {
	{"this$0", "Lbug7030332;", nullptr, $FINAL | $SYNTHETIC, $field(bug7030332$2, this$0)},
	{}
};

$MethodInfo _bug7030332$2_MethodInfo_[] = {
	{"<init>", "(Lbug7030332;)V", nullptr, 0, $method(static_cast<void(bug7030332$2::*)($bug7030332*)>(&bug7030332$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7030332$2_EnclosingMethodInfo_ = {
	"bug7030332",
	"init",
	"()V"
};

$InnerClassInfo _bug7030332$2_InnerClassesInfo_[] = {
	{"bug7030332$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7030332$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug7030332$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug7030332$2_FieldInfo_,
	_bug7030332$2_MethodInfo_,
	nullptr,
	&_bug7030332$2_EnclosingMethodInfo_,
	_bug7030332$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7030332"
};

$Object* allocate$bug7030332$2($Class* clazz) {
	return $of($alloc(bug7030332$2));
}

void bug7030332$2::init$($bug7030332* this$0) {
	$set(this, this$0, this$0);
}

void bug7030332$2::run() {
	this->this$0->setContentPane($($bug7030332::createContentPane()));
}

bug7030332$2::bug7030332$2() {
}

$Class* bug7030332$2::load$($String* name, bool initialize) {
	$loadClass(bug7030332$2, name, initialize, &_bug7030332$2_ClassInfo_, allocate$bug7030332$2);
	return class$;
}

$Class* bug7030332$2::class$ = nullptr;