#include <bug4506788$1.h>

#include <bug4506788.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug4506788 = ::bug4506788;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$FieldInfo _bug4506788$1_FieldInfo_[] = {
	{"this$0", "Lbug4506788;", nullptr, $FINAL | $SYNTHETIC, $field(bug4506788$1, this$0)},
	{}
};

$MethodInfo _bug4506788$1_MethodInfo_[] = {
	{"<init>", "(Lbug4506788;)V", nullptr, 0, $method(static_cast<void(bug4506788$1::*)($bug4506788*)>(&bug4506788$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4506788$1_EnclosingMethodInfo_ = {
	"bug4506788",
	"init",
	"()V"
};

$InnerClassInfo _bug4506788$1_InnerClassesInfo_[] = {
	{"bug4506788$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4506788$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4506788$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4506788$1_FieldInfo_,
	_bug4506788$1_MethodInfo_,
	nullptr,
	&_bug4506788$1_EnclosingMethodInfo_,
	_bug4506788$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4506788"
};

$Object* allocate$bug4506788$1($Class* clazz) {
	return $of($alloc(bug4506788$1));
}

void bug4506788$1::init$($bug4506788* this$0) {
	$set(this, this$0, this$0);
}

void bug4506788$1::run() {
	this->this$0->createAndShowGUI();
}

bug4506788$1::bug4506788$1() {
}

$Class* bug4506788$1::load$($String* name, bool initialize) {
	$loadClass(bug4506788$1, name, initialize, &_bug4506788$1_ClassInfo_, allocate$bug4506788$1);
	return class$;
}

$Class* bug4506788$1::class$ = nullptr;