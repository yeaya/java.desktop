#include <java/awt/Taskbar$State.h>

#include <java/awt/Taskbar.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ERROR
#undef INDETERMINATE
#undef NORMAL
#undef OFF
#undef PAUSED

using $Taskbar$StateArray = $Array<::java::awt::Taskbar$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _Taskbar$State_FieldInfo_[] = {
	{"OFF", "Ljava/awt/Taskbar$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Taskbar$State, OFF)},
	{"NORMAL", "Ljava/awt/Taskbar$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Taskbar$State, NORMAL)},
	{"PAUSED", "Ljava/awt/Taskbar$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Taskbar$State, PAUSED)},
	{"INDETERMINATE", "Ljava/awt/Taskbar$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Taskbar$State, INDETERMINATE)},
	{"ERROR", "Ljava/awt/Taskbar$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Taskbar$State, ERROR)},
	{"$VALUES", "[Ljava/awt/Taskbar$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Taskbar$State, $VALUES)},
	{}
};

$MethodInfo _Taskbar$State_MethodInfo_[] = {
	{"$values", "()[Ljava/awt/Taskbar$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Taskbar$StateArray*(*)()>(&Taskbar$State::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Taskbar$State::*)($String*,int32_t)>(&Taskbar$State::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/awt/Taskbar$State;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Taskbar$State*(*)($String*)>(&Taskbar$State::valueOf))},
	{"values", "()[Ljava/awt/Taskbar$State;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Taskbar$StateArray*(*)()>(&Taskbar$State::values))},
	{}
};

$InnerClassInfo _Taskbar$State_InnerClassesInfo_[] = {
	{"java.awt.Taskbar$State", "java.awt.Taskbar", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Taskbar$State_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.awt.Taskbar$State",
	"java.lang.Enum",
	nullptr,
	_Taskbar$State_FieldInfo_,
	_Taskbar$State_MethodInfo_,
	"Ljava/lang/Enum<Ljava/awt/Taskbar$State;>;",
	nullptr,
	_Taskbar$State_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Taskbar"
};

$Object* allocate$Taskbar$State($Class* clazz) {
	return $of($alloc(Taskbar$State));
}

Taskbar$State* Taskbar$State::OFF = nullptr;
Taskbar$State* Taskbar$State::NORMAL = nullptr;
Taskbar$State* Taskbar$State::PAUSED = nullptr;
Taskbar$State* Taskbar$State::INDETERMINATE = nullptr;
Taskbar$State* Taskbar$State::ERROR = nullptr;
$Taskbar$StateArray* Taskbar$State::$VALUES = nullptr;

$Taskbar$StateArray* Taskbar$State::$values() {
	$init(Taskbar$State);
	return $new($Taskbar$StateArray, {
		Taskbar$State::OFF,
		Taskbar$State::NORMAL,
		Taskbar$State::PAUSED,
		Taskbar$State::INDETERMINATE,
		Taskbar$State::ERROR
	});
}

$Taskbar$StateArray* Taskbar$State::values() {
	$init(Taskbar$State);
	return $cast($Taskbar$StateArray, Taskbar$State::$VALUES->clone());
}

Taskbar$State* Taskbar$State::valueOf($String* name) {
	$init(Taskbar$State);
	return $cast(Taskbar$State, $Enum::valueOf(Taskbar$State::class$, name));
}

void Taskbar$State::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Taskbar$State($Class* class$) {
	$assignStatic(Taskbar$State::OFF, $new(Taskbar$State, "OFF"_s, 0));
	$assignStatic(Taskbar$State::NORMAL, $new(Taskbar$State, "NORMAL"_s, 1));
	$assignStatic(Taskbar$State::PAUSED, $new(Taskbar$State, "PAUSED"_s, 2));
	$assignStatic(Taskbar$State::INDETERMINATE, $new(Taskbar$State, "INDETERMINATE"_s, 3));
	$assignStatic(Taskbar$State::ERROR, $new(Taskbar$State, "ERROR"_s, 4));
	$assignStatic(Taskbar$State::$VALUES, Taskbar$State::$values());
}

Taskbar$State::Taskbar$State() {
}

$Class* Taskbar$State::load$($String* name, bool initialize) {
	$loadClass(Taskbar$State, name, initialize, &_Taskbar$State_ClassInfo_, clinit$Taskbar$State, allocate$Taskbar$State);
	return class$;
}

$Class* Taskbar$State::class$ = nullptr;

	} // awt
} // java