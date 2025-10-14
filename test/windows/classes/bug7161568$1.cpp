#include <bug7161568$1.h>

#include <bug7161568.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug7161568 = ::bug7161568;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug7161568$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7161568$1::*)()>(&bug7161568$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7161568$1_EnclosingMethodInfo_ = {
	"bug7161568",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7161568$1_InnerClassesInfo_[] = {
	{"bug7161568$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7161568$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7161568$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7161568$1_MethodInfo_,
	nullptr,
	&_bug7161568$1_EnclosingMethodInfo_,
	_bug7161568$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7161568"
};

$Object* allocate$bug7161568$1($Class* clazz) {
	return $of($alloc(bug7161568$1));
}

void bug7161568$1::init$() {
}

void bug7161568$1::run() {
	$bug7161568::createAndShowUI();
}

bug7161568$1::bug7161568$1() {
}

$Class* bug7161568$1::load$($String* name, bool initialize) {
	$loadClass(bug7161568$1, name, initialize, &_bug7161568$1_ClassInfo_, allocate$bug7161568$1);
	return class$;
}

$Class* bug7161568$1::class$ = nullptr;