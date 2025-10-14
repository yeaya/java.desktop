#include <bug8023474$1.h>

#include <bug8023474.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug8023474 = ::bug8023474;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug8023474$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8023474$1::*)()>(&bug8023474$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8023474$1_EnclosingMethodInfo_ = {
	"bug8023474",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8023474$1_InnerClassesInfo_[] = {
	{"bug8023474$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8023474$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8023474$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8023474$1_MethodInfo_,
	nullptr,
	&_bug8023474$1_EnclosingMethodInfo_,
	_bug8023474$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8023474"
};

$Object* allocate$bug8023474$1($Class* clazz) {
	return $of($alloc(bug8023474$1));
}

void bug8023474$1::init$() {
}

void bug8023474$1::run() {
	$bug8023474::createAndShowGUI();
}

bug8023474$1::bug8023474$1() {
}

$Class* bug8023474$1::load$($String* name, bool initialize) {
	$loadClass(bug8023474$1, name, initialize, &_bug8023474$1_ClassInfo_, allocate$bug8023474$1);
	return class$;
}

$Class* bug8023474$1::class$ = nullptr;