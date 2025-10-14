#include <sun/java2d/StateTracker.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/StateTracker$1.h>
#include <sun/java2d/StateTracker$2.h>
#include <jcpp.h>

#undef ALWAYS_CURRENT
#undef NEVER_CURRENT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StateTracker$1 = ::sun::java2d::StateTracker$1;
using $StateTracker$2 = ::sun::java2d::StateTracker$2;

namespace sun {
	namespace java2d {

$FieldInfo _StateTracker_FieldInfo_[] = {
	{"ALWAYS_CURRENT", "Lsun/java2d/StateTracker;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StateTracker, ALWAYS_CURRENT)},
	{"NEVER_CURRENT", "Lsun/java2d/StateTracker;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StateTracker, NEVER_CURRENT)},
	{}
};

$MethodInfo _StateTracker_MethodInfo_[] = {
	{"isCurrent", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _StateTracker_InnerClassesInfo_[] = {
	{"sun.java2d.StateTracker$2", nullptr, nullptr, 0},
	{"sun.java2d.StateTracker$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StateTracker_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.StateTracker",
	nullptr,
	nullptr,
	_StateTracker_FieldInfo_,
	_StateTracker_MethodInfo_,
	nullptr,
	nullptr,
	_StateTracker_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.StateTracker$2,sun.java2d.StateTracker$1"
};

$Object* allocate$StateTracker($Class* clazz) {
	return $of($alloc(StateTracker));
}


StateTracker* StateTracker::ALWAYS_CURRENT = nullptr;

StateTracker* StateTracker::NEVER_CURRENT = nullptr;

void clinit$StateTracker($Class* class$) {
	$assignStatic(StateTracker::ALWAYS_CURRENT, $new($StateTracker$1));
	$assignStatic(StateTracker::NEVER_CURRENT, $new($StateTracker$2));
}

$Class* StateTracker::load$($String* name, bool initialize) {
	$loadClass(StateTracker, name, initialize, &_StateTracker_ClassInfo_, clinit$StateTracker, allocate$StateTracker);
	return class$;
}

$Class* StateTracker::class$ = nullptr;

	} // java2d
} // sun