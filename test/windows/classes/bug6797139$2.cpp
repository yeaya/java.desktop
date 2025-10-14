#include <bug6797139$2.h>

#include <bug6797139.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug6797139 = ::bug6797139;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug6797139$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6797139$2::*)()>(&bug6797139$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6797139$2_EnclosingMethodInfo_ = {
	"bug6797139",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6797139$2_InnerClassesInfo_[] = {
	{"bug6797139$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6797139$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6797139$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6797139$2_MethodInfo_,
	nullptr,
	&_bug6797139$2_EnclosingMethodInfo_,
	_bug6797139$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6797139"
};

$Object* allocate$bug6797139$2($Class* clazz) {
	return $of($alloc(bug6797139$2));
}

void bug6797139$2::init$() {
}

void bug6797139$2::run() {
	$bug6797139::createGui();
}

bug6797139$2::bug6797139$2() {
}

$Class* bug6797139$2::load$($String* name, bool initialize) {
	$loadClass(bug6797139$2, name, initialize, &_bug6797139$2_ClassInfo_, allocate$bug6797139$2);
	return class$;
}

$Class* bug6797139$2::class$ = nullptr;