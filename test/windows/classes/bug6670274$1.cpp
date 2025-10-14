#include <bug6670274$1.h>

#include <bug6670274.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug6670274 = ::bug6670274;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug6670274$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6670274$1::*)()>(&bug6670274$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6670274$1_EnclosingMethodInfo_ = {
	"bug6670274",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6670274$1_InnerClassesInfo_[] = {
	{"bug6670274$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6670274$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6670274$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6670274$1_MethodInfo_,
	nullptr,
	&_bug6670274$1_EnclosingMethodInfo_,
	_bug6670274$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6670274"
};

$Object* allocate$bug6670274$1($Class* clazz) {
	return $of($alloc(bug6670274$1));
}

void bug6670274$1::init$() {
}

void bug6670274$1::run() {
	$bug6670274::createGui();
}

bug6670274$1::bug6670274$1() {
}

$Class* bug6670274$1::load$($String* name, bool initialize) {
	$loadClass(bug6670274$1, name, initialize, &_bug6670274$1_ClassInfo_, allocate$bug6670274$1);
	return class$;
}

$Class* bug6670274$1::class$ = nullptr;