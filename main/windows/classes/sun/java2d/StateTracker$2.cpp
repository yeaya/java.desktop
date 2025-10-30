#include <sun/java2d/StateTracker$2.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StateTracker = ::sun::java2d::StateTracker;

namespace sun {
	namespace java2d {

$MethodInfo _StateTracker$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StateTracker$2::*)()>(&StateTracker$2::init$))},
	{"isCurrent", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _StateTracker$2_EnclosingMethodInfo_ = {
	"sun.java2d.StateTracker",
	nullptr,
	nullptr
};

$InnerClassInfo _StateTracker$2_InnerClassesInfo_[] = {
	{"sun.java2d.StateTracker$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StateTracker$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.StateTracker$2",
	"java.lang.Object",
	"sun.java2d.StateTracker",
	nullptr,
	_StateTracker$2_MethodInfo_,
	nullptr,
	&_StateTracker$2_EnclosingMethodInfo_,
	_StateTracker$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.StateTracker"
};

$Object* allocate$StateTracker$2($Class* clazz) {
	return $of($alloc(StateTracker$2));
}

void StateTracker$2::init$() {
}

bool StateTracker$2::isCurrent() {
	return false;
}

StateTracker$2::StateTracker$2() {
}

$Class* StateTracker$2::load$($String* name, bool initialize) {
	$loadClass(StateTracker$2, name, initialize, &_StateTracker$2_ClassInfo_, allocate$StateTracker$2);
	return class$;
}

$Class* StateTracker$2::class$ = nullptr;

	} // java2d
} // sun