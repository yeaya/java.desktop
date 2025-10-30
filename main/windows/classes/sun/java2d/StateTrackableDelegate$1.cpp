#include <sun/java2d/StateTrackableDelegate$1.h>

#include <sun/java2d/StateTrackableDelegate.h>
#include <sun/java2d/StateTracker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;
using $StateTracker = ::sun::java2d::StateTracker;

namespace sun {
	namespace java2d {

$FieldInfo _StateTrackableDelegate$1_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/StateTrackableDelegate;", nullptr, $FINAL | $SYNTHETIC, $field(StateTrackableDelegate$1, this$0)},
	{}
};

$MethodInfo _StateTrackableDelegate$1_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/StateTrackableDelegate;)V", nullptr, 0, $method(static_cast<void(StateTrackableDelegate$1::*)($StateTrackableDelegate*)>(&StateTrackableDelegate$1::init$))},
	{"isCurrent", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _StateTrackableDelegate$1_EnclosingMethodInfo_ = {
	"sun.java2d.StateTrackableDelegate",
	"getStateTracker",
	"()Lsun/java2d/StateTracker;"
};

$InnerClassInfo _StateTrackableDelegate$1_InnerClassesInfo_[] = {
	{"sun.java2d.StateTrackableDelegate$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StateTrackableDelegate$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.StateTrackableDelegate$1",
	"java.lang.Object",
	"sun.java2d.StateTracker",
	_StateTrackableDelegate$1_FieldInfo_,
	_StateTrackableDelegate$1_MethodInfo_,
	nullptr,
	&_StateTrackableDelegate$1_EnclosingMethodInfo_,
	_StateTrackableDelegate$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.StateTrackableDelegate"
};

$Object* allocate$StateTrackableDelegate$1($Class* clazz) {
	return $of($alloc(StateTrackableDelegate$1));
}

void StateTrackableDelegate$1::init$($StateTrackableDelegate* this$0) {
	$set(this, this$0, this$0);
}

bool StateTrackableDelegate$1::isCurrent() {
	return ($equals(this->this$0->theTracker, this));
}

StateTrackableDelegate$1::StateTrackableDelegate$1() {
}

$Class* StateTrackableDelegate$1::load$($String* name, bool initialize) {
	$loadClass(StateTrackableDelegate$1, name, initialize, &_StateTrackableDelegate$1_ClassInfo_, allocate$StateTrackableDelegate$1);
	return class$;
}

$Class* StateTrackableDelegate$1::class$ = nullptr;

	} // java2d
} // sun