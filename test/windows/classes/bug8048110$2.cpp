#include <bug8048110$2.h>

#include <bug8048110.h>
#include <java/awt/Robot.h>
#include <jcpp.h>

using $bug8048110 = ::bug8048110;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug8048110$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8048110$2::*)()>(&bug8048110$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8048110$2_EnclosingMethodInfo_ = {
	"bug8048110",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8048110$2_InnerClassesInfo_[] = {
	{"bug8048110$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8048110$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug8048110$2",
	"java.lang.Thread",
	nullptr,
	nullptr,
	_bug8048110$2_MethodInfo_,
	nullptr,
	&_bug8048110$2_EnclosingMethodInfo_,
	_bug8048110$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8048110"
};

$Object* allocate$bug8048110$2($Class* clazz) {
	return $of($alloc(bug8048110$2));
}

void bug8048110$2::init$() {
	$Thread::init$();
}

void bug8048110$2::run() {
	$init($bug8048110);
	$nc($bug8048110::robot)->waitForIdle();
	$synchronized($bug8048110::lock) {
		$bug8048110::isRealSyncPerformed = true;
		$nc($of($bug8048110::lock))->notifyAll();
	}
}

bug8048110$2::bug8048110$2() {
}

$Class* bug8048110$2::load$($String* name, bool initialize) {
	$loadClass(bug8048110$2, name, initialize, &_bug8048110$2_ClassInfo_, allocate$bug8048110$2);
	return class$;
}

$Class* bug8048110$2::class$ = nullptr;