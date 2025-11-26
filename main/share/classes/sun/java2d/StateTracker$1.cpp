#include <sun/java2d/StateTracker$1.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StateTracker = ::sun::java2d::StateTracker;

namespace sun {
	namespace java2d {

$MethodInfo _StateTracker$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StateTracker$1::*)()>(&StateTracker$1::init$))},
	{"isCurrent", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _StateTracker$1_EnclosingMethodInfo_ = {
	"sun.java2d.StateTracker",
	nullptr,
	nullptr
};

$InnerClassInfo _StateTracker$1_InnerClassesInfo_[] = {
	{"sun.java2d.StateTracker$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StateTracker$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.StateTracker$1",
	"java.lang.Object",
	"sun.java2d.StateTracker",
	nullptr,
	_StateTracker$1_MethodInfo_,
	nullptr,
	&_StateTracker$1_EnclosingMethodInfo_,
	_StateTracker$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.StateTracker"
};

$Object* allocate$StateTracker$1($Class* clazz) {
	return $of($alloc(StateTracker$1));
}

void StateTracker$1::init$() {
}

bool StateTracker$1::isCurrent() {
	return true;
}

StateTracker$1::StateTracker$1() {
}

$Class* StateTracker$1::load$($String* name, bool initialize) {
	$loadClass(StateTracker$1, name, initialize, &_StateTracker$1_ClassInfo_, allocate$StateTracker$1);
	return class$;
}

$Class* StateTracker$1::class$ = nullptr;

	} // java2d
} // sun