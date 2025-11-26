#include <javax/swing/plaf/nimbus/State$StandardState.h>

#include <java/lang/AssertionError.h>
#include <java/util/Map.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <jcpp.h>

#undef DEFAULT
#undef DISABLED
#undef ENABLED
#undef FOCUSED
#undef MOUSE_OVER
#undef PRESSED
#undef SELECTED

using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $JComponent = ::javax::swing::JComponent;
using $State = ::javax::swing::plaf::nimbus::State;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _State$StandardState_FieldInfo_[] = {
	{"state", "I", nullptr, $PRIVATE, $field(State$StandardState, state)},
	{}
};

$MethodInfo _State$StandardState_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(State$StandardState::*)(int32_t)>(&State$StandardState::init$))},
	{"getState", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(State$StandardState::*)()>(&State$StandardState::getState))},
	{"isInState", "(Ljavax/swing/JComponent;I)Z", nullptr, 0},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{"toString", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&State$StandardState::toString))},
	{}
};

$InnerClassInfo _State$StandardState_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.State$StandardState", "javax.swing.plaf.nimbus.State", "StandardState", $STATIC | $FINAL},
	{}
};

$ClassInfo _State$StandardState_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.State$StandardState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	_State$StandardState_FieldInfo_,
	_State$StandardState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;",
	nullptr,
	_State$StandardState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.State"
};

$Object* allocate$State$StandardState($Class* clazz) {
	return $of($alloc(State$StandardState));
}

void State$StandardState::init$(int32_t state) {
	$useLocalCurrentObjectStackCache();
	$State::init$($(toString(state)));
	this->state = state;
	$init($State);
	$nc($State::standardStates)->put($(getName()), this);
}

int32_t State$StandardState::getState() {
	return this->state;
}

bool State$StandardState::isInState($JComponent* c, int32_t s) {
	return ((int32_t)(s & (uint32_t)this->state)) == this->state;
}

bool State$StandardState::isInState($JComponent* c) {
	$throwNew($AssertionError, $of("This method should never be called"_s));
	$shouldNotReachHere();
}

$String* State$StandardState::toString(int32_t state) {
	$init(State$StandardState);
	$var($StringBuilder, sb, $new($StringBuilder));
	if (((int32_t)(state & (uint32_t)$SynthConstants::DEFAULT)) == $SynthConstants::DEFAULT) {
		sb->append("Default"_s);
	}
	if (((int32_t)(state & (uint32_t)$SynthConstants::DISABLED)) == $SynthConstants::DISABLED) {
		if (sb->length() > 0) {
			sb->append("+"_s);
		}
		sb->append("Disabled"_s);
	}
	if (((int32_t)(state & (uint32_t)$SynthConstants::ENABLED)) == $SynthConstants::ENABLED) {
		if (sb->length() > 0) {
			sb->append("+"_s);
		}
		sb->append("Enabled"_s);
	}
	if (((int32_t)(state & (uint32_t)$SynthConstants::FOCUSED)) == $SynthConstants::FOCUSED) {
		if (sb->length() > 0) {
			sb->append("+"_s);
		}
		sb->append("Focused"_s);
	}
	if (((int32_t)(state & (uint32_t)$SynthConstants::MOUSE_OVER)) == $SynthConstants::MOUSE_OVER) {
		if (sb->length() > 0) {
			sb->append("+"_s);
		}
		sb->append("MouseOver"_s);
	}
	if (((int32_t)(state & (uint32_t)$SynthConstants::PRESSED)) == $SynthConstants::PRESSED) {
		if (sb->length() > 0) {
			sb->append("+"_s);
		}
		sb->append("Pressed"_s);
	}
	if (((int32_t)(state & (uint32_t)$SynthConstants::SELECTED)) == $SynthConstants::SELECTED) {
		if (sb->length() > 0) {
			sb->append("+"_s);
		}
		sb->append("Selected"_s);
	}
	return sb->toString();
}

State$StandardState::State$StandardState() {
}

$Class* State$StandardState::load$($String* name, bool initialize) {
	$loadClass(State$StandardState, name, initialize, &_State$StandardState_ClassInfo_, allocate$State$StandardState);
	return class$;
}

$Class* State$StandardState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax