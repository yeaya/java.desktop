#include <sun/awt/AppContext$State.h>

#include <java/lang/Enum.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef BEING_DISPOSED
#undef DISPOSED
#undef VALID

using $AppContext$StateArray = $Array<::sun::awt::AppContext$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;

namespace sun {
	namespace awt {

$FieldInfo _AppContext$State_FieldInfo_[] = {
	{"VALID", "Lsun/awt/AppContext$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AppContext$State, VALID)},
	{"BEING_DISPOSED", "Lsun/awt/AppContext$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AppContext$State, BEING_DISPOSED)},
	{"DISPOSED", "Lsun/awt/AppContext$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AppContext$State, DISPOSED)},
	{"$VALUES", "[Lsun/awt/AppContext$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AppContext$State, $VALUES)},
	{}
};

$MethodInfo _AppContext$State_MethodInfo_[] = {
	{"$values", "()[Lsun/awt/AppContext$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$AppContext$StateArray*(*)()>(&AppContext$State::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(AppContext$State::*)($String*,int32_t)>(&AppContext$State::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/awt/AppContext$State;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AppContext$State*(*)($String*)>(&AppContext$State::valueOf))},
	{"values", "()[Lsun/awt/AppContext$State;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AppContext$StateArray*(*)()>(&AppContext$State::values))},
	{}
};

$InnerClassInfo _AppContext$State_InnerClassesInfo_[] = {
	{"sun.awt.AppContext$State", "sun.awt.AppContext", "State", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _AppContext$State_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.awt.AppContext$State",
	"java.lang.Enum",
	nullptr,
	_AppContext$State_FieldInfo_,
	_AppContext$State_MethodInfo_,
	"Ljava/lang/Enum<Lsun/awt/AppContext$State;>;",
	nullptr,
	_AppContext$State_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AppContext"
};

$Object* allocate$AppContext$State($Class* clazz) {
	return $of($alloc(AppContext$State));
}

AppContext$State* AppContext$State::VALID = nullptr;
AppContext$State* AppContext$State::BEING_DISPOSED = nullptr;
AppContext$State* AppContext$State::DISPOSED = nullptr;
$AppContext$StateArray* AppContext$State::$VALUES = nullptr;

$AppContext$StateArray* AppContext$State::$values() {
	$init(AppContext$State);
	return $new($AppContext$StateArray, {
		AppContext$State::VALID,
		AppContext$State::BEING_DISPOSED,
		AppContext$State::DISPOSED
	});
}

$AppContext$StateArray* AppContext$State::values() {
	$init(AppContext$State);
	return $cast($AppContext$StateArray, AppContext$State::$VALUES->clone());
}

AppContext$State* AppContext$State::valueOf($String* name) {
	$init(AppContext$State);
	return $cast(AppContext$State, $Enum::valueOf(AppContext$State::class$, name));
}

void AppContext$State::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$AppContext$State($Class* class$) {
	$assignStatic(AppContext$State::VALID, $new(AppContext$State, "VALID"_s, 0));
	$assignStatic(AppContext$State::BEING_DISPOSED, $new(AppContext$State, "BEING_DISPOSED"_s, 1));
	$assignStatic(AppContext$State::DISPOSED, $new(AppContext$State, "DISPOSED"_s, 2));
	$assignStatic(AppContext$State::$VALUES, AppContext$State::$values());
}

AppContext$State::AppContext$State() {
}

$Class* AppContext$State::load$($String* name, bool initialize) {
	$loadClass(AppContext$State, name, initialize, &_AppContext$State_ClassInfo_, clinit$AppContext$State, allocate$AppContext$State);
	return class$;
}

$Class* AppContext$State::class$ = nullptr;

	} // awt
} // sun