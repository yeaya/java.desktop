#include <bug4865918$1.h>

#include <bug4865918.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug4865918 = ::bug4865918;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug4865918$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4865918$1::*)()>(&bug4865918$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4865918$1_EnclosingMethodInfo_ = {
	"bug4865918",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4865918$1_InnerClassesInfo_[] = {
	{"bug4865918$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4865918$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4865918$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4865918$1_MethodInfo_,
	nullptr,
	&_bug4865918$1_EnclosingMethodInfo_,
	_bug4865918$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4865918"
};

$Object* allocate$bug4865918$1($Class* clazz) {
	return $of($alloc(bug4865918$1));
}

void bug4865918$1::init$() {
}

void bug4865918$1::run() {
	$bug4865918::createAndShowGUI();
}

bug4865918$1::bug4865918$1() {
}

$Class* bug4865918$1::load$($String* name, bool initialize) {
	$loadClass(bug4865918$1, name, initialize, &_bug4865918$1_ClassInfo_, allocate$bug4865918$1);
	return class$;
}

$Class* bug4865918$1::class$ = nullptr;