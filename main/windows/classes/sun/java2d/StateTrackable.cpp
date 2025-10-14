#include <sun/java2d/StateTrackable.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/StateTrackable$State.h>
#include <sun/java2d/StateTracker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;
using $StateTracker = ::sun::java2d::StateTracker;

namespace sun {
	namespace java2d {

$MethodInfo _StateTrackable_MethodInfo_[] = {
	{"getState", "()Lsun/java2d/StateTrackable$State;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStateTracker", "()Lsun/java2d/StateTracker;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _StateTrackable_InnerClassesInfo_[] = {
	{"sun.java2d.StateTrackable$State", "sun.java2d.StateTrackable", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _StateTrackable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.StateTrackable",
	nullptr,
	nullptr,
	nullptr,
	_StateTrackable_MethodInfo_,
	nullptr,
	nullptr,
	_StateTrackable_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.StateTrackable$State"
};

$Object* allocate$StateTrackable($Class* clazz) {
	return $of($alloc(StateTrackable));
}

$Class* StateTrackable::load$($String* name, bool initialize) {
	$loadClass(StateTrackable, name, initialize, &_StateTrackable_ClassInfo_, allocate$StateTrackable);
	return class$;
}

$Class* StateTrackable::class$ = nullptr;

	} // java2d
} // sun