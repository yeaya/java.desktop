#include <bug8021253$1.h>

#include <bug8021253.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug8021253 = ::bug8021253;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug8021253$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8021253$1::*)()>(&bug8021253$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8021253$1_EnclosingMethodInfo_ = {
	"bug8021253",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8021253$1_InnerClassesInfo_[] = {
	{"bug8021253$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8021253$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8021253$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8021253$1_MethodInfo_,
	nullptr,
	&_bug8021253$1_EnclosingMethodInfo_,
	_bug8021253$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8021253"
};

$Object* allocate$bug8021253$1($Class* clazz) {
	return $of($alloc(bug8021253$1));
}

void bug8021253$1::init$() {
}

void bug8021253$1::run() {
	$bug8021253::createAndShowGUI();
}

bug8021253$1::bug8021253$1() {
}

$Class* bug8021253$1::load$($String* name, bool initialize) {
	$loadClass(bug8021253$1, name, initialize, &_bug8021253$1_ClassInfo_, allocate$bug8021253$1);
	return class$;
}

$Class* bug8021253$1::class$ = nullptr;