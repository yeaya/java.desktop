#include <bug7193219$1.h>

#include <bug7193219.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug7193219 = ::bug7193219;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug7193219$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7193219$1::*)()>(&bug7193219$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7193219$1_EnclosingMethodInfo_ = {
	"bug7193219",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7193219$1_InnerClassesInfo_[] = {
	{"bug7193219$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7193219$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7193219$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7193219$1_MethodInfo_,
	nullptr,
	&_bug7193219$1_EnclosingMethodInfo_,
	_bug7193219$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7193219"
};

$Object* allocate$bug7193219$1($Class* clazz) {
	return $of($alloc(bug7193219$1));
}

void bug7193219$1::init$() {
}

void bug7193219$1::run() {
	$bug7193219::deserializeGUI($($bug7193219::serializeGUI()));
}

bug7193219$1::bug7193219$1() {
}

$Class* bug7193219$1::load$($String* name, bool initialize) {
	$loadClass(bug7193219$1, name, initialize, &_bug7193219$1_ClassInfo_, allocate$bug7193219$1);
	return class$;
}

$Class* bug7193219$1::class$ = nullptr;