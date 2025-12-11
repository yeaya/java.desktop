#include <sun/java2d/MacOSFlags$PropertyState.h>

#include <java/lang/Enum.h>
#include <sun/java2d/MacOSFlags.h>
#include <jcpp.h>

#undef DISABLED
#undef ENABLED
#undef UNSPECIFIED

using $MacOSFlags$PropertyStateArray = $Array<::sun::java2d::MacOSFlags$PropertyState>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {

$FieldInfo _MacOSFlags$PropertyState_FieldInfo_[] = {
	{"ENABLED", "Lsun/java2d/MacOSFlags$PropertyState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MacOSFlags$PropertyState, ENABLED)},
	{"DISABLED", "Lsun/java2d/MacOSFlags$PropertyState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MacOSFlags$PropertyState, DISABLED)},
	{"UNSPECIFIED", "Lsun/java2d/MacOSFlags$PropertyState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MacOSFlags$PropertyState, UNSPECIFIED)},
	{"$VALUES", "[Lsun/java2d/MacOSFlags$PropertyState;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MacOSFlags$PropertyState, $VALUES)},
	{}
};

$MethodInfo _MacOSFlags$PropertyState_MethodInfo_[] = {
	{"$values", "()[Lsun/java2d/MacOSFlags$PropertyState;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MacOSFlags$PropertyStateArray*(*)()>(&MacOSFlags$PropertyState::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(MacOSFlags$PropertyState::*)($String*,int32_t)>(&MacOSFlags$PropertyState::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/java2d/MacOSFlags$PropertyState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MacOSFlags$PropertyState*(*)($String*)>(&MacOSFlags$PropertyState::valueOf))},
	{"values", "()[Lsun/java2d/MacOSFlags$PropertyState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MacOSFlags$PropertyStateArray*(*)()>(&MacOSFlags$PropertyState::values))},
	{}
};

$InnerClassInfo _MacOSFlags$PropertyState_InnerClassesInfo_[] = {
	{"sun.java2d.MacOSFlags$PropertyState", "sun.java2d.MacOSFlags", "PropertyState", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MacOSFlags$PropertyState_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.java2d.MacOSFlags$PropertyState",
	"java.lang.Enum",
	nullptr,
	_MacOSFlags$PropertyState_FieldInfo_,
	_MacOSFlags$PropertyState_MethodInfo_,
	"Ljava/lang/Enum<Lsun/java2d/MacOSFlags$PropertyState;>;",
	nullptr,
	_MacOSFlags$PropertyState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.MacOSFlags"
};

$Object* allocate$MacOSFlags$PropertyState($Class* clazz) {
	return $of($alloc(MacOSFlags$PropertyState));
}

MacOSFlags$PropertyState* MacOSFlags$PropertyState::ENABLED = nullptr;
MacOSFlags$PropertyState* MacOSFlags$PropertyState::DISABLED = nullptr;
MacOSFlags$PropertyState* MacOSFlags$PropertyState::UNSPECIFIED = nullptr;
$MacOSFlags$PropertyStateArray* MacOSFlags$PropertyState::$VALUES = nullptr;

$MacOSFlags$PropertyStateArray* MacOSFlags$PropertyState::$values() {
	$init(MacOSFlags$PropertyState);
	return $new($MacOSFlags$PropertyStateArray, {
		MacOSFlags$PropertyState::ENABLED,
		MacOSFlags$PropertyState::DISABLED,
		MacOSFlags$PropertyState::UNSPECIFIED
	});
}

$MacOSFlags$PropertyStateArray* MacOSFlags$PropertyState::values() {
	$init(MacOSFlags$PropertyState);
	return $cast($MacOSFlags$PropertyStateArray, MacOSFlags$PropertyState::$VALUES->clone());
}

MacOSFlags$PropertyState* MacOSFlags$PropertyState::valueOf($String* name) {
	$init(MacOSFlags$PropertyState);
	return $cast(MacOSFlags$PropertyState, $Enum::valueOf(MacOSFlags$PropertyState::class$, name));
}

void MacOSFlags$PropertyState::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$MacOSFlags$PropertyState($Class* class$) {
	$assignStatic(MacOSFlags$PropertyState::ENABLED, $new(MacOSFlags$PropertyState, "ENABLED"_s, 0));
	$assignStatic(MacOSFlags$PropertyState::DISABLED, $new(MacOSFlags$PropertyState, "DISABLED"_s, 1));
	$assignStatic(MacOSFlags$PropertyState::UNSPECIFIED, $new(MacOSFlags$PropertyState, "UNSPECIFIED"_s, 2));
	$assignStatic(MacOSFlags$PropertyState::$VALUES, MacOSFlags$PropertyState::$values());
}

MacOSFlags$PropertyState::MacOSFlags$PropertyState() {
}

$Class* MacOSFlags$PropertyState::load$($String* name, bool initialize) {
	$loadClass(MacOSFlags$PropertyState, name, initialize, &_MacOSFlags$PropertyState_ClassInfo_, clinit$MacOSFlags$PropertyState, allocate$MacOSFlags$PropertyState);
	return class$;
}

$Class* MacOSFlags$PropertyState::class$ = nullptr;

	} // java2d
} // sun