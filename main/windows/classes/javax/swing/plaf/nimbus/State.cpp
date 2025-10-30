#include <javax/swing/plaf/nimbus/State.h>

#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/State$StandardState.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <jcpp.h>

#undef DEFAULT
#undef DISABLED
#undef ENABLED
#undef FOCUSED
#undef MOUSE_OVER
#undef PRESSED
#undef SELECTED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $JComponent = ::javax::swing::JComponent;
using $State$StandardState = ::javax::swing::plaf::nimbus::State$StandardState;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _State_FieldInfo_[] = {
	{"standardStates", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljavax/swing/plaf/nimbus/State$StandardState;>;", $STATIC | $FINAL, $staticField(State, standardStates)},
	{"Enabled", "Ljavax/swing/plaf/nimbus/State;", "Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;", $STATIC | $FINAL, $staticField(State, Enabled)},
	{"MouseOver", "Ljavax/swing/plaf/nimbus/State;", "Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;", $STATIC | $FINAL, $staticField(State, MouseOver)},
	{"Pressed", "Ljavax/swing/plaf/nimbus/State;", "Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;", $STATIC | $FINAL, $staticField(State, Pressed)},
	{"Disabled", "Ljavax/swing/plaf/nimbus/State;", "Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;", $STATIC | $FINAL, $staticField(State, Disabled)},
	{"Focused", "Ljavax/swing/plaf/nimbus/State;", "Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;", $STATIC | $FINAL, $staticField(State, Focused)},
	{"Selected", "Ljavax/swing/plaf/nimbus/State;", "Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;", $STATIC | $FINAL, $staticField(State, Selected)},
	{"Default", "Ljavax/swing/plaf/nimbus/State;", "Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;", $STATIC | $FINAL, $staticField(State, Default)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(State, name)},
	{}
};

$MethodInfo _State_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(State::*)($String*)>(&State::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getStandardState", "(Ljava/lang/String;)Ljavax/swing/plaf/nimbus/State$StandardState;", nullptr, $STATIC, $method(static_cast<$State$StandardState*(*)($String*)>(&State::getStandardState))},
	{"isInState", "(Ljavax/swing/JComponent;I)Z", "(TT;I)Z", 0},
	{"isInState", "(Ljavax/swing/JComponent;)Z", "(TT;)Z", $PROTECTED | $ABSTRACT},
	{"isStandardStateName", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&State::isStandardStateName))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _State_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.State$StandardState", "javax.swing.plaf.nimbus.State", "StandardState", $STATIC | $FINAL},
	{}
};

$ClassInfo _State_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.nimbus.State",
	"java.lang.Object",
	nullptr,
	_State_FieldInfo_,
	_State_MethodInfo_,
	"<T:Ljavax/swing/JComponent;>Ljava/lang/Object;",
	nullptr,
	_State_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.State$StandardState"
};

$Object* allocate$State($Class* clazz) {
	return $of($alloc(State));
}

$Map* State::standardStates = nullptr;
State* State::Enabled = nullptr;
State* State::MouseOver = nullptr;
State* State::Pressed = nullptr;
State* State::Disabled = nullptr;
State* State::Focused = nullptr;
State* State::Selected = nullptr;
State* State::Default = nullptr;

void State::init$($String* name) {
	$set(this, name, name);
}

$String* State::toString() {
	return this->name;
}

bool State::isInState($JComponent* c, int32_t s) {
	return isInState(c);
}

$String* State::getName() {
	return this->name;
}

bool State::isStandardStateName($String* name) {
	$init(State);
	return $nc(State::standardStates)->containsKey(name);
}

$State$StandardState* State::getStandardState($String* name) {
	$init(State);
	return $cast($State$StandardState, $nc(State::standardStates)->get(name));
}

void clinit$State($Class* class$) {
	$assignStatic(State::standardStates, $new($HashMap, 7));
	$assignStatic(State::Enabled, $new($State$StandardState, $SynthConstants::ENABLED));
	$assignStatic(State::MouseOver, $new($State$StandardState, $SynthConstants::MOUSE_OVER));
	$assignStatic(State::Pressed, $new($State$StandardState, $SynthConstants::PRESSED));
	$assignStatic(State::Disabled, $new($State$StandardState, $SynthConstants::DISABLED));
	$assignStatic(State::Focused, $new($State$StandardState, $SynthConstants::FOCUSED));
	$assignStatic(State::Selected, $new($State$StandardState, $SynthConstants::SELECTED));
	$assignStatic(State::Default, $new($State$StandardState, $SynthConstants::DEFAULT));
}

State::State() {
}

$Class* State::load$($String* name, bool initialize) {
	$loadClass(State, name, initialize, &_State_ClassInfo_, clinit$State, allocate$State);
	return class$;
}

$Class* State::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax