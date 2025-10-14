#include <bug6462008$1.h>

#include <bug6462008.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug6462008 = ::bug6462008;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug6462008$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6462008$1::*)()>(&bug6462008$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6462008$1_EnclosingMethodInfo_ = {
	"bug6462008",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6462008$1_InnerClassesInfo_[] = {
	{"bug6462008$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6462008$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6462008$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6462008$1_MethodInfo_,
	nullptr,
	&_bug6462008$1_EnclosingMethodInfo_,
	_bug6462008$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6462008"
};

$Object* allocate$bug6462008$1($Class* clazz) {
	return $of($alloc(bug6462008$1));
}

void bug6462008$1::init$() {
}

void bug6462008$1::run() {
	$bug6462008::createAndShowGUI();
}

bug6462008$1::bug6462008$1() {
}

$Class* bug6462008$1::load$($String* name, bool initialize) {
	$loadClass(bug6462008$1, name, initialize, &_bug6462008$1_ClassInfo_, allocate$bug6462008$1);
	return class$;
}

$Class* bug6462008$1::class$ = nullptr;