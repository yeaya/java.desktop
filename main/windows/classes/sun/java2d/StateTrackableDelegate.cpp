#include <sun/java2d/StateTrackableDelegate.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <sun/java2d/StateTrackable$State.h>
#include <sun/java2d/StateTrackableDelegate$1.h>
#include <sun/java2d/StateTrackableDelegate$2.h>
#include <sun/java2d/StateTracker.h>
#include <jcpp.h>

#undef ALWAYS_CURRENT
#undef DYNAMIC
#undef IMMUTABLE
#undef IMMUTABLE_DELEGATE
#undef NEVER_CURRENT
#undef STABLE
#undef UNTRACKABLE
#undef UNTRACKABLE_DELEGATE

using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $StateTrackable = ::sun::java2d::StateTrackable;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;
using $StateTrackableDelegate$1 = ::sun::java2d::StateTrackableDelegate$1;
using $StateTrackableDelegate$2 = ::sun::java2d::StateTrackableDelegate$2;
using $StateTracker = ::sun::java2d::StateTracker;

namespace sun {
	namespace java2d {

$FieldInfo _StateTrackableDelegate_FieldInfo_[] = {
	{"UNTRACKABLE_DELEGATE", "Lsun/java2d/StateTrackableDelegate;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StateTrackableDelegate, UNTRACKABLE_DELEGATE)},
	{"IMMUTABLE_DELEGATE", "Lsun/java2d/StateTrackableDelegate;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StateTrackableDelegate, IMMUTABLE_DELEGATE)},
	{"theState", "Lsun/java2d/StateTrackable$State;", nullptr, $PRIVATE, $field(StateTrackableDelegate, theState)},
	{"theTracker", "Lsun/java2d/StateTracker;", nullptr, 0, $field(StateTrackableDelegate, theTracker)},
	{"numDynamicAgents", "I", nullptr, $PRIVATE, $field(StateTrackableDelegate, numDynamicAgents)},
	{}
};

$MethodInfo _StateTrackableDelegate_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/StateTrackable$State;)V", nullptr, $PRIVATE, $method(static_cast<void(StateTrackableDelegate::*)($StateTrackable$State*)>(&StateTrackableDelegate::init$))},
	{"addDynamicAgent", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(StateTrackableDelegate::*)()>(&StateTrackableDelegate::addDynamicAgent))},
	{"createInstance", "(Lsun/java2d/StateTrackable$State;)Lsun/java2d/StateTrackableDelegate;", nullptr, $PUBLIC | $STATIC, $method(static_cast<StateTrackableDelegate*(*)($StateTrackable$State*)>(&StateTrackableDelegate::createInstance))},
	{"getState", "()Lsun/java2d/StateTrackable$State;", nullptr, $PUBLIC},
	{"getStateTracker", "()Lsun/java2d/StateTracker;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"markDirty", "()V", nullptr, $PUBLIC, $method(static_cast<void(StateTrackableDelegate::*)()>(&StateTrackableDelegate::markDirty))},
	{"removeDynamicAgent", "()V", nullptr, $PROTECTED | $SYNCHRONIZED, $method(static_cast<void(StateTrackableDelegate::*)()>(&StateTrackableDelegate::removeDynamicAgent))},
	{"setImmutable", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(StateTrackableDelegate::*)()>(&StateTrackableDelegate::setImmutable))},
	{"setUntrackable", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(StateTrackableDelegate::*)()>(&StateTrackableDelegate::setUntrackable))},
	{}
};

$InnerClassInfo _StateTrackableDelegate_InnerClassesInfo_[] = {
	{"sun.java2d.StateTrackableDelegate$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.java2d.StateTrackableDelegate$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StateTrackableDelegate_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.StateTrackableDelegate",
	"java.lang.Object",
	"sun.java2d.StateTrackable",
	_StateTrackableDelegate_FieldInfo_,
	_StateTrackableDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_StateTrackableDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.StateTrackableDelegate$2,sun.java2d.StateTrackableDelegate$1"
};

$Object* allocate$StateTrackableDelegate($Class* clazz) {
	return $of($alloc(StateTrackableDelegate));
}

StateTrackableDelegate* StateTrackableDelegate::UNTRACKABLE_DELEGATE = nullptr;
StateTrackableDelegate* StateTrackableDelegate::IMMUTABLE_DELEGATE = nullptr;

StateTrackableDelegate* StateTrackableDelegate::createInstance($StateTrackable$State* state) {
	$init(StateTrackableDelegate);
	$init($StateTrackableDelegate$2);
	switch ($nc($StateTrackableDelegate$2::$SwitchMap$sun$java2d$StateTrackable$State)->get($nc((state))->ordinal())) {
	case 1:
		{
			return StateTrackableDelegate::UNTRACKABLE_DELEGATE;
		}
	case 2:
		{
			$init($StateTrackable$State);
			return $new(StateTrackableDelegate, $StateTrackable$State::STABLE);
		}
	case 3:
		{
			$init($StateTrackable$State);
			return $new(StateTrackableDelegate, $StateTrackable$State::DYNAMIC);
		}
	case 4:
		{
			return StateTrackableDelegate::IMMUTABLE_DELEGATE;
		}
	default:
		{
			$throwNew($InternalError, "unknown state"_s);
		}
	}
}

void StateTrackableDelegate::init$($StateTrackable$State* state) {
	$set(this, theState, state);
}

$StateTrackable$State* StateTrackableDelegate::getState() {
	return this->theState;
}

$StateTracker* StateTrackableDelegate::getStateTracker() {
	$synchronized(this) {
		$var($StateTracker, st, this->theTracker);
		if (st == nullptr) {
			$init($StateTrackableDelegate$2);
			switch ($nc($StateTrackableDelegate$2::$SwitchMap$sun$java2d$StateTrackable$State)->get($nc((this->theState))->ordinal())) {
			case 4:
				{
					$init($StateTracker);
					$assign(st, $StateTracker::ALWAYS_CURRENT);
					break;
				}
			case 2:
				{
					$assign(st, $new($StateTrackableDelegate$1, this));
					break;
				}
			case 3:
				{}
			case 1:
				{
					$init($StateTracker);
					$assign(st, $StateTracker::NEVER_CURRENT);
					break;
				}
			}
			$set(this, theTracker, st);
		}
		return st;
	}
}

void StateTrackableDelegate::setImmutable() {
	$synchronized(this) {
		$init($StateTrackable$State);
		if (this->theState == $StateTrackable$State::UNTRACKABLE || this->theState == $StateTrackable$State::DYNAMIC) {
			$throwNew($IllegalStateException, "UNTRACKABLE or DYNAMIC objects cannot become IMMUTABLE"_s);
		}
		$set(this, theState, $StateTrackable$State::IMMUTABLE);
		$set(this, theTracker, nullptr);
	}
}

void StateTrackableDelegate::setUntrackable() {
	$synchronized(this) {
		$init($StateTrackable$State);
		if (this->theState == $StateTrackable$State::IMMUTABLE) {
			$throwNew($IllegalStateException, "IMMUTABLE objects cannot become UNTRACKABLE"_s);
		}
		$set(this, theState, $StateTrackable$State::UNTRACKABLE);
		$set(this, theTracker, nullptr);
	}
}

void StateTrackableDelegate::addDynamicAgent() {
	$synchronized(this) {
		$init($StateTrackable$State);
		if (this->theState == $StateTrackable$State::IMMUTABLE) {
			$throwNew($IllegalStateException, "Cannot change state from IMMUTABLE"_s);
		}
		++this->numDynamicAgents;
		if (this->theState == $StateTrackable$State::STABLE) {
			$set(this, theState, $StateTrackable$State::DYNAMIC);
			$set(this, theTracker, nullptr);
		}
	}
}

void StateTrackableDelegate::removeDynamicAgent() {
	$synchronized(this) {
		$init($StateTrackable$State);
		if (--this->numDynamicAgents == 0 && this->theState == $StateTrackable$State::DYNAMIC) {
			$set(this, theState, $StateTrackable$State::STABLE);
			$set(this, theTracker, nullptr);
		}
	}
}

void StateTrackableDelegate::markDirty() {
	$set(this, theTracker, nullptr);
}

void clinit$StateTrackableDelegate($Class* class$) {
	$init($StateTrackable$State);
	$assignStatic(StateTrackableDelegate::UNTRACKABLE_DELEGATE, $new(StateTrackableDelegate, $StateTrackable$State::UNTRACKABLE));
	$assignStatic(StateTrackableDelegate::IMMUTABLE_DELEGATE, $new(StateTrackableDelegate, $StateTrackable$State::IMMUTABLE));
}

StateTrackableDelegate::StateTrackableDelegate() {
}

$Class* StateTrackableDelegate::load$($String* name, bool initialize) {
	$loadClass(StateTrackableDelegate, name, initialize, &_StateTrackableDelegate_ClassInfo_, clinit$StateTrackableDelegate, allocate$StateTrackableDelegate);
	return class$;
}

$Class* StateTrackableDelegate::class$ = nullptr;

	} // java2d
} // sun