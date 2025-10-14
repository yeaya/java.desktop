#include <bug6544309$1.h>

#include <bug6544309.h>
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

using $bug6544309 = ::bug6544309;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$FieldInfo _bug6544309$1_FieldInfo_[] = {
	{"val$test", "Lbug6544309;", nullptr, $FINAL | $SYNTHETIC, $field(bug6544309$1, val$test)},
	{}
};

$MethodInfo _bug6544309$1_MethodInfo_[] = {
	{"<init>", "(Lbug6544309;)V", "()V", 0, $method(static_cast<void(bug6544309$1::*)($bug6544309*)>(&bug6544309$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6544309$1_EnclosingMethodInfo_ = {
	"bug6544309",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6544309$1_InnerClassesInfo_[] = {
	{"bug6544309$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6544309$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6544309$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6544309$1_FieldInfo_,
	_bug6544309$1_MethodInfo_,
	nullptr,
	&_bug6544309$1_EnclosingMethodInfo_,
	_bug6544309$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6544309"
};

$Object* allocate$bug6544309$1($Class* clazz) {
	return $of($alloc(bug6544309$1));
}

void bug6544309$1::init$($bug6544309* val$test) {
	$set(this, val$test, val$test);
}

void bug6544309$1::run() {
	$nc(this->val$test)->setupUI();
}

bug6544309$1::bug6544309$1() {
}

$Class* bug6544309$1::load$($String* name, bool initialize) {
	$loadClass(bug6544309$1, name, initialize, &_bug6544309$1_ClassInfo_, allocate$bug6544309$1);
	return class$;
}

$Class* bug6544309$1::class$ = nullptr;