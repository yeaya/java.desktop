#include <bug8054543$1.h>

#include <bug8054543.h>
#include <jcpp.h>

using $bug8054543 = ::bug8054543;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug8054543$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8054543$1::*)()>(&bug8054543$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8054543$1_EnclosingMethodInfo_ = {
	"bug8054543",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8054543$1_InnerClassesInfo_[] = {
	{"bug8054543$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8054543$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8054543$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8054543$1_MethodInfo_,
	nullptr,
	&_bug8054543$1_EnclosingMethodInfo_,
	_bug8054543$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8054543"
};

$Object* allocate$bug8054543$1($Class* clazz) {
	return $of($alloc(bug8054543$1));
}

void bug8054543$1::init$() {
}

void bug8054543$1::run() {
	$new($bug8054543);
}

bug8054543$1::bug8054543$1() {
}

$Class* bug8054543$1::load$($String* name, bool initialize) {
	$loadClass(bug8054543$1, name, initialize, &_bug8054543$1_ClassInfo_, allocate$bug8054543$1);
	return class$;
}

$Class* bug8054543$1::class$ = nullptr;