#include <bug8005019$1.h>

#include <bug8005019.h>
#include <jcpp.h>

using $bug8005019 = ::bug8005019;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug8005019$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8005019$1::*)()>(&bug8005019$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8005019$1_EnclosingMethodInfo_ = {
	"bug8005019",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8005019$1_InnerClassesInfo_[] = {
	{"bug8005019$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8005019$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8005019$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8005019$1_MethodInfo_,
	nullptr,
	&_bug8005019$1_EnclosingMethodInfo_,
	_bug8005019$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8005019"
};

$Object* allocate$bug8005019$1($Class* clazz) {
	return $of($alloc(bug8005019$1));
}

void bug8005019$1::init$() {
}

void bug8005019$1::run() {
	$bug8005019::testSelectionWithFilterTable();
}

bug8005019$1::bug8005019$1() {
}

$Class* bug8005019$1::load$($String* name, bool initialize) {
	$loadClass(bug8005019$1, name, initialize, &_bug8005019$1_ClassInfo_, allocate$bug8005019$1);
	return class$;
}

$Class* bug8005019$1::class$ = nullptr;