#include <bug8048110$1.h>

#include <bug8048110.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug8048110 = ::bug8048110;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug8048110$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8048110$1::*)()>(&bug8048110$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8048110$1_EnclosingMethodInfo_ = {
	"bug8048110",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8048110$1_InnerClassesInfo_[] = {
	{"bug8048110$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8048110$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8048110$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8048110$1_MethodInfo_,
	nullptr,
	&_bug8048110$1_EnclosingMethodInfo_,
	_bug8048110$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8048110"
};

$Object* allocate$bug8048110$1($Class* clazz) {
	return $of($alloc(bug8048110$1));
}

void bug8048110$1::init$() {
}

void bug8048110$1::run() {
	$bug8048110::createAndShowGUI();
}

bug8048110$1::bug8048110$1() {
}

$Class* bug8048110$1::load$($String* name, bool initialize) {
	$loadClass(bug8048110$1, name, initialize, &_bug8048110$1_ClassInfo_, allocate$bug8048110$1);
	return class$;
}

$Class* bug8048110$1::class$ = nullptr;