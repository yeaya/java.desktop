#include <sun/java2d/StateTrackableDelegate$2.h>

#include <java/lang/NoSuchFieldError.h>
#include <sun/java2d/StateTrackable$State.h>
#include <sun/java2d/StateTrackableDelegate.h>
#include <jcpp.h>

#undef DYNAMIC
#undef IMMUTABLE
#undef STABLE
#undef UNTRACKABLE

using $StateTrackable$StateArray = $Array<::sun::java2d::StateTrackable$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;

namespace sun {
	namespace java2d {

$FieldInfo _StateTrackableDelegate$2_FieldInfo_[] = {
	{"$SwitchMap$sun$java2d$StateTrackable$State", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StateTrackableDelegate$2, $SwitchMap$sun$java2d$StateTrackable$State)},
	{}
};

$EnclosingMethodInfo _StateTrackableDelegate$2_EnclosingMethodInfo_ = {
	"sun.java2d.StateTrackableDelegate",
	nullptr,
	nullptr
};

$InnerClassInfo _StateTrackableDelegate$2_InnerClassesInfo_[] = {
	{"sun.java2d.StateTrackableDelegate$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _StateTrackableDelegate$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.java2d.StateTrackableDelegate$2",
	"java.lang.Object",
	nullptr,
	_StateTrackableDelegate$2_FieldInfo_,
	nullptr,
	nullptr,
	&_StateTrackableDelegate$2_EnclosingMethodInfo_,
	_StateTrackableDelegate$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.StateTrackableDelegate"
};

$Object* allocate$StateTrackableDelegate$2($Class* clazz) {
	return $of($alloc(StateTrackableDelegate$2));
}

$ints* StateTrackableDelegate$2::$SwitchMap$sun$java2d$StateTrackable$State = nullptr;

void clinit$StateTrackableDelegate$2($Class* class$) {
	$assignStatic(StateTrackableDelegate$2::$SwitchMap$sun$java2d$StateTrackable$State, $new($ints, $($StateTrackable$State::values())->length));
	{
		try {
			$nc(StateTrackableDelegate$2::$SwitchMap$sun$java2d$StateTrackable$State)->set($StateTrackable$State::UNTRACKABLE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(StateTrackableDelegate$2::$SwitchMap$sun$java2d$StateTrackable$State)->set($StateTrackable$State::STABLE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(StateTrackableDelegate$2::$SwitchMap$sun$java2d$StateTrackable$State)->set($StateTrackable$State::DYNAMIC->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(StateTrackableDelegate$2::$SwitchMap$sun$java2d$StateTrackable$State)->set($StateTrackable$State::IMMUTABLE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

StateTrackableDelegate$2::StateTrackableDelegate$2() {
}

$Class* StateTrackableDelegate$2::load$($String* name, bool initialize) {
	$loadClass(StateTrackableDelegate$2, name, initialize, &_StateTrackableDelegate$2_ClassInfo_, clinit$StateTrackableDelegate$2, allocate$StateTrackableDelegate$2);
	return class$;
}

$Class* StateTrackableDelegate$2::class$ = nullptr;

	} // java2d
} // sun