#include <apple/laf/JRSUIControl$BufferState.h>

#include <apple/laf/JRSUIControl.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ALL_CHANGES_IN_BUFFER
#undef CHANGE_WONT_FIT_IN_BUFFER
#undef NO_CHANGE
#undef SOME_CHANGES_IN_BUFFER

using $JRSUIControl$BufferStateArray = $Array<::apple::laf::JRSUIControl$BufferState>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIControl$BufferState_FieldInfo_[] = {
	{"NO_CHANGE", "Lapple/laf/JRSUIControl$BufferState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JRSUIControl$BufferState, NO_CHANGE)},
	{"ALL_CHANGES_IN_BUFFER", "Lapple/laf/JRSUIControl$BufferState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JRSUIControl$BufferState, ALL_CHANGES_IN_BUFFER)},
	{"SOME_CHANGES_IN_BUFFER", "Lapple/laf/JRSUIControl$BufferState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JRSUIControl$BufferState, SOME_CHANGES_IN_BUFFER)},
	{"CHANGE_WONT_FIT_IN_BUFFER", "Lapple/laf/JRSUIControl$BufferState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JRSUIControl$BufferState, CHANGE_WONT_FIT_IN_BUFFER)},
	{"$VALUES", "[Lapple/laf/JRSUIControl$BufferState;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JRSUIControl$BufferState, $VALUES)},
	{}
};

$MethodInfo _JRSUIControl$BufferState_MethodInfo_[] = {
	{"$values", "()[Lapple/laf/JRSUIControl$BufferState;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JRSUIControl$BufferStateArray*(*)()>(&JRSUIControl$BufferState::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(JRSUIControl$BufferState::*)($String*,int32_t)>(&JRSUIControl$BufferState::init$))},
	{"valueOf", "(Ljava/lang/String;)Lapple/laf/JRSUIControl$BufferState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JRSUIControl$BufferState*(*)($String*)>(&JRSUIControl$BufferState::valueOf))},
	{"values", "()[Lapple/laf/JRSUIControl$BufferState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JRSUIControl$BufferStateArray*(*)()>(&JRSUIControl$BufferState::values))},
	{}
};

$InnerClassInfo _JRSUIControl$BufferState_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIControl$BufferState", "apple.laf.JRSUIControl", "BufferState", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JRSUIControl$BufferState_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"apple.laf.JRSUIControl$BufferState",
	"java.lang.Enum",
	nullptr,
	_JRSUIControl$BufferState_FieldInfo_,
	_JRSUIControl$BufferState_MethodInfo_,
	"Ljava/lang/Enum<Lapple/laf/JRSUIControl$BufferState;>;",
	nullptr,
	_JRSUIControl$BufferState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIControl"
};

$Object* allocate$JRSUIControl$BufferState($Class* clazz) {
	return $of($alloc(JRSUIControl$BufferState));
}

JRSUIControl$BufferState* JRSUIControl$BufferState::NO_CHANGE = nullptr;
JRSUIControl$BufferState* JRSUIControl$BufferState::ALL_CHANGES_IN_BUFFER = nullptr;
JRSUIControl$BufferState* JRSUIControl$BufferState::SOME_CHANGES_IN_BUFFER = nullptr;
JRSUIControl$BufferState* JRSUIControl$BufferState::CHANGE_WONT_FIT_IN_BUFFER = nullptr;
$JRSUIControl$BufferStateArray* JRSUIControl$BufferState::$VALUES = nullptr;

$JRSUIControl$BufferStateArray* JRSUIControl$BufferState::$values() {
	$init(JRSUIControl$BufferState);
	return $new($JRSUIControl$BufferStateArray, {
		JRSUIControl$BufferState::NO_CHANGE,
		JRSUIControl$BufferState::ALL_CHANGES_IN_BUFFER,
		JRSUIControl$BufferState::SOME_CHANGES_IN_BUFFER,
		JRSUIControl$BufferState::CHANGE_WONT_FIT_IN_BUFFER
	});
}

$JRSUIControl$BufferStateArray* JRSUIControl$BufferState::values() {
	$init(JRSUIControl$BufferState);
	return $cast($JRSUIControl$BufferStateArray, JRSUIControl$BufferState::$VALUES->clone());
}

JRSUIControl$BufferState* JRSUIControl$BufferState::valueOf($String* name) {
	$init(JRSUIControl$BufferState);
	return $cast(JRSUIControl$BufferState, $Enum::valueOf(JRSUIControl$BufferState::class$, name));
}

void JRSUIControl$BufferState::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$JRSUIControl$BufferState($Class* class$) {
	$assignStatic(JRSUIControl$BufferState::NO_CHANGE, $new(JRSUIControl$BufferState, "NO_CHANGE"_s, 0));
	$assignStatic(JRSUIControl$BufferState::ALL_CHANGES_IN_BUFFER, $new(JRSUIControl$BufferState, "ALL_CHANGES_IN_BUFFER"_s, 1));
	$assignStatic(JRSUIControl$BufferState::SOME_CHANGES_IN_BUFFER, $new(JRSUIControl$BufferState, "SOME_CHANGES_IN_BUFFER"_s, 2));
	$assignStatic(JRSUIControl$BufferState::CHANGE_WONT_FIT_IN_BUFFER, $new(JRSUIControl$BufferState, "CHANGE_WONT_FIT_IN_BUFFER"_s, 3));
	$assignStatic(JRSUIControl$BufferState::$VALUES, JRSUIControl$BufferState::$values());
}

JRSUIControl$BufferState::JRSUIControl$BufferState() {
}

$Class* JRSUIControl$BufferState::load$($String* name, bool initialize) {
	$loadClass(JRSUIControl$BufferState, name, initialize, &_JRSUIControl$BufferState_ClassInfo_, clinit$JRSUIControl$BufferState, allocate$JRSUIControl$BufferState);
	return class$;
}

$Class* JRSUIControl$BufferState::class$ = nullptr;

	} // laf
} // apple