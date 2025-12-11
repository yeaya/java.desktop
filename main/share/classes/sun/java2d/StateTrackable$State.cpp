#include <sun/java2d/StateTrackable$State.h>

#include <java/lang/Enum.h>
#include <sun/java2d/StateTrackable.h>
#include <jcpp.h>

#undef DYNAMIC
#undef IMMUTABLE
#undef STABLE
#undef UNTRACKABLE

using $StateTrackable$StateArray = $Array<::sun::java2d::StateTrackable$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {

$FieldInfo _StateTrackable$State_FieldInfo_[] = {
	{"IMMUTABLE", "Lsun/java2d/StateTrackable$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StateTrackable$State, IMMUTABLE)},
	{"STABLE", "Lsun/java2d/StateTrackable$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StateTrackable$State, STABLE)},
	{"DYNAMIC", "Lsun/java2d/StateTrackable$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StateTrackable$State, DYNAMIC)},
	{"UNTRACKABLE", "Lsun/java2d/StateTrackable$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StateTrackable$State, UNTRACKABLE)},
	{"$VALUES", "[Lsun/java2d/StateTrackable$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(StateTrackable$State, $VALUES)},
	{}
};

$MethodInfo _StateTrackable$State_MethodInfo_[] = {
	{"$values", "()[Lsun/java2d/StateTrackable$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StateTrackable$StateArray*(*)()>(&StateTrackable$State::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(StateTrackable$State::*)($String*,int32_t)>(&StateTrackable$State::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/java2d/StateTrackable$State;", nullptr, $PUBLIC | $STATIC, $method(static_cast<StateTrackable$State*(*)($String*)>(&StateTrackable$State::valueOf))},
	{"values", "()[Lsun/java2d/StateTrackable$State;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StateTrackable$StateArray*(*)()>(&StateTrackable$State::values))},
	{}
};

$InnerClassInfo _StateTrackable$State_InnerClassesInfo_[] = {
	{"sun.java2d.StateTrackable$State", "sun.java2d.StateTrackable", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _StateTrackable$State_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.java2d.StateTrackable$State",
	"java.lang.Enum",
	nullptr,
	_StateTrackable$State_FieldInfo_,
	_StateTrackable$State_MethodInfo_,
	"Ljava/lang/Enum<Lsun/java2d/StateTrackable$State;>;",
	nullptr,
	_StateTrackable$State_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.StateTrackable"
};

$Object* allocate$StateTrackable$State($Class* clazz) {
	return $of($alloc(StateTrackable$State));
}

StateTrackable$State* StateTrackable$State::IMMUTABLE = nullptr;
StateTrackable$State* StateTrackable$State::STABLE = nullptr;
StateTrackable$State* StateTrackable$State::DYNAMIC = nullptr;
StateTrackable$State* StateTrackable$State::UNTRACKABLE = nullptr;
$StateTrackable$StateArray* StateTrackable$State::$VALUES = nullptr;

$StateTrackable$StateArray* StateTrackable$State::$values() {
	$init(StateTrackable$State);
	return $new($StateTrackable$StateArray, {
		StateTrackable$State::IMMUTABLE,
		StateTrackable$State::STABLE,
		StateTrackable$State::DYNAMIC,
		StateTrackable$State::UNTRACKABLE
	});
}

$StateTrackable$StateArray* StateTrackable$State::values() {
	$init(StateTrackable$State);
	return $cast($StateTrackable$StateArray, StateTrackable$State::$VALUES->clone());
}

StateTrackable$State* StateTrackable$State::valueOf($String* name) {
	$init(StateTrackable$State);
	return $cast(StateTrackable$State, $Enum::valueOf(StateTrackable$State::class$, name));
}

void StateTrackable$State::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$StateTrackable$State($Class* class$) {
	$assignStatic(StateTrackable$State::IMMUTABLE, $new(StateTrackable$State, "IMMUTABLE"_s, 0));
	$assignStatic(StateTrackable$State::STABLE, $new(StateTrackable$State, "STABLE"_s, 1));
	$assignStatic(StateTrackable$State::DYNAMIC, $new(StateTrackable$State, "DYNAMIC"_s, 2));
	$assignStatic(StateTrackable$State::UNTRACKABLE, $new(StateTrackable$State, "UNTRACKABLE"_s, 3));
	$assignStatic(StateTrackable$State::$VALUES, StateTrackable$State::$values());
}

StateTrackable$State::StateTrackable$State() {
}

$Class* StateTrackable$State::load$($String* name, bool initialize) {
	$loadClass(StateTrackable$State, name, initialize, &_StateTrackable$State_ClassInfo_, clinit$StateTrackable$State, allocate$StateTrackable$State);
	return class$;
}

$Class* StateTrackable$State::class$ = nullptr;

	} // java2d
} // sun